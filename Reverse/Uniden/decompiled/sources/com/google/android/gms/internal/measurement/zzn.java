package com.google.android.gms.internal.measurement;

import java.util.List;
import java.util.Map;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzn extends zzap {
    private final zzac zza;

    @Override // com.google.android.gms.internal.measurement.zzap, com.google.android.gms.internal.measurement.zzaq
    public final zzaq zza(String str, zzh zzhVar, List<zzaq> list) {
        str.hashCode();
        switch (str) {
            case "getEventName":
                zzg.zza("getEventName", 0, list);
                return new zzas(this.zza.zzb().zzb());
            case "getTimestamp":
                zzg.zza("getTimestamp", 0, list);
                return new zzai(Double.valueOf(this.zza.zzb().zza()));
            case "getParamValue":
                zzg.zza("getParamValue", 1, list);
                return zzj.zza(this.zza.zzb().zza(zzhVar.zza(list.get(0)).zzf()));
            case "getParams":
                zzg.zza("getParams", 0, list);
                Map<String, Object> mapZzc = this.zza.zzb().zzc();
                zzap zzapVar = new zzap();
                for (String str2 : mapZzc.keySet()) {
                    zzapVar.zza(str2, zzj.zza(mapZzc.get(str2)));
                }
                return zzapVar;
            case "setParamValue":
                zzg.zza("setParamValue", 2, list);
                String strZzf = zzhVar.zza(list.get(0)).zzf();
                zzaq zzaqVarZza = zzhVar.zza(list.get(1));
                this.zza.zzb().zza(strZzf, zzg.zza(zzaqVarZza));
                return zzaqVarZza;
            case "setEventName":
                zzg.zza("setEventName", 1, list);
                zzaq zzaqVarZza2 = zzhVar.zza(list.get(0));
                if (zzc.equals(zzaqVarZza2) || zzd.equals(zzaqVarZza2)) {
                    throw new IllegalArgumentException("Illegal event name");
                }
                this.zza.zzb().zzb(zzaqVarZza2.zzf());
                return new zzas(zzaqVarZza2.zzf());
            default:
                return super.zza(str, zzhVar, list);
        }
    }

    public zzn(zzac zzacVar) {
        this.zza = zzacVar;
    }
}
