import hashlib, hmac, time, urllib.parse, urllib.request, json

KEY = b"wufW8W8VIrTiRnzOl2BULFjMfHAq40HC0IAouuK2zmI="
def sign(p):
    s = "&".join(f"{k}={p[k]}" for k in sorted(p))
    return hmac.new(KEY, s.encode(), hashlib.sha256).hexdigest()

def post_json(url, p, with_sign=True):
    body = dict(p)
    if with_sign:
        body["sign"] = sign(p)
    req = urllib.request.Request(url, data=json.dumps(body).encode(),
        headers={"Content-Type": "application/json;charset=utf-8"})
    try:
        with urllib.request.urlopen(req, timeout=15) as r:
            return r.status, r.read().decode()[:400]
    except Exception as e:
        return getattr(e, "code", "?"), (e.read().decode()[:300] if hasattr(e, "read") else str(e)[:80])

p = {"appVersion":"2.40.51","buildType":"user","deviceId":"0"*64,
     "deviceIdEncrypted":"true","deviceModel":"","deviceType":"XGA010C",
     "lang":"en_US","timestamp":str(int(time.time()*1000)),
     "version":"1.0.0","versionType":"release"}

for host in ["https://xr-nbs-global.myvu.cn/ar-ota", "https://xr-nbs.myvu.cn/ar-ota"]:
    print("V3 json+sign", host, "->", post_json(host+"/client/v1/arupgrade/checkV3", p))
    print("V3 json nosign", host, "->", post_json(host+"/client/v1/arupgrade/checkV3", p, False))
    # also checkV2 as json, maybe accepted too
    print("V2 json+sign", host, "->", post_json(host+"/client/v1/arupgrade/checkV2", p))
