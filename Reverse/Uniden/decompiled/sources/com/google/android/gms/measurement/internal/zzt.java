package com.google.android.gms.measurement.internal;

import android.content.ContentValues;
import android.database.sqlite.SQLiteException;
import androidx.collection.ArrayMap;
import com.google.android.gms.common.internal.Preconditions;
import java.util.ArrayList;
import java.util.BitSet;
import java.util.Collections;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
final class zzt extends zznr {
    private String zza;
    private Set<Integer> zzb;
    private Map<Integer, zzv> zzc;
    private Long zzd;
    private Long zze;

    private final zzv zza(Integer num) {
        if (this.zzc.containsKey(num)) {
            return this.zzc.get(num);
        }
        zzv zzvVar = new zzv(this, this.zza);
        this.zzc.put(num, zzvVar);
        return zzvVar;
    }

    @Override // com.google.android.gms.measurement.internal.zznr
    protected final boolean zzc() {
        return false;
    }

    final List<com.google.android.gms.internal.measurement.zzfy.zzd> zza(String str, List<com.google.android.gms.internal.measurement.zzfy.zzf> list, List<com.google.android.gms.internal.measurement.zzfy.zzo> list2, Long l, Long l2) {
        return zza(str, list, list2, l, l2, false);
    }

    final List<com.google.android.gms.internal.measurement.zzfy.zzd> zza(String str, List<com.google.android.gms.internal.measurement.zzfy.zzf> list, List<com.google.android.gms.internal.measurement.zzfy.zzo> list2, Long l, Long l2, boolean z) {
        boolean z2;
        Map<Integer, com.google.android.gms.internal.measurement.zzfy.zzm> map;
        List<com.google.android.gms.internal.measurement.zzfo.zzb> list3;
        Map<Integer, com.google.android.gms.internal.measurement.zzfy.zzm> map2;
        Iterator it;
        Map<Integer, List<Integer>> map3;
        Iterator<Integer> it2;
        Preconditions.checkNotEmpty(str);
        Preconditions.checkNotNull(list);
        Preconditions.checkNotNull(list2);
        this.zza = str;
        this.zzb = new HashSet();
        this.zzc = new ArrayMap();
        this.zzd = l;
        this.zze = l2;
        Iterator<com.google.android.gms.internal.measurement.zzfy.zzf> it3 = list.iterator();
        while (true) {
            if (!it3.hasNext()) {
                z2 = false;
                break;
            }
            if ("_s".equals(it3.next().zzg())) {
                z2 = true;
                break;
            }
        }
        boolean z3 = com.google.android.gms.internal.measurement.zzoe.zza() && zze().zzf(this.zza, zzbh.zzbp);
        boolean z4 = com.google.android.gms.internal.measurement.zzoe.zza() && zze().zzf(this.zza, zzbh.zzbo);
        if (z2) {
            zzal zzalVarZzh = zzh();
            String str2 = this.zza;
            zzalVarZzh.zzal();
            zzalVarZzh.zzt();
            Preconditions.checkNotEmpty(str2);
            ContentValues contentValues = new ContentValues();
            contentValues.put("current_session_count", (Integer) 0);
            try {
                zzalVarZzh.m145e_().update("events", contentValues, "app_id = ?", new String[]{str2});
            } catch (SQLiteException e) {
                zzalVarZzh.zzj().zzg().zza("Error resetting session-scoped event counts. appId", zzgo.zza(str2), e);
            }
        }
        Map<Integer, List<com.google.android.gms.internal.measurement.zzfo.zzb>> mapEmptyMap = Collections.emptyMap();
        if (z4 && z3) {
            mapEmptyMap = zzh().zzn(this.zza);
        }
        Map<Integer, com.google.android.gms.internal.measurement.zzfy.zzm> mapZzm = zzh().zzm(this.zza);
        if (!mapZzm.isEmpty()) {
            HashSet hashSet = new HashSet(mapZzm.keySet());
            if (z2) {
                String str3 = this.zza;
                Map<Integer, List<Integer>> mapZzo = zzh().zzo(this.zza);
                Preconditions.checkNotEmpty(str3);
                Preconditions.checkNotNull(mapZzm);
                ArrayMap arrayMap = new ArrayMap();
                if (!mapZzm.isEmpty()) {
                    Iterator<Integer> it4 = mapZzm.keySet().iterator();
                    while (it4.hasNext()) {
                        int iIntValue = it4.next().intValue();
                        com.google.android.gms.internal.measurement.zzfy.zzm zzmVar = mapZzm.get(Integer.valueOf(iIntValue));
                        List<Integer> list4 = mapZzo.get(Integer.valueOf(iIntValue));
                        if (list4 == null || list4.isEmpty()) {
                            map3 = mapZzo;
                            it2 = it4;
                            arrayMap.put(Integer.valueOf(iIntValue), zzmVar);
                        } else {
                            List<Long> listZza = mo147g_().zza(zzmVar.zzi(), list4);
                            if (!listZza.isEmpty()) {
                                com.google.android.gms.internal.measurement.zzfy.zzm.zza zzaVarZzb = zzmVar.zzcd().zzb().zzb(listZza);
                                zzaVarZzb.zzd().zzd(mo147g_().zza(zzmVar.zzk(), list4));
                                ArrayList arrayList = new ArrayList();
                                for (com.google.android.gms.internal.measurement.zzfy.zze zzeVar : zzmVar.zzh()) {
                                    Map<Integer, List<Integer>> map4 = mapZzo;
                                    Iterator<Integer> it5 = it4;
                                    if (!list4.contains(Integer.valueOf(zzeVar.zza()))) {
                                        arrayList.add(zzeVar);
                                    }
                                    mapZzo = map4;
                                    it4 = it5;
                                }
                                map3 = mapZzo;
                                it2 = it4;
                                zzaVarZzb.zza().zza(arrayList);
                                ArrayList arrayList2 = new ArrayList();
                                for (com.google.android.gms.internal.measurement.zzfy.zzn zznVar : zzmVar.zzj()) {
                                    if (!list4.contains(Integer.valueOf(zznVar.zzb()))) {
                                        arrayList2.add(zznVar);
                                    }
                                }
                                zzaVarZzb.zzc().zzc(arrayList2);
                                arrayMap.put(Integer.valueOf(iIntValue), (com.google.android.gms.internal.measurement.zzfy.zzm) ((com.google.android.gms.internal.measurement.zzjt) zzaVarZzb.zzai()));
                            }
                        }
                        mapZzo = map3;
                        it4 = it2;
                    }
                }
                map = arrayMap;
            } else {
                map = mapZzm;
            }
            Iterator it6 = hashSet.iterator();
            while (it6.hasNext()) {
                int iIntValue2 = ((Integer) it6.next()).intValue();
                com.google.android.gms.internal.measurement.zzfy.zzm zzmVar2 = map.get(Integer.valueOf(iIntValue2));
                BitSet bitSet = new BitSet();
                BitSet bitSet2 = new BitSet();
                ArrayMap arrayMap2 = new ArrayMap();
                if (zzmVar2 != null && zzmVar2.zza() != 0) {
                    for (com.google.android.gms.internal.measurement.zzfy.zze zzeVar2 : zzmVar2.zzh()) {
                        if (zzeVar2.zzf()) {
                            arrayMap2.put(Integer.valueOf(zzeVar2.zza()), zzeVar2.zze() ? Long.valueOf(zzeVar2.zzb()) : null);
                        }
                    }
                }
                ArrayMap arrayMap3 = new ArrayMap();
                if (zzmVar2 != null && zzmVar2.zzc() != 0) {
                    for (Iterator<com.google.android.gms.internal.measurement.zzfy.zzn> it7 = zzmVar2.zzj().iterator(); it7.hasNext(); it7 = it7) {
                        com.google.android.gms.internal.measurement.zzfy.zzn next = it7.next();
                        if (next.zzf() && next.zza() > 0) {
                            arrayMap3.put(Integer.valueOf(next.zzb()), Long.valueOf(next.zza(next.zza() - 1)));
                        }
                    }
                }
                if (zzmVar2 != null) {
                    int i = 0;
                    while (i < (zzmVar2.zzd() << 6)) {
                        if (zzoo.zza(zzmVar2.zzk(), i)) {
                            map2 = map;
                            it = it6;
                            zzj().zzp().zza("Filter already evaluated. audience ID, filter ID", Integer.valueOf(iIntValue2), Integer.valueOf(i));
                            bitSet2.set(i);
                            if (zzoo.zza(zzmVar2.zzi(), i)) {
                                bitSet.set(i);
                            }
                            i++;
                            map = map2;
                            it6 = it;
                        } else {
                            map2 = map;
                            it = it6;
                        }
                        arrayMap2.remove(Integer.valueOf(i));
                        i++;
                        map = map2;
                        it6 = it;
                    }
                }
                Map<Integer, com.google.android.gms.internal.measurement.zzfy.zzm> map5 = map;
                Iterator it8 = it6;
                com.google.android.gms.internal.measurement.zzfy.zzm zzmVar3 = mapZzm.get(Integer.valueOf(iIntValue2));
                if (z4 && z3 && (list3 = mapEmptyMap.get(Integer.valueOf(iIntValue2))) != null && this.zze != null && this.zzd != null) {
                    for (com.google.android.gms.internal.measurement.zzfo.zzb zzbVar : list3) {
                        int iZzb = zzbVar.zzb();
                        long jLongValue = this.zze.longValue() / 1000;
                        if (zzbVar.zzi()) {
                            jLongValue = this.zzd.longValue() / 1000;
                        }
                        if (arrayMap2.containsKey(Integer.valueOf(iZzb))) {
                            arrayMap2.put(Integer.valueOf(iZzb), Long.valueOf(jLongValue));
                        }
                        if (arrayMap3.containsKey(Integer.valueOf(iZzb))) {
                            arrayMap3.put(Integer.valueOf(iZzb), Long.valueOf(jLongValue));
                        }
                        mapEmptyMap = mapEmptyMap;
                    }
                }
                this.zzc.put(Integer.valueOf(iIntValue2), new zzv(this, this.zza, zzmVar3, bitSet, bitSet2, arrayMap2, arrayMap3));
                map = map5;
                it6 = it8;
                mapEmptyMap = mapEmptyMap;
                mapZzm = mapZzm;
            }
        }
        if (com.google.android.gms.internal.measurement.zznm.zza() && zze().zzf(null, zzbh.zzcy)) {
            zza(list, z);
            if (z) {
                return new ArrayList();
            }
            zza(list2);
            return zzu();
        }
        zza(list, true);
        zza(list2);
        return zzu();
    }

