import hashlib, hmac, time, urllib.parse, urllib.request, json, sys

KEY = b"wufW8W8VIrTiRnzOl2BULFjMfHAq40HC0IAouuK2zmI="

def sign(params: dict) -> str:
    s = "&".join(f"{k}={params[k]}" for k in sorted(params))
    return hmac.new(KEY, s.encode(), hashlib.sha256).hexdigest()

def check(base, device_type, version, device_model="", dep_type="", dep_ver=""):
    params = {
        "appVersion": "2.40.51",
        "buildType": "user",
        "depDeviceType": dep_type,
        "depDeviceVersion": dep_ver,
        "deviceId": "0123456789abcdef",
        "deviceIdEncrypted": "false",
        "deviceModel": device_model,
        "deviceType": device_type,
        "lang": "en_US",
        "os": "android",
        "timestamp": str(int(time.time()*1000)),
        "version": version,
        "versionType": "release",
    }
    params["sign"] = sign(params)
    data = urllib.parse.urlencode(params).encode()
    url = base + "/client/v1/arupgrade/checkV2"
    req = urllib.request.Request(url, data=data, headers={"Content-Type": "application/x-www-form-urlencoded"})
    try:
        with urllib.request.urlopen(req, timeout=20) as r:
            return r.status, r.read().decode()
    except Exception as e:
        body = e.read().decode() if hasattr(e, "read") else ""
        return getattr(e, "code", "?"), body or str(e)

if __name__ == "__main__":
    base = sys.argv[1] if len(sys.argv) > 1 else "https://xr-nbs-global.myvu.cn/ar-ota"
    dt = sys.argv[2] if len(sys.argv) > 2 else "View"
    ver = sys.argv[3] if len(sys.argv) > 3 else "1.0.0"
    print(check(base, dt, ver))
