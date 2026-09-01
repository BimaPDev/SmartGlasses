package com.google.android.gms.measurement.internal;

import android.os.RemoteException;
import com.google.android.gms.common.internal.Preconditions;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
final class zzmc implements Runnable {
    private final /* synthetic */ zzo zza;
    private final /* synthetic */ com.google.android.gms.internal.measurement.zzdo zzb;
    private final /* synthetic */ zzls zzc;

    zzmc(zzls zzlsVar, zzo zzoVar, com.google.android.gms.internal.measurement.zzdo zzdoVar) {
        this.zza = zzoVar;
        this.zzb = zzdoVar;
        this.zzc = zzlsVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        try {
            try {
                if (!this.zzc.zzk().zzo().zzh()) {
                    this.zzc.zzj().zzv().zza("Analytics storage consent denied; will not get app instance id");
                    this.zzc.zzm().zzc((String) null);
                    this.zzc.zzk().zze.zza(null);
                    this.zzc.zzq().zza(this.zzb, (String) null);
                    return;
                }
                zzgb zzgbVar = this.zzc.zzb;
                if (zzgbVar == null) {
                    this.zzc.zzj().zzg().zza("Failed to get app instance id");
                    this.zzc.zzq().zza(this.zzb, (String) null);
                    return;
                }
                Preconditions.checkNotNull(this.zza);
                String strZzb = zzgbVar.zzb(this.zza);
                if (strZzb != null) {
                    this.zzc.zzm().zzc(strZzb);
                    this.zzc.zzk().zze.zza(strZzb);
                }
                this.zzc.zzar();
                this.zzc.zzq().zza(this.zzb, strZzb);
            } catch (RemoteException e) {
                this.zzc.zzj().zzg().zza("Failed to get app instance id", e);
                this.zzc.zzq().zza(this.zzb, (String) null);
            }
        } catch (Throwable th) {
            this.zzc.zzq().zza(this.zzb, (String) null);
            throw th;
        }
    }
}
