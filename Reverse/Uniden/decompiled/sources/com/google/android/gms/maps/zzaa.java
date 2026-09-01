package com.google.android.gms.maps;

import com.google.android.gms.maps.model.LatLng;

/* JADX INFO: compiled from: com.google.android.gms:play-services-maps@@19.0.0 */
/* JADX INFO: loaded from: classes2.dex */
final class zzaa extends com.google.android.gms.maps.internal.zzaq {
    final /* synthetic */ GoogleMap.OnMapLongClickListener zza;

    zzaa(GoogleMap googleMap, GoogleMap.OnMapLongClickListener onMapLongClickListener) {
        this.zza = onMapLongClickListener;
    }

    @Override // com.google.android.gms.maps.internal.zzar
    public final void zzb(LatLng latLng) {
        this.zza.onMapLongClick(latLng);
    }
}
