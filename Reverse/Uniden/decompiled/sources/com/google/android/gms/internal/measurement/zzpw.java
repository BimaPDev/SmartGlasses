package com.google.android.gms.internal.measurement;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzpw implements zzpx {
    private static final zzhj<Boolean> zza;
    private static final zzhj<Boolean> zzb;
    private static final zzhj<Boolean> zzc;
    private static final zzhj<Boolean> zzd;
    private static final zzhj<Boolean> zze;

    static {
        zzhr zzhrVarZza = new zzhr(zzhk.zza("com.google.android.gms.measurement")).zzb().zza();
        zza = zzhrVarZza.zza("measurement.sgtm.google_signal.enable", false);
        zzb = zzhrVarZza.zza("measurement.sgtm.preview_mode_enabled", true);
        zzc = zzhrVarZza.zza("measurement.sgtm.rollout_percentage_fix", false);
        zzd = zzhrVarZza.zza("measurement.sgtm.service", true);
        zze = zzhrVarZza.zza("measurement.sgtm.upload_queue", false);
        zzhrVarZza.zza("measurement.id.sgtm", 0L);
    }

    @Override // com.google.android.gms.internal.measurement.zzpx
    public final boolean zza() {
        return true;
    }

    @Override // com.google.android.gms.internal.measurement.zzpx
    public final boolean zzb() {
        return zza.zza().booleanValue();
    }

    @Override // com.google.android.gms.internal.measurement.zzpx
    public final boolean zzc() {
        return zzb.zza().booleanValue();
    }

    @Override // com.google.android.gms.internal.measurement.zzpx
    public final boolean zzd() {
        return zzc.zza().booleanValue();
    }

    @Override // com.google.android.gms.internal.measurement.zzpx
    public final boolean zze() {
        return zzd.zza().booleanValue();
    }

    @Override // com.google.android.gms.internal.measurement.zzpx
    public final boolean zzf() {
        return zze.zza().booleanValue();
    }
}
