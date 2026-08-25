import hashlib, hmac, time, urllib.parse, urllib.request, json, itertools
KEY = b"wufW8W8VIrTiRnzOl2BULFjMfHAq40HC0IAouuK2zmI="
def sign(p):
    s = "&".join(f"{k}={p[k]}" for k in sorted(p))
    return hmac.new(KEY, s.encode(), hashlib.sha256).hexdigest()
def post(base, p):
    p["sign"] = sign(p)
    req = urllib.request.Request(base+"/client/v1/arupgrade/checkV2",
        data=urllib.parse.urlencode(p).encode())
    try:
        with urllib.request.urlopen(req, timeout=15) as r:
            j = json.loads(r.read().decode())
            return j.get("code"), j.get("data") or {}
    except Exception as e:
        return "ERR", {"err": str(e)[:60]}

vers = ["1.0.0","0.0.1","1.0.1","2.0.0","1.0.12"]
for base in ["https://xr-nbs-global.myvu.cn/ar-ota","https://xr-nbs.myvu.cn/ar-ota"]:
    for dt in ["XGZ030C","XGG010C"]:
        for ver in vers:
            p = {"appVersion":"2.49.24","buildType":"user","deviceId":"0"*64,
                 "deviceIdEncrypted":"true","deviceModel":"","deviceType":dt,
                 "lang":"en_US","timestamp":str(int(time.time()*1000)),
                 "version":ver,"versionType":"release"}
            c, d = post(base, p)
            if d.get("existsUpdate") or c != 0:
                print("HIT", base.split('//')[1], dt, ver, "->", c, json.dumps(d, ensure_ascii=False)[:500])
            else:
                print("   ", base.split('//')[1], dt, ver, "no update")
print("done")