    private final List<com.google.android.gms.internal.measurement.zzfy.zzd> zzu() {
        ArrayList arrayList = new ArrayList();
        Set<Integer> setKeySet = this.zzc.keySet();
        setKeySet.removeAll(this.zzb);
        Iterator<Integer> it = setKeySet.iterator();
        while (it.hasNext()) {
            int iIntValue = it.next().intValue();
            zzv zzvVar = this.zzc.get(Integer.valueOf(iIntValue));
            Preconditions.checkNotNull(zzvVar);
            com.google.android.gms.internal.measurement.zzfy.zzd zzdVarZza = zzvVar.zza(iIntValue);
            arrayList.add(zzdVarZza);
            zzal zzalVarZzh = zzh();
            String str = this.zza;
            com.google.android.gms.internal.measurement.zzfy.zzm zzmVarZzd = zzdVarZza.zzd();
            zzalVarZzh.zzal();
            zzalVarZzh.zzt();
            Preconditions.checkNotEmpty(str);
            Preconditions.checkNotNull(zzmVarZzd);
            byte[] bArrZzca = zzmVarZzd.zzca();
            ContentValues contentValues = new ContentValues();
            contentValues.put("app_id", str);
            contentValues.put("audience_id", Integer.valueOf(iIntValue));
            contentValues.put("current_results", bArrZzca);
            try {
                if (zzalVarZzh.m145e_().insertWithOnConflict("audience_filter_values", null, contentValues, 5) == -1) {
                    zzalVarZzh.zzj().zzg().zza("Failed to insert filter results (got -1). appId", zzgo.zza(str));
                }
            } catch (SQLiteException e) {
                zzalVarZzh.zzj().zzg().zza("Error storing filter results. appId", zzgo.zza(str), e);
            }
        }
        return arrayList;
    }

