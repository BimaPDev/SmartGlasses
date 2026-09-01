package com.google.android.gms.internal.measurement;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
final class zzkr implements zzkz {
    private zzkz[] zza;

    @Override // com.google.android.gms.internal.measurement.zzkz
    public final zzla zza(Class<?> cls) {
        for (zzkz zzkzVar : this.zza) {
            if (zzkzVar.zzb(cls)) {
                return zzkzVar.zza(cls);
            }
        }
        throw new UnsupportedOperationException("No factory is available for message type: " + cls.getName());
    }

    zzkr(zzkz... zzkzVarArr) {
        this.zza = zzkzVarArr;
    }

    @Override // com.google.android.gms.internal.measurement.zzkz
    public final boolean zzb(Class<?> cls) {
        for (zzkz zzkzVar : this.zza) {
            if (zzkzVar.zzb(cls)) {
                return true;
            }
        }
        return false;
    }
}
