package com.google.android.gms.internal.measurement;

import java.util.List;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
final class zzp extends zzal {
    private final /* synthetic */ zzo zzk;

    @Override // com.google.android.gms.internal.measurement.zzal
    public final zzaq zza(zzh zzhVar, List<zzaq> list) {
        zzg.zza("getValue", 2, list);
        zzaq zzaqVarZza = zzhVar.zza(list.get(0));
        zzaq zzaqVarZza2 = zzhVar.zza(list.get(1));
        String strZza = this.zzk.zza(zzaqVarZza.zzf());
        return strZza != null ? new zzas(strZza) : zzaqVarZza2;
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    zzp(zzm zzmVar, String str, zzo zzoVar) {
        super(str);
        this.zzk = zzoVar;
    }
}
