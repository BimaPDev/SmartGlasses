import hashlib, hmac, time, urllib.parse, urllib.request, json

KEY = b"wufW8W8VIrTiRnzOl2BULFjMfHAq40HC0IAouuK2zmI="
def sign(p):
    s = "&".join(f"{k}={p[k]}" for k in sorted(p))
    return hmac.new(KEY, s.encode(), hashlib.sha256).hexdigest()

def post(base, path, p):
    p["sign"] = sign(p)
    req = urllib.request.Request(base+path, data=urllib.parse.urlencode(p).encode())
    try:
        with urllib.request.urlopen(req, timeout=15) as r:
            return r.read().decode()[:200]
    except Exception as e:
        return f"ERR {getattr(e,'code','?')} {e.read().decode()[:150] if hasattr(e,'read') else e}"

base_p = {"appVersion":"2.40.51","buildType":"user","deviceId":"0"*64,
          "deviceIdEncrypted":"true","deviceModel":"","lang":"en_US",
          "timestamp":str(int(time.time()*1000)),"version":"1.0.0","versionType":"release"}

# 1. garbage deviceType — does server validate?
for dt in ["ZZZ_NOPE", "", "View"]:
    p = dict(base_p); p["deviceType"] = dt
    print("garbage-test", repr(dt), "->", post("https://xr-nbs-global.myvu.cn/ar-ota","/client/v1/arupgrade/checkV2", p))

# 2. FAT (test) env
for host in ["https://xr-nbs-fat.myvu.cn/ar-ota", "https://xr-nbs-uat.myvu.cn/ar-ota", "https://xr-nbs-global-uat.myvu.cn/ar-ota"]:
    for dt in ["View","Air","XGA010C"]:
        p = dict(base_p); p["deviceType"] = dt
        print("env", host.split('//')[1], dt, "->", post(host,"/client/v1/arupgrade/checkV2", p))
