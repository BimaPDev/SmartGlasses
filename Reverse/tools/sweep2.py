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
            d = j.get("data") or {}
            return j.get("code"), d.get("existsUpdate"), d.get("latestVersion"), (d.get("packLink") or "")[:80]
    except Exception as e:
        return "ERR", str(e)[:60], None, None

bases = ["https://xr-nbs-global.myvu.cn/ar-ota", "https://xr-nbs.myvu.cn/ar-ota"]
dts = ["StarV Air2","StarV Air","StarV View","StarV AR","Star Air 2","Air2","AR","StarAir2","StarView","MYVU Discovery","Discovery","Explorer","View Pro","MYVU AR","myvu_ar_glass","Star Air"]
vers = ["1.0.0","0.0.1"]
models = ["", "XGA010C", "XGA020C"]
for base, dt, ver, m in itertools.product(bases, dts, vers, models):
    code, ex, lv, pl = check(base, dt, ver, m)
    if ex or code not in (0,):
        print("HIT", base.split('//')[1], repr(dt), ver, repr(m), "->", code, ex, lv, pl)
print("done")
