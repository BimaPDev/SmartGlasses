package com.google.android.gms.internal.measurement;

import java.util.List;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzaw extends zzay {
    @Override // com.google.android.gms.internal.measurement.zzay
    public final zzaq zza(String str, zzh zzhVar, List<zzaq> list) {
        switch (zzaz.zza[zzg.zza(str).ordinal()]) {
            case 1:
                zzg.zza(zzbv.BITWISE_AND, 2, list);
                return new zzai(Double.valueOf(zzg.zzb(zzhVar.zza(list.get(0)).zze().doubleValue()) & zzg.zzb(zzhVar.zza(list.get(1)).zze().doubleValue())));
            case 2:
                zzg.zza(zzbv.BITWISE_LEFT_SHIFT, 2, list);
                return new zzai(Double.valueOf(zzg.zzb(zzhVar.zza(list.get(0)).zze().doubleValue()) << ((int) (zzg.zzc(zzhVar.zza(list.get(1)).zze().doubleValue()) & 31))));
            case 3:
                zzg.zza(zzbv.BITWISE_NOT, 1, list);
                return new zzai(Double.valueOf(~zzg.zzb(zzhVar.zza(list.get(0)).zze().doubleValue())));
            case 4:
                zzg.zza(zzbv.BITWISE_OR, 2, list);
                return new zzai(Double.valueOf(zzg.zzb(zzhVar.zza(list.get(0)).zze().doubleValue()) | zzg.zzb(zzhVar.zza(list.get(1)).zze().doubleValue())));
            case 5:
                zzg.zza(zzbv.BITWISE_RIGHT_SHIFT, 2, list);
                return new zzai(Double.valueOf(zzg.zzb(zzhVar.zza(list.get(0)).zze().doubleValue()) >> ((int) (zzg.zzc(zzhVar.zza(list.get(1)).zze().doubleValue()) & 31))));
            case 6:
                zzg.zza(zzbv.BITWISE_UNSIGNED_RIGHT_SHIFT, 2, list);
                return new zzai(Double.valueOf(zzg.zzc(zzhVar.zza(list.get(0)).zze().doubleValue()) >>> ((int) (zzg.zzc(zzhVar.zza(list.get(1)).zze().doubleValue()) & 31))));
            case 7:
                zzg.zza(zzbv.BITWISE_XOR, 2, list);
                return new zzai(Double.valueOf(zzg.zzb(zzhVar.zza(list.get(0)).zze().doubleValue()) ^ zzg.zzb(zzhVar.zza(list.get(1)).zze().doubleValue())));
            default:
                return super.zza(str);
        }
    }

    public zzaw() {
        this.zza.add(zzbv.BITWISE_AND);
        this.zza.add(zzbv.BITWISE_LEFT_SHIFT);
        this.zza.add(zzbv.BITWISE_NOT);
        this.zza.add(zzbv.BITWISE_OR);
        this.zza.add(zzbv.BITWISE_RIGHT_SHIFT);
        this.zza.add(zzbv.BITWISE_UNSIGNED_RIGHT_SHIFT);
        this.zza.add(zzbv.BITWISE_XOR);
    }
}
