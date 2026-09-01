package com.google.android.gms.internal.measurement;

import java.util.List;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
final class zzkl implements zzkm {
    private static <E> zzkc<E> zzc(Object obj, long j) {
        return (zzkc) zzml.zze(obj, j);
    }

    @Override // com.google.android.gms.internal.measurement.zzkm
    public final <L> List<L> zza(Object obj, long j) {
        zzkc zzkcVarZzc = zzc(obj, j);
        if (zzkcVarZzc.zzc()) {
            return zzkcVarZzc;
        }
        int size = zzkcVarZzc.size();
        zzkc zzkcVarZza = zzkcVarZzc.zza(size == 0 ? 10 : size << 1);
        zzml.zza(obj, j, zzkcVarZza);
        return zzkcVarZza;
    }

    zzkl() {
    }

    @Override // com.google.android.gms.internal.measurement.zzkm
    public final void zzb(Object obj, long j) {
        zzc(obj, j).zzb();
    }

    @Override // com.google.android.gms.internal.measurement.zzkm
    public final <E> void zza(Object obj, Object obj2, long j) {
        zzkc zzkcVarZzc = zzc(obj, j);
        zzkc zzkcVarZzc2 = zzc(obj2, j);
        int size = zzkcVarZzc.size();
        int size2 = zzkcVarZzc2.size();
        if (size > 0 && size2 > 0) {
            if (!zzkcVarZzc.zzc()) {
                zzkcVarZzc = zzkcVarZzc.zza(size2 + size);
            }
            zzkcVarZzc.addAll(zzkcVarZzc2);
        }
        if (size > 0) {
            zzkcVarZzc2 = zzkcVarZzc;
        }
        zzml.zza(obj, j, zzkcVarZzc2);
    }
}
