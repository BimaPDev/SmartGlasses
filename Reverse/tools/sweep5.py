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
        return "ERR", str(e)[:60], ""

def params(dt, ver, **kw):
    p = {"appVersion":"2.40.51","buildType":"user","deviceId":"0"*64,
         "deviceIdEncrypted":"true","deviceModel":"","deviceType":dt,
         "lang":"en_US","timestamp":str(int(time.time()*1000)),
         "version":ver,"versionType":"release"}
    p.update(kw)
    return p

hits = []
for base in ["https://xr-nbs-global.myvu.cn/ar-ota","https://xr-nbs.myvu.cn/ar-ota"]:
    # ring with glass dependency
    for dep, dv in [("View","1.0.0"),("Air","1.0.0"),("XGA010C","1.0.12"),("View","1.0.12")]:
        for rv in ["1.0.0","0.0.1","2.0.0"]:
            c, d, msg = post(base, params("Ring", rv, depDeviceType=dep, depDeviceVersion=dv))
            if d.get("existsUpdate") or c not in (0,):
                hits.append((base, "Ring", rv, dep, dv, c, msg, d.get("latestVersion"), (d.get("packLink") or "")[:100]))
    # lowercase device types
    for dt in ["view","air","ring","star_air","StarAir","MYVU_GLASS","Glass","glass_air","ari","Ari","ARI"]:
        c, d, msg = post(base, params(dt, "1.0.0"))
        if d.get("existsUpdate") or c not in (0,):
            hits.append((base, dt, "1.0.0", "", "", c, msg, d.get("latestVersion"), (d.get("packLink") or "")[:100]))
for h in hits: print("HIT", h)
print("done", len(hits))
