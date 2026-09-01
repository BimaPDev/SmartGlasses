package com.google.android.gms.internal.measurement;

import com.google.common.base.Supplier;
import com.google.common.base.Suppliers;
import org.checkerframework.dataflow.qual.SideEffectFree;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzqf implements Supplier<zzqe> {
    private static zzqf zza = new zzqf();
    private final Supplier<zzqe> zzb = Suppliers.ofInstance(new zzqg());

    @Override // com.google.common.base.Supplier
    public final /* synthetic */ zzqe get() {
        return this.zzb.get();
    }

    @SideEffectFree
    public static boolean zza() {
        return ((zzqe) zza.get()).zza();
    }
}
