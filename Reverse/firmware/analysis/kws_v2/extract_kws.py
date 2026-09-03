#!/usr/bin/env python3
"""Parse STAR_NN / DFSMN models (kws, vad, cwr) and dump architecture + tensors.

Header: magic "STAR_NN V0.1.0" @0x00, arch @0x14, layer count @0x28.
The body alternates u32 metadata records with float32 weight blocks; block
sizes decompose exactly, which is how the architecture below was recovered.
"""
import struct, json, math, sys
from pathlib import Path
import numpy as np

def segment(d):
    n=len(d)//4
    w=struct.unpack(f'<{n}I', d[:n*4]); f=struct.unpack(f'<{n}f', d[:n*4])
    cls=[]
    for i in range(n):
        wt = f[i]!=0 and 1e-9<abs(f[i])<100 and not math.isnan(f[i])
        cls.append('W' if wt else 'D')
    runs=[]; cur=cls[0]; st=0
    for i in range(1,n):
        if cls[i]!=cur: runs.append((cur,st,i)); cur=cls[i]; st=i
    runs.append((cur,st,n))
    return [r for r in runs if r[2]-r[1]>=4], w, f

def parse(path):
    d=Path(path).read_bytes()
    out={"file":Path(path).name,"size":len(d),
         "magic":d[0:14].decode().rstrip('\x00'),
         "arch":d[0x14:0x1a].decode().rstrip('\x00'),
         "declared_layers":struct.unpack_from('<I',d,0x28)[0],
         "blocks":[]}
    runs,w,f = segment(d)
    for kind,a,b in runs:
        blk={"kind":"weights" if kind=='W' else "metadata",
             "byte_start":hex(a*4),"byte_end":hex(b*4),"words":b-a}
        if kind=='D': blk["u32"]=list(w[a:min(b,a+24)])
        out["blocks"].append(blk)
    return out, d, runs

def dump_tensors(path, outdir):
    out,d,runs = parse(path)
    outdir=Path(outdir); outdir.mkdir(parents=True, exist_ok=True)
    i=0
    for kind,a,b in runs:
        if kind!='W': continue
        arr=np.frombuffer(d[a*4:b*4], dtype='<f4')
        np.save(outdir/f"{Path(path).stem}_w{i:02d}_{len(arr)}.npy", arr)
        i+=1
    (outdir/f"{Path(path).stem}_structure.json").write_text(json.dumps(out,indent=1))
    return out,i

if __name__=='__main__':
    src=sys.argv[1] if len(sys.argv)>1 else 'Reverse/extracted/base/assets/fsp/res/kws_model.nn'
    dst=sys.argv[2] if len(sys.argv)>2 else 'Reverse/firmware/analysis/kws_v2/tensors'
    out,n = dump_tensors(src,dst)
    print(f"{out['file']}: arch={out['arch']} declared_layers={out['declared_layers']} -> {n} weight tensors")
