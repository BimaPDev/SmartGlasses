import hashlib, hmac, time, urllib.parse, urllib.request, json, itertools, sys

KEY = b"wufW8W8VIrTiRnzOl2BULFjMfHAq40HC0IAouuK2zmI="
def sign(p):
    s = "&".join(f"{k}={p[k]}" for k in sorted(p))
    return hmac.new(KEY, s.encode(), hashlib.sha256).hexdigest()

def post(base, p):
    p["sign"] = sign(p)
    req = urllib.request.Request(base+"/client/v1/arupgrade/checkV2",
        data=urllib.parse.urlencode(p).encode())
    try:
        with urllib.request.urlopen(req, timeout=10) as r:
            j = json.loads(r.read().decode())
            return j.get("code"), j.get("data") or {}
    except Exception as e:
        return "ERR", {"err": str(e)[:60]}

versions = ([f"1.0.{i}" for i in range(0, 31)]
            + [f"1.{i}.0" for i in range(1, 6)]
            + [f"2.0.{i}" for i in range(0, 11)]
            + [f"2.{i}.0" for i in range(1, 4)]
            + ["3.0.0", "0.9.0", "0.5.0", "0.1.0"])
glasses = ["View", "Air", "Air2", "XGA010C", "XGA020C", "Discovery"]
rings = ["Ring", "Ring2"]

hits = []
total = 0
for base in ["https://xr-nbs-global.myvu.cn/ar-ota", "https://xr-nbs.myvu.cn/ar-ota"]:
    for dt, ver in itertools.product(glasses, versions):
        p = {"appVersion":"2.40.51","buildType":"user","deviceId":"0"*64,
             "deviceIdEncrypted":"true","deviceModel":"","deviceType":dt,
             "lang":"en_US","timestamp":str(int(time.time()*1000)),
             "version":ver,"versionType":"release"}
        c, d = post(base, p)
        total += 1
        if d.get("existsUpdate"):
            print("HIT", base, dt, ver, "->", json.dumps(d, ensure_ascii=False)[:400], flush=True)
            hits.append((base, dt, ver, d))
        if total % 100 == 0:
            print(f"...{total} requests", flush=True)
    for dt, ver in itertools.product(rings, versions):
        for dep in ["View", "Air", "Air2"]:
            p = {"appVersion":"2.40.51","buildType":"user","deviceId":"0"*64,
                 "deviceIdEncrypted":"true","deviceModel":"","deviceType":dt,
                 "lang":"en_US","timestamp":str(int(time.time()*1000)),
                 "version":ver,"versionType":"release",
                 "depDeviceType":dep,"depDeviceVersion":"1.0.0"}
            c, d = post(base, p)
            total += 1
            if d.get("existsUpdate"):
                print("HIT", base, dt, ver, dep, "->", json.dumps(d, ensure_ascii=False)[:400], flush=True)
                hits.append((base, dt, ver, d))
print("DONE", total, "requests,", len(hits), "hits")
