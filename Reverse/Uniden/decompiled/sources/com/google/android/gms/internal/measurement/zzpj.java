package com.google.android.gms.internal.measurement;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzpj implements zzpg {
    private static final zzhj<Boolean> zza;
    private static final zzhj<Long> zzb;
    private static final zzhj<Double> zzc;
    private static final zzhj<Long> zzd;
    private static final zzhj<Long> zze;
    private static final zzhj<String> zzf;

    @Override // com.google.android.gms.internal.measurement.zzpg
    public final double zza() {
        return zzc.zza().doubleValue();
    }

    @Override // com.google.android.gms.internal.measurement.zzpg
    public final long zzb() {
        return zzb.zza().longValue();
    }

    @Override // com.google.android.gms.internal.measurement.zzpg
    public final long zzc() {
        return zzd.zza().longValue();
    }

    @Override // com.google.android.gms.internal.measurement.zzpg
    public final long zzd() {
        return zze.zza().longValue();
    }

    @Override // com.google.android.gms.internal.measurement.zzpg
    public final String zze() {
        return zzf.zza();
    }

    static {
        zzhr zzhrVarZza = new zzhr(zzhk.zza("com.google.android.gms.measurement")).zzb().zza();
        zza = zzhrVarZza.zza("measurement.test.boolean_flag", false);
        zzb = zzhrVarZza.zza("measurement.test.cached_long_flag", -1L);
        zzc = zzhrVarZza.zza("measurement.test.double_flag", -3.0d);
        zzd = zzhrVarZza.zza("measurement.test.int_flag", -2L);
        zze = zzhrVarZza.zza("measurement.test.long_flag", -1L);
        zzf = zzhrVarZza.zza("measurement.test.string_flag", "---");
    }

    @Override // com.google.android.gms.internal.measurement.zzpg
    public final boolean zzf() {
        return zza.zza().booleanValue();
    }
}
