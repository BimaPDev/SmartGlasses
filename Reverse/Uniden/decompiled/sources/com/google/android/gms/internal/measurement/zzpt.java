package com.google.android.gms.internal.measurement;

import com.google.common.base.Supplier;
import com.google.common.base.Suppliers;
import org.checkerframework.dataflow.qual.SideEffectFree;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzpt implements Supplier<zzps> {
    private static zzpt zza = new zzpt();
    private final Supplier<zzps> zzb = Suppliers.ofInstance(new zzpv());

    @Override // com.google.common.base.Supplier
    public final /* synthetic */ zzps get() {
        return this.zzb.get();
    }

    @SideEffectFree
    public static boolean zza() {
        return ((zzps) zza.get()).zza();
    }

    @SideEffectFree
    public static boolean zzb() {
        return ((zzps) zza.get()).zzb();
    }
}
