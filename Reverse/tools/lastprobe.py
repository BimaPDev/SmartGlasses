import hashlib, hmac, time, urllib.parse, urllib.request, json, uuid
KEY = b"wufW8W8VIrTiRnzOl2BULFjMfHAq40HC0IAouuK2zmI="
def sign(p):
    s = "&".join(f"{k}={p[k]}" for k in sorted(p))
    return hmac.new(KEY, s.encode(), hashlib.sha256).hexdigest()
def post(url, p):
    p["sign"] = sign(p)
    req = urllib.request.Request(url, data=urllib.parse.urlencode(p).encode())
    try:
        with urllib.request.urlopen(req, timeout=15) as r:
            return r.read().decode()
    except Exception as e:
        return f"ERR {getattr(e,'code','?')} {e.read().decode()[:150] if hasattr(e,'read') else e}"

# app update check (same signing scheme, path seen in AppUpdateHelper)
p = {"lang":"en_US","uuid":str(uuid.uuid4()),"version":"2.39.0","appVersion":"2.39.0",
     "os":"android","timestamp":str(int(time.time()*1000))}
print("super-app:", post("https://xr-nbs-global.myvu.cn/ar-ota/client/v1/super-app/latest-version/v2", p)[:400])

# odd version formats for XGA010C
for ver in ["1.0.12.0","V1.0.12","v1.0.12","XGA010C_1.0.12","1.0.12_release","01.00.12"]:
    q = {"appVersion":"2.40.51","buildType":"user","deviceId":"0"*64,
         "deviceIdEncrypted":"true","deviceModel":"","deviceType":"XGA010C",
         "lang":"en_US","timestamp":str(int(time.time()*1000)),
         "version":ver,"versionType":"release"}
    r = post("https://xr-nbs-global.myvu.cn/ar-ota/client/v1/arupgrade/checkV2", q)
    j = json.loads(r) if r.startswith("{") else {}
    d = j.get("data") or {}
    print("fmt", repr(ver), "->", j.get("code"), d.get("existsUpdate"), d.get("latestVersion") or "")
