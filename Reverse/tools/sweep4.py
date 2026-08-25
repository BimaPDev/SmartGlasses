import hashlib, hmac, time, urllib.parse, urllib.request, json, itertools

KEY = b"wufW8W8VIrTiRnzOl2BULFjMfHAq40HC0IAouuK2zmI="
def sign(p):
    s = "&".join(f"{k}={p[k]}" for k in sorted(p))
    return hmac.new(KEY, s.encode(), hashlib.sha256).hexdigest()

def post(base, path, p):
    p["sign"] = sign(p)
    req = urllib.request.Request(base+path, data=urllib.parse.urlencode(p).encode())
    try:
        with urllib.request.urlopen(req, timeout=15) as r:
            return r.read().decode()[:300]
    except Exception as e:
        return f"ERR {getattr(e,'code','?')} {e.read().decode()[:200] if hasattr(e,'read') else e}"

base_p = {"appVersion":"2.40.51","buildType":"user","deviceId":"0"*64,
     "deviceIdEncrypted":"true","deviceModel":"","deviceType":"Ring",
     "lang":"en_US","timestamp":str(int(time.time()*1000)),
     "version":"1.0.0","versionType":"release"}

# Ring with depDevice params on checkV2
for extra in [{"depDeviceType":"Ring","depDeviceVersion":"1.0.0"},
              {"depDeviceType":"","depDeviceVersion":""},
              {"os":"android"},]:
    p = dict(base_p); p.update(extra)
    print("V2", extra, "->", post("https://xr-nbs-global.myvu.cn/ar-ota","/client/v1/arupgrade/checkV2", p))

# v1 check: params deviceType, deviceId, version, deviceModel, buildType, versionType, timestamp, lang, deviceIdEncrypted
for dt in ["View","XGA010C","Air","Ring"]:
    p = {"deviceType":dt,"deviceId":"0"*64,"version":"1.0.0","deviceModel":"",
         "buildType":"user","versionType":"release",
         "timestamp":str(int(time.time()*1000)),"lang":"en_US","deviceIdEncrypted":"true"}
    print("V1", dt, "->", post("https://xr-nbs-global.myvu.cn/ar-ota","/client/v1/arupgrade/check", p))
