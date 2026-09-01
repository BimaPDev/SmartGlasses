package com.google.android.gms.internal.measurement;

import com.google.common.base.Ascii;
import java.util.Arrays;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzbe {
    private static zzaf zza(zzaf zzafVar, zzh zzhVar, zzal zzalVar, Boolean bool, Boolean bool2) {
        zzaf zzafVar2 = new zzaf();
        Iterator<Integer> itZzg = zzafVar.zzg();
        while (itZzg.hasNext()) {
            int iIntValue = itZzg.next().intValue();
            if (zzafVar.zzc(iIntValue)) {
                zzaq zzaqVarZza = zzalVar.zza(zzhVar, Arrays.asList(zzafVar.zza(iIntValue), new zzai(Double.valueOf(iIntValue)), zzafVar));
                if (zzaqVarZza.zzd().equals(bool)) {
                    return zzafVar2;
                }
                if (bool2 == null || zzaqVarZza.zzd().equals(bool2)) {
                    zzafVar2.zzb(iIntValue, zzaqVarZza);
                }
            }
        }
        return zzafVar2;
    }

    private static zzaf zza(zzaf zzafVar, zzh zzhVar, zzal zzalVar) {
        return zza(zzafVar, zzhVar, zzalVar, null, null);
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:4:0x0035 A[PHI: r17
      0x0035: PHI (r17v7 byte) = 
      (r17v0 byte)
      (r17v0 byte)
      (r17v2 byte)
      (r17v0 byte)
      (r17v0 byte)
      (r17v0 byte)
      (r17v0 byte)
      (r17v0 byte)
      (r17v0 byte)
      (r17v0 byte)
      (r17v0 byte)
      (r17v0 byte)
      (r17v0 byte)
      (r17v0 byte)
      (r17v0 byte)
      (r17v0 byte)
      (r17v0 byte)
      (r17v0 byte)
      (r17v0 byte)
      (r17v0 byte)
      (r17v5 byte)
      (r17v0 byte)
     binds: [B:3:0x0032, B:79:0x0110, B:81:0x0114, B:75:0x0101, B:71:0x00f4, B:66:0x00e5, B:62:0x00d9, B:58:0x00cf, B:54:0x00c5, B:50:0x00b8, B:46:0x00ae, B:42:0x00a4, B:38:0x009a, B:34:0x008e, B:30:0x0083, B:26:0x0078, B:22:0x006d, B:18:0x0062, B:14:0x0057, B:10:0x004a, B:69:0x00ea, B:6:0x003f] A[DONT_GENERATE, DONT_INLINE]] */
    public static zzaq zza(String str, zzaf zzafVar, zzh zzhVar, List<zzaq> list) {
        String str2;
        byte b;
        double dZza;
        String strZzf;
        zzal zzalVar;
        double dMin;
        zzh zzhVar2;
        str.hashCode();
        byte b2 = -1;
        switch (str.hashCode()) {
            case -1776922004:
                str2 = "toString";
                if (str.equals(str2)) {
                    b2 = 0;
                }
                break;
            case -1354795244:
                if (str.equals("concat")) {
                    b2 = 1;
                }
                str2 = "toString";
                break;
            case -1274492040:
                if (str.equals("filter")) {
                    str2 = "toString";
                    b2 = 2;
                } else {
                    str2 = "toString";
                }
                break;
            case -934873754:
                if (str.equals("reduce")) {
                    str2 = "toString";
                    b2 = 3;
                } else {
                    str2 = "toString";
                }
                break;
            case -895859076:
                if (str.equals("splice")) {
                    b = 4;
                    b2 = b;
                }
                str2 = "toString";
                break;
            case -678635926:
                if (str.equals("forEach")) {
                    b = 5;
                    b2 = b;
                }
                str2 = "toString";
                break;
            case -467511597:
                if (str.equals("lastIndexOf")) {
                    b = 6;
                    b2 = b;
                }
                str2 = "toString";
                break;
            case -277637751:
                if (str.equals("unshift")) {
                    b = 7;
                    b2 = b;
                }
                str2 = "toString";
                break;
            case 107868:
                if (str.equals("map")) {
                    b = 8;
                    b2 = b;
                }
                str2 = "toString";
                break;
            case 111185:
                if (str.equals("pop")) {
                    b = 9;
                    b2 = b;
                }
                str2 = "toString";
                break;
            case 3267882:
                if (str.equals("join")) {
                    b = 10;
                    b2 = b;
                }
                str2 = "toString";
                break;
            case 3452698:
                if (str.equals("push")) {
                    b = Ascii.f294VT;
                    b2 = b;
                }
                str2 = "toString";
                break;
            case 3536116:
                if (str.equals("some")) {
                    b = Ascii.f283FF;
                    b2 = b;
                }
                str2 = "toString";
                break;
            case 3536286:
                if (str.equals("sort")) {
                    b = Ascii.f281CR;
                    b2 = b;
                }
                str2 = "toString";
                break;
            case 96891675:
                if (str.equals("every")) {
                    b = Ascii.f291SO;
                    b2 = b;
                }
                str2 = "toString";
                break;
            case 109407362:
                if (str.equals("shift")) {
                    b = Ascii.f290SI;
                    b2 = b;
                }
                str2 = "toString";
                break;
            case 109526418:
                if (str.equals("slice")) {
                    b = Ascii.DLE;
                    b2 = b;
                }
                str2 = "toString";
                break;
            case 965561430:
                if (str.equals("reduceRight")) {
                    b = 17;
                    b2 = b;
                }
                str2 = "toString";
                break;
            case 1099846370:
                if (str.equals("reverse")) {
                    b = Ascii.DC2;
                    b2 = b;
                }
                str2 = "toString";
                break;
            case 1943291465:
                if (str.equals("indexOf")) {
                    b = 19;
                    b2 = b;
                }
                str2 = "toString";
                break;
            default:
                str2 = "toString";
                break;
        }
        String str3 = str2;
        double dZzb = 0.0d;
        switch (b2) {
            case 0:
                zzg.zza(str3, 0, list);
                return new zzas(zzafVar.toString());
            case 1:
                zzaf zzafVar2 = (zzaf) zzafVar.zzc();
                if (!list.isEmpty()) {
                    Iterator<zzaq> it = list.iterator();
                    while (it.hasNext()) {
                        zzaq zzaqVarZza = zzhVar.zza(it.next());
                        if (zzaqVarZza instanceof zzaj) {
                            throw new IllegalStateException("Failed evaluation of arguments");
                        }
                        int iZzb = zzafVar2.zzb();
                        if (zzaqVarZza instanceof zzaf) {
                            zzaf zzafVar3 = (zzaf) zzaqVarZza;
                            Iterator<Integer> itZzg = zzafVar3.zzg();
                            while (itZzg.hasNext()) {
                                Integer next = itZzg.next();
                                zzafVar2.zzb(next.intValue() + iZzb, zzafVar3.zza(next.intValue()));
                            }
                        } else {
                            zzafVar2.zzb(iZzb, zzaqVarZza);
                        }
                    }
                }
                return zzafVar2;
            case 2:
                zzg.zza("filter", 1, list);
                zzaq zzaqVarZza2 = zzhVar.zza(list.get(0));
                if (!(zzaqVarZza2 instanceof zzar)) {
                    throw new IllegalArgumentException("Callback should be a method");
                }
                if (zzafVar.zza() == 0) {
                    return new zzaf();
                }
                zzaf zzafVar4 = (zzaf) zzafVar.zzc();
                zzaf zzafVarZza = zza(zzafVar, zzhVar, (zzar) zzaqVarZza2, null, true);
                zzaf zzafVar5 = new zzaf();
                Iterator<Integer> itZzg2 = zzafVarZza.zzg();
                while (itZzg2.hasNext()) {
                    zzafVar5.zza(zzafVar4.zza(itZzg2.next().intValue()));
                }
                return zzafVar5;
            case 3:
                return zza(zzafVar, zzhVar, list, true);
            case 4:
                if (list.isEmpty()) {
                    return new zzaf();
                }
                int iZza = (int) zzg.zza(zzhVar.zza(list.get(0)).zze().doubleValue());
                if (iZza < 0) {
                    iZza = Math.max(0, iZza + zzafVar.zzb());
                } else if (iZza > zzafVar.zzb()) {
                    iZza = zzafVar.zzb();
                }
                int iZzb2 = zzafVar.zzb();
                zzaf zzafVar6 = new zzaf();
                if (list.size() <= 1) {
                    while (iZza < iZzb2) {
                        zzafVar6.zza(zzafVar.zza(iZza));
                        zzafVar.zzb(iZza, null);
                        iZza++;
                    }
                    return zzafVar6;
                }
                int iMax = Math.max(0, (int) zzg.zza(zzhVar.zza(list.get(1)).zze().doubleValue()));
                if (iMax > 0) {
                    for (int i = iZza; i < Math.min(iZzb2, iZza + iMax); i++) {
                        zzafVar6.zza(zzafVar.zza(iZza));
                        zzafVar.zzb(iZza);
                    }
                }
                if (list.size() > 2) {
                    for (int i2 = 2; i2 < list.size(); i2++) {
                        zzaq zzaqVarZza3 = zzhVar.zza(list.get(i2));
                        if (zzaqVarZza3 instanceof zzaj) {
                            throw new IllegalArgumentException("Failed to parse elements to add");
                        }
                        zzafVar.zza((iZza + i2) - 2, zzaqVarZza3);
                    }
                }
                return zzafVar6;
            case 5:
                zzg.zza("forEach", 1, list);
                zzaq zzaqVarZza4 = zzhVar.zza(list.get(0));
                if (!(zzaqVarZza4 instanceof zzar)) {
                    throw new IllegalArgumentException("Callback should be a method");
                }
                if (zzafVar.zza() == 0) {
                    return zzaq.zzc;
                }
                zza(zzafVar, zzhVar, (zzar) zzaqVarZza4);
                return zzaq.zzc;
            case 6:
                zzg.zzc("lastIndexOf", 2, list);
                zzaq zzaqVarZza5 = zzaq.zzc;
                if (!list.isEmpty()) {
                    zzaqVarZza5 = zzhVar.zza(list.get(0));
                }
                double dZzb2 = zzafVar.zzb() - 1;
                if (list.size() > 1) {
                    zzaq zzaqVarZza6 = zzhVar.zza(list.get(1));
                    if (Double.isNaN(zzaqVarZza6.zze().doubleValue())) {
                        dZza = zzafVar.zzb() - 1;
                    } else {
                        dZza = zzg.zza(zzaqVarZza6.zze().doubleValue());
                    }
                    dZzb2 = dZza;
                    if (dZzb2 < 0.0d) {
                        dZzb2 += (double) zzafVar.zzb();
                    }
                }
                if (dZzb2 < 0.0d) {
                    return new zzai(Double.valueOf(-1.0d));
                }
                for (int iMin = (int) Math.min(zzafVar.zzb(), dZzb2); iMin >= 0; iMin--) {
                    if (zzafVar.zzc(iMin) && zzg.zza(zzafVar.zza(iMin), zzaqVarZza5)) {
                        return new zzai(Double.valueOf(iMin));
                    }
                }
                return new zzai(Double.valueOf(-1.0d));
            case 7:
                if (!list.isEmpty()) {
                    zzaf zzafVar7 = new zzaf();
                    Iterator<zzaq> it2 = list.iterator();
                    while (it2.hasNext()) {
                        zzaq zzaqVarZza7 = zzhVar.zza(it2.next());
                        if (zzaqVarZza7 instanceof zzaj) {
                            throw new IllegalStateException("Argument evaluation failed");
                        }
                        zzafVar7.zza(zzaqVarZza7);
                    }
                    int iZzb3 = zzafVar7.zzb();
                    Iterator<Integer> itZzg3 = zzafVar.zzg();
                    while (itZzg3.hasNext()) {
                        Integer next2 = itZzg3.next();
                        zzafVar7.zzb(next2.intValue() + iZzb3, zzafVar.zza(next2.intValue()));
                    }
                    zzafVar.zzj();
                    Iterator<Integer> itZzg4 = zzafVar7.zzg();
                    while (itZzg4.hasNext()) {
                        Integer next3 = itZzg4.next();
                        zzafVar.zzb(next3.intValue(), zzafVar7.zza(next3.intValue()));
                    }
                }
                return new zzai(Double.valueOf(zzafVar.zzb()));
            case 8:
                zzg.zza("map", 1, list);
                zzaq zzaqVarZza8 = zzhVar.zza(list.get(0));
                if (!(zzaqVarZza8 instanceof zzar)) {
                    throw new IllegalArgumentException("Callback should be a method");
                }
                if (zzafVar.zzb() == 0) {
                    return new zzaf();
                }
                return zza(zzafVar, zzhVar, (zzar) zzaqVarZza8);
            case 9:
                zzg.zza("pop", 0, list);
                int iZzb4 = zzafVar.zzb();
                if (iZzb4 == 0) {
                    return zzaq.zzc;
                }
                int i3 = iZzb4 - 1;
                zzaq zzaqVarZza9 = zzafVar.zza(i3);
                zzafVar.zzb(i3);
                return zzaqVarZza9;
            case 10:
                zzg.zzc("join", 1, list);
                if (zzafVar.zzb() == 0) {
                    return zzaq.zzj;
                }
                if (list.isEmpty()) {
                    strZzf = ",";
                } else {
                    zzaq zzaqVarZza10 = zzhVar.zza(list.get(0));
                    strZzf = ((zzaqVarZza10 instanceof zzao) || (zzaqVarZza10 instanceof zzax)) ? "" : zzaqVarZza10.zzf();
                }
                return new zzas(zzafVar.zzb(strZzf));
            case 11:
                if (!list.isEmpty()) {
                    Iterator<zzaq> it3 = list.iterator();
                    while (it3.hasNext()) {
                        zzafVar.zza(zzhVar.zza(it3.next()));
                    }
                }
                return new zzai(Double.valueOf(zzafVar.zzb()));
            case 12:
                zzg.zza("some", 1, list);
                zzaq zzaqVarZza11 = zzhVar.zza(list.get(0));
                if (!(zzaqVarZza11 instanceof zzal)) {
                    throw new IllegalArgumentException("Callback should be a method");
                }
                if (zzafVar.zzb() != 0) {
                    zzal zzalVar2 = (zzal) zzaqVarZza11;
                    Iterator<Integer> itZzg5 = zzafVar.zzg();
                    while (itZzg5.hasNext()) {
                        int iIntValue = itZzg5.next().intValue();
                        if (zzafVar.zzc(iIntValue) && zzalVar2.zza(zzhVar, Arrays.asList(zzafVar.zza(iIntValue), new zzai(Double.valueOf(iIntValue)), zzafVar)).zzd().booleanValue()) {
                            return zzaq.zzh;
                        }
                    }
                }
                return zzaq.zzi;
            case 13:
                zzg.zzc("sort", 1, list);
                if (zzafVar.zzb() >= 2) {
                    List<zzaq> listZzi = zzafVar.zzi();
                    if (list.isEmpty()) {
                        zzalVar = null;
                    } else {
                        zzaq zzaqVarZza12 = zzhVar.zza(list.get(0));
                        if (!(zzaqVarZza12 instanceof zzal)) {
                            throw new IllegalArgumentException("Comparator should be a method");
                        }
                        zzalVar = (zzal) zzaqVarZza12;
                    }
                    Collections.sort(listZzi, new zzbh(zzalVar, zzhVar));
                    zzafVar.zzj();
                    Iterator<zzaq> it4 = listZzi.iterator();
                    int i4 = 0;
                    while (it4.hasNext()) {
                        zzafVar.zzb(i4, it4.next());
                        i4++;
                    }
                }
                return zzafVar;
            case 14:
                zzg.zza("every", 1, list);
                zzaq zzaqVarZza13 = zzhVar.zza(list.get(0));
                if (!(zzaqVarZza13 instanceof zzar)) {
                    throw new IllegalArgumentException("Callback should be a method");
                }
                if (zzafVar.zzb() != 0 && zza(zzafVar, zzhVar, (zzar) zzaqVarZza13, false, true).zzb() != zzafVar.zzb()) {
                    return zzaq.zzi;
                }
                return zzaq.zzh;
            case 15:
                zzg.zza("shift", 0, list);
                if (zzafVar.zzb() == 0) {
                    return zzaq.zzc;
                }
                zzaq zzaqVarZza14 = zzafVar.zza(0);
                zzafVar.zzb(0);
                return zzaqVarZza14;
            case 16:
                zzg.zzc("slice", 2, list);
                if (list.isEmpty()) {
                    return zzafVar.zzc();
                }
                double dZzb3 = zzafVar.zzb();
                double dZza2 = zzg.zza(zzhVar.zza(list.get(0)).zze().doubleValue());
                if (dZza2 < 0.0d) {
                    dMin = Math.max(dZza2 + dZzb3, 0.0d);
                } else {
                    dMin = Math.min(dZza2, dZzb3);
                }
                if (list.size() == 2) {
                    double dZza3 = zzg.zza(zzhVar.zza(list.get(1)).zze().doubleValue());
                    if (dZza3 < 0.0d) {
                        dZzb3 = Math.max(dZzb3 + dZza3, 0.0d);
                    } else {
                        dZzb3 = Math.min(dZzb3, dZza3);
                    }
                }
                zzaf zzafVar8 = new zzaf();
                for (int i5 = (int) dMin; i5 < dZzb3; i5++) {
                    zzafVar8.zza(zzafVar.zza(i5));
                }
                return zzafVar8;
            case 17:
                return zza(zzafVar, zzhVar, list, false);
            case 18:
                zzg.zza("reverse", 0, list);
                int iZzb5 = zzafVar.zzb();
                if (iZzb5 != 0) {
                    for (int i6 = 0; i6 < iZzb5 / 2; i6++) {
                        if (zzafVar.zzc(i6)) {
                            zzaq zzaqVarZza15 = zzafVar.zza(i6);
                            zzafVar.zzb(i6, null);
                            int i7 = (iZzb5 - 1) - i6;
                            if (zzafVar.zzc(i7)) {
                                zzafVar.zzb(i6, zzafVar.zza(i7));
                            }
                            zzafVar.zzb(i7, zzaqVarZza15);
                        }
                    }
                }
                return zzafVar;
            case 19:
                zzg.zzc("indexOf", 2, list);
                zzaq zzaqVarZza16 = zzaq.zzc;
                if (list.isEmpty()) {
                    zzhVar2 = zzhVar;
                } else {
                    zzhVar2 = zzhVar;
                    zzaqVarZza16 = zzhVar2.zza(list.get(0));
                }
                if (list.size() > 1) {
                    double dZza4 = zzg.zza(zzhVar2.zza(list.get(1)).zze().doubleValue());
                    if (dZza4 >= zzafVar.zzb()) {
                        return new zzai(Double.valueOf(-1.0d));
                    }
                    dZzb = dZza4 < 0.0d ? ((double) zzafVar.zzb()) + dZza4 : dZza4;
                }
                Iterator<Integer> itZzg6 = zzafVar.zzg();
                while (itZzg6.hasNext()) {
                    int iIntValue2 = itZzg6.next().intValue();
                    double d = iIntValue2;
                    if (d >= dZzb && zzg.zza(zzafVar.zza(iIntValue2), zzaqVarZza16)) {
                        return new zzai(Double.valueOf(d));
                    }
                }
                return new zzai(Double.valueOf(-1.0d));
            default:
                throw new IllegalArgumentException("Command not supported");
        }
    }

    private static zzaq zza(zzaf zzafVar, zzh zzhVar, List<zzaq> list, boolean z) {
        zzaq zzaqVarZza;
        zzg.zzb("reduce", 1, list);
        zzg.zzc("reduce", 2, list);
        zzaq zzaqVarZza2 = zzhVar.zza(list.get(0));
        if (!(zzaqVarZza2 instanceof zzal)) {
            throw new IllegalArgumentException("Callback should be a method");
        }
        if (list.size() == 2) {
            zzaqVarZza = zzhVar.zza(list.get(1));
            if (zzaqVarZza instanceof zzaj) {
                throw new IllegalArgumentException("Failed to parse initial value");
            }
        } else {
            if (zzafVar.zzb() == 0) {
                throw new IllegalStateException("Empty array with no initial value error");
            }
            zzaqVarZza = null;
        }
        zzal zzalVar = (zzal) zzaqVarZza2;
        int iZzb = zzafVar.zzb();
        int i = z ? 0 : iZzb - 1;
        int i2 = z ? iZzb - 1 : 0;
        int i3 = z ? 1 : -1;
        if (zzaqVarZza == null) {
            zzaqVarZza = zzafVar.zza(i);
            i += i3;
        }
        while ((i2 - i) * i3 >= 0) {
            if (zzafVar.zzc(i)) {
                zzaqVarZza = zzalVar.zza(zzhVar, Arrays.asList(zzaqVarZza, zzafVar.zza(i), new zzai(Double.valueOf(i)), zzafVar));
                if (zzaqVarZza instanceof zzaj) {
                    throw new IllegalStateException("Reduce operation failed");
                }
                i += i3;
            } else {
                i += i3;
            }
        }
        return zzaqVarZza;
    }
}
