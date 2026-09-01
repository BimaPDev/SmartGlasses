package com.google.android.gms.internal.measurement;

import com.google.common.base.Supplier;
import com.google.common.base.Suppliers;
import org.checkerframework.dataflow.qual.SideEffectFree;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zznl implements Supplier<zznk> {
    private static zznl zza = new zznl();
    private final Supplier<zznk> zzb = Suppliers.ofInstance(new zznn());

    @SideEffectFree
    public static long zza() {
        return ((zznk) zza.get()).zza();
    }

    @Override // com.google.common.base.Supplier
    public final /* synthetic */ zznk get() {
        return this.zzb.get();
    }
}
