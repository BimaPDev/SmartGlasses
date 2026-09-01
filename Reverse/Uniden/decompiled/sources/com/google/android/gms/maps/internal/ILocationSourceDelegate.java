package com.google.android.gms.maps.internal;

import android.os.IInterface;
import android.os.RemoteException;

/* JADX INFO: compiled from: com.google.android.gms:play-services-maps@@19.0.0 */
/* JADX INFO: loaded from: classes2.dex */
public interface ILocationSourceDelegate extends IInterface {
    void activate(zzaj zzajVar) throws RemoteException;

    void deactivate() throws RemoteException;
}
