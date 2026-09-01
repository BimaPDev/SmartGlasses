package com.google.android.gms.internal.measurement;

import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.ConcurrentMap;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
final class zzlq {
    private static final zzlq zza = new zzlq();
    private final ConcurrentMap<Class<?>, zzlu<?>> zzc = new ConcurrentHashMap();
    private final zzlt zzb = new zzkq();

    public static zzlq zza() {
        return zza;
    }

    public final <T> zzlu<T> zza(Class<T> cls) {
        zzjv.zza(cls, "messageType");
        zzlu<T> zzluVar = (zzlu) this.zzc.get(cls);
        if (zzluVar != null) {
            return zzluVar;
        }
        zzlu<T> zzluVarZza = this.zzb.zza(cls);
        zzjv.zza(cls, "messageType");
        zzjv.zza(zzluVarZza, "schema");
        zzlu<T> zzluVar2 = (zzlu) this.zzc.putIfAbsent(cls, zzluVarZza);
        return zzluVar2 != null ? zzluVar2 : zzluVarZza;
    }

    public final <T> zzlu<T> zza(T t) {
        return zza((Class) t.getClass());
    }

    private zzlq() {
    }
}
