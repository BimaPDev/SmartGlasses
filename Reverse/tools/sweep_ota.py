import hashlib, hmac, time, urllib.parse, urllib.request, json, itertools

KEY = b"wufW8W8VIrTiRnzOl2BULFjMfHAq40HC0IAouuK2zmI="
def sign(params):
    s = "&".join(f"{k}={params[k]}" for k in sorted(params))
    return hmac.new(KEY, s.encode(), hashlib.sha256).hexdigest()

def check(base, device_type, version, model=""):
    params = {
        "appVersion": "2.40.51", "buildType": "user", "deviceId": "0"*64,
        "deviceIdEncrypted": "true", "deviceModel": model, "deviceType": device_type,
        "lang": "en_US", "timestamp": str(int(time.time()*1000)),
        "version": version, "versionType": "release",
    }
    params["sign"] = sign(params)
    data = urllib.parse.urlencode(params).encode()
    req = urllib.request.Request(base + "/client/v1/arupgrade/checkV2", data=data)
    try:
        with urllib.request.urlopen(req, timeout=15) as r:
            j = json.loads(r.read().decode())
            d = j.get("data") or {}
            return j.get("code"), d.get("existsUpdate"), d.get("latestVersion"), d.get("packLink")
    except Exception as e:
        return "ERR", str(e)[:80], None, None

bases = ["https://xr-nbs-global.myvu.cn/ar-ota", "https://xr-nbs.myvu.cn/ar-ota"]
dts = ["Air", "Star Air", "StarAir", "star_air", "XGA010C", "View", "Discovery", "Ring", "MYVU", "MYVU_AR", "ar", "glass", "StarView", "StarAir2", "Air2"]
for base, dt in itertools.product(bases, dts):
    code, ex, lv, pl = check(base, dt, "1.0.0")
    if ex or code != 0:
        print("HIT", base, dt, code, ex, lv, pl)
print("sweep done")