    zzt(zznv zznvVar) {
        super(zznvVar);
    }

    /* JADX WARN: Multi-variable type inference failed */
    private final void zza(List<com.google.android.gms.internal.measurement.zzfy.zzf> list, boolean z) {
        zzbb zzbbVar;
        int i;
        Map<Integer, List<com.google.android.gms.internal.measurement.zzfo.zzb>> map;
        long j;
        if (list.isEmpty()) {
            return;
        }
        String str = null;
        zzy zzyVar = new zzy(this);
        ArrayMap arrayMap = new ArrayMap();
        for (com.google.android.gms.internal.measurement.zzfy.zzf zzfVar : list) {
            com.google.android.gms.internal.measurement.zzfy.zzf zzfVarZza = zzyVar.zza(this.zza, zzfVar);
            if (zzfVarZza != null) {
                zzal zzalVarZzh = zzh();
                String str2 = this.zza;
                String strZzg = zzfVarZza.zzg();
                zzbb zzbbVarZzd = zzalVarZzh.zzd(str2, zzfVar.zzg());
                if (zzbbVarZzd == null) {
                    zzalVarZzh.zzj().zzu().zza("Event aggregate wasn't created during raw event logging. appId, event", zzgo.zza(str2), zzalVarZzh.zzi().zza(strZzg));
                    zzbbVar = new zzbb(str2, zzfVar.zzg(), 1L, 1L, 1L, zzfVar.zzd(), 0L, null, null, null, null);
                } else {
                    zzbbVar = new zzbb(zzbbVarZzd.zza, zzbbVarZzd.zzb, zzbbVarZzd.zzc + 1, zzbbVarZzd.zzd + 1, zzbbVarZzd.zze + 1, zzbbVarZzd.zzf, zzbbVarZzd.zzg, zzbbVarZzd.zzh, zzbbVarZzd.zzi, zzbbVarZzd.zzj, zzbbVarZzd.zzk);
                }
                zzbb zzbbVar2 = zzbbVar;
                zzh().zza(zzbbVar2);
                if (!com.google.android.gms.internal.measurement.zznm.zza() || !zze().zzf(str, zzbh.zzcy) || !z) {
                    long j2 = zzbbVar2.zzc;
                    String strZzg2 = zzfVarZza.zzg();
                    Map<Integer, List<com.google.android.gms.internal.measurement.zzfo.zzb>> mapZzf = (Map) arrayMap.get(strZzg2);
                    if (mapZzf == null) {
                        mapZzf = zzh().zzf(this.zza, strZzg2);
                        arrayMap.put(strZzg2, mapZzf);
                    }
                    Map<Integer, List<com.google.android.gms.internal.measurement.zzfo.zzb>> map2 = mapZzf;
                    Iterator<Integer> it = map2.keySet().iterator();
                    while (it.hasNext()) {
                        int iIntValue = it.next().intValue();
                        if (this.zzb.contains(Integer.valueOf(iIntValue))) {
                            zzj().zzp().zza("Skipping failed audience ID", Integer.valueOf(iIntValue));
                        } else {
                            Iterator<com.google.android.gms.internal.measurement.zzfo.zzb> it2 = map2.get(Integer.valueOf(iIntValue)).iterator();
                            boolean zZza = true;
                            while (true) {
                                if (!it2.hasNext()) {
                                    i = iIntValue;
                                    map = map2;
                                    j = j2;
                                    break;
                                }
                                com.google.android.gms.internal.measurement.zzfo.zzb next = it2.next();
                                zzx zzxVar = new zzx(this, this.zza, iIntValue, next);
                                i = iIntValue;
                                map = map2;
                                j = j2;
                                zZza = zzxVar.zza(this.zzd, this.zze, zzfVarZza, j2, zzbbVar2, zza(iIntValue, next.zzb()));
                                if (zZza) {
                                    zza(Integer.valueOf(i)).zza(zzxVar);
                                    iIntValue = i;
                                    map2 = map;
                                    j2 = j;
                                } else {
                                    this.zzb.add(Integer.valueOf(i));
                                    break;
                                }
                            }
                            if (!zZza) {
                                this.zzb.add(Integer.valueOf(i));
                            }
                            map2 = map;
                            j2 = j;
                            str = null;
                        }
                    }
                }
            }
        }
    }

