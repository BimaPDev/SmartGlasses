import hashlib, hmac, time, urllib.parse, urllib.request, json
KEY=b"wufW8W8VIrTiRnzOl2BULFjMfHAq40HC0IAouuK2zmI="; SALT="RhdNS`Z?"; SERIAL="1001160244J0008Q"
did=hashlib.sha256((SALT+SERIAL).encode()).hexdigest()
def sign(p): return hmac.new(KEY,"&".join(f"{k}={p[k]}" for k in sorted(p)).encode(),hashlib.sha256).hexdigest()
def check(base,dtype,model,version,extra=None):
    p={"appVersion":"2.40.51","buildType":"user","deviceId":did,"deviceIdEncrypted":"true",
       "deviceModel":model,"deviceType":dtype,"lang":"en_US","timestamp":str(int(time.time()*1000)),
       "version":version,"versionType":"release"}
    if extra: p.update(extra)
    p["sign"]=sign(p)
    req=urllib.request.Request(base+"/client/v1/arupgrade/checkV2",data=urllib.parse.urlencode(p).encode())
    try:
        with urllib.request.urlopen(req,timeout=15) as r: return r.read().decode()
    except Exception as e: return (e.read().decode() if hasattr(e,"read") else str(e))
B="https://xr-nbs-global.myvu.cn/ar-ota"; BC="https://xr-nbs.myvu.cn/ar-ota"
tests=[
 ("garbage dtype", B,"ZZZZNOPE","XGA010C","0"),
 ("View v0",       B,"View","XGA010C","0"),
 ("View v0 cn",    BC,"View","XGA010C","0"),
 ("View real model View glass", B,"View","StarVView","0"),
 ("Ring v0",       B,"Ring","XGA010C","0", {"depDeviceType":"View","depDeviceVersion":"0"}),
 ("Star Air v0 cn",BC,"Star Air","XGA010C","0"),
]
for t in tests:
    name,base,dt,model,ver = t[0],t[1],t[2],t[3],t[4]
    extra = t[5] if len(t)>5 else None
    out=check(base,dt,model,ver,extra)
    print(f"[{name}]\n  {out[:300]}\n")
