import hashlib, hmac, time, urllib.parse, urllib.request, json, itertools

KEY = b"wufW8W8VIrTiRnzOl2BULFjMfHAq40HC0IAouuK2zmI="
def sign(p):
    s = "&".join(f"{k}={p[k]}" for k in sorted(p))
    return hmac.new(KEY, s.encode(), hashlib.sha256).hexdigest()

def post(base, path, p):
    p = dict(p); p["sign"] = sign(p)
    req = urllib.request.Request(base+path, data=urllib.parse.urlencode(p).encode())
    try:
        with urllib.request.urlopen(req, timeout=15) as r:
            return json.loads(r.read().decode())
    except Exception as e:
        return {"code": "ERR", "msg": str(e)[:100]}

BASES = [
    "https://xr-nbs-fat.myvu.cn/ar-ota",
    "https://xr-nbs-uat.myvu.cn/ar-ota",
    "https://xr-nbs-global-uat.myvu.cn/ar-ota",
    "https://xr-nbs.myvu.cn/ar-ota",
    "https://xr-nbs-global.myvu.cn/ar-ota",
]
TYPES = ["XGA010C", "XGA020C", "XGZ030C", "XGG010C", "Air", "Air2", "View", "Snap", "Discovery", "Normandy"]
BUILD = [("user", "release"), ("userdebug", "release"), ("eng", "release"),
         ("user", "test"), ("user", "gray"), ("user", "daily"), ("user", "beta")]
VERSIONS = ["1.0.0", "1.0.12", "1.0.12.88", "2.0.0", "0.0.1"]
MODELS = {"XGA010C": "Star Air", "XGA020C": "StarV Air2", "XGZ030C": "StarV Snap", "XGG010C": "StarV View"}

hits = 0
total = 0
for base in BASES:
    # phase 1: deviceType x build/version variants at version 1.0.0
    for dt, (bt, vt) in itertools.product(TYPES, BUILD):
        p = {"appVersion": "2.49.24", "buildType": bt, "deviceId": "0"*64,
             "deviceIdEncrypted": "true", "deviceModel": MODELS.get(dt, ""),
             "deviceType": dt, "lang": "en_US", "timestamp": str(int(time.time()*1000)),
             "version": "1.0.0", "versionType": vt}
        j = post(base, "/client/v1/arupgrade/checkV2", p)
        total += 1
        d = j.get("data") or {}
        if d.get("existsUpdate") or j.get("code") not in (0, "0"):
            print("INTERESTING", base, dt, bt, vt, "->", json.dumps(j, ensure_ascii=False)[:300], flush=True)
        if d.get("existsUpdate"):
            hits += 1
    # phase 2: version sweep for glasses types, user/release
    for dt, ver in itertools.product(TYPES, VERSIONS):
        p = {"appVersion": "2.49.24", "buildType": "user", "deviceId": "0"*64,
             "deviceIdEncrypted": "true", "deviceModel": MODELS.get(dt, ""),
             "deviceType": dt, "lang": "en_US", "timestamp": str(int(time.time()*1000)),
             "version": ver, "versionType": "release"}
        j = post(base, "/client/v1/arupgrade/checkV2", p)
        total += 1
        d = j.get("data") or {}
        if d.get("existsUpdate"):
            print("HIT", base, dt, ver, "->", json.dumps(j, ensure_ascii=False)[:500], flush=True)
            hits += 1
    print("done", base, flush=True)

# ota/query_file discovery
print("=== ota/query_file ===", flush=True)
for base in BASES:
    for p in [
        {"appVersion": "2.49.24", "deviceType": "XGA010C", "timestamp": str(int(time.time()*1000))},
        {"deviceType": "XGA010C", "version": "1.0.12", "timestamp": str(int(time.time()*1000))},
        {"timestamp": str(int(time.time()*1000))},
    ]:
        j = post(base, "/ota/query_file", p)
        print(base, "->", json.dumps(j, ensure_ascii=False)[:200], flush=True)

print("TOTAL", total, "checkV2 requests,", hits, "hits")
