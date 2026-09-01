package com.google.android.gms.maps;

import android.location.Location;
import com.google.android.gms.maps.internal.zzbc;

/* JADX INFO: compiled from: com.google.android.gms:play-services-maps@@19.0.0 */
/* JADX INFO: loaded from: classes2.dex */
final class zzi extends zzbc {
    final /* synthetic */ GoogleMap.OnMyLocationClickListener zza;

    zzi(GoogleMap googleMap, GoogleMap.OnMyLocationClickListener onMyLocationClickListener) {
        this.zza = onMyLocationClickListener;
    }

    @Override // com.google.android.gms.maps.internal.zzbd
    public final void zzb(Location location) {
        this.zza.onMyLocationClick(location);
    }
}
