package com.google.android.gms.internal.maps;

import android.os.IBinder;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: compiled from: com.google.android.gms:play-services-maps@@19.0.0 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzq extends zza implements zzs {
    zzq(IBinder iBinder) {
        super(iBinder, "com.google.android.gms.maps.model.internal.IFeatureLayerDelegate");
    }

    @Override // com.google.android.gms.internal.maps.zzs
    public final String zzd() throws RemoteException {
        Parcel parcelZzJ = zzJ(6, zza());
        String string = parcelZzJ.readString();
        parcelZzJ.recycle();
        return string;
    }

    @Override // com.google.android.gms.internal.maps.zzs
    public final String zze() throws RemoteException {
        Parcel parcelZzJ = zzJ(1, zza());
        String string = parcelZzJ.readString();
        parcelZzJ.recycle();
        return string;
    }

    @Override // com.google.android.gms.internal.maps.zzs
    public final void zzf(zzaj zzajVar) throws RemoteException {
        Parcel parcelZza = zza();
        zzc.zzg(parcelZza, zzajVar);
        zzc(4, parcelZza);
    }

    @Override // com.google.android.gms.internal.maps.zzs
    public final void zzg(zzaj zzajVar) throws RemoteException {
        Parcel parcelZza = zza();
        zzc.zzg(parcelZza, zzajVar);
        zzc(5, parcelZza);
    }

    @Override // com.google.android.gms.internal.maps.zzs
    public final void zzh(zzar zzarVar) throws RemoteException {
        Parcel parcelZza = zza();
        zzc.zzg(parcelZza, zzarVar);
        zzc(3, parcelZza);
    }

    @Override // com.google.android.gms.internal.maps.zzs
    public final boolean zzi() throws RemoteException {
        Parcel parcelZzJ = zzJ(2, zza());
        boolean zZzh = zzc.zzh(parcelZzJ);
        parcelZzJ.recycle();
        return zZzh;
    }
}
