package com.google.android.gms.internal.measurement;

import java.util.List;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzbq extends zzay {
    @Override // com.google.android.gms.internal.measurement.zzay
    public final zzaq zza(String str, zzh zzhVar, List<zzaq> list) {
        if (str == null || str.isEmpty() || !zzhVar.zzb(str)) {
            throw new IllegalArgumentException(String.format("Command not found: %s", str));
        }
        zzaq zzaqVarZza = zzhVar.zza(str);
        if (zzaqVarZza instanceof zzal) {
            return ((zzal) zzaqVarZza).zza(zzhVar, list);
        }
        throw new IllegalArgumentException(String.format("Function %s is not defined", str));
    }
}
