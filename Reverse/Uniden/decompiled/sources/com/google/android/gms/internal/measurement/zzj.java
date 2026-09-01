package com.google.android.gms.internal.measurement;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzj {
    public static zzaq zza(zzgd.zzd zzdVar) {
        if (zzdVar == null) {
            return zzaq.zzc;
        }
        int i = zzi.zza[zzdVar.zzb().ordinal()];
        if (i == 1) {
            return zzdVar.zzj() ? new zzas(zzdVar.zze()) : zzaq.zzj;
        }
        if (i == 2) {
            return zzdVar.zzi() ? new zzai(Double.valueOf(zzdVar.zza())) : new zzai(null);
        }
        if (i == 3) {
            return zzdVar.zzh() ? new zzag(Boolean.valueOf(zzdVar.zzg())) : new zzag(null);
        }
        if (i != 4) {
            if (i != 5) {
                throw new IllegalStateException("Invalid entity: " + String.valueOf(zzdVar));
            }
            throw new IllegalArgumentException("Unknown type found. Cannot convert entity");
        }
        List<zzgd.zzd> listZzf = zzdVar.zzf();
        ArrayList arrayList = new ArrayList();
        Iterator<zzgd.zzd> it = listZzf.iterator();
        while (it.hasNext()) {
            arrayList.add(zza(it.next()));
        }
        return new zzat(zzdVar.zzd(), arrayList);
    }

    public static zzaq zza(Object obj) {
        if (obj == null) {
            return zzaq.zzd;
        }
        if (obj instanceof String) {
            return new zzas((String) obj);
        }
        if (obj instanceof Double) {
            return new zzai((Double) obj);
        }
        if (obj instanceof Long) {
            return new zzai(Double.valueOf(((Long) obj).doubleValue()));
        }
        if (obj instanceof Integer) {
            return new zzai(Double.valueOf(((Integer) obj).doubleValue()));
        }
        if (obj instanceof Boolean) {
            return new zzag((Boolean) obj);
        }
        if (obj instanceof Map) {
            zzap zzapVar = new zzap();
            Map map = (Map) obj;
            for (Object string : map.keySet()) {
                zzaq zzaqVarZza = zza(map.get(string));
                if (string != null) {
                    if (!(string instanceof String)) {
                        string = string.toString();
                    }
                    zzapVar.zza((String) string, zzaqVarZza);
                }
            }
            return zzapVar;
        }
        if (obj instanceof List) {
            zzaf zzafVar = new zzaf();
            Iterator it = ((List) obj).iterator();
            while (it.hasNext()) {
                zzafVar.zza(zza(it.next()));
            }
            return zzafVar;
        }
        throw new IllegalArgumentException("Invalid value type");
    }
}
