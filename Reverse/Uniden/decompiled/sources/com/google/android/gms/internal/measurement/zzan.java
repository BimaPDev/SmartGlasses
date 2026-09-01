package com.google.android.gms.internal.measurement;

import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final /* synthetic */ class zzan {
    public static zzaq zza(zzak zzakVar, zzaq zzaqVar, zzh zzhVar, List<zzaq> list) {
        if (zzakVar.zzc(zzaqVar.zzf())) {
            zzaq zzaqVarZza = zzakVar.zza(zzaqVar.zzf());
            if (zzaqVarZza instanceof zzal) {
                return ((zzal) zzaqVarZza).zza(zzhVar, list);
            }
            throw new IllegalArgumentException(String.format("%s is not a function", zzaqVar.zzf()));
        }
        if (!"hasOwnProperty".equals(zzaqVar.zzf())) {
            throw new IllegalArgumentException(String.format("Object has no function %s", zzaqVar.zzf()));
        }
        zzg.zza("hasOwnProperty", 1, list);
        return zzakVar.zzc(zzhVar.zza(list.get(0)).zzf()) ? zzaq.zzh : zzaq.zzi;
    }

    public static Iterator<zzaq> zza(Map<String, zzaq> map) {
        return new zzam(map.keySet().iterator());
    }
}
