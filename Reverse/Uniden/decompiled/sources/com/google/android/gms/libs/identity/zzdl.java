package com.google.android.gms.libs.identity;

import com.google.android.gms.common.api.Status;
import com.google.android.gms.common.api.internal.TaskUtil;
import com.google.android.gms.location.LocationAvailability;
import com.google.android.gms.tasks.TaskCompletionSource;

/* JADX INFO: compiled from: com.google.android.gms:play-services-location@@21.2.0 */
/* JADX INFO: loaded from: classes2.dex */
final class zzdl extends zzw {
    final /* synthetic */ TaskCompletionSource zza;

    zzdl(TaskCompletionSource taskCompletionSource) {
        this.zza = taskCompletionSource;
    }

    @Override // com.google.android.gms.libs.identity.zzx
    public final void zzb(Status status, LocationAvailability locationAvailability) {
        TaskUtil.setResultOrApiException(status, locationAvailability, this.zza);
    }
}
