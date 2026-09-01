package com.google.android.gms.internal.measurement;

import java.util.List;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzba extends zzay {
    /* JADX WARN: Code duplicated, block: B:16:0x005c  */
    /* JADX WARN: Code duplicated, block: B:18:0x005f  */
    @Override // com.google.android.gms.internal.measurement.zzay
    public final zzaq zza(String str, zzh zzhVar, List<zzaq> list) {
        boolean zZza;
        boolean zZza2;
        zzg.zza(zzg.zza(str), 2, list);
        zzaq zzaqVarZza = zzhVar.zza(list.get(0));
        zzaq zzaqVarZza2 = zzhVar.zza(list.get(1));
        switch (zzbd.zza[zzg.zza(str).ordinal()]) {
            case 1:
                zZza = zza(zzaqVarZza, zzaqVarZza2);
                return zZza ? zzaq.zzh : zzaq.zzi;
            case 2:
                zZza = zzb(zzaqVarZza2, zzaqVarZza);
                if (zZza) {
                }
            case 3:
                zZza = zzc(zzaqVarZza2, zzaqVarZza);
                if (zZza) {
                }
            case 4:
                zZza = zzg.zza(zzaqVarZza, zzaqVarZza2);
                if (zZza) {
                }
            case 5:
                zZza2 = zzg.zza(zzaqVarZza, zzaqVarZza2);
                zZza = !zZza2;
                if (zZza) {
                }
            case 6:
                zZza = zzb(zzaqVarZza, zzaqVarZza2);
                if (zZza) {
                }
            case 7:
                zZza = zzc(zzaqVarZza, zzaqVarZza2);
                if (zZza) {
                }
            case 8:
                zZza2 = zza(zzaqVarZza, zzaqVarZza2);
                zZza = !zZza2;
                if (zZza) {
                }
            default:
                return super.zza(str);
        }
    }

    public zzba() {
        this.zza.add(zzbv.EQUALS);
        this.zza.add(zzbv.GREATER_THAN);
        this.zza.add(zzbv.GREATER_THAN_EQUALS);
        this.zza.add(zzbv.IDENTITY_EQUALS);
        this.zza.add(zzbv.IDENTITY_NOT_EQUALS);
        this.zza.add(zzbv.LESS_THAN);
        this.zza.add(zzbv.LESS_THAN_EQUALS);
        this.zza.add(zzbv.NOT_EQUALS);
    }

    private static boolean zza(zzaq zzaqVar, zzaq zzaqVar2) {
        zzaq zzaiVar;
        zzaq zzaiVar2;
        while (!zzaqVar.getClass().equals(zzaqVar2.getClass())) {
            if (((zzaqVar instanceof zzax) || (zzaqVar instanceof zzao)) && ((zzaqVar2 instanceof zzax) || (zzaqVar2 instanceof zzao))) {
                return true;
            }
            boolean z = zzaqVar instanceof zzai;
            if (z && (zzaqVar2 instanceof zzas)) {
                zzaiVar2 = new zzai(zzaqVar2.zze());
            } else {
                boolean z2 = zzaqVar instanceof zzas;
                if (z2 && (zzaqVar2 instanceof zzai)) {
                    zzaiVar = new zzai(zzaqVar.zze());
                } else if (zzaqVar instanceof zzag) {
                    zzaiVar = new zzai(zzaqVar.zze());
                } else if (zzaqVar2 instanceof zzag) {
                    zzaiVar2 = new zzai(zzaqVar2.zze());
                } else if ((z2 || z) && (zzaqVar2 instanceof zzak)) {
                    zzaiVar2 = new zzas(zzaqVar2.zzf());
                } else {
                    if (!(zzaqVar instanceof zzak) || (!(zzaqVar2 instanceof zzas) && !(zzaqVar2 instanceof zzai))) {
                        return false;
                    }
                    zzaiVar = new zzas(zzaqVar.zzf());
                }
                zzaqVar = zzaiVar;
            }
            zzaqVar2 = zzaiVar2;
        }
        if ((zzaqVar instanceof zzax) || (zzaqVar instanceof zzao)) {
            return true;
        }
        if (zzaqVar instanceof zzai) {
            return (Double.isNaN(zzaqVar.zze().doubleValue()) || Double.isNaN(zzaqVar2.zze().doubleValue()) || zzaqVar.zze().doubleValue() != zzaqVar2.zze().doubleValue()) ? false : true;
        }
        if (zzaqVar instanceof zzas) {
            return zzaqVar.zzf().equals(zzaqVar2.zzf());
        }
        if (zzaqVar instanceof zzag) {
            return zzaqVar.zzd().equals(zzaqVar2.zzd());
        }
        return zzaqVar == zzaqVar2;
    }

    private static boolean zzb(zzaq zzaqVar, zzaq zzaqVar2) {
        if (zzaqVar instanceof zzak) {
            zzaqVar = new zzas(zzaqVar.zzf());
        }
        if (zzaqVar2 instanceof zzak) {
            zzaqVar2 = new zzas(zzaqVar2.zzf());
        }
        if ((zzaqVar instanceof zzas) && (zzaqVar2 instanceof zzas)) {
            return zzaqVar.zzf().compareTo(zzaqVar2.zzf()) < 0;
        }
        double dDoubleValue = zzaqVar.zze().doubleValue();
        double dDoubleValue2 = zzaqVar2.zze().doubleValue();
        return (Double.isNaN(dDoubleValue) || Double.isNaN(dDoubleValue2) || (dDoubleValue == 0.0d && dDoubleValue2 == -0.0d) || ((dDoubleValue == -0.0d && dDoubleValue2 == 0.0d) || Double.compare(dDoubleValue, dDoubleValue2) >= 0)) ? false : true;
    }

    private static boolean zzc(zzaq zzaqVar, zzaq zzaqVar2) {
        if (zzaqVar instanceof zzak) {
            zzaqVar = new zzas(zzaqVar.zzf());
        }
        if (zzaqVar2 instanceof zzak) {
            zzaqVar2 = new zzas(zzaqVar2.zzf());
        }
        return (((zzaqVar instanceof zzas) && (zzaqVar2 instanceof zzas)) || !(Double.isNaN(zzaqVar.zze().doubleValue()) || Double.isNaN(zzaqVar2.zze().doubleValue()))) && !zzb(zzaqVar2, zzaqVar);
    }
}
