package com.google.android.gms.libs.identity;

import android.os.RemoteException;
import com.google.android.gms.common.api.internal.TaskUtil;
import com.google.android.gms.location.zzw;
import com.google.android.gms.tasks.TaskCompletionSource;

/* JADX INFO: compiled from: com.google.android.gms:play-services-location@@21.2.0 */
/* JADX INFO: loaded from: classes2.dex */
final class zzdd extends zzq {
    final /* synthetic */ TaskCompletionSource zza;
    final /* synthetic */ zzw zzb;

    zzdd(TaskCompletionSource taskCompletionSource, zzw zzwVar) {
        this.zza = taskCompletionSource;
        this.zzb = zzwVar;
    }

    @Override // com.google.android.gms.libs.identity.zzr
    public final void zzd(zzl zzlVar) {
        TaskUtil.setResultOrApiException(zzlVar.getStatus(), this.zza);
    }

    @Override // com.google.android.gms.libs.identity.zzr
    public final void zze() throws RemoteException {
        this.zzb.zzf();
    }
}
