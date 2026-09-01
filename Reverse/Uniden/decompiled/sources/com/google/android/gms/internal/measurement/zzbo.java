package com.google.android.gms.internal.measurement;

import java.util.List;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzbo extends zzay {
    @Override // com.google.android.gms.internal.measurement.zzay
    public final zzaq zza(String str, zzh zzhVar, List<zzaq> list) {
        switch (zzbr.zza[zzg.zza(str).ordinal()]) {
            case 1:
                zzg.zza(zzbv.ADD, 2, list);
                zzaq zzaqVarZza = zzhVar.zza(list.get(0));
                zzaq zzaqVarZza2 = zzhVar.zza(list.get(1));
                if (!(zzaqVarZza instanceof zzak) && !(zzaqVarZza instanceof zzas) && !(zzaqVarZza2 instanceof zzak) && !(zzaqVarZza2 instanceof zzas)) {
                    return new zzai(Double.valueOf(zzaqVarZza.zze().doubleValue() + zzaqVarZza2.zze().doubleValue()));
                }
                return new zzas(zzaqVarZza.zzf() + zzaqVarZza2.zzf());
            case 2:
                zzg.zza(zzbv.DIVIDE, 2, list);
                return new zzai(Double.valueOf(zzhVar.zza(list.get(0)).zze().doubleValue() / zzhVar.zza(list.get(1)).zze().doubleValue()));
            case 3:
                zzg.zza(zzbv.MODULUS, 2, list);
                return new zzai(Double.valueOf(zzhVar.zza(list.get(0)).zze().doubleValue() % zzhVar.zza(list.get(1)).zze().doubleValue()));
            case 4:
                zzg.zza(zzbv.MULTIPLY, 2, list);
                return new zzai(Double.valueOf(zzhVar.zza(list.get(0)).zze().doubleValue() * zzhVar.zza(list.get(1)).zze().doubleValue()));
            case 5:
                zzg.zza(zzbv.NEGATE, 1, list);
                return new zzai(Double.valueOf(zzhVar.zza(list.get(0)).zze().doubleValue() * (-1.0d)));
            case 6:
            case 7:
                zzg.zza(str, 2, list);
                zzaq zzaqVarZza3 = zzhVar.zza(list.get(0));
                zzhVar.zza(list.get(1));
                return zzaqVarZza3;
            case 8:
            case 9:
                zzg.zza(str, 1, list);
                return zzhVar.zza(list.get(0));
            case 10:
                zzg.zza(zzbv.SUBTRACT, 2, list);
                return new zzai(Double.valueOf(zzhVar.zza(list.get(0)).zze().doubleValue() + new zzai(Double.valueOf(zzhVar.zza(list.get(1)).zze().doubleValue() * (-1.0d))).zze().doubleValue()));
            default:
                return super.zza(str);
        }
    }

    protected zzbo() {
        this.zza.add(zzbv.ADD);
        this.zza.add(zzbv.DIVIDE);
        this.zza.add(zzbv.MODULUS);
        this.zza.add(zzbv.MULTIPLY);
        this.zza.add(zzbv.NEGATE);
        this.zza.add(zzbv.POST_DECREMENT);
        this.zza.add(zzbv.POST_INCREMENT);
        this.zza.add(zzbv.PRE_DECREMENT);
        this.zza.add(zzbv.PRE_INCREMENT);
        this.zza.add(zzbv.SUBTRACT);
    }
}
