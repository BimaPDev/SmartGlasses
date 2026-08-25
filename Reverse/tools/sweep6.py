import hashlib, hmac, time, urllib.parse, urllib.request, json, itertools

KEY = b"wufW8W8VIrTiRnzOl2BULFjMfHAq40HC0IAouuK2zmI="
def sign(p):
    s = "&".join(f"{k}={p[k]}" for k in sorted(p))
    return hmac.new(KEY, s.encode(), hashlib.sha256).hexdigest()

def post(base, p, lang):
    p["lang"] = lang
    p["sign"] = sign(p)
    req = urllib.request.Request(base+"/client/v1/arupgrade/checkV2", data=urllib.parse.urlencode(p).encode())
    try:
        with urllib.request.urlopen(req, timeout=15) as r:
            j = json.loads(r.read().decode())
            return j.get("code"), j.get("data") or {}, j.get("msg")
    except Exception as e:
        return "ERR", {}, str(e)[:60]

hits = 0
for base, lang in [("https://xr-nbs-global.myvu.cn/ar-ota","en_US"), ("https://xr-nbs.myvu.cn/ar-ota","zh_CN")]:
    for dt in ["View","Air","Ring2","Ring","XGA010C","XGA020C"]:
        for ver in ["0", "0.0.0", "1.0.0"]:
            for vt, bt in [("release","user"),("test","user"),("stable","user"),("release","release"),("official","user")]:
                p = {"appVersion":"2.40.51","buildType":bt,"deviceId":"0"*64,
                     "deviceIdEncrypted":"true","deviceModel":"","deviceType":dt,
                     "timestamp":str(int(time.time()*1000)),
                     "version":ver,"versionType":vt}
                if dt == "Ring":
                    p["depDeviceType"]="View"; p["depDeviceVersion"]="1.0.0"
                c, d, msg = post(base, p, lang)
                if d.get("existsUpdate") or c not in (0,):
                    hits += 1
                    print("HIT", base.split('//')[1], dt, ver, vt, bt, "->", c, msg, d.get("latestVersion"), (d.get("packLink") or "")[:120])
print("done, hits:", hits)
