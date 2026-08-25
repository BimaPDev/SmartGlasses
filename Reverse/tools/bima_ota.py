#!/usr/bin/env python3
"""Build a BIMA-patched Star Air OTA zip and serve it like checkV2.

The official MYVU app will only install a pack that checkV2 advertises
(packLink + MD5 digest + fileSize). This tool:

  1. Zips the already-patched 1.0.12.83 bins (MYVU → BIMA).
  2. Serves that zip plus a fake checkV2 JSON the app understands.

The app still does the BLE transfer. You have to make the phone's checkV2
hit this server (HTTP Toolkit / mitmproxy with Flutter TLS intercept, or
equivalent). Stock Meizu CDN will never point at this zip.

This is a 1.0.12.88 → 1.0.12.83 downgrade with a string rebrand. A/B can
recover a failed apply; a successful apply leaves 88 in the other bank until
the next OTA overwrites it.
"""

from __future__ import annotations

import argparse
import hashlib
import json
import socket
import sys
import zipfile
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer
from pathlib import Path
from urllib.parse import urlparse

ROOT = Path(__file__).resolve().parents[1]
FW = ROOT / "firmware"
PATCHED = FW / "patched_bima" / "1.0.12.83"
OUT_ZIP = FW / "patched_bima" / "ota_star-air_1.0.12.83_BIMA.zip"
META = FW / "patched_bima" / "ota_meta.json"
BINS = ("best1600_watch_bth.bin", "platform_tester.bin")

# Spoofed above installed 1.0.12.88 so Flutter VersionCompare still shows an update.
DEFAULT_LATEST = "1.0.12.99"


def md5_file(path: Path) -> str:
    h = hashlib.md5()
    with path.open("rb") as f:
        for chunk in iter(lambda: f.read(1 << 20), b""):
            h.update(chunk)
    return h.hexdigest()


def lan_ip() -> str:
    s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    try:
        s.connect(("8.8.8.8", 80))
        return s.getsockname()[0]
    except OSError:
        return "127.0.0.1"
    finally:
        s.close()


def build_zip() -> dict:
    missing = [n for n in BINS if not (PATCHED / n).exists()]
    if missing:
        sys.exit(
            f"patched bins missing in {PATCHED}: {missing}\n"
            "re-run Reverse/firmware/patch_bima.py first"
        )
    OUT_ZIP.parent.mkdir(parents=True, exist_ok=True)
    if OUT_ZIP.exists():
        OUT_ZIP.unlink()
    with zipfile.ZipFile(OUT_ZIP, "w", compression=zipfile.ZIP_DEFLATED) as zf:
        for name in BINS:
            src = PATCHED / name
            info = zipfile.ZipInfo(filename=name, date_time=(2024, 12, 31, 1, 4, 0))
            info.compress_type = zipfile.ZIP_DEFLATED
            info.external_attr = 0o644 << 16
            zf.writestr(info, src.read_bytes())
    digest = md5_file(OUT_ZIP)
    size = OUT_ZIP.stat().st_size
    meta = {
        "zip": str(OUT_ZIP),
        "digest": digest,
        "fileSize": size,
        "latestVersion": DEFAULT_LATEST,
        "bins": {
            n: {
                "size": (PATCHED / n).stat().st_size,
                "md5": md5_file(PATCHED / n),
            }
            for n in BINS
        },
    }
    META.write_text(json.dumps(meta, indent=2) + "\n")
    print(f"wrote {OUT_ZIP}  {size} bytes  md5 {digest}")
    return meta


def load_meta() -> dict:
    if not OUT_ZIP.exists() or not META.exists():
        print("zip/meta missing — building")
        return build_zip()
    meta = json.loads(META.read_text())
    if md5_file(OUT_ZIP) != meta.get("digest"):
        print("zip changed — rebuilding meta")
        return build_zip()
    return meta


def checkv2_payload(meta: dict, pack_url: str, latest: str) -> dict:
    size = str(meta["fileSize"])
    return {
        "code": 0,
        "msg": "success",
        "data": {
            "existsUpdate": True,
            "updateType": 0,
            "videoPath": None,
            "fileSize": size,
            "packLink": pack_url,
            "packLink2": pack_url,
            "digest": meta["digest"],
            "latestVersion": latest,
            "releaseNote": "BIMA local pack (1.0.12.83 bins, MYVU→BIMA). Downgrade from 1.0.12.88.",
            "releaseDate": None,
            "buildType": "user",
            "deviceModel": "XGA010C",
            "versionType": "release",
            "images": None,
            "compileDate": None,
            "createdBy": "local",
            "inspectionScope": "interval",
            "supportFrom": "1.0.0.0",
            "supportTo": "9.9.9.9",
            "userScope": "all",
            "versionFullName": f"Flyme XR {latest}",
            "upgradeModePolicy": 0,
            "remark": "BIMA local OTA",
            "forceUpgrade": True,
            "forceSwitch": True,
            "childRoms": None,
        },
    }


