package com.google.android.gms.common.moduleinstall.internal;

import android.os.IInterface;
import android.os.RemoteException;
import com.google.android.gms.common.api.Status;
import com.google.android.gms.common.moduleinstall.ModuleAvailabilityResponse;
import com.google.android.gms.common.moduleinstall.ModuleInstallIntentResponse;
import com.google.android.gms.common.moduleinstall.ModuleInstallResponse;

/* JADX INFO: compiled from: com.google.android.gms:play-services-base@@18.4.0 */
/* JADX INFO: loaded from: classes2.dex */
public interface zae extends IInterface {
    void zab(Status status) throws RemoteException;

    void zac(Status status, ModuleInstallIntentResponse moduleInstallIntentResponse) throws RemoteException;

    void zad(Status status, ModuleInstallResponse moduleInstallResponse) throws RemoteException;

    void zae(Status status, ModuleAvailabilityResponse moduleAvailabilityResponse) throws RemoteException;
}