    private final void zza(List<com.google.android.gms.internal.measurement.zzfy.zzo> list) {
        if (list.isEmpty()) {
            return;
        }
        ArrayMap arrayMap = new ArrayMap();
        for (com.google.android.gms.internal.measurement.zzfy.zzo zzoVar : list) {
            String strZzg = zzoVar.zzg();
            Map<Integer, List<com.google.android.gms.internal.measurement.zzfo.zze>> mapZzg = (Map) arrayMap.get(strZzg);
            if (mapZzg == null) {
                mapZzg = zzh().zzg(this.zza, strZzg);
                arrayMap.put(strZzg, mapZzg);
            }
            Iterator<Integer> it = mapZzg.keySet().iterator();
            while (it.hasNext()) {
                int iIntValue = it.next().intValue();
                if (this.zzb.contains(Integer.valueOf(iIntValue))) {
                    zzj().zzp().zza("Skipping failed audience ID", Integer.valueOf(iIntValue));
                    break;
                }
                Iterator<com.google.android.gms.internal.measurement.zzfo.zze> it2 = mapZzg.get(Integer.valueOf(iIntValue)).iterator();
                boolean zZza = true;
                while (true) {
                    if (it2.hasNext()) {
                        com.google.android.gms.internal.measurement.zzfo.zze next = it2.next();
                        if (zzj().zza(2)) {
                            zzj().zzp().zza("Evaluating filter. audience, filter, property", Integer.valueOf(iIntValue), next.zzi() ? Integer.valueOf(next.zza()) : null, zzi().zzc(next.zze()));
                            zzj().zzp().zza("Filter definition", mo147g_().zza(next));
                        }
                        if (!next.zzi() || next.zza() > 256) {
                            zzj().zzu().zza("Invalid property filter ID. appId, id", zzgo.zza(this.zza), String.valueOf(next.zzi() ? Integer.valueOf(next.zza()) : null));
                            this.zzb.add(Integer.valueOf(iIntValue));
                        } else {
                            zzz zzzVar = new zzz(this, this.zza, iIntValue, next);
                            zZza = zzzVar.zza(this.zzd, this.zze, zzoVar, zza(iIntValue, next.zza()));
                            if (zZza) {
                                zza(Integer.valueOf(iIntValue)).zza(zzzVar);
                            } else {
                                this.zzb.add(Integer.valueOf(iIntValue));
                            }
                        }
                    }
                    if (!zZza) {
                        this.zzb.add(Integer.valueOf(iIntValue));
                    }
                }
            }
        }
    }

    private final boolean zza(int i, int i2) {
        zzv zzvVar = this.zzc.get(Integer.valueOf(i));
        if (zzvVar == null) {
            return false;
        }
        return zzvVar.zzd.get(i2);
    }
}
