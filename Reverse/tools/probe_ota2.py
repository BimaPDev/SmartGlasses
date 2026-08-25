import hashlib, hmac, time, urllib.parse, urllib.request, json, sys

KEY = b"wufW8W8VIrTiRnzOl2BULFjMfHAq40HC0IAouuK2zmI="

def sign(params):
    s = "&".join(f"{k}={params[k]}" for k in sorted(params))
    return hmac.new(KEY, s.encode(), hashlib.sha256).hexdigest()

def check(base, device_type, version, lang="en_US", device_id="x", model=""):
    params = {
        "appVersion": "2.40.51",
        "buildType": "user",
        "deviceId": device_id,
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
        return f"ERR {getattr(e,'code','?')} {e.read().decode() if hasattr(e,'read') else e}"

if __name__ == "__main__":
    base, dt, ver = sys.argv[1], sys.argv[2], sys.argv[3]
    model = sys.argv[4] if len(sys.argv) > 4 else ""
    print(check(base, dt, ver, model=model))
