package com.google.android.gms.libs.identity;

import android.app.PendingIntent;
import android.location.Location;
import android.os.IBinder;
import android.os.Parcel;
import android.os.RemoteException;
import com.google.android.gms.common.api.internal.IStatusCallback;
import com.google.android.gms.common.internal.ICancelToken;
import com.google.android.gms.location.ActivityTransitionRequest;
import com.google.android.gms.location.CurrentLocationRequest;
import com.google.android.gms.location.GeofencingRequest;
import com.google.android.gms.location.LastLocationRequest;
import com.google.android.gms.location.LocationAvailability;
import com.google.android.gms.location.LocationRequest;
import com.google.android.gms.location.LocationSettingsRequest;
import com.google.android.gms.location.SleepSegmentRequest;
import com.google.android.gms.location.zzad;
import com.google.android.gms.location.zzb;

/* JADX INFO: compiled from: com.google.android.gms:play-services-location@@21.2.0 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzu extends zza implements zzv {
    zzu(IBinder iBinder) {
        super(iBinder, "com.google.android.gms.location.internal.IGoogleLocationManagerService");
    }

    @Override // com.google.android.gms.libs.identity.zzv
    public final void zzA(Location location) throws RemoteException {
        Parcel parcelZza = zza();
        zzc.zzb(parcelZza, location);
        zzc(13, parcelZza);
    }

    @Override // com.google.android.gms.libs.identity.zzv
    public final void zzB(Location location, IStatusCallback iStatusCallback) throws RemoteException {
        Parcel parcelZza = zza();
        zzc.zzb(parcelZza, location);
        zzc.zzc(parcelZza, iStatusCallback);
        zzc(85, parcelZza);
    }

    @Override // com.google.android.gms.libs.identity.zzv
    public final void zzC(zzr zzrVar) throws RemoteException {
        Parcel parcelZza = zza();
        zzc.zzc(parcelZza, zzrVar);
        zzc(67, parcelZza);
    }

    @Override // com.google.android.gms.libs.identity.zzv
    public final void zzD(LocationSettingsRequest locationSettingsRequest, zzab zzabVar, String str) throws RemoteException {
        Parcel parcelZza = zza();
        zzc.zzb(parcelZza, locationSettingsRequest);
        zzc.zzc(parcelZza, zzabVar);
        parcelZza.writeString(null);
        zzc(63, parcelZza);
    }

    @Override // com.google.android.gms.libs.identity.zzv
    public final void zzE(zzo zzoVar) throws RemoteException {
        Parcel parcelZza = zza();
        zzc.zzc(parcelZza, zzoVar);
        zzc(95, parcelZza);
    }

    @Override // com.google.android.gms.libs.identity.zzv
    public final void zzF(zzj zzjVar) throws RemoteException {
        Parcel parcelZza = zza();
        zzc.zzb(parcelZza, zzjVar);
        zzc(75, parcelZza);
    }

    @Override // com.google.android.gms.libs.identity.zzv
    public final void zzd(GeofencingRequest geofencingRequest, PendingIntent pendingIntent, zzt zztVar) throws RemoteException {
        Parcel parcelZza = zza();
        zzc.zzb(parcelZza, geofencingRequest);
        zzc.zzb(parcelZza, pendingIntent);
        zzc.zzc(parcelZza, zztVar);
        zzc(57, parcelZza);
    }

    @Override // com.google.android.gms.libs.identity.zzv
    public final void zze(GeofencingRequest geofencingRequest, PendingIntent pendingIntent, IStatusCallback iStatusCallback) throws RemoteException {
        Parcel parcelZza = zza();
        zzc.zzb(parcelZza, geofencingRequest);
        zzc.zzb(parcelZza, pendingIntent);
        zzc.zzc(parcelZza, iStatusCallback);
        zzc(97, parcelZza);
    }

    @Override // com.google.android.gms.libs.identity.zzv
    public final void zzf(zzem zzemVar, zzt zztVar) throws RemoteException {
        Parcel parcelZza = zza();
        zzc.zzb(parcelZza, zzemVar);
        zzc.zzc(parcelZza, zztVar);
        zzc(74, parcelZza);
    }

    @Override // com.google.android.gms.libs.identity.zzv
    public final void zzg(zzem zzemVar, IStatusCallback iStatusCallback) throws RemoteException {
        Parcel parcelZza = zza();
        zzc.zzb(parcelZza, zzemVar);
        zzc.zzc(parcelZza, iStatusCallback);
        zzc(98, parcelZza);
    }

    @Override // com.google.android.gms.libs.identity.zzv
    public final void zzh(long j, boolean z, PendingIntent pendingIntent) throws RemoteException {
        Parcel parcelZza = zza();
        parcelZza.writeLong(j);
        int i = zzc.zza;
        parcelZza.writeInt(1);
        zzc.zzb(parcelZza, pendingIntent);
        zzc(5, parcelZza);
    }

    @Override // com.google.android.gms.libs.identity.zzv
    public final void zzi(zzb zzbVar, PendingIntent pendingIntent, IStatusCallback iStatusCallback) throws RemoteException {
        Parcel parcelZza = zza();
        zzc.zzb(parcelZza, zzbVar);
        zzc.zzb(parcelZza, pendingIntent);
        zzc.zzc(parcelZza, iStatusCallback);
        zzc(70, parcelZza);
    }

    @Override // com.google.android.gms.libs.identity.zzv
    public final void zzj(ActivityTransitionRequest activityTransitionRequest, PendingIntent pendingIntent, IStatusCallback iStatusCallback) throws RemoteException {
        Parcel parcelZza = zza();
        zzc.zzb(parcelZza, activityTransitionRequest);
        zzc.zzb(parcelZza, pendingIntent);
        zzc.zzc(parcelZza, iStatusCallback);
        zzc(72, parcelZza);
    }

    @Override // com.google.android.gms.libs.identity.zzv
    public final void zzk(PendingIntent pendingIntent, IStatusCallback iStatusCallback) throws RemoteException {
        Parcel parcelZza = zza();
        zzc.zzb(parcelZza, pendingIntent);
        zzc.zzc(parcelZza, iStatusCallback);
        zzc(73, parcelZza);
    }

    @Override // com.google.android.gms.libs.identity.zzv
    public final void zzl(PendingIntent pendingIntent) throws RemoteException {
        Parcel parcelZza = zza();
        zzc.zzb(parcelZza, pendingIntent);
        zzc(6, parcelZza);
    }

    @Override // com.google.android.gms.libs.identity.zzv
    public final void zzm(PendingIntent pendingIntent, SleepSegmentRequest sleepSegmentRequest, IStatusCallback iStatusCallback) throws RemoteException {
        Parcel parcelZza = zza();
        zzc.zzb(parcelZza, pendingIntent);
        zzc.zzb(parcelZza, sleepSegmentRequest);
        zzc.zzc(parcelZza, iStatusCallback);
        zzc(79, parcelZza);
    }

    @Override // com.google.android.gms.libs.identity.zzv
    public final void zzn(PendingIntent pendingIntent, IStatusCallback iStatusCallback) throws RemoteException {
        Parcel parcelZza = zza();
        zzc.zzb(parcelZza, pendingIntent);
        zzc.zzc(parcelZza, iStatusCallback);
        zzc(69, parcelZza);
    }

    @Override // com.google.android.gms.libs.identity.zzv
    public final void zzo(zzad zzadVar, zzee zzeeVar) throws RemoteException {
        Parcel parcelZza = zza();
        zzc.zzb(parcelZza, zzadVar);
        zzc.zzb(parcelZza, zzeeVar);
        zzc(91, parcelZza);
    }

    @Override // com.google.android.gms.libs.identity.zzv
    public final LocationAvailability zzp(String str) throws RemoteException {
        Parcel parcelZza = zza();
        parcelZza.writeString(str);
        Parcel parcelZzb = zzb(34, parcelZza);
        LocationAvailability locationAvailability = (LocationAvailability) zzc.zza(parcelZzb, LocationAvailability.CREATOR);
        parcelZzb.recycle();
        return locationAvailability;
    }

    @Override // com.google.android.gms.libs.identity.zzv
    public final void zzq(LastLocationRequest lastLocationRequest, zzee zzeeVar) throws RemoteException {
        Parcel parcelZza = zza();
        zzc.zzb(parcelZza, lastLocationRequest);
        zzc.zzb(parcelZza, zzeeVar);
        zzc(90, parcelZza);
    }

    @Override // com.google.android.gms.libs.identity.zzv
    public final void zzr(LastLocationRequest lastLocationRequest, zzz zzzVar) throws RemoteException {
        Parcel parcelZza = zza();
        zzc.zzb(parcelZza, lastLocationRequest);
        zzc.zzc(parcelZza, zzzVar);
        zzc(82, parcelZza);
    }

    @Override // com.google.android.gms.libs.identity.zzv
    public final Location zzs() throws RemoteException {
        Parcel parcelZzb = zzb(7, zza());
        Location location = (Location) zzc.zza(parcelZzb, Location.CREATOR);
        parcelZzb.recycle();
        return location;
    }

    @Override // com.google.android.gms.libs.identity.zzv
    public final ICancelToken zzt(CurrentLocationRequest currentLocationRequest, zzee zzeeVar) throws RemoteException {
        Parcel parcelZza = zza();
        zzc.zzb(parcelZza, currentLocationRequest);
        zzc.zzb(parcelZza, zzeeVar);
        Parcel parcelZzb = zzb(92, parcelZza);
        ICancelToken iCancelTokenAsInterface = ICancelToken.Stub.asInterface(parcelZzb.readStrongBinder());
        parcelZzb.recycle();
        return iCancelTokenAsInterface;
    }

    @Override // com.google.android.gms.libs.identity.zzv
    public final ICancelToken zzu(CurrentLocationRequest currentLocationRequest, zzz zzzVar) throws RemoteException {
        Parcel parcelZza = zza();
        zzc.zzb(parcelZza, currentLocationRequest);
        zzc.zzc(parcelZza, zzzVar);
        Parcel parcelZzb = zzb(87, parcelZza);
        ICancelToken iCancelTokenAsInterface = ICancelToken.Stub.asInterface(parcelZzb.readStrongBinder());
        parcelZzb.recycle();
        return iCancelTokenAsInterface;
    }

    @Override // com.google.android.gms.libs.identity.zzv
    public final void zzv(zzei zzeiVar) throws RemoteException {
        Parcel parcelZza = zza();
        zzc.zzb(parcelZza, zzeiVar);
        zzc(59, parcelZza);
    }

    @Override // com.google.android.gms.libs.identity.zzv
    public final void zzw(zzee zzeeVar, LocationRequest locationRequest, IStatusCallback iStatusCallback) throws RemoteException {
        Parcel parcelZza = zza();
        zzc.zzb(parcelZza, zzeeVar);
        zzc.zzb(parcelZza, locationRequest);
        zzc.zzc(parcelZza, iStatusCallback);
        zzc(88, parcelZza);
    }

    @Override // com.google.android.gms.libs.identity.zzv
    public final void zzx(zzee zzeeVar, IStatusCallback iStatusCallback) throws RemoteException {
        Parcel parcelZza = zza();
        zzc.zzb(parcelZza, zzeeVar);
        zzc.zzc(parcelZza, iStatusCallback);
        zzc(89, parcelZza);
    }

    @Override // com.google.android.gms.libs.identity.zzv
    public final void zzy(boolean z) throws RemoteException {
        Parcel parcelZza = zza();
        int i = zzc.zza;
        parcelZza.writeInt(z ? 1 : 0);
        zzc(12, parcelZza);
    }

    @Override // com.google.android.gms.libs.identity.zzv
    public final void zzz(boolean z, IStatusCallback iStatusCallback) throws RemoteException {
        Parcel parcelZza = zza();
        int i = zzc.zza;
        parcelZza.writeInt(z ? 1 : 0);
        zzc.zzc(parcelZza, iStatusCallback);
        zzc(84, parcelZza);
    }
}
