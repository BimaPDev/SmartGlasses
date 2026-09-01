package com.google.android.gms.maps.model;

import android.os.RemoteException;
import com.google.android.gms.common.internal.Preconditions;

/* JADX INFO: compiled from: com.google.android.gms:play-services-maps@@19.0.0 */
/* JADX INFO: loaded from: classes2.dex */
public abstract class Feature {
    private final com.google.android.gms.internal.maps.zzp zza;

    Feature(com.google.android.gms.internal.maps.zzp zzpVar) {
        this.zza = zzpVar;
    }

    static Feature zza(com.google.android.gms.internal.maps.zzp zzpVar) {
        Preconditions.checkNotNull(zzpVar);
        try {
            int iZzd = zzpVar.zzd();
            if (iZzd == 1) {
                return new PlaceFeature(zzpVar);
            }
            if (iZzd == 2) {
                return new DatasetFeature(zzpVar);
            }
            return null;
        } catch (RemoteException e) {
            throw new RuntimeRemoteException(e);
        }
    }

    @FeatureType
    public String getFeatureType() {
        try {
            return this.zza.zzf();
        } catch (RemoteException e) {
            throw new RuntimeRemoteException(e);
        }
    }
}
