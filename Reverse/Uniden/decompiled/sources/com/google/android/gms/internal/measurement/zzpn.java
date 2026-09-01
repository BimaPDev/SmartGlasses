package com.google.android.gms.internal.measurement;

import com.google.common.base.Supplier;
import com.google.common.base.Suppliers;
import org.checkerframework.dataflow.qual.SideEffectFree;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzpn implements Supplier<zzpm> {
    private static zzpn zza = new zzpn();
    private final Supplier<zzpm> zzb = Suppliers.ofInstance(new zzpp());

    @Override // com.google.common.base.Supplier
    public final /* synthetic */ zzpm get() {
        return this.zzb.get();
    }

    @SideEffectFree
    public static boolean zza() {
        return ((zzpm) zza.get()).zza();
    }

    @SideEffectFree
    public static boolean zzb() {
        return ((zzpm) zza.get()).zzb();
    }

    @SideEffectFree
    public static boolean zzc() {
        return ((zzpm) zza.get()).zzc();
    }

    @SideEffectFree
    public static boolean zzd() {
        return ((zzpm) zza.get()).zzd();
    }

    @SideEffectFree
    public static boolean zze() {
        return ((zzpm) zza.get()).zze();
    }

    @SideEffectFree
    public static boolean zzf() {
        return ((zzpm) zza.get()).zzf();
    }

    @SideEffectFree
    public static boolean zzg() {
        return ((zzpm) zza.get()).zzg();
    }

    @SideEffectFree
    public static boolean zzh() {
        return ((zzpm) zza.get()).zzh();
    }

    @SideEffectFree
    public static boolean zzi() {
        return ((zzpm) zza.get()).zzi();
    }

    @SideEffectFree
    public static boolean zzj() {
        return ((zzpm) zza.get()).zzj();
    }

    @SideEffectFree
    public static boolean zzk() {
        return ((zzpm) zza.get()).zzk();
    }

    @SideEffectFree
    public static boolean zzl() {
        return ((zzpm) zza.get()).zzl();
    }
}
