package com.google.android.gms.internal.measurement;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public abstract class zzcm {
    public static final zzcm zza = new zzcd().zza("").zza(false).zza(zzco.ALL_CHECKS).zza(zzcn.READ_AND_WRITE).zza();
    static final zzcm zzb = new zzcd().zza("").zza(false).zza(zzco.NO_CHECKS).zza(zzcn.READ_AND_WRITE).zza();

    static {
        new zzcd().zza("").zza(false).zza(zzco.SKIP_COMPLIANCE_CHECK).zza(zzcn.READ_AND_WRITE).zza();
    }

    public abstract zzcc zza();

    public abstract zzcb zzb();

    public abstract zzco zzc();

    public abstract zzcn zzd();

    public abstract String zze();

    public abstract boolean zzf();
}
