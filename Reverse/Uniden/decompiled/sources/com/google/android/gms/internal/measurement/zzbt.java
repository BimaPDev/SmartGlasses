package com.google.android.gms.internal.measurement;

import androidx.constraintlayout.core.motion.utils.TypedValues;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzbt extends zzay {
    @Override // com.google.android.gms.internal.measurement.zzay
    public final zzaq zza(String str, zzh zzhVar, List<zzaq> list) {
        String str2;
        int i = 0;
        switch (zzbs.zza[zzg.zza(str).ordinal()]) {
            case 1:
                zzg.zza(zzbv.ASSIGN, 2, list);
                zzaq zzaqVarZza = zzhVar.zza(list.get(0));
                if (!(zzaqVarZza instanceof zzas)) {
                    throw new IllegalArgumentException(String.format("Expected string for assign var. got %s", zzaqVarZza.getClass().getCanonicalName()));
                }
                if (!zzhVar.zzb(zzaqVarZza.zzf())) {
                    throw new IllegalArgumentException(String.format("Attempting to assign undefined value %s", zzaqVarZza.zzf()));
                }
                zzaq zzaqVarZza2 = zzhVar.zza(list.get(1));
                zzhVar.zzc(zzaqVarZza.zzf(), zzaqVarZza2);
                return zzaqVarZza2;
            case 2:
                zzg.zzb(zzbv.CONST, 2, list);
                if (list.size() % 2 != 0) {
                    throw new IllegalArgumentException(String.format("CONST requires an even number of arguments, found %s", Integer.valueOf(list.size())));
                }
                while (i < list.size() - 1) {
                    zzaq zzaqVarZza3 = zzhVar.zza(list.get(i));
                    if (!(zzaqVarZza3 instanceof zzas)) {
                        throw new IllegalArgumentException(String.format("Expected string for const name. got %s", zzaqVarZza3.getClass().getCanonicalName()));
                    }
                    zzhVar.zzb(zzaqVarZza3.zzf(), zzhVar.zza(list.get(i + 1)));
                    i += 2;
                }
                return zzaq.zzc;
            case 3:
                if (list.isEmpty()) {
                    return new zzaf();
                }
                zzaf zzafVar = new zzaf();
                Iterator<zzaq> it = list.iterator();
                while (it.hasNext()) {
                    zzaq zzaqVarZza4 = zzhVar.zza(it.next());
                    if (zzaqVarZza4 instanceof zzaj) {
                        throw new IllegalStateException("Failed to evaluate array element");
                    }
                    zzafVar.zzb(i, zzaqVarZza4);
                    i++;
                }
                return zzafVar;
            case 4:
                if (list.isEmpty()) {
                    return new zzap();
                }
                if (list.size() % 2 != 0) {
                    throw new IllegalArgumentException(String.format("CREATE_OBJECT requires an even number of arguments, found %s", Integer.valueOf(list.size())));
                }
                zzap zzapVar = new zzap();
                while (i < list.size() - 1) {
                    zzaq zzaqVarZza5 = zzhVar.zza(list.get(i));
                    zzaq zzaqVarZza6 = zzhVar.zza(list.get(i + 1));
                    if ((zzaqVarZza5 instanceof zzaj) || (zzaqVarZza6 instanceof zzaj)) {
                        throw new IllegalStateException("Failed to evaluate map entry");
                    }
                    zzapVar.zza(zzaqVarZza5.zzf(), zzaqVarZza6);
                    i += 2;
                }
                return zzapVar;
            case 5:
                zzg.zzb(zzbv.EXPRESSION_LIST, 1, list);
                zzaq zzaqVarZza7 = zzaq.zzc;
                while (i < list.size()) {
                    zzaqVarZza7 = zzhVar.zza(list.get(i));
                    if (zzaqVarZza7 instanceof zzaj) {
                        throw new IllegalStateException("ControlValue cannot be in an expression list");
                    }
                    i++;
                }
                return zzaqVarZza7;
            case 6:
                zzg.zza(zzbv.GET, 1, list);
                zzaq zzaqVarZza8 = zzhVar.zza(list.get(0));
                if (zzaqVarZza8 instanceof zzas) {
                    return zzhVar.zza(zzaqVarZza8.zzf());
                }
                throw new IllegalArgumentException(String.format("Expected string for get var. got %s", zzaqVarZza8.getClass().getCanonicalName()));
            case 7:
            case 8:
                zzg.zza(zzbv.GET_PROPERTY, 2, list);
                zzaq zzaqVarZza9 = zzhVar.zza(list.get(0));
                zzaq zzaqVarZza10 = zzhVar.zza(list.get(1));
                if ((zzaqVarZza9 instanceof zzaf) && zzg.zzb(zzaqVarZza10)) {
                    return ((zzaf) zzaqVarZza9).zza(zzaqVarZza10.zze().intValue());
                }
                if (zzaqVarZza9 instanceof zzak) {
                    return ((zzak) zzaqVarZza9).zza(zzaqVarZza10.zzf());
                }
                if (zzaqVarZza9 instanceof zzas) {
                    if ("length".equals(zzaqVarZza10.zzf())) {
                        return new zzai(Double.valueOf(zzaqVarZza9.zzf().length()));
                    }
                    if (zzg.zzb(zzaqVarZza10) && zzaqVarZza10.zze().doubleValue() < zzaqVarZza9.zzf().length()) {
                        return new zzas(String.valueOf(zzaqVarZza9.zzf().charAt(zzaqVarZza10.zze().intValue())));
                    }
                }
                return zzaq.zzc;
            case 9:
                zzg.zza(zzbv.NULL, 0, list);
                return zzaq.zzd;
            case 10:
                zzg.zza(zzbv.SET_PROPERTY, 3, list);
                zzaq zzaqVarZza11 = zzhVar.zza(list.get(0));
                zzaq zzaqVarZza12 = zzhVar.zza(list.get(1));
                zzaq zzaqVarZza13 = zzhVar.zza(list.get(2));
                if (zzaqVarZza11 == zzaq.zzc || zzaqVarZza11 == zzaq.zzd) {
                    throw new IllegalStateException(String.format("Can't set property %s of %s", zzaqVarZza12.zzf(), zzaqVarZza11.zzf()));
                }
                if ((zzaqVarZza11 instanceof zzaf) && (zzaqVarZza12 instanceof zzai)) {
                    ((zzaf) zzaqVarZza11).zzb(zzaqVarZza12.zze().intValue(), zzaqVarZza13);
                } else if (zzaqVarZza11 instanceof zzak) {
                    ((zzak) zzaqVarZza11).zza(zzaqVarZza12.zzf(), zzaqVarZza13);
                }
                return zzaqVarZza13;
            case 11:
                zzg.zza(zzbv.TYPEOF, 1, list);
                zzaq zzaqVarZza14 = zzhVar.zza(list.get(0));
                if (zzaqVarZza14 instanceof zzax) {
                    str2 = "undefined";
                } else if (zzaqVarZza14 instanceof zzag) {
                    str2 = TypedValues.Custom.S_BOOLEAN;
                } else if (zzaqVarZza14 instanceof zzai) {
                    str2 = "number";
                } else if (zzaqVarZza14 instanceof zzas) {
                    str2 = TypedValues.Custom.S_STRING;
                } else if (zzaqVarZza14 instanceof zzar) {
                    str2 = "function";
                } else {
                    if ((zzaqVarZza14 instanceof zzat) || (zzaqVarZza14 instanceof zzaj)) {
                        throw new IllegalArgumentException(String.format("Unsupported value type %s in typeof", zzaqVarZza14));
                    }
                    str2 = "object";
                }
                return new zzas(str2);
            case 12:
                zzg.zza(zzbv.UNDEFINED, 0, list);
                return zzaq.zzc;
            case 13:
                zzg.zzb(zzbv.VAR, 1, list);
                Iterator<zzaq> it2 = list.iterator();
                while (it2.hasNext()) {
                    zzaq zzaqVarZza15 = zzhVar.zza(it2.next());
                    if (!(zzaqVarZza15 instanceof zzas)) {
                        throw new IllegalArgumentException(String.format("Expected string for var name. got %s", zzaqVarZza15.getClass().getCanonicalName()));
                    }
                    zzhVar.zza(zzaqVarZza15.zzf(), zzaq.zzc);
                }
                return zzaq.zzc;
            default:
                return super.zza(str);
        }
    }

    protected zzbt() {
        this.zza.add(zzbv.ASSIGN);
        this.zza.add(zzbv.CONST);
        this.zza.add(zzbv.CREATE_ARRAY);
        this.zza.add(zzbv.CREATE_OBJECT);
        this.zza.add(zzbv.EXPRESSION_LIST);
        this.zza.add(zzbv.GET);
        this.zza.add(zzbv.GET_INDEX);
        this.zza.add(zzbv.GET_PROPERTY);
        this.zza.add(zzbv.NULL);
        this.zza.add(zzbv.SET_PROPERTY);
        this.zza.add(zzbv.TYPEOF);
        this.zza.add(zzbv.UNDEFINED);
        this.zza.add(zzbv.VAR);
    }
}
