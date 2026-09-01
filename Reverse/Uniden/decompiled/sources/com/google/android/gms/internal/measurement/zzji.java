package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.zzjo;
import java.io.IOException;
import java.util.Map;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
abstract class zzji<T extends zzjo<T>> {
    zzji() {
    }

    abstract int zza(Map.Entry<?, ?> entry);

    abstract zzjm<T> zza(Object obj);

    abstract Object zza(zzjg zzjgVar, zzlc zzlcVar, int i);

    abstract <UT, UB> UB zza(Object obj, zzlr zzlrVar, Object obj2, zzjg zzjgVar, zzjm<T> zzjmVar, UB ub, zzmk<UT, UB> zzmkVar) throws IOException;

    abstract void zza(zzik zzikVar, Object obj, zzjg zzjgVar, zzjm<T> zzjmVar) throws IOException;

    abstract void zza(zzlr zzlrVar, Object obj, zzjg zzjgVar, zzjm<T> zzjmVar) throws IOException;

    abstract void zza(zznb zznbVar, Map.Entry<?, ?> entry) throws IOException;

    abstract boolean zza(zzlc zzlcVar);

    abstract zzjm<T> zzb(Object obj);

    abstract void zzc(Object obj);
}
