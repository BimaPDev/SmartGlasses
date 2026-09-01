package com.google.android.gms.libs.identity;

import android.app.PendingIntent;
import android.os.IInterface;
import android.os.RemoteException;

/* JADX INFO: compiled from: com.google.android.gms:play-services-location@@21.2.0 */
/* JADX INFO: loaded from: classes2.dex */
public interface zzt extends IInterface {
    void zzb(int i, String[] strArr) throws RemoteException;

    void zzc(int i, String[] strArr) throws RemoteException;

    void zzd(int i, PendingIntent pendingIntent) throws RemoteException;
}
