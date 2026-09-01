package com.google.android.gms.internal.measurement;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzac {
    private zzad zza;
    private zzad zzb;
    private List<zzad> zzc;

    public final zzad zza() {
        return this.zza;
    }

    public final zzad zzb() {
        return this.zzb;
    }

    public final void zzb(zzad zzadVar) {
        this.zzb = zzadVar;
    }

    public final List<zzad> zzc() {
        return this.zzc;
    }

    public final /* synthetic */ Object clone() throws CloneNotSupportedException {
        zzac zzacVar = new zzac((zzad) this.zza.clone());
        Iterator<zzad> it = this.zzc.iterator();
        while (it.hasNext()) {
            zzacVar.zzc.add((zzad) it.next().clone());
        }
        return zzacVar;
    }

    public zzac() {
        this.zza = new zzad("", 0L, null);
        this.zzb = new zzad("", 0L, null);
        this.zzc = new ArrayList();
    }

    private zzac(zzad zzadVar) {
        this.zza = zzadVar;
        this.zzb = (zzad) zzadVar.clone();
        this.zzc = new ArrayList();
    }

    public final void zza(zzad zzadVar) {
        this.zza = zzadVar;
        this.zzb = (zzad) zzadVar.clone();
        this.zzc.clear();
    }

    public final void zza(String str, long j, Map<String, Object> map) {
        HashMap map2 = new HashMap();
        for (String str2 : map.keySet()) {
            map2.put(str2, zzad.zza(str2, this.zza.zza(str2), map.get(str2)));
        }
        this.zzc.add(new zzad(str, j, map2));
    }
}
