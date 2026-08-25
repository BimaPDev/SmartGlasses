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
        return f"ERR {getattr(e,'code','?')} {e.read().decode()[:200] if hasattr(e,'read') else e}"

p = {"lang":"en_US","uuid":str(uuid.uuid4()),"version":"2.39.0","appVersion":"2.39.0",
     "os":"android","timestamp":str(int(time.time()*1000)),
     "packageName":"com.upuphone.star.launcher.intl",
     "brand":"Google","phoneBrand":"Google","model":"Pixel 8","phoneModel":"Pixel 8",
     "deviceModel":"Pixel 8"}
print(post("https://xr-nbs-global.myvu.cn/ar-ota/client/v1/super-app/latest-version/v2", p)[:600])
