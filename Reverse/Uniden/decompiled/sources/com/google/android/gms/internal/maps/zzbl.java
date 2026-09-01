package com.google.android.gms.internal.maps;

import java.io.Serializable;
import java.util.Collection;
import java.util.Map;
import java.util.Set;
import javax.annotation.CheckForNull;

/* JADX INFO: compiled from: com.google.android.gms:play-services-maps@@19.0.0 */
/* JADX INFO: loaded from: classes2.dex */
public abstract class zzbl implements Map, Serializable {

    @CheckForNull
    private transient zzbm zza;

    @CheckForNull
    private transient zzbm zzb;

    @CheckForNull
    private transient zzbf zzc;

    zzbl() {
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static zzbl zzc(Iterable iterable) {
        zzbk zzbkVar = new zzbk(iterable instanceof Collection ? iterable.size() : 4);
        zzbkVar.zza(iterable);
        zzbj zzbjVar = zzbkVar.zzc;
        if (zzbjVar != null) {
            throw zzbjVar.zza();
        }
        zzbt zzbtVarZzg = zzbt.zzg(zzbkVar.zzb, zzbkVar.zza, zzbkVar);
        zzbj zzbjVar2 = zzbkVar.zzc;
        if (zzbjVar2 == null) {
            return zzbtVarZzg;
        }
        throw zzbjVar2.zza();
    }

    @Override // java.util.Map
    @Deprecated
    public final void clear() {
        throw new UnsupportedOperationException();
    }

    @Override // java.util.Map
    public final boolean containsKey(@CheckForNull Object obj) {
        return get(obj) != null;
    }

    @Override // java.util.Map
    public final boolean containsValue(@CheckForNull Object obj) {
        return values().contains(obj);
    }

    @Override // java.util.Map
    public final boolean equals(@CheckForNull Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof Map) {
            return entrySet().equals(((Map) obj).entrySet());
        }
        return false;
    }

    @Override // java.util.Map
    @CheckForNull
    public abstract Object get(@CheckForNull Object obj);

    @Override // java.util.Map
    @CheckForNull
    public final Object getOrDefault(@CheckForNull Object obj, @CheckForNull Object obj2) {
        Object obj3 = get(obj);
        return obj3 != null ? obj3 : obj2;
    }

    @Override // java.util.Map
    public final int hashCode() {
        return zzbv.zza(entrySet());
    }

    @Override // java.util.Map
    public final boolean isEmpty() {
        return size() == 0;
    }

    @Override // java.util.Map
    public final /* bridge */ /* synthetic */ Set keySet() {
        zzbm zzbmVar = this.zzb;
        if (zzbmVar != null) {
            return zzbmVar;
        }
        zzbm zzbmVarZze = zze();
        this.zzb = zzbmVarZze;
        return zzbmVarZze;
    }

    @Override // java.util.Map
    @CheckForNull
    @Deprecated
    public final Object put(Object obj, Object obj2) {
        throw new UnsupportedOperationException();
    }

    @Override // java.util.Map
    @Deprecated
    public final void putAll(Map map) {
        throw new UnsupportedOperationException();
    }

    @Override // java.util.Map
    @CheckForNull
    @Deprecated
    public final Object remove(@CheckForNull Object obj) {
        throw new UnsupportedOperationException();
    }

    public final String toString() {
        int size = size();
        if (size < 0) {
            throw new IllegalArgumentException("size cannot be negative but was: " + size);
        }
        StringBuilder sb = new StringBuilder((int) Math.min(((long) size) * 8, 1073741824L));
        sb.append('{');
        boolean z = true;
        for (Map.Entry entry : entrySet()) {
            if (!z) {
                sb.append(", ");
            }
            sb.append(entry.getKey());
            sb.append('=');
            sb.append(entry.getValue());
            z = false;
        }
        sb.append('}');
        return sb.toString();
    }

    abstract zzbf zza();

    @Override // java.util.Map
    /* JADX INFO: renamed from: zzb, reason: merged with bridge method [inline-methods] */
    public final zzbf values() {
        zzbf zzbfVar = this.zzc;
        if (zzbfVar != null) {
            return zzbfVar;
        }
        zzbf zzbfVarZza = zza();
        this.zzc = zzbfVarZza;
        return zzbfVarZza;
    }

    abstract zzbm zzd();

    abstract zzbm zze();

    @Override // java.util.Map
    /* JADX INFO: renamed from: zzf, reason: merged with bridge method [inline-methods] */
    public final zzbm entrySet() {
        zzbm zzbmVar = this.zza;
        if (zzbmVar != null) {
            return zzbmVar;
        }
        zzbm zzbmVarZzd = zzd();
        this.zza = zzbmVarZzd;
        return zzbmVarZzd;
    }
}
