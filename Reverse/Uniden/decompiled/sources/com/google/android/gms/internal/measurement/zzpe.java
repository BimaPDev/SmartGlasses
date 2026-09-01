package com.google.android.gms.internal.measurement;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzpe implements zzpf {
    private static final zzhj<Boolean> zza;

    static {
        zzhr zzhrVarZza = new zzhr(zzhk.zza("com.google.android.gms.measurement")).zzb().zza();
        zzhrVarZza.zza("measurement.sdk.collection.enable_extend_user_property_size", true);
        zzhrVarZza.zza("measurement.sdk.collection.last_deep_link_referrer2", true);
        zza = zzhrVarZza.zza("measurement.sdk.collection.last_deep_link_referrer_campaign2", false);
        zzhrVarZza.zza("measurement.id.sdk.collection.last_deep_link_referrer2", 0L);
    }

    @Override // com.google.android.gms.internal.measurement.zzpf
    public final boolean zza() {
        return zza.zza().booleanValue();
    }
}
