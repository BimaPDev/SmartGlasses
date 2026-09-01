package com.google.android.gms.internal.measurement;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzpv implements zzps {
    private static final zzhj<Boolean> zza;
    private static final zzhj<Boolean> zzb;

    static {
        zzhr zzhrVarZza = new zzhr(zzhk.zza("com.google.android.gms.measurement")).zzb().zza();
        zzhrVarZza.zza("measurement.client.sessions.background_sessions_enabled", true);
        zza = zzhrVarZza.zza("measurement.client.sessions.enable_fix_background_engagement", false);
        zzhrVarZza.zza("measurement.client.sessions.immediate_start_enabled_foreground", true);
        zzb = zzhrVarZza.zza("measurement.client.sessions.enable_pause_engagement_in_background", true);
        zzhrVarZza.zza("measurement.client.sessions.remove_expired_session_properties_enabled", true);
        zzhrVarZza.zza("measurement.client.sessions.session_id_enabled", true);
        zzhrVarZza.zza("measurement.id.client.sessions.enable_fix_background_engagement", 0L);
    }

    @Override // com.google.android.gms.internal.measurement.zzps
    public final boolean zza() {
        return zza.zza().booleanValue();
    }

    @Override // com.google.android.gms.internal.measurement.zzps
    public final boolean zzb() {
        return zzb.zza().booleanValue();
    }
}
