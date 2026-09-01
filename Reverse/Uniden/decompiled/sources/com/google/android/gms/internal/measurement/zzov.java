package com.google.android.gms.internal.measurement;

import com.google.common.base.Supplier;
import com.google.common.base.Suppliers;
import org.checkerframework.dataflow.qual.SideEffectFree;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzov implements Supplier<zzou> {
    private static zzov zza = new zzov();
    private final Supplier<zzou> zzb = Suppliers.ofInstance(new zzox());

    @Override // com.google.common.base.Supplier
    public final /* synthetic */ zzou get() {
        return this.zzb.get();
    }

    @SideEffectFree
    public static boolean zza() {
        return ((zzou) zza.get()).zza();
    }

    @SideEffectFree
    public static boolean zzb() {
        return ((zzou) zza.get()).zzb();
    }

    @SideEffectFree
    public static boolean zzc() {
        return ((zzou) zza.get()).zzc();
    }
}