def pack_url(advertise: str, port: int) -> str:
    return f"http://{advertise}:{port}/pack.zip"


def make_handler(meta: dict, advertise: str, port: int, latest: str):
    zip_bytes = OUT_ZIP.read_bytes()
    url = pack_url(advertise, port)
    check_body = json.dumps(checkv2_payload(meta, url, latest), ensure_ascii=False).encode()

    class Handler(BaseHTTPRequestHandler):
        protocol_version = "HTTP/1.1"

        def log_message(self, fmt: str, *args) -> None:
            sys.stderr.write("%s - %s\n" % (self.address_string(), fmt % args))

        def _send(self, code: int, body: bytes, content_type: str) -> None:
            self.send_response(code)
            self.send_header("Content-Type", content_type)
            self.send_header("Content-Length", str(len(body)))
            self.send_header("Connection", "close")
            self.send_header("Cache-Control", "no-store")
            self.end_headers()
            self.wfile.write(body)

        def do_GET(self) -> None:  # noqa: N802
            path = urlparse(self.path).path
            if path in ("/", "/status"):
                page = (
                    "<html><body style='font-family:sans-serif'>"
                    "<h1>BIMA OTA ready</h1>"
                    f"<p>zip md5 <code>{meta['digest']}</code></p>"
                    f"<p>size {meta['fileSize']}</p>"
                    f"<p>latestVersion {latest}</p>"
                    f"<p>pack <a href='/pack.zip'>/pack.zip</a></p>"
                    "<p>If this loads on the phone, the pack download path works. "
                    "checkV2 still has to be intercepted — the app talks HTTPS to myvu.cn.</p>"
                    "</body></html>"
                ).encode()
                self._send(200, page, "text/html; charset=utf-8")
                return
            if path in ("/pack.zip", "/ota.zip", f"/{OUT_ZIP.name}"):
                print(f"serving zip to {self.client_address[0]}  ({len(zip_bytes)} bytes)")
                self._send(200, zip_bytes, "application/zip")
                return
            if path == "/checkV2.json":
                self._send(200, check_body, "application/json; charset=utf-8")
                return
            self._send(404, b"not found\n", "text/plain")

        def do_POST(self) -> None:  # noqa: N802
            path = urlparse(self.path).path
            length = int(self.headers.get("Content-Length") or 0)
            body = self.rfile.read(length) if length else b""
            print(f"POST {path} from {self.client_address[0]}  {body[:400]!r}")
            if path.endswith("/client/v1/arupgrade/checkV2") or path.endswith("/checkV2"):
                self._send(200, check_body, "application/json; charset=utf-8")
                return
            if path.endswith("/client/v1/arupgrade/notify") or path.endswith("/notify"):
                self._send(
                    200,
                    json.dumps({"code": 0, "msg": "success", "data": None}).encode(),
                    "application/json; charset=utf-8",
                )
                return
            self._send(404, b"not found\n", "text/plain")

    return Handler


def serve(host: str, port: int, advertise: str | None, latest: str) -> None:
    meta = load_meta()
    adv = advertise or lan_ip()
    url = pack_url(adv, port)
    payload = checkv2_payload(meta, url, latest)
    handler = make_handler(meta, adv, port, latest)
    httpd = ThreadingHTTPServer((host, port), handler)
    print()
    print("BIMA OTA server")
    print(f"  zip            {OUT_ZIP}")
    print(f"  digest         {meta['digest']}")
    print(f"  fileSize       {meta['fileSize']}")
    print(f"  latestVersion  {latest}  (spoofed so 1.0.12.88 still sees an update)")
    print(f"  packLink       {url}")
    print(f"  listen         http://{host}:{port}")
    print(f"  phone test     http://{adv}:{port}/")
    print()
    print("checkV2 body this server will return:")
    print(json.dumps(payload, indent=2, ensure_ascii=False))
    print()
    print("The MYVU app will not call this by itself. Point checkV2 at it")
    print("(HTTP Toolkit Flutter intercept, or mitmdump -s mitm_bima.py).")
    print("Keep the glasses on charge, then open the glasses update screen.")
    print("Ctrl-C to stop.", flush=True)
    try:
        httpd.serve_forever()
    except KeyboardInterrupt:
        print("\nstopped")


def main() -> None:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("cmd", nargs="?", default="serve", choices=("build", "serve"))
    p.add_argument("--host", default="0.0.0.0")
    p.add_argument("--port", type=int, default=8765)
    p.add_argument("--advertise", default=None, help="IP the phone should use in packLink")
    p.add_argument("--latest", default=DEFAULT_LATEST, help="spoofed latestVersion")
    args = p.parse_args()
    if args.cmd == "build":
        build_zip()
        return
    serve(args.host, args.port, args.advertise, args.latest)


if __name__ == "__main__":
    main()
