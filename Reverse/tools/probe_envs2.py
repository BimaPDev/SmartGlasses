import hashlib, hmac, time, urllib.parse, urllib.request, json, itertools, socket

KEY = b"wufW8W8VIrTiRnzOl2BULFjMfHAq40HC0IAouuK2zmI="
def sign(p):
    s = "&".join(f"{k}={p[k]}" for k in sorted(p))
    return hmac.new(KEY, s.encode(), hashlib.sha256).hexdigest()

def post(base, path, p, tries=3):
    p = dict(p); p["sign"] = sign(p)
    body = urllib.parse.urlencode(p).encode()
    for i in range(tries):
        try:
            req = urllib.request.Request(base+path, data=body)
            with urllib.request.urlopen(req, timeout=15) as r:
                return json.loads(r.read().decode())
        except Exception as e:
            msg = str(e)[:90]
            if "nodename" in msg or "timed out" in msg.lower():
                time.sleep(1.5); continue
            return {"code": "ERR", "msg": msg}
    return {"code": "ERR", "msg": "unreachable after retries"}

BASES = [
    "https://xr-nbs-uat.myvu.cn/ar-ota",
    "https://xr-nbs-global-uat.myvu.cn/ar-ota",
    "https://xr-nbs.myvu.cn/ar-ota",
    "https://xr-nbs-global.myvu.cn/ar-ota",
]
TYPES = ["XGA010C", "XGA020C", "XGZ030C", "XGG010C", "Air", "View"]
VARIANTS = [("user","release"),("userdebug","release"),("eng","release"),
            ("user","test"),("user","gray"),("user","daily")]
VERSIONS = ["1.0.0", "1.0.12", "2.0.0"]
MODELS = {"XGA010C":"Star Air","XGA020C":"StarV Air2","XGZ030C":"StarV Snap","XGG010C":"StarV View"}

total = hits = 0
for base in BASES:
    for dt, (bt, vt), ver in itertools.product(TYPES, VARIANTS, VERSIONS[:1]):
        p = {"appVersion":"2.49.24","buildType":bt,"deviceId":"0"*64,
             "deviceIdEncrypted":"true","deviceModel":MODELS.get(dt,""),
             "deviceType":dt,"lang":"en_US","timestamp":str(int(time.time()*1000)),
             "version":ver,"versionType":vt}
        j = post(base, "/client/v1/arupgrade/checkV2", p)
        total += 1
        d = j.get("data") or {}
        if d.get("existsUpdate"):
            print("HIT", base, dt, bt, vt, "->", json.dumps(j, ensure_ascii=False)[:500], flush=True); hits += 1
        elif str(j.get("code")) not in ("0","0.0"):
            print("NOTE", base, dt, bt, vt, "->", json.dumps(j, ensure_ascii=False)[:200], flush=True)
        time.sleep(0.15)
    # version sweep on user/release only
    for dt, ver in itertools.product(TYPES, VERSIONS):
        p = {"appVersion":"2.49.24","buildType":"user","deviceId":"0"*64,
             "deviceIdEncrypted":"true","deviceModel":MODELS.get(dt,""),
             "deviceType":dt,"lang":"en_US","timestamp":str(int(time.time()*1000)),
             "version":ver,"versionType":"release"}
        j = post(base, "/client/v1/arupgrade/checkV2", p)
        total += 1
        d = j.get("data") or {}
        if d.get("existsUpdate"):
            print("HIT", base, dt, ver, "->", json.dumps(j, ensure_ascii=False)[:500], flush=True); hits += 1
        time.sleep(0.15)
    print("done", base, flush=True)

print("=== ota/query_file ===", flush=True)
for base in BASES:
    j = post(base, "/ota/query_file", {"deviceType":"XGA010C","version":"1.0.12","timestamp":str(int(time.time()*1000))})
    print(base, "->", json.dumps(j, ensure_ascii=False)[:200], flush=True)

print("TOTAL", total, "requests,", hits, "hits")
