"""mitmproxy addon: rewrite MYVU checkV2 to the local BIMA pack.

Run next to the zip server:

  python3 Reverse/tools/bima_ota.py serve

  mitmdump -s Reverse/tools/mitm_bima.py --listen-port 8080

Phone Wi-Fi proxy → this machine:8080.

CN MYVU 2.49.24 does checkV2 from Flutter (dart:io + Mozilla CA bundle),
so a user-installed mitm CA usually fails TLS. Use HTTP Toolkit's Flutter
intercept, or Magisk system CA, or this addon once TLS is already being
terminated. This file only rewrites the JSON; it does not bypass TLS.
"""

from __future__ import annotations

import json
import sys
from pathlib import Path

# mitmproxy injects this module; keep imports lazy-friendly.
ADDON_DIR = Path(__file__).resolve().parent
ROOT = ADDON_DIR.parent
META_PATH = ROOT / "firmware" / "patched_bima" / "ota_meta.json"

sys.path.insert(0, str(ADDON_DIR))
from bima_ota import (  # noqa: E402
    DEFAULT_LATEST,
    checkv2_payload,
    lan_ip,
    load_meta,
    pack_url,
)


def _meta():
    return load_meta()


def _body():
    meta = _meta()
    url = pack_url(lan_ip(), 8765)
    return json.dumps(
        checkv2_payload(meta, url, DEFAULT_LATEST), ensure_ascii=False
    ).encode()


def request(flow):
    path = flow.request.path or ""
    if "arupgrade/checkV2" in path or path.endswith("/checkV2"):
        from mitmproxy import http

        print(f"[bima] intercept checkV2 {flow.request.pretty_url}")
        print(f"[bima] body {flow.request.get_text()[:400]!r}")
        flow.response = http.Response.make(
            200,
            _body(),
            {"Content-Type": "application/json; charset=utf-8", "Connection": "close"},
        )
        return
    if path.rstrip("/").endswith("/pack.zip") or path.endswith("_BIMA.zip"):
        from mitmproxy import http

        zip_path = Path(_meta()["zip"])
        print(f"[bima] serving {zip_path} for {flow.request.pretty_url}")
        flow.response = http.Response.make(
            200,
            zip_path.read_bytes(),
            {"Content-Type": "application/zip"},
        )
