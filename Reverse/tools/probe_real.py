import hashlib, hmac, time, urllib.parse, urllib.request, json, sys

KEY = b"wufW8W8VIrTiRnzOl2BULFjMfHAq40HC0IAouuK2zmI="
SALT = "RhdNS`Z?"

# Real device, from the BLE session logs.
SERIAL = "1001160244J0008Q"
ROM    = "Flyme XR 1.0.12.88.20250217_Air_FR"
MODEL  = "XGA010C"

def device_id(serial):
    return hashlib.sha256((SALT + serial).encode()).hexdigest()

def sign(params):
    s = "&".join(f"{k}={params[k]}" for k in sorted(params))
    return hmac.new(KEY, s.encode(), hashlib.sha256).hexdigest()

def check(base, device_type, version, model, lang="en_US", did=None):
    params = {
        "appVersion": "2.40.51",
        "buildType": "user",
        "deviceId": did or device_id(SERIAL),
        "deviceIdEncrypted": "true",
        "deviceModel": model,
        "deviceType": device_type,
        "lang": lang,
        "timestamp": str(int(time.time()*1000)),
        "version": version,
        "versionType": "release",
    }
    params["sign"] = sign(params)
    data = urllib.parse.urlencode(params).encode()
    req = urllib.request.Request(base + "/client/v1/arupgrade/checkV2", data=data)
    try:
        with urllib.request.urlopen(req, timeout=20) as r:
            return r.read().decode()
    except Exception as e:
        body = e.read().decode() if hasattr(e,"read") else str(e)
        return f"ERR {getattr(e,'code','?')} {body}"

BASES = {
    "intl_prod":  "https://xr-nbs-global.myvu.cn/ar-ota",
    "china_prod": "https://xr-nbs.myvu.cn/ar-ota",
}
# deviceType is uncertain for Air; try the documented ones plus likely Air names.
DTYPES  = ["View", "Air", "StarV Air2", "AirGlass"]
# Real ROM, plus low versions in case the real one is past a rollout window.
VERS    = [ROM, "1.0.12.88", "1.0.0", "0"]

print(f"deviceId(serial={SERIAL}) = {device_id(SERIAL)}\n")
for env, base in BASES.items():
    for dt in DTYPES:
        for ver in VERS:
            out = check(base, dt, ver, MODEL)
            tag = "?"
            try:
                j = json.loads(out)
                code = j.get("code")
                d = j.get("data") or {}
                tag = f"code={code} existsUpdate={d.get('existsUpdate')} latest={d.get('latestVersion')} packLink={d.get('packLink')}"
            except Exception:
                tag = out[:160]
            print(f"[{env:10} {dt:10} ver={ver[:22]:22}] {tag}")
