import hashlib, hmac, time, urllib.parse, urllib.request, json, itertools

KEY  = b"wufW8W8VIrTiRnzOl2BULFjMfHAq40HC0IAouuK2zmI="
SALT = "RhdNS`Z?"
SERIAL = "1001160244J0008Q"
def did(): return hashlib.sha256((SALT+SERIAL).encode()).hexdigest()
def sign(p): return hmac.new(KEY,"&".join(f"{k}={p[k]}" for k in sorted(p)).encode(),hashlib.sha256).hexdigest()

def check(base, dtype, model, version):
    p = {"appVersion":"2.40.51","buildType":"user","deviceId":did(),"deviceIdEncrypted":"true",
         "deviceModel":model,"deviceType":dtype,"lang":"en_US","timestamp":str(int(time.time()*1000)),
         "version":version,"versionType":"release"}
    p["sign"]=sign(p)
    req=urllib.request.Request(base+"/client/v1/arupgrade/checkV2",data=urllib.parse.urlencode(p).encode())
    try:
        with urllib.request.urlopen(req,timeout=15) as r: return r.read().decode()
    except Exception as e:
        return (e.read().decode() if hasattr(e,"read") else str(e))

BASE="https://xr-nbs-global.myvu.cn/ar-ota"
BASE_CN="https://xr-nbs.myvu.cn/ar-ota"
DTYPES=["Star Air","StarV Air","StarV Air2","StarVView","View","Air","XGA010C","StarV Air FR"]
MODELS=["XGA010C","Star Air"]
VERS=["0","1.0.0.0","1.0.12.87.20250101_Air_FR"]

hits=0
for base,tag in [(BASE,"intl"),(BASE_CN,"cn")]:
  for dt,model,ver in itertools.product(DTYPES,MODELS,VERS):
    out=check(base,dt,model,ver)
    try:
        j=json.loads(out); code=j.get("code"); d=j.get("data") or {}
        eu=d.get("existsUpdate"); pl=d.get("packLink") or d.get("packLink2")
        if eu or pl:
            hits+=1; print(f"*** HIT [{tag} dt={dt!r} model={model} ver={ver}] existsUpdate={eu} latest={d.get('latestVersion')} packLink={pl}")
        elif code not in (0,):
            print(f"[{tag} dt={dt:12} model={model:8} ver={ver:10}] code={code} msg={j.get('msg')}")
    except Exception:
        print(f"[{tag} dt={dt}] RAW {out[:120]}")
print(f"\ndone. hits={hits}")
