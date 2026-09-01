package com.google.android.gms.maps.internal;

import android.os.IInterface;
import android.os.RemoteException;
import com.google.android.gms.dynamic.IObjectWrapper;
import com.google.android.gms.maps.model.LatLng;
import com.google.android.gms.maps.model.VisibleRegion;

/* JADX INFO: compiled from: com.google.android.gms:play-services-maps@@19.0.0 */
/* JADX INFO: loaded from: classes2.dex */
public interface IProjectionDelegate extends IInterface {
    LatLng fromScreenLocation(IObjectWrapper iObjectWrapper) throws RemoteException;

    VisibleRegion getVisibleRegion() throws RemoteException;

    IObjectWrapper toScreenLocation(LatLng latLng) throws RemoteException;

    IObjectWrapper toScreenLocationWithAltitude(LatLng latLng, float f) throws RemoteException;
}
