package com.google.android.gms.internal.measurement;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zznc implements zznd {
    private static final zzhj<Boolean> zza;

    static {
        zzhr zzhrVarZza = new zzhr(zzhk.zza("com.google.android.gms.measurement")).zzb().zza();
        zza = zzhrVarZza.zza("measurement.service.ad_impression.convert_value_to_double", true);
        zzhrVarZza.zza("measurement.client.ad_impression", true);
        zzhrVarZza.zza("measurement.service.separate_public_internal_event_blacklisting", true);
        zzhrVarZza.zza("measurement.service.ad_impression", true);
    }

    @Override // com.google.android.gms.internal.measurement.zznd
    public final boolean zza() {
        return zza.zza().booleanValue();
    }
}
