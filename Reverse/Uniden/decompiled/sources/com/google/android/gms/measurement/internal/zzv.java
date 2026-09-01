package com.google.android.gms.measurement.internal;

import androidx.collection.ArrayMap;
import java.util.ArrayList;
import java.util.BitSet;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
final class zzv {
    private String zza;
    private boolean zzb;
    private com.google.android.gms.internal.measurement.zzfy.zzm zzc;
    private BitSet zzd;
    private BitSet zze;
    private Map<Integer, Long> zzf;
    private Map<Integer, List<Long>> zzg;
    private final /* synthetic */ zzt zzh;

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v0, types: [com.google.android.gms.internal.measurement.zzfy$zzd$zza, com.google.android.gms.internal.measurement.zzjt$zzb] */
    /* JADX WARN: Type inference failed for: r1v10, types: [java.util.List] */
    /* JADX WARN: Type inference failed for: r1v8, types: [java.util.ArrayList] */
    /* JADX WARN: Type inference failed for: r1v9, types: [java.lang.Iterable] */
    /* JADX WARN: Type inference failed for: r7v5, types: [com.google.android.gms.internal.measurement.zzfy$zzm$zza] */
    final com.google.android.gms.internal.measurement.zzfy.zzd zza(int i) {
        ArrayList arrayList;
        ?? arrayList2;
        ?? Zzb = com.google.android.gms.internal.measurement.zzfy.zzd.zzb();
        Zzb.zza(i);
        Zzb.zza(this.zzb);
        com.google.android.gms.internal.measurement.zzfy.zzm zzmVar = this.zzc;
        if (zzmVar != null) {
            Zzb.zza(zzmVar);
        }
        ?? Zzd = com.google.android.gms.internal.measurement.zzfy.zzm.zze().zzb(zzoo.zza(this.zzd)).zzd(zzoo.zza(this.zze));
        if (this.zzf == null) {
            arrayList = null;
        } else {
            arrayList = new ArrayList(this.zzf.size());
            Iterator<Integer> it = this.zzf.keySet().iterator();
            while (it.hasNext()) {
                int iIntValue = it.next().intValue();
                Long l = this.zzf.get(Integer.valueOf(iIntValue));
                if (l != null) {
                    arrayList.add((com.google.android.gms.internal.measurement.zzfy.zze) ((com.google.android.gms.internal.measurement.zzjt) com.google.android.gms.internal.measurement.zzfy.zze.zzc().zza(iIntValue).zza(l.longValue()).zzai()));
                }
            }
        }
        if (arrayList != null) {
            Zzd.zza(arrayList);
        }
        if (this.zzg == null) {
            arrayList2 = Collections.emptyList();
        } else {
            arrayList2 = new ArrayList(this.zzg.size());
            for (Integer num : this.zzg.keySet()) {
                com.google.android.gms.internal.measurement.zzfy.zzn.zza zzaVarZza = com.google.android.gms.internal.measurement.zzfy.zzn.zzc().zza(num.intValue());
                List<Long> list = this.zzg.get(num);
                if (list != null) {
                    Collections.sort(list);
                    zzaVarZza.zza(list);
                }
                arrayList2.add((com.google.android.gms.internal.measurement.zzfy.zzn) ((com.google.android.gms.internal.measurement.zzjt) zzaVarZza.zzai()));
            }
        }
        Zzd.zzc(arrayList2);
        Zzb.zza(Zzd);
        return (com.google.android.gms.internal.measurement.zzfy.zzd) ((com.google.android.gms.internal.measurement.zzjt) Zzb.zzai());
    }

    private zzv(zzt zztVar, String str) {
        this.zzh = zztVar;
        this.zza = str;
        this.zzb = true;
        this.zzd = new BitSet();
        this.zze = new BitSet();
        this.zzf = new ArrayMap();
        this.zzg = new ArrayMap();
    }

    private zzv(zzt zztVar, String str, com.google.android.gms.internal.measurement.zzfy.zzm zzmVar, BitSet bitSet, BitSet bitSet2, Map<Integer, Long> map, Map<Integer, Long> map2) {
        this.zzh = zztVar;
        this.zza = str;
        this.zzd = bitSet;
        this.zze = bitSet2;
        this.zzf = map;
        this.zzg = new ArrayMap();
        if (map2 != null) {
            for (Integer num : map2.keySet()) {
                ArrayList arrayList = new ArrayList();
                arrayList.add(map2.get(num));
                this.zzg.put(num, arrayList);
            }
        }
        this.zzb = false;
        this.zzc = zzmVar;
    }

    final void zza(zzaa zzaaVar) {
        int iZza = zzaaVar.zza();
        if (zzaaVar.zzc != null) {
            this.zze.set(iZza, zzaaVar.zzc.booleanValue());
        }
        if (zzaaVar.zzd != null) {
            this.zzd.set(iZza, zzaaVar.zzd.booleanValue());
        }
        if (zzaaVar.zze != null) {
            Long l = this.zzf.get(Integer.valueOf(iZza));
            long jLongValue = zzaaVar.zze.longValue() / 1000;
            if (l == null || jLongValue > l.longValue()) {
                this.zzf.put(Integer.valueOf(iZza), Long.valueOf(jLongValue));
            }
        }
        if (zzaaVar.zzf != null) {
            List<Long> arrayList = this.zzg.get(Integer.valueOf(iZza));
            if (arrayList == null) {
                arrayList = new ArrayList<>();
                this.zzg.put(Integer.valueOf(iZza), arrayList);
            }
            if (zzaaVar.zzc()) {
                arrayList.clear();
            }
            if (com.google.android.gms.internal.measurement.zzoe.zza() && this.zzh.zze().zzf(this.zza, zzbh.zzbp) && zzaaVar.zzb()) {
                arrayList.clear();
            }
            if (com.google.android.gms.internal.measurement.zzoe.zza() && this.zzh.zze().zzf(this.zza, zzbh.zzbp)) {
                long jLongValue2 = zzaaVar.zzf.longValue() / 1000;
                if (arrayList.contains(Long.valueOf(jLongValue2))) {
                    return;
                }
                arrayList.add(Long.valueOf(jLongValue2));
                return;
            }
            arrayList.add(Long.valueOf(zzaaVar.zzf.longValue() / 1000));
        }
    }
}
