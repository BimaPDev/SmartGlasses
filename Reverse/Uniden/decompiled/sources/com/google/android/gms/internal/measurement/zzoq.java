package com.google.android.gms.internal.measurement;

import com.google.common.base.Supplier;
import com.google.common.base.Suppliers;
import org.checkerframework.dataflow.qual.SideEffectFree;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzoq implements Supplier<zzot> {
    private static zzoq zza = new zzoq();
    private final Supplier<zzot> zzb = Suppliers.ofInstance(new zzos());

    @Override // com.google.common.base.Supplier
    public final /* synthetic */ zzot get() {
        return this.zzb.get();
    }

    @SideEffectFree
    public static boolean zza() {
        return ((zzot) zza.get()).zza();
    }
}
