package com.google.android.gms.maps.model;

import android.os.RemoteException;
import com.google.android.gms.internal.maps.zzbl;
import java.util.Map;

/* JADX INFO: compiled from: com.google.android.gms:play-services-maps@@19.0.0 */
/* JADX INFO: loaded from: classes2.dex */
public final class DatasetFeature extends Feature {
    private final com.google.android.gms.internal.maps.zzp zza;

    public DatasetFeature(com.google.android.gms.internal.maps.zzp zzpVar) {
        super(zzpVar);
        this.zza = zzpVar;
    }

    public Map<String, String> getDatasetAttributes() {
        try {
            return zzbl.zzc(this.zza.zzh().entrySet());
        } catch (RemoteException e) {
            throw new RuntimeRemoteException(e);
        }
    }

    public String getDatasetId() {
        try {
            return this.zza.zze();
        } catch (RemoteException e) {
            throw new RuntimeRemoteException(e);
        }
    }
}
