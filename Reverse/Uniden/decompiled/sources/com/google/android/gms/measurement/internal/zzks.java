package com.google.android.gms.measurement.internal;

import android.os.RemoteException;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
final class zzks implements Runnable {
    private final /* synthetic */ com.google.android.gms.internal.measurement.zzdo zza;
    private final /* synthetic */ zzjq zzb;

    zzks(zzjq zzjqVar, com.google.android.gms.internal.measurement.zzdo zzdoVar) {
        this.zza = zzdoVar;
        this.zzb = zzjqVar;
    }

    /* JADX WARN: Code duplicated, block: B:13:0x0057  */
    /* JADX WARN: Code duplicated, block: B:20:0x0069 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    @Override // java.lang.Runnable
    public final void run() {
        Long lValueOf;
        zznb zznbVarZzp = this.zzb.zzp();
        if (zznbVarZzp.zzk().zzo().zzh()) {
            if (!zznbVarZzp.zzk().zza(zznbVarZzp.zzb().currentTimeMillis()) && zznbVarZzp.zzk().zzl.zza() != 0) {
                lValueOf = Long.valueOf(zznbVarZzp.zzk().zzl.zza());
            }
            if (lValueOf != null) {
                this.zzb.zzu.zzt().zza(this.zza, lValueOf.longValue());
            }
            try {
                this.zza.zza(null);
            } catch (RemoteException e) {
                this.zzb.zzu.zzj().zzg().zza("getSessionId failed with exception", e);
                return;
            }
        }
        zznbVarZzp.zzj().zzv().zza("Analytics storage consent denied; will not get session id");
        lValueOf = null;
        if (lValueOf != null) {
            this.zzb.zzu.zzt().zza(this.zza, lValueOf.longValue());
        } else {
            this.zza.zza(null);
        }
    }
}
