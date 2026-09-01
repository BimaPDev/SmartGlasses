package com.google.android.gms.internal.measurement;

import com.google.common.base.Supplier;
import com.google.common.base.Suppliers;
import org.checkerframework.dataflow.qual.SideEffectFree;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zznf implements Supplier<zzne> {
    private static zznf zza = new zznf();
    private final Supplier<zzne> zzb = Suppliers.ofInstance(new zznh());

    @Override // com.google.common.base.Supplier
    public final /* synthetic */ zzne get() {
        return this.zzb.get();
    }

    @SideEffectFree
    public static boolean zza() {
        return ((zzne) zza.get()).zza();
    }
}
