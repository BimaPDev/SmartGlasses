package com.google.android.gms.internal.measurement;

import java.util.Iterator;
import java.util.Map;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
final class zzky implements zzkv {
    @Override // com.google.android.gms.internal.measurement.zzkv
    public final int zza(int i, Object obj, Object obj2) {
        zzkw zzkwVar = (zzkw) obj;
        if (zzkwVar.isEmpty()) {
            return 0;
        }
        Iterator it = zzkwVar.entrySet().iterator();
        if (!it.hasNext()) {
            return 0;
        }
        Map.Entry entry = (Map.Entry) it.next();
        entry.getKey();
        entry.getValue();
        throw new NoSuchMethodError();
    }

    @Override // com.google.android.gms.internal.measurement.zzkv
    public final zzkt<?, ?> zza(Object obj) {
        throw new NoSuchMethodError();
    }

    @Override // com.google.android.gms.internal.measurement.zzkv
    public final Object zza(Object obj, Object obj2) {
        zzkw zzkwVarZzb = (zzkw) obj;
        zzkw zzkwVar = (zzkw) obj2;
        if (!zzkwVar.isEmpty()) {
            if (!zzkwVarZzb.zzd()) {
                zzkwVarZzb = zzkwVarZzb.zzb();
            }
            zzkwVarZzb.zza(zzkwVar);
        }
        return zzkwVarZzb;
    }

    @Override // com.google.android.gms.internal.measurement.zzkv
    public final Object zzb(Object obj) {
        return zzkw.zza().zzb();
    }

    @Override // com.google.android.gms.internal.measurement.zzkv
    public final Object zzc(Object obj) {
        ((zzkw) obj).zzc();
        return obj;
    }

    @Override // com.google.android.gms.internal.measurement.zzkv
    public final Map<?, ?> zzd(Object obj) {
        return (zzkw) obj;
    }

    @Override // com.google.android.gms.internal.measurement.zzkv
    public final Map<?, ?> zze(Object obj) {
        return (zzkw) obj;
    }

    zzky() {
    }

    @Override // com.google.android.gms.internal.measurement.zzkv
    public final boolean zzf(Object obj) {
        return !((zzkw) obj).zzd();
    }
}
