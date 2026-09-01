package com.google.android.gms.maps.model;

import android.os.RemoteException;
import android.view.View;
import com.google.android.gms.dynamic.ObjectWrapper;

/* JADX INFO: compiled from: com.google.android.gms:play-services-maps@@19.0.0 */
/* JADX INFO: loaded from: classes2.dex */
public class AdvancedMarker extends Marker {
    public AdvancedMarker(com.google.android.gms.internal.maps.zzah zzahVar) {
        super(zzahVar);
    }

    public View getIconView() {
        try {
            return (View) ObjectWrapper.unwrap(this.zza.zzh());
        } catch (RemoteException e) {
            throw new RuntimeRemoteException(e);
        }
    }

    public void setIconView(View view) {
        if (view != null && view.getParent() != null) {
            throw new IllegalArgumentException("View already has a parent, can not be used as Marker");
        }
        try {
            this.zza.zzu(ObjectWrapper.wrap(view));
        } catch (RemoteException e) {
            throw new RuntimeRemoteException(e);
        }
    }
}
