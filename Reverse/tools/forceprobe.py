import hashlib, hmac, time, urllib.parse, urllib.request, json
KEY = b"wufW8W8VIrTiRnzOl2BULFjMfHAq40HC0IAouuK2zmI="
def sign(p):
    s = "&".join(f"{k}={p[k]}" for k in sorted(p))
    return hmac.new(KEY, s.encode(), hashlib.sha256).hexdigest()
def post(path, p, as_json=False):
    p["sign"] = sign(p)
    if as_json:
        req = urllib.request.Request("https://xr-nbs-global.myvu.cn/ar-ota"+path,
            data=json.dumps(p).encode(), headers={"Content-Type":"application/json"})
    else:
        req = urllib.request.Request("https://xr-nbs-global.myvu.cn/ar-ota"+path,
            data=urllib.parse.urlencode(p).encode())
    with urllib.request.urlopen(req, timeout=15) as r:
        j = json.loads(r.read().decode())
        return j.get("code"), (j.get("data") or {}).get("existsUpdate")

base = {"appVersion":"2.40.51","buildType":"user","deviceId":"0"*64,
        "deviceIdEncrypted":"true","deviceModel":"","deviceType":"XGA010C",
        "lang":"en_US","timestamp":str(int(time.time()*1000)),
        "version":"1.0.0","versionType":"release"}
for extra in [{"forceUpgrade":"true"},{"forceSwitch":"true"},{"force":"true"},
              {"existsUpdate":"true"},{"debug":"true"},{"testMode":"true"},
              {"inspection":"true"},{"gray":"true"},{"silent":"true"},
              {"upgradeModePolicy":"force"}]:
    p = dict(base); p.update(extra)
    try:
        print("V2", extra, "->", post("/client/v1/arupgrade/checkV2", dict(p)))
        print("V3", extra, "->", post("/client/v1/arupgrade/checkV3", dict(p), True))
    except Exception as e:
        print("ERR", extra, str(e)[:60])
