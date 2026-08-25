#!/usr/bin/env python3
"""Poll the MYVU OTA API until a firmware rollout appears.

Uses the signing scheme recovered from com.upuphone.star.httplib.SignUtils
and the Star Air serial from Captures/session-2026-08-20-connect.log
(SN 1001160244J0008Q, subModel XGA010C, ROM 1.0.12).

Each cycle checks every known model on prod + CN-UAT. When the server
answers existsUpdate=true it prints the payload, appends Reverse/ota-hit.jsonl,
and downloads packLink / packLink2 into Reverse/firmware/.

Usage:
  Reverse/tools/venv/bin/python Reverse/tools/watch_ota.py [interval_seconds]
"""
from __future__ import annotations

import hashlib
import hmac
import json
import sys
import time
import urllib.error
import urllib.parse
import urllib.request
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
HIT_LOG = ROOT / "Reverse" / "ota-hit.jsonl"
FW_DIR = ROOT / "Reverse" / "firmware"
WATCH_LOG = ROOT / "Reverse" / "ota-watch.log"

KEY = b"wufW8W8VIrTiRnzOl2BULFjMfHAq40HC0IAouuK2zmI="
SN = "1001160244J0008Q"
REAL_DEVICE_ID = hashlib.sha256(("RhdNS`Z?" + SN).encode()).hexdigest()
DUMMY_DEVICE_ID = "0" * 64

BASES = [
    "https://xr-nbs-global.myvu.cn/ar-ota",
    "https://xr-nbs.myvu.cn/ar-ota",
    "https://xr-nbs-uat.myvu.cn/ar-ota",
]

# Official app (GlassUpdateHelper): deviceType = getModel() e.g. "Star Air",
# deviceModel = getSafeSubModel() e.g. "XGA010C". Real serial only on Air.
DEVICES = [
    ("Star Air", "XGA010C", "Flyme XR 1.0.12.88.20250217_Air_FR", True),
    ("Star Air", "XGA010C", "1.0.12.88", True),
    ("Star Air", "XGA010C", "0", True),
    ("StarV Air2", "XGA020C", "1.0.0", False),
    ("StarV Snap", "XGZ030C", "1.0.0", False),
    ("StarV View", "XGG010C", "1.0.0", False),
    # swapped (old probes) in case a rollout is keyed on the SKU as deviceType
    ("XGA010C", "Star Air", "1.0.12", True),
]

seen_urls: set[str] = set()


def log(msg: str) -> None:
    line = f"{time.strftime('%F %T')} {msg}"
    print(line, flush=True)
    try:
        with WATCH_LOG.open("a", encoding="utf-8") as f:
            f.write(line + "\n")
    except OSError:
        pass


def sign(p: dict) -> str:
    s = "&".join(f"{k}={p[k]}" for k in sorted(p))
    return hmac.new(KEY, s.encode(), hashlib.sha256).hexdigest()


def check(base: str, device_type: str, device_model: str, version: str,
          device_id: str, tries: int = 3) -> dict:
    p = {
        "appVersion": "2.49.24",
        "buildType": "user",
        "deviceId": device_id,
        "deviceIdEncrypted": "true",
        "deviceModel": device_model,
        "deviceType": device_type,
        "lang": "en_US",
        "os": "Android",
        "timestamp": str(int(time.time() * 1000)),
        "version": version,
        "versionType": "release",
    }
    p["sign"] = sign(p)
    last: Exception | None = None
    for _ in range(tries):
        try:
            req = urllib.request.Request(
                base + "/client/v1/arupgrade/checkV2",
                data=urllib.parse.urlencode(p).encode(),
            )
            with urllib.request.urlopen(req, timeout=20) as r:
                return json.loads(r.read().decode())
        except Exception as e:
            last = e
            time.sleep(1.2)
    raise last if last else RuntimeError("check failed")


def filename_for(url: str, device_type: str, version: str) -> Path:
    parsed = urllib.parse.urlparse(url)
    name = Path(parsed.path).name or "pack.bin"
    if not Path(name).suffix:
        name += ".bin"
    stamp = time.strftime("%Y%m%d-%H%M%S")
    safe_ver = "".join(c if c.isalnum() or c in "._-" else "_" for c in version)[:40]
    return FW_DIR / f"{device_type}-{safe_ver}-{stamp}-{name}"


def download(url: str, dest: Path) -> None:
    dest.parent.mkdir(parents=True, exist_ok=True)
    log(f"downloading {url} -> {dest}")
    urllib.request.urlretrieve(url, dest)
    size = dest.stat().st_size
    log(f"saved {dest.name} ({size} bytes)")


def handle_hit(base: str, dt: str, ver: str, payload: dict) -> None:
    log(f"!!! UPDATE FOUND {base} {dt} {ver}")
    print(json.dumps(payload, indent=2, ensure_ascii=False), flush=True)
    HIT_LOG.parent.mkdir(parents=True, exist_ok=True)
    with HIT_LOG.open("a", encoding="utf-8") as f:
        f.write(json.dumps({
            "ts": time.time(),
            "base": base,
            "deviceType": dt,
            "version": ver,
            "response": payload,
        }, ensure_ascii=False) + "\n")
    data = payload.get("data") or {}
    for key in ("packLink", "packLink2"):
        url = data.get(key)
        if not url or url in seen_urls:
            continue
        seen_urls.add(url)
        dest = filename_for(url, dt, ver)
        try:
            download(url, dest)
        except Exception as e:
            log(f"download failed for {key}: {e}")


def cycle() -> int:
    hits = 0
    for base in BASES:
        for dt, model, ver, real in DEVICES:
            did = REAL_DEVICE_ID if real else DUMMY_DEVICE_ID
            host = base.split("//", 1)[-1]
            try:
                j = check(base, dt, model, ver, did)
            except Exception as e:
                log(f"{host} {dt} {ver} ERR {e}")
                continue
            data = j.get("data") or {}
            if data.get("existsUpdate"):
                hits += 1
                handle_hit(base, dt, ver, j)
            else:
                code = j.get("code")
                extra = "" if str(code) in ("0", "0.0") else f" code={code}"
                log(f"{host} {dt} {ver} -> no update{extra}")
            time.sleep(0.25)
    return hits


def main() -> None:
    interval = int(sys.argv[1]) if len(sys.argv) > 1 else 900
    FW_DIR.mkdir(parents=True, exist_ok=True)
    log(f"watching {len(DEVICES)} identities x {len(BASES)} hosts, every {interval}s")
    log(f"hits -> {HIT_LOG}")
    log(f"bins -> {FW_DIR}")
    while True:
        n = cycle()
        log(f"cycle done, {n} hit(s); sleeping {interval}s")
        time.sleep(interval)


if __name__ == "__main__":
    main()
