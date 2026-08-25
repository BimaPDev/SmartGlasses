import hashlib, hmac, time, urllib.parse, urllib.request, json, itertools

KEY = b"wufW8W8VIrTiRnzOl2BULFjMfHAq40HC0IAouuK2zmI="
def sign(p):
    s = "&".join(f"{k}={p[k]}" for k in sorted(p))
    return hmac.new(KEY, s.encode(), hashlib.sha256).hexdigest()

def post(base, p):
    p["sign"] = sign(p)
    req = urllib.request.Request(base+"/client/v1/arupgrade/checkV2", data=urllib.parse.urlencode(p).encode())
    try:
        with urllib.request.urlopen(req, timeout=15) as r:
            j = json.loads(r.read().decode())
            return j.get("code"), j.get("data") or {}, j.get("msg")
    except Exception as e:
        return "ERR", {}, str(e)[:50]

for base in ["https://xr-nbs-global.myvu.cn/ar-ota","https://xr-nbs.myvu.cn/ar-ota"]:
    for dt in ["Ring2","Ring"]:
        for dep in ["Air2","View","Air","XGA010C"]:
            for ver in ["1.0.0","0.0.1"]:
                p = {"appVersion":"2.40.51","buildType":"user","deviceId":"0"*64,
                     "deviceIdEncrypted":"true","deviceModel":"","deviceType":dt,
                     "lang":"en_US","timestamp":str(int(time.time()*1000)),
                     "version":ver,"versionType":"release",
                     "depDeviceType":dep,"depDeviceVersion":"1.0.0"}
                c, d, msg = post(base, p)
                if d.get("existsUpdate") or c not in (0,):
                    print("HIT", base.split('//')[1], dt, dep, ver, "->", c, msg, d.get("latestVersion"), (d.get("packLink") or "")[:120])
                elif dt=="Ring2" and dep=="Air2":
                    print("sample", base.split('//')[1], c, msg)
print("done")
