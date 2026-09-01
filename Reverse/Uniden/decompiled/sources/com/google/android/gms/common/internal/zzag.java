package com.google.android.gms.common.internal;

import android.os.IInterface;
import android.os.RemoteException;
import com.google.android.gms.dynamic.IObjectWrapper;

/* JADX INFO: compiled from: com.google.android.gms:play-services-basement@@18.3.0 */
/* JADX INFO: loaded from: classes2.dex */
public interface zzag extends IInterface {
    com.google.android.gms.common.zzq zze(com.google.android.gms.common.zzo zzoVar) throws RemoteException;

    com.google.android.gms.common.zzq zzf(com.google.android.gms.common.zzo zzoVar) throws RemoteException;

    boolean zzg() throws RemoteException;

    boolean zzh(com.google.android.gms.common.zzs zzsVar, IObjectWrapper iObjectWrapper) throws RemoteException;

    boolean zzi() throws RemoteException;
}
