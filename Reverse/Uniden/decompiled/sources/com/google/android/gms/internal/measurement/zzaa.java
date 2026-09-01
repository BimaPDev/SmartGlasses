package com.google.android.gms.internal.measurement;

import java.util.Collections;
import java.util.Iterator;
import java.util.TreeMap;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzaa {
    private final TreeMap<Integer, zzar> zza = new TreeMap<>();
    private final TreeMap<Integer, zzar> zzb = new TreeMap<>();

    private static int zza(zzh zzhVar, zzar zzarVar, zzaq zzaqVar) {
        zzaq zzaqVarZza = zzarVar.zza(zzhVar, Collections.singletonList(zzaqVar));
        if (zzaqVarZza instanceof zzai) {
            return zzg.zzb(zzaqVarZza.zze().doubleValue());
        }
        return -1;
    }

    public final void zza(String str, int i, zzar zzarVar, String str2) {
        TreeMap<Integer, zzar> treeMap;
        if ("create".equals(str2)) {
            treeMap = this.zzb;
        } else {
            if (!"edit".equals(str2)) {
                throw new IllegalStateException("Unknown callback type: " + str2);
            }
            treeMap = this.zza;
        }
        if (treeMap.containsKey(Integer.valueOf(i))) {
            i = treeMap.lastKey().intValue() + 1;
        }
        treeMap.put(Integer.valueOf(i), zzarVar);
    }

    public final void zza(zzh zzhVar, zzac zzacVar) {
        zzn zznVar = new zzn(zzacVar);
        for (Integer num : this.zza.keySet()) {
            zzad zzadVar = (zzad) zzacVar.zzb().clone();
            int iZza = zza(zzhVar, this.zza.get(num), zznVar);
            if (iZza == 2 || iZza == -1) {
                zzacVar.zzb(zzadVar);
            }
        }
        Iterator<Integer> it = this.zzb.keySet().iterator();
        while (it.hasNext()) {
            zza(zzhVar, this.zzb.get(it.next()), zznVar);
        }
    }
}
