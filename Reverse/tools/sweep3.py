import hashlib, hmac, time, urllib.parse, urllib.request, json, itertools

KEY = b"wufW8W8VIrTiRnzOl2BULFjMfHAq40HC0IAouuK2zmI="
def sign(p):
    s = "&".join(f"{k}={p[k]}" for k in sorted(p))
    return hmac.new(KEY, s.encode(), hashlib.sha256).hexdigest()

def check(base, dt, ver, model=""):
    p = {"appVersion":"2.40.51","buildType":"user","deviceId":"0"*64,
         "deviceIdEncrypted":"true","deviceModel":model,"deviceType":dt,
         "lang":"en_US","timestamp":str(int(time.time()*1000)),
         "version":ver,"versionType":"release"}
    p["sign"] = sign(p)
    req = urllib.request.Request(base+"/client/v1/arupgrade/checkV2",
        data=urllib.parse.urlencode(p).encode())
    try:
        with urllib.request.urlopen(req, timeout=15) as r:
            j = json.loads(r.read().decode())
            return j.get("code"), j.get("data") or {}
    except Exception as e:
        return "ERR", str(e)[:60]

vers = [f"1.0.{i}" for i in range(0,13)] + ["0.9.0","0.1.0","2.0.0","1.1.0","V1.0.0","1.0.0.1"]
combos = [("XGA010C",""),("XGA010C","XGA010C"),("Air","XGA010C"),("Star Air",""),("Air",""),("XGA020C",""),("View",""),("View","XGA020C")]
for base in ["https://xr-nbs-global.myvu.cn/ar-ota","https://xr-nbs.myvu.cn/ar-ota"]:
    for (dt,m), ver in itertools.product(combos, vers):
        code, d = check(base, dt, ver, m)
        if d.get("existsUpdate") or code not in (0,):
            print("HIT", base.split('//')[1], dt, repr(m), ver, "->", code,
                  d.get("latestVersion"), (d.get("packLink") or "")[:100])
print("done")
