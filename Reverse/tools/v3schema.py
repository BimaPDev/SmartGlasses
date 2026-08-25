import hashlib, hmac, time, urllib.parse, urllib.request, json

KEY = b"wufW8W8VIrTiRnzOl2BULFjMfHAq40HC0IAouuK2zmI="
def sign(p):
    s = "&".join(f"{k}={p[k]}" for k in sorted(p))
    return hmac.new(KEY, s.encode(), hashlib.sha256).hexdigest()

def post_json(p):
    body = dict(p); body["sign"] = sign(p)
    req = urllib.request.Request("https://xr-nbs-global.myvu.cn/ar-ota/client/v1/arupgrade/checkV3",
        data=json.dumps(body).encode(), headers={"Content-Type": "application/json;charset=utf-8"})
    try:
        with urllib.request.urlopen(req, timeout=15) as r:
            j = json.loads(r.read().decode()); return j.get("code"), j.get("msg")
    except Exception as e:
        return getattr(e, "code", "?"), (e.read().decode()[:150] if hasattr(e, "read") else str(e)[:60])

print("empty ->", post_json({}))
base = {"appVersion":"2.40.51","buildType":"user","deviceId":"0"*64,
        "deviceIdEncrypted":"true","deviceModel":"","deviceType":"XGA010C",
        "lang":"en_US","timestamp":str(int(time.time()*1000)),
        "version":"1.0.0","versionType":"release"}
for k in sorted(base):
    p = dict(base); p[k] = ""
    print(f"no-{k} ->", post_json(p))
# try extra plausible fields
for extra in [{"hardVersion":"1.0.0"},{"softVersion":"1.0.0"},{"sn":"1001160244J0008Q"},
              {"childRoms":[{"deviceType":"Ring","version":"1.0.0"}]},
              {"devices":[{"deviceType":"Ring","version":"1.0.0"}]},
              {"subModel":"XGA010C"},{"otaVersion":"3"}]:
    p = dict(base); p.update(extra)
    print("extra", list(extra)[0], "->", post_json(p))
