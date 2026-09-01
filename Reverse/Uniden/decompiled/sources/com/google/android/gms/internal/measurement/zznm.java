package com.google.android.gms.internal.measurement;

import com.google.common.base.Supplier;
import com.google.common.base.Suppliers;
import org.checkerframework.dataflow.qual.SideEffectFree;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zznm implements Supplier<zznp> {
    private static zznm zza = new zznm();
    private final Supplier<zznp> zzb = Suppliers.ofInstance(new zzno());

    @Override // com.google.common.base.Supplier
    public final /* synthetic */ zznp get() {
        return this.zzb.get();
    }

    @SideEffectFree
    public static boolean zza() {
        return ((zznp) zza.get()).zza();
    }

    @SideEffectFree
    public static boolean zzb() {
        return ((zznp) zza.get()).zzb();
    }

    @SideEffectFree
    public static boolean zzc() {
        return ((zznp) zza.get()).zzc();
    }

    @SideEffectFree
    public static boolean zzd() {
        return ((zznp) zza.get()).zzd();
    }

    @SideEffectFree
    public static boolean zze() {
        return ((zznp) zza.get()).zze();
    }
}
