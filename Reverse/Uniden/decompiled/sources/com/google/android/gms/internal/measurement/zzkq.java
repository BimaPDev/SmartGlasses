package com.google.android.gms.internal.measurement;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
final class zzkq implements zzlt {
    private static final zzkz zza = new zzkp();
    private final zzkz zzb;

    @Override // com.google.android.gms.internal.measurement.zzlt
    public final <T> zzlu<T> zza(Class<T> cls) {
        zzlw.zza((Class<?>) cls);
        zzla zzlaVarZza = this.zzb.zza(cls);
        if (zzlaVarZza.zzc()) {
            return zzli.zza(zzlw.zza(), zzjj.zza(), zzlaVarZza.zza());
        }
        return zzlg.zza(cls, zzlaVarZza, zzlm.zza(), zzko.zza(), zzlw.zza(), zzks.zza[zzlaVarZza.zzb().ordinal()] != 1 ? zzjj.zza() : null, zzkx.zza());
    }

    public zzkq() {
        this(new zzkr(zzju.zza(), zza));
    }

    private zzkq(zzkz zzkzVar) {
        this.zzb = (zzkz) zzjv.zza(zzkzVar, "messageInfoFactory");
    }
}
