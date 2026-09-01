package com.google.android.gms.internal.measurement;

import com.google.common.base.Supplier;
import com.google.common.base.Suppliers;
import org.checkerframework.dataflow.qual.SideEffectFree;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzod implements Supplier<zzoc> {
    private static zzod zza = new zzod();
    private final Supplier<zzoc> zzb = Suppliers.ofInstance(new zzof());

    @Override // com.google.common.base.Supplier
    public final /* synthetic */ zzoc get() {
        return this.zzb.get();
    }

    @SideEffectFree
    public static boolean zza() {
        return ((zzoc) zza.get()).zza();
    }

    @SideEffectFree
    public static boolean zzb() {
        return ((zzoc) zza.get()).zzb();
    }
}
