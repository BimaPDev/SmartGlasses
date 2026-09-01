package com.google.android.gms.measurement.internal;

import android.os.Bundle;
import android.os.IBinder;
import android.os.Parcel;
import android.os.RemoteException;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzgd extends com.google.android.gms.internal.measurement.zzbu implements zzgb {
    @Override // com.google.android.gms.measurement.internal.zzgb
    public final zzaj zza(zzo zzoVar) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        com.google.android.gms.internal.measurement.zzbw.zza(parcelM141a_, zzoVar);
        Parcel parcelZza = zza(21, parcelM141a_);
        zzaj zzajVar = (zzaj) com.google.android.gms.internal.measurement.zzbw.zza(parcelZza, zzaj.CREATOR);
        parcelZza.recycle();
        return zzajVar;
    }

    @Override // com.google.android.gms.measurement.internal.zzgb
    public final String zzb(zzo zzoVar) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        com.google.android.gms.internal.measurement.zzbw.zza(parcelM141a_, zzoVar);
        Parcel parcelZza = zza(11, parcelM141a_);
        String string = parcelZza.readString();
        parcelZza.recycle();
        return string;
    }

    @Override // com.google.android.gms.measurement.internal.zzgb
    public final List<zzno> zza(zzo zzoVar, Bundle bundle) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        com.google.android.gms.internal.measurement.zzbw.zza(parcelM141a_, zzoVar);
        com.google.android.gms.internal.measurement.zzbw.zza(parcelM141a_, bundle);
        Parcel parcelZza = zza(24, parcelM141a_);
        ArrayList arrayListCreateTypedArrayList = parcelZza.createTypedArrayList(zzno.CREATOR);
        parcelZza.recycle();
        return arrayListCreateTypedArrayList;
    }

    @Override // com.google.android.gms.measurement.internal.zzgb
    public final List<zzon> zza(zzo zzoVar, boolean z) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        com.google.android.gms.internal.measurement.zzbw.zza(parcelM141a_, zzoVar);
        com.google.android.gms.internal.measurement.zzbw.zza(parcelM141a_, z);
        Parcel parcelZza = zza(7, parcelM141a_);
        ArrayList arrayListCreateTypedArrayList = parcelZza.createTypedArrayList(zzon.CREATOR);
        parcelZza.recycle();
        return arrayListCreateTypedArrayList;
    }

    @Override // com.google.android.gms.measurement.internal.zzgb
    public final List<zzae> zza(String str, String str2, zzo zzoVar) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        parcelM141a_.writeString(str);
        parcelM141a_.writeString(str2);
        com.google.android.gms.internal.measurement.zzbw.zza(parcelM141a_, zzoVar);
        Parcel parcelZza = zza(16, parcelM141a_);
        ArrayList arrayListCreateTypedArrayList = parcelZza.createTypedArrayList(zzae.CREATOR);
        parcelZza.recycle();
        return arrayListCreateTypedArrayList;
    }

    @Override // com.google.android.gms.measurement.internal.zzgb
    public final List<zzae> zza(String str, String str2, String str3) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        parcelM141a_.writeString(str);
        parcelM141a_.writeString(str2);
        parcelM141a_.writeString(str3);
        Parcel parcelZza = zza(17, parcelM141a_);
        ArrayList arrayListCreateTypedArrayList = parcelZza.createTypedArrayList(zzae.CREATOR);
        parcelZza.recycle();
        return arrayListCreateTypedArrayList;
    }

    @Override // com.google.android.gms.measurement.internal.zzgb
    public final List<zzon> zza(String str, String str2, boolean z, zzo zzoVar) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        parcelM141a_.writeString(str);
        parcelM141a_.writeString(str2);
        com.google.android.gms.internal.measurement.zzbw.zza(parcelM141a_, z);
        com.google.android.gms.internal.measurement.zzbw.zza(parcelM141a_, zzoVar);
        Parcel parcelZza = zza(14, parcelM141a_);
        ArrayList arrayListCreateTypedArrayList = parcelZza.createTypedArrayList(zzon.CREATOR);
        parcelZza.recycle();
        return arrayListCreateTypedArrayList;
    }

    @Override // com.google.android.gms.measurement.internal.zzgb
    public final List<zzon> zza(String str, String str2, String str3, boolean z) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        parcelM141a_.writeString(str);
        parcelM141a_.writeString(str2);
        parcelM141a_.writeString(str3);
        com.google.android.gms.internal.measurement.zzbw.zza(parcelM141a_, z);
        Parcel parcelZza = zza(15, parcelM141a_);
        ArrayList arrayListCreateTypedArrayList = parcelZza.createTypedArrayList(zzon.CREATOR);
        parcelZza.recycle();
        return arrayListCreateTypedArrayList;
    }

    zzgd(IBinder iBinder) {
        super(iBinder, "com.google.android.gms.measurement.internal.IMeasurementService");
    }

    @Override // com.google.android.gms.measurement.internal.zzgb
    public final void zzc(zzo zzoVar) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        com.google.android.gms.internal.measurement.zzbw.zza(parcelM141a_, zzoVar);
        zzb(27, parcelM141a_);
    }

    @Override // com.google.android.gms.measurement.internal.zzgb
    public final void zzd(zzo zzoVar) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        com.google.android.gms.internal.measurement.zzbw.zza(parcelM141a_, zzoVar);
        zzb(4, parcelM141a_);
    }

    @Override // com.google.android.gms.measurement.internal.zzgb
    public final void zza(zzbf zzbfVar, zzo zzoVar) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        com.google.android.gms.internal.measurement.zzbw.zza(parcelM141a_, zzbfVar);
        com.google.android.gms.internal.measurement.zzbw.zza(parcelM141a_, zzoVar);
        zzb(1, parcelM141a_);
    }

    @Override // com.google.android.gms.measurement.internal.zzgb
    public final void zza(zzbf zzbfVar, String str, String str2) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        com.google.android.gms.internal.measurement.zzbw.zza(parcelM141a_, zzbfVar);
        parcelM141a_.writeString(str);
        parcelM141a_.writeString(str2);
        zzb(5, parcelM141a_);
    }

    @Override // com.google.android.gms.measurement.internal.zzgb
    public final void zze(zzo zzoVar) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        com.google.android.gms.internal.measurement.zzbw.zza(parcelM141a_, zzoVar);
        zzb(18, parcelM141a_);
    }

    @Override // com.google.android.gms.measurement.internal.zzgb
    public final void zza(zzae zzaeVar, zzo zzoVar) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        com.google.android.gms.internal.measurement.zzbw.zza(parcelM141a_, zzaeVar);
        com.google.android.gms.internal.measurement.zzbw.zza(parcelM141a_, zzoVar);
        zzb(12, parcelM141a_);
    }

    @Override // com.google.android.gms.measurement.internal.zzgb
    public final void zza(zzae zzaeVar) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        com.google.android.gms.internal.measurement.zzbw.zza(parcelM141a_, zzaeVar);
        zzb(13, parcelM141a_);
    }

    @Override // com.google.android.gms.measurement.internal.zzgb
    public final void zzf(zzo zzoVar) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        com.google.android.gms.internal.measurement.zzbw.zza(parcelM141a_, zzoVar);
        zzb(20, parcelM141a_);
    }

    @Override // com.google.android.gms.measurement.internal.zzgb
    public final void zza(long j, String str, String str2, String str3) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        parcelM141a_.writeLong(j);
        parcelM141a_.writeString(str);
        parcelM141a_.writeString(str2);
        parcelM141a_.writeString(str3);
        zzb(10, parcelM141a_);
    }

    @Override // com.google.android.gms.measurement.internal.zzgb
    public final void zza(Bundle bundle, zzo zzoVar) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        com.google.android.gms.internal.measurement.zzbw.zza(parcelM141a_, bundle);
        com.google.android.gms.internal.measurement.zzbw.zza(parcelM141a_, zzoVar);
        zzb(19, parcelM141a_);
    }

    @Override // com.google.android.gms.measurement.internal.zzgb
    public final void zzb(Bundle bundle, zzo zzoVar) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        com.google.android.gms.internal.measurement.zzbw.zza(parcelM141a_, bundle);
        com.google.android.gms.internal.measurement.zzbw.zza(parcelM141a_, zzoVar);
        zzb(28, parcelM141a_);
    }

    @Override // com.google.android.gms.measurement.internal.zzgb
    public final void zzg(zzo zzoVar) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        com.google.android.gms.internal.measurement.zzbw.zza(parcelM141a_, zzoVar);
        zzb(26, parcelM141a_);
    }

    @Override // com.google.android.gms.measurement.internal.zzgb
    public final void zzh(zzo zzoVar) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        com.google.android.gms.internal.measurement.zzbw.zza(parcelM141a_, zzoVar);
        zzb(6, parcelM141a_);
    }

    @Override // com.google.android.gms.measurement.internal.zzgb
    public final void zzi(zzo zzoVar) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        com.google.android.gms.internal.measurement.zzbw.zza(parcelM141a_, zzoVar);
        zzb(25, parcelM141a_);
    }

    @Override // com.google.android.gms.measurement.internal.zzgb
    public final void zza(zzon zzonVar, zzo zzoVar) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        com.google.android.gms.internal.measurement.zzbw.zza(parcelM141a_, zzonVar);
        com.google.android.gms.internal.measurement.zzbw.zza(parcelM141a_, zzoVar);
        zzb(2, parcelM141a_);
    }

    @Override // com.google.android.gms.measurement.internal.zzgb
    public final byte[] zza(zzbf zzbfVar, String str) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        com.google.android.gms.internal.measurement.zzbw.zza(parcelM141a_, zzbfVar);
        parcelM141a_.writeString(str);
        Parcel parcelZza = zza(9, parcelM141a_);
        byte[] bArrCreateByteArray = parcelZza.createByteArray();
        parcelZza.recycle();
        return bArrCreateByteArray;
    }
}
