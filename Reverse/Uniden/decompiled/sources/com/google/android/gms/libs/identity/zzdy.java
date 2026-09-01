package com.google.android.gms.libs.identity;

import android.location.Location;
import com.google.android.gms.common.api.internal.ListenerHolder;
import com.google.android.gms.location.zzy;

/* JADX INFO: compiled from: com.google.android.gms:play-services-location@@21.2.0 */
/* JADX INFO: loaded from: classes2.dex */
final class zzdy extends zzy {
    private final zzdr zza;

    zzdy(zzdr zzdrVar) {
        this.zza = zzdrVar;
    }

    final zzdy zzc(ListenerHolder listenerHolder) {
        this.zza.zzb(listenerHolder);
        return this;
    }

    @Override // com.google.android.gms.location.zzz
    public final void zzd(Location location) {
        this.zza.zza().notifyListener(new zzdw(this, location));
    }

    @Override // com.google.android.gms.location.zzz
    public final void zze() {
        this.zza.zza().notifyListener(new zzdx(this));
    }

    final void zzf() {
        this.zza.zza().clear();
    }

    final /* synthetic */ zzdr zzg() {
        return this.zza;
    }
}
