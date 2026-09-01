package com.google.android.gms.internal.measurement;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.SortedMap;
import java.util.TreeMap;
import org.checkerframework.checker.nullness.qual.RequiresNonNull;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzaf implements zzak, zzaq, Iterable<zzaq> {
    private final SortedMap<Integer, zzaq> zza;
    private final Map<String, zzaq> zzb;

    public final int zza() {
        return this.zza.size();
    }

    public final int hashCode() {
        return this.zza.hashCode() * 31;
    }

    public final int zzb() {
        if (this.zza.isEmpty()) {
            return 0;
        }
        return this.zza.lastKey().intValue() + 1;
    }

    @Override // com.google.android.gms.internal.measurement.zzaq
    public final zzaq zza(String str, zzh zzhVar, List<zzaq> list) {
        if ("concat".equals(str) || "every".equals(str) || "filter".equals(str) || "forEach".equals(str) || "indexOf".equals(str) || "join".equals(str) || "lastIndexOf".equals(str) || "map".equals(str) || "pop".equals(str) || "push".equals(str) || "reduce".equals(str) || "reduceRight".equals(str) || "reverse".equals(str) || "shift".equals(str) || "slice".equals(str) || "some".equals(str) || "sort".equals(str) || "splice".equals(str) || "toString".equals(str) || "unshift".equals(str)) {
            return zzbe.zza(str, this, zzhVar, list);
        }
        return zzan.zza(this, new zzas(str), zzhVar, list);
    }

    @Override // com.google.android.gms.internal.measurement.zzaq
    public final zzaq zzc() {
        zzaf zzafVar = new zzaf();
        for (Map.Entry<Integer, zzaq> entry : this.zza.entrySet()) {
            if (entry.getValue() instanceof zzak) {
                zzafVar.zza.put(entry.getKey(), entry.getValue());
            } else {
                zzafVar.zza.put(entry.getKey(), entry.getValue().zzc());
            }
        }
        return zzafVar;
    }

    public final zzaq zza(int i) {
        zzaq zzaqVar;
        if (i < zzb()) {
            return (!zzc(i) || (zzaqVar = this.zza.get(Integer.valueOf(i))) == null) ? zzc : zzaqVar;
        }
        throw new IndexOutOfBoundsException("Attempting to get element outside of current array");
    }

    @Override // com.google.android.gms.internal.measurement.zzak
    public final zzaq zza(String str) {
        zzaq zzaqVar;
        if ("length".equals(str)) {
            return new zzai(Double.valueOf(zzb()));
        }
        return (!zzc(str) || (zzaqVar = this.zzb.get(str)) == null) ? zzc : zzaqVar;
    }

    @Override // com.google.android.gms.internal.measurement.zzaq
    public final Boolean zzd() {
        return true;
    }

    @Override // com.google.android.gms.internal.measurement.zzaq
    public final Double zze() {
        if (this.zza.size() == 1) {
            return zza(0).zze();
        }
        if (this.zza.size() <= 0) {
            return Double.valueOf(0.0d);
        }
        return Double.valueOf(Double.NaN);
    }

    @Override // com.google.android.gms.internal.measurement.zzaq
    public final String zzf() {
        return toString();
    }

    public final String toString() {
        return zzb(",");
    }

    public final String zzb(String str) {
        if (str == null) {
            str = "";
        }
        StringBuilder sb = new StringBuilder();
        if (!this.zza.isEmpty()) {
            for (int i = 0; i < zzb(); i++) {
                zzaq zzaqVarZza = zza(i);
                sb.append(str);
                if (!(zzaqVarZza instanceof zzax) && !(zzaqVarZza instanceof zzao)) {
                    sb.append(zzaqVarZza.zzf());
                }
            }
            sb.delete(0, str.length());
        }
        return sb.toString();
    }

    public final Iterator<Integer> zzg() {
        return this.zza.keySet().iterator();
    }

    @Override // com.google.android.gms.internal.measurement.zzaq
    public final Iterator<zzaq> zzh() {
        return new zzae(this, this.zza.keySet().iterator(), this.zzb.keySet().iterator());
    }

    @Override // java.lang.Iterable
    public final Iterator<zzaq> iterator() {
        return new zzah(this);
    }

    public final List<zzaq> zzi() {
        ArrayList arrayList = new ArrayList(zzb());
        for (int i = 0; i < zzb(); i++) {
            arrayList.add(zza(i));
        }
        return arrayList;
    }

    public zzaf() {
        this.zza = new TreeMap();
        this.zzb = new TreeMap();
    }

    public zzaf(List<zzaq> list) {
        this();
        if (list != null) {
            for (int i = 0; i < list.size(); i++) {
                zzb(i, list.get(i));
            }
        }
    }

    public zzaf(zzaq... zzaqVarArr) {
        this((List<zzaq>) Arrays.asList(zzaqVarArr));
    }

    public final void zza(zzaq zzaqVar) {
        zzb(zzb(), zzaqVar);
    }

    public final void zzj() {
        this.zza.clear();
    }

    public final void zza(int i, zzaq zzaqVar) {
        if (i < 0) {
            throw new IllegalArgumentException("Invalid value index: " + i);
        }
        if (i >= zzb()) {
            zzb(i, zzaqVar);
            return;
        }
        for (int iIntValue = this.zza.lastKey().intValue(); iIntValue >= i; iIntValue--) {
            zzaq zzaqVar2 = this.zza.get(Integer.valueOf(iIntValue));
            if (zzaqVar2 != null) {
                zzb(iIntValue + 1, zzaqVar2);
                this.zza.remove(Integer.valueOf(iIntValue));
            }
        }
        zzb(i, zzaqVar);
    }

    public final void zzb(int i) {
        int iIntValue = this.zza.lastKey().intValue();
        if (i > iIntValue || i < 0) {
            return;
        }
        this.zza.remove(Integer.valueOf(i));
        if (i == iIntValue) {
            int i2 = i - 1;
            if (this.zza.containsKey(Integer.valueOf(i2)) || i2 < 0) {
                return;
            }
            this.zza.put(Integer.valueOf(i2), zzaq.zzc);
            return;
        }
        while (true) {
            i++;
            if (i > this.zza.lastKey().intValue()) {
                return;
            }
            zzaq zzaqVar = this.zza.get(Integer.valueOf(i));
            if (zzaqVar != null) {
                this.zza.put(Integer.valueOf(i - 1), zzaqVar);
                this.zza.remove(Integer.valueOf(i));
            }
        }
    }

    @RequiresNonNull({"elements"})
    public final void zzb(int i, zzaq zzaqVar) {
        if (i > 32468) {
            throw new IllegalStateException("Array too large");
        }
        if (i < 0) {
            throw new IndexOutOfBoundsException("Out of bounds index: " + i);
        }
        if (zzaqVar == null) {
            this.zza.remove(Integer.valueOf(i));
        } else {
            this.zza.put(Integer.valueOf(i), zzaqVar);
        }
    }

    @Override // com.google.android.gms.internal.measurement.zzak
    public final void zza(String str, zzaq zzaqVar) {
        if (zzaqVar == null) {
            this.zzb.remove(str);
        } else {
            this.zzb.put(str, zzaqVar);
        }
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof zzaf)) {
            return false;
        }
        zzaf zzafVar = (zzaf) obj;
        if (zzb() != zzafVar.zzb()) {
            return false;
        }
        if (this.zza.isEmpty()) {
            return zzafVar.zza.isEmpty();
        }
        for (int iIntValue = this.zza.firstKey().intValue(); iIntValue <= this.zza.lastKey().intValue(); iIntValue++) {
            if (!zza(iIntValue).equals(zzafVar.zza(iIntValue))) {
                return false;
            }
        }
        return true;
    }

    public final boolean zzc(int i) {
        if (i < 0 || i > this.zza.lastKey().intValue()) {
            throw new IndexOutOfBoundsException("Out of bounds index: " + i);
        }
        return this.zza.containsKey(Integer.valueOf(i));
    }

    @Override // com.google.android.gms.internal.measurement.zzak
    public final boolean zzc(String str) {
        return "length".equals(str) || this.zzb.containsKey(str);
    }
}
