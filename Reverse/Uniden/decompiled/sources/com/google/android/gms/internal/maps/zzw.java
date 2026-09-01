package com.google.android.gms.internal.maps;

import android.os.IBinder;
import android.os.Parcel;
import android.os.RemoteException;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: compiled from: com.google.android.gms:play-services-maps@@19.0.0 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzw extends zza implements zzy {
    zzw(IBinder iBinder) {
        super(iBinder, "com.google.android.gms.maps.model.internal.IIndoorBuildingDelegate");
    }

    @Override // com.google.android.gms.internal.maps.zzy
    public final int zzd() throws RemoteException {
        Parcel parcelZzJ = zzJ(1, zza());
        int i = parcelZzJ.readInt();
        parcelZzJ.recycle();
        return i;
    }

    @Override // com.google.android.gms.internal.maps.zzy
    public final int zze() throws RemoteException {
        Parcel parcelZzJ = zzJ(2, zza());
        int i = parcelZzJ.readInt();
        parcelZzJ.recycle();
        return i;
    }

    @Override // com.google.android.gms.internal.maps.zzy
    public final int zzf() throws RemoteException {
        Parcel parcelZzJ = zzJ(6, zza());
        int i = parcelZzJ.readInt();
        parcelZzJ.recycle();
        return i;
    }

    @Override // com.google.android.gms.internal.maps.zzy
    public final List zzg() throws RemoteException {
        Parcel parcelZzJ = zzJ(3, zza());
        ArrayList<IBinder> arrayListCreateBinderArrayList = parcelZzJ.createBinderArrayList();
        parcelZzJ.recycle();
        return arrayListCreateBinderArrayList;
    }

    @Override // com.google.android.gms.internal.maps.zzy
    public final boolean zzh(zzy zzyVar) throws RemoteException {
        Parcel parcelZza = zza();
        zzc.zzg(parcelZza, zzyVar);
        Parcel parcelZzJ = zzJ(5, parcelZza);
        boolean zZzh = zzc.zzh(parcelZzJ);
        parcelZzJ.recycle();
        return zZzh;
    }

    @Override // com.google.android.gms.internal.maps.zzy
    public final boolean zzi() throws RemoteException {
        Parcel parcelZzJ = zzJ(4, zza());
        boolean zZzh = zzc.zzh(parcelZzJ);
        parcelZzJ.recycle();
        return zZzh;
    }
}
