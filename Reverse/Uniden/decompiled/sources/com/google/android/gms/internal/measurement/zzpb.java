package com.google.android.gms.internal.measurement;

import com.google.common.base.Supplier;
import com.google.common.base.Suppliers;
import org.checkerframework.dataflow.qual.SideEffectFree;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzpb implements Supplier<zzpa> {
    private static zzpb zza = new zzpb();
    private final Supplier<zzpa> zzb = Suppliers.ofInstance(new zzpd());

    @Override // com.google.common.base.Supplier
    public final /* synthetic */ zzpa get() {
        return this.zzb.get();
    }

    @SideEffectFree
    public static boolean zza() {
        return ((zzpa) zza.get()).zza();
    }

    @SideEffectFree
    public static boolean zzb() {
        return ((zzpa) zza.get()).zzb();
    }
}
