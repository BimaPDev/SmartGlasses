package com.google.android.gms.maps.model;

import com.google.android.gms.internal.maps.zzaq;

/* JADX INFO: compiled from: com.google.android.gms:play-services-maps@@19.0.0 */
/* JADX INFO: loaded from: classes2.dex */
final class zzd extends zzaq {
    final /* synthetic */ FeatureLayer.StyleFactory zza;

    zzd(FeatureLayer featureLayer, FeatureLayer.StyleFactory styleFactory) {
        this.zza = styleFactory;
    }

    @Override // com.google.android.gms.internal.maps.zzar
    public final FeatureStyle zzb(com.google.android.gms.internal.maps.zzp zzpVar) {
        Feature featureZza = Feature.zza(zzpVar);
        if (featureZza == null) {
            return null;
        }
        return this.zza.getStyle(featureZza);
    }
}
