package com.google.android.gms.measurement.internal;

import com.google.android.gms.common.internal.Preconditions;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
final class zzlx implements Runnable {
    private final /* synthetic */ zzo zza;
    private final /* synthetic */ boolean zzb;
    private final /* synthetic */ zzon zzc;
    private final /* synthetic */ zzls zzd;

    zzlx(zzls zzlsVar, zzo zzoVar, boolean z, zzon zzonVar) {
        this.zza = zzoVar;
        this.zzb = z;
        this.zzc = zzonVar;
        this.zzd = zzlsVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        zzgb zzgbVar = this.zzd.zzb;
        if (zzgbVar == null) {
            this.zzd.zzj().zzg().zza("Discarding data. Failed to set user property");
            return;
        }
        Preconditions.checkNotNull(this.zza);
        this.zzd.zza(zzgbVar, this.zzb ? null : this.zzc, this.zza);
        this.zzd.zzar();
    }
}
