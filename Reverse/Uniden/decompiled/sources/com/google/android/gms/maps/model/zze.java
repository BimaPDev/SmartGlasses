package com.google.android.gms.maps.model;

/* JADX INFO: compiled from: com.google.android.gms:play-services-maps@@19.0.0 */
/* JADX INFO: loaded from: classes2.dex */
final class zze extends com.google.android.gms.internal.maps.zzai {
    final /* synthetic */ FeatureLayer.OnFeatureClickListener zza;

    zze(FeatureLayer featureLayer, FeatureLayer.OnFeatureClickListener onFeatureClickListener) {
        this.zza = onFeatureClickListener;
    }

    @Override // com.google.android.gms.internal.maps.zzaj
    public final void zzb(com.google.android.gms.internal.maps.zzm zzmVar) {
        this.zza.onFeatureClick(new FeatureClickEvent(zzmVar));
    }
}
