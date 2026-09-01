package com.google.android.gms.measurement.internal;

import android.os.Bundle;
import android.os.RemoteException;
import com.google.android.gms.common.internal.Preconditions;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
final class zzlw implements Runnable {
    private final /* synthetic */ String zza;
    private final /* synthetic */ String zzb;
    private final /* synthetic */ zzo zzc;
    private final /* synthetic */ boolean zzd;
    private final /* synthetic */ com.google.android.gms.internal.measurement.zzdo zze;
    private final /* synthetic */ zzls zzf;

    zzlw(zzls zzlsVar, String str, String str2, zzo zzoVar, boolean z, com.google.android.gms.internal.measurement.zzdo zzdoVar) {
        this.zza = str;
        this.zzb = str2;
        this.zzc = zzoVar;
        this.zzd = z;
        this.zze = zzdoVar;
        this.zzf = zzlsVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        Bundle bundle = new Bundle();
        try {
            try {
                zzgb zzgbVar = this.zzf.zzb;
                if (zzgbVar == null) {
                    this.zzf.zzj().zzg().zza("Failed to get user properties; not connected to service", this.zza, this.zzb);
                    this.zzf.zzq().zza(this.zze, bundle);
                } else {
                    Preconditions.checkNotNull(this.zzc);
                    Bundle bundleZza = zzos.zza(zzgbVar.zza(this.zza, this.zzb, this.zzd, this.zzc));
                    this.zzf.zzar();
                    this.zzf.zzq().zza(this.zze, bundleZza);
                }
            } catch (RemoteException e) {
                this.zzf.zzj().zzg().zza("Failed to get user properties; remote exception", this.zza, e);
                this.zzf.zzq().zza(this.zze, bundle);
            }
        } catch (Throwable th) {
            this.zzf.zzq().zza(this.zze, bundle);
            throw th;
        }
    }
}
