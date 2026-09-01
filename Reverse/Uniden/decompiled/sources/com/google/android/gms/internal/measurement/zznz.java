package com.google.android.gms.internal.measurement;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zznz implements zznw {
    private static final zzhj<Boolean> zza;
    private static final zzhj<Boolean> zzb;
    private static final zzhj<Boolean> zzc;

    static {
        zzhr zzhrVarZza = new zzhr(zzhk.zza("com.google.android.gms.measurement")).zzb().zza();
        zzhrVarZza.zza("measurement.dma_consent.client", true);
        zzhrVarZza.zza("measurement.dma_consent.client_bow_check2", true);
        zzhrVarZza.zza("measurement.dma_consent.separate_service_calls_fix", true);
        zzhrVarZza.zza("measurement.dma_consent.service", true);
        zza = zzhrVarZza.zza("measurement.dma_consent.service_database_update_fix", true);
        zzhrVarZza.zza("measurement.dma_consent.service_dcu_event", true);
        zzb = zzhrVarZza.zza("measurement.dma_consent.service_dcu_event2", true);
        zzhrVarZza.zza("measurement.dma_consent.service_npa_remote_default", true);
        zzhrVarZza.zza("measurement.dma_consent.service_split_batch_on_consent", true);
        zzhrVarZza.zza("measurement.dma_consent.set_consent_inline_on_worker", true);
        zzc = zzhrVarZza.zza("measurement.dma_consent.setting_npa_inline_fix", true);
    }

    @Override // com.google.android.gms.internal.measurement.zznw
    public final boolean zza() {
        return zza.zza().booleanValue();
    }

    @Override // com.google.android.gms.internal.measurement.zznw
    public final boolean zzb() {
        return zzb.zza().booleanValue();
    }

    @Override // com.google.android.gms.internal.measurement.zznw
    public final boolean zzc() {
        return zzc.zza().booleanValue();
    }
}
