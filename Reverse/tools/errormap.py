import hashlib, hmac, time, urllib.parse, urllib.request, json
KEY = b"wufW8W8VIrTiRnzOl2BULFjMfHAq40HC0IAouuK2zmI="
def sign(p):
    s = "&".join(f"{k}={p[k]}" for k in sorted(p))
    return hmac.new(KEY, s.encode(), hashlib.sha256).hexdigest()
def post(p):
    p["sign"] = sign(p)
    req = urllib.request.Request("https://xr-nbs-global.myvu.cn/ar-ota/client/v1/arupgrade/checkV2",
        data=urllib.parse.urlencode(p).encode())
    try:
        with urllib.request.urlopen(req, timeout=15) as r:
            j = json.loads(r.read().decode()); return j.get("code"), j.get("msg")
    except Exception as e:
        return "ERR", str(e)[:60]
base = {"appVersion":"2.40.51","buildType":"user","deviceId":"0"*64,
        "deviceIdEncrypted":"true","deviceModel":"","deviceType":"View",
        "lang":"en_US","timestamp":str(int(time.time()*1000)),
        "version":"1.0.0","versionType":"release"}
for k, v in [("version",""),("versionType",""),("buildType",""),("deviceId",""),
             ("versionType","beta"),("versionType","internal"),("versionType","debug"),
             ("versionType","test"),("buildType","debug"),("buildType","test")]:
    p = dict(base); p[k] = v
    print(k, "=", repr(v), "->", post(p))
