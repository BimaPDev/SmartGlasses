import hashlib, hmac, time, urllib.parse, urllib.request, json

KEY = b"wufW8W8VIrTiRnzOl2BULFjMfHAq40HC0IAouuK2zmI="
def sign(p):
    s = "&".join(f"{k}={p[k]}" for k in sorted(p))
    return hmac.new(KEY, s.encode(), hashlib.sha256).hexdigest()

def post(base, path, p):
    p["sign"] = sign(p)
    req = urllib.request.Request(base+path, data=urllib.parse.urlencode(p).encode())
    try:
        with urllib.request.urlopen(req, timeout=10) as r:
            return r.status, r.read().decode()[:200]
    except Exception as e:
        return getattr(e, "code", "?"), (e.read().decode()[:150] if hasattr(e, "read") else str(e)[:60])

# v1 check with CheckGlassUpdateParam fields
for dt in ["View", "XGA010C"]:
    for ver in ["1.0.0", "1.0.5", "2.0.0"]:
        p = {"deviceType": dt, "deviceId": "0"*64, "version": ver, "deviceModel": "",
             "buildType": "user", "versionType": "release",
             "timestamp": str(int(time.time()*1000)), "lang": "en_US", "deviceIdEncrypted": "true"}
        print("v1", dt, ver, "->", post("https://xr-nbs-global.myvu.cn/ar-ota", "/client/v1/arupgrade/check", p))

# guessed listing/info endpoints (signed)
p = {"deviceType": "View", "timestamp": str(int(time.time()*1000)), "lang": "en_US"}
for path in ["/client/v1/arupgrade/list", "/client/v1/arupgrade/history",
             "/client/v1/arupgrade/versions", "/client/v1/arupgrade/latest",
             "/client/v1/arupgrade/checkV3"]:
    print("path", path, "->", post("https://xr-nbs-global.myvu.cn/ar-ota", path, dict(p)))
