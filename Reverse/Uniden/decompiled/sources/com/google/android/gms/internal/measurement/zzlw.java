package com.google.android.gms.internal.measurement;

import java.io.IOException;
import java.util.Iterator;
import java.util.List;
import java.util.RandomAccess;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
final class zzlw {
    private static final zzmk<?, ?> zza = new zzmm();

    static int zza(int i, List<?> list, boolean z) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return size * zzjc.zzb(i, true);
    }

    public static zzmk<?, ?> zza() {
        return zza;
    }

    static int zza(List<?> list) {
        return list.size();
    }

    static int zza(int i, List<zzik> list) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        int iZzi = size * zzjc.zzi(i);
        for (int i2 = 0; i2 < list.size(); i2++) {
            iZzi += zzjc.zzb(list.get(i2));
        }
        return iZzi;
    }

    static int zzb(int i, List<Integer> list, boolean z) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return zzb(list) + (size * zzjc.zzi(i));
    }

    static int zzb(List<Integer> list) {
        int iZzd;
        int size = list.size();
        int i = 0;
        if (size == 0) {
            return 0;
        }
        if (list instanceof zzjw) {
            zzjw zzjwVar = (zzjw) list;
            iZzd = 0;
            while (i < size) {
                iZzd += zzjc.zzd(zzjwVar.zzb(i));
                i++;
            }
        } else {
            iZzd = 0;
            while (i < size) {
                iZzd += zzjc.zzd(list.get(i).intValue());
                i++;
            }
        }
        return iZzd;
    }

    static int zzc(int i, List<?> list, boolean z) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return size * zzjc.zzf(i, 0);
    }

    static int zzc(List<?> list) {
        return list.size() << 2;
    }

    static int zzd(int i, List<?> list, boolean z) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return size * zzjc.zzc(i, 0L);
    }

    static int zzd(List<?> list) {
        return list.size() << 3;
    }

    static int zza(int i, List<zzlc> list, zzlu<?> zzluVar) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        int iZzb = 0;
        for (int i2 = 0; i2 < size; i2++) {
            iZzb += zzjc.zzb(i, list.get(i2), zzluVar);
        }
        return iZzb;
    }

    static int zze(int i, List<Integer> list, boolean z) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return zze(list) + (size * zzjc.zzi(i));
    }

    static int zze(List<Integer> list) {
        int iZzf;
        int size = list.size();
        int i = 0;
        if (size == 0) {
            return 0;
        }
        if (list instanceof zzjw) {
            zzjw zzjwVar = (zzjw) list;
            iZzf = 0;
            while (i < size) {
                iZzf += zzjc.zzf(zzjwVar.zzb(i));
                i++;
            }
        } else {
            iZzf = 0;
            while (i < size) {
                iZzf += zzjc.zzf(list.get(i).intValue());
                i++;
            }
        }
        return iZzf;
    }

    static int zzf(int i, List<Long> list, boolean z) {
        if (list.size() == 0) {
            return 0;
        }
        return zzf(list) + (list.size() * zzjc.zzi(i));
    }

    static int zzf(List<Long> list) {
        int iZzd;
        int size = list.size();
        int i = 0;
        if (size == 0) {
            return 0;
        }
        if (list instanceof zzkn) {
            zzkn zzknVar = (zzkn) list;
            iZzd = 0;
            while (i < size) {
                iZzd += zzjc.zzd(zzknVar.zzb(i));
                i++;
            }
        } else {
            iZzd = 0;
            while (i < size) {
                iZzd += zzjc.zzd(list.get(i).longValue());
                i++;
            }
        }
        return iZzd;
    }

    static int zza(int i, Object obj, zzlu<?> zzluVar) {
        if (obj instanceof zzkk) {
            return zzjc.zzb(i, (zzkk) obj);
        }
        return zzjc.zzc(i, (zzlc) obj, zzluVar);
    }

    static int zzb(int i, List<?> list, zzlu<?> zzluVar) {
        int iZza;
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        int iZzi = zzjc.zzi(i) * size;
        for (int i2 = 0; i2 < size; i2++) {
            Object obj = list.get(i2);
            if (obj instanceof zzkk) {
                iZza = zzjc.zza((zzkk) obj);
            } else {
                iZza = zzjc.zza((zzlc) obj, zzluVar);
            }
            iZzi += iZza;
        }
        return iZzi;
    }

    static int zzg(int i, List<Integer> list, boolean z) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return zzg(list) + (size * zzjc.zzi(i));
    }

    static int zzg(List<Integer> list) {
        int iZzh;
        int size = list.size();
        int i = 0;
        if (size == 0) {
            return 0;
        }
        if (list instanceof zzjw) {
            zzjw zzjwVar = (zzjw) list;
            iZzh = 0;
            while (i < size) {
                iZzh += zzjc.zzh(zzjwVar.zzb(i));
                i++;
            }
        } else {
            iZzh = 0;
            while (i < size) {
                iZzh += zzjc.zzh(list.get(i).intValue());
                i++;
            }
        }
        return iZzh;
    }

    static int zzh(int i, List<Long> list, boolean z) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return zzh(list) + (size * zzjc.zzi(i));
    }

    static int zzh(List<Long> list) {
        int iZzf;
        int size = list.size();
        int i = 0;
        if (size == 0) {
            return 0;
        }
        if (list instanceof zzkn) {
            zzkn zzknVar = (zzkn) list;
            iZzf = 0;
            while (i < size) {
                iZzf += zzjc.zzf(zzknVar.zzb(i));
                i++;
            }
        } else {
            iZzf = 0;
            while (i < size) {
                iZzf += zzjc.zzf(list.get(i).longValue());
                i++;
            }
        }
        return iZzf;
    }

    static int zzb(int i, List<?> list) {
        int iZzb;
        int iZzb2;
        int size = list.size();
        int i2 = 0;
        if (size == 0) {
            return 0;
        }
        int iZzi = zzjc.zzi(i) * size;
        if (list instanceof zzkj) {
            zzkj zzkjVar = (zzkj) list;
            while (i2 < size) {
                Object objZza = zzkjVar.zza(i2);
                if (objZza instanceof zzik) {
                    iZzb2 = zzjc.zzb((zzik) objZza);
                } else {
                    iZzb2 = zzjc.zzb((String) objZza);
                }
                iZzi += iZzb2;
                i2++;
            }
        } else {
            while (i2 < size) {
                Object obj = list.get(i2);
                if (obj instanceof zzik) {
                    iZzb = zzjc.zzb((zzik) obj);
                } else {
                    iZzb = zzjc.zzb((String) obj);
                }
                iZzi += iZzb;
                i2++;
            }
        }
        return iZzi;
    }

    static int zzi(int i, List<Integer> list, boolean z) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return zzi(list) + (size * zzjc.zzi(i));
    }

    static int zzi(List<Integer> list) {
        int iZzj;
        int size = list.size();
        int i = 0;
        if (size == 0) {
            return 0;
        }
        if (list instanceof zzjw) {
            zzjw zzjwVar = (zzjw) list;
            iZzj = 0;
            while (i < size) {
                iZzj += zzjc.zzj(zzjwVar.zzb(i));
                i++;
            }
        } else {
            iZzj = 0;
            while (i < size) {
                iZzj += zzjc.zzj(list.get(i).intValue());
                i++;
            }
        }
        return iZzj;
    }

    static int zzj(int i, List<Long> list, boolean z) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return zzj(list) + (size * zzjc.zzi(i));
    }

    static int zzj(List<Long> list) {
        int iZzg;
        int size = list.size();
        int i = 0;
        if (size == 0) {
            return 0;
        }
        if (list instanceof zzkn) {
            zzkn zzknVar = (zzkn) list;
            iZzg = 0;
            while (i < size) {
                iZzg += zzjc.zzg(zzknVar.zzb(i));
                i++;
            }
        } else {
            iZzg = 0;
            while (i < size) {
                iZzg += zzjc.zzg(list.get(i).longValue());
                i++;
            }
        }
        return iZzg;
    }

    static <UT, UB> UB zza(Object obj, int i, List<Integer> list, zzjx zzjxVar, UB ub, zzmk<UT, UB> zzmkVar) {
        if (zzjxVar == null) {
            return ub;
        }
        if (list instanceof RandomAccess) {
            int size = list.size();
            int i2 = 0;
            for (int i3 = 0; i3 < size; i3++) {
                int iIntValue = list.get(i3).intValue();
                if (zzjxVar.zza(iIntValue)) {
                    if (i3 != i2) {
                        list.set(i2, Integer.valueOf(iIntValue));
                    }
                    i2++;
                } else {
                    ub = (UB) zza(obj, i, iIntValue, ub, zzmkVar);
                }
            }
            if (i2 != size) {
                list.subList(i2, size).clear();
            }
        } else {
            Iterator<Integer> it = list.iterator();
            while (it.hasNext()) {
                int iIntValue2 = it.next().intValue();
                if (!zzjxVar.zza(iIntValue2)) {
                    ub = (UB) zza(obj, i, iIntValue2, ub, zzmkVar);
                    it.remove();
                }
            }
        }
        return ub;
    }

    static <UT, UB> UB zza(Object obj, int i, int i2, UB ub, zzmk<UT, UB> zzmkVar) {
        if (ub == null) {
            ub = zzmkVar.zzc(obj);
        }
        zzmkVar.zzb(ub, i, i2);
        return ub;
    }

    static <T, FT extends zzjo<FT>> void zza(zzji<FT> zzjiVar, T t, T t2) {
        zzjm<T> zzjmVarZza = zzjiVar.zza(t2);
        if (zzjmVarZza.zza.isEmpty()) {
            return;
        }
        zzjiVar.zzb(t).zza((zzjm) zzjmVarZza);
    }

    static <T> void zza(zzkv zzkvVar, T t, T t2, long j) {
        zzml.zza(t, j, zzkvVar.zza(zzml.zze(t, j), zzml.zze(t2, j)));
    }

    static <T, UT, UB> void zza(zzmk<UT, UB> zzmkVar, T t, T t2) {
        zzmkVar.zzc(t, zzmkVar.zza(zzmkVar.zzd(t), zzmkVar.zzd(t2)));
    }

    public static void zza(Class<?> cls) {
        zzjt.class.isAssignableFrom(cls);
    }

    public static void zza(int i, List<Boolean> list, zznb zznbVar, boolean z) throws IOException {
        if (list == null || list.isEmpty()) {
            return;
        }
        zznbVar.zza(i, list, z);
    }

    public static void zza(int i, List<zzik> list, zznb zznbVar) throws IOException {
        if (list == null || list.isEmpty()) {
            return;
        }
        zznbVar.zza(i, list);
    }

    public static void zzb(int i, List<Double> list, zznb zznbVar, boolean z) throws IOException {
        if (list == null || list.isEmpty()) {
            return;
        }
        zznbVar.zzb(i, list, z);
    }

    public static void zzc(int i, List<Integer> list, zznb zznbVar, boolean z) throws IOException {
        if (list == null || list.isEmpty()) {
            return;
        }
        zznbVar.zzc(i, list, z);
    }

    public static void zzd(int i, List<Integer> list, zznb zznbVar, boolean z) throws IOException {
        if (list == null || list.isEmpty()) {
            return;
        }
        zznbVar.zzd(i, list, z);
    }

    public static void zze(int i, List<Long> list, zznb zznbVar, boolean z) throws IOException {
        if (list == null || list.isEmpty()) {
            return;
        }
        zznbVar.zze(i, list, z);
    }

    public static void zzf(int i, List<Float> list, zznb zznbVar, boolean z) throws IOException {
        if (list == null || list.isEmpty()) {
            return;
        }
        zznbVar.zzf(i, list, z);
    }

    public static void zza(int i, List<?> list, zznb zznbVar, zzlu<?> zzluVar) throws IOException {
        if (list == null || list.isEmpty()) {
            return;
        }
        zznbVar.zza(i, list, (zzlu) zzluVar);
    }

    public static void zzg(int i, List<Integer> list, zznb zznbVar, boolean z) throws IOException {
        if (list == null || list.isEmpty()) {
            return;
        }
        zznbVar.zzg(i, list, z);
    }

    public static void zzh(int i, List<Long> list, zznb zznbVar, boolean z) throws IOException {
        if (list == null || list.isEmpty()) {
            return;
        }
        zznbVar.zzh(i, list, z);
    }

    public static void zzb(int i, List<?> list, zznb zznbVar, zzlu<?> zzluVar) throws IOException {
        if (list == null || list.isEmpty()) {
            return;
        }
        zznbVar.zzb(i, list, (zzlu) zzluVar);
    }

    public static void zzi(int i, List<Integer> list, zznb zznbVar, boolean z) throws IOException {
        if (list == null || list.isEmpty()) {
            return;
        }
        zznbVar.zzi(i, list, z);
    }

    public static void zzj(int i, List<Long> list, zznb zznbVar, boolean z) throws IOException {
        if (list == null || list.isEmpty()) {
            return;
        }
        zznbVar.zzj(i, list, z);
    }

    public static void zzk(int i, List<Integer> list, zznb zznbVar, boolean z) throws IOException {
        if (list == null || list.isEmpty()) {
            return;
        }
        zznbVar.zzk(i, list, z);
    }

    public static void zzl(int i, List<Long> list, zznb zznbVar, boolean z) throws IOException {
        if (list == null || list.isEmpty()) {
            return;
        }
        zznbVar.zzl(i, list, z);
    }

    public static void zzb(int i, List<String> list, zznb zznbVar) throws IOException {
        if (list == null || list.isEmpty()) {
            return;
        }
        zznbVar.zzb(i, list);
    }

    public static void zzm(int i, List<Integer> list, zznb zznbVar, boolean z) throws IOException {
        if (list == null || list.isEmpty()) {
            return;
        }
        zznbVar.zzm(i, list, z);
    }

    public static void zzn(int i, List<Long> list, zznb zznbVar, boolean z) throws IOException {
        if (list == null || list.isEmpty()) {
            return;
        }
        zznbVar.zzn(i, list, z);
    }

    static boolean zza(Object obj, Object obj2) {
        if (obj != obj2) {
            return obj != null && obj.equals(obj2);
        }
        return true;
    }
}
