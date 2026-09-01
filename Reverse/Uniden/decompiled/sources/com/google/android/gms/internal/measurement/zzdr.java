package com.google.android.gms.internal.measurement;

import android.os.Bundle;
import android.os.IBinder;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzdr extends zzbu implements zzdp {
    @Override // com.google.android.gms.internal.measurement.zzdp
    public final int zza() throws RemoteException {
        Parcel parcelZza = zza(2, m141a_());
        int i = parcelZza.readInt();
        parcelZza.recycle();
        return i;
    }

    zzdr(IBinder iBinder) {
        super(iBinder, "com.google.android.gms.measurement.api.internal.IEventHandlerProxy");
    }

    @Override // com.google.android.gms.internal.measurement.zzdp
    public final void zza(String str, String str2, Bundle bundle, long j) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        parcelM141a_.writeString(str);
        parcelM141a_.writeString(str2);
        zzbw.zza(parcelM141a_, bundle);
        parcelM141a_.writeLong(j);
        zzb(1, parcelM141a_);
    }
}
