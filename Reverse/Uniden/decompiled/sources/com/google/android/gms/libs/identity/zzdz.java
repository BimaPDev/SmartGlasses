package com.google.android.gms.libs.identity;

import android.app.PendingIntent;
import android.content.Context;
import android.location.Location;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Looper;
import android.os.RemoteException;
import androidx.collection.SimpleArrayMap;
import com.google.android.gms.common.Feature;
import com.google.android.gms.common.api.internal.ConnectionCallbacks;
import com.google.android.gms.common.api.internal.ListenerHolder;
import com.google.android.gms.common.api.internal.ListenerHolders;
import com.google.android.gms.common.api.internal.OnConnectionFailedListener;
import com.google.android.gms.common.internal.ClientSettings;
import com.google.android.gms.common.internal.GmsClient;
import com.google.android.gms.common.internal.ICancelToken;
import com.google.android.gms.location.CurrentLocationRequest;
import com.google.android.gms.location.DeviceOrientationRequest;
import com.google.android.gms.location.GeofencingRequest;
import com.google.android.gms.location.LastLocationRequest;
import com.google.android.gms.location.LocationRequest;
import com.google.android.gms.location.zzad;
import com.google.android.gms.location.zzo;
import com.google.android.gms.tasks.CancellationToken;
import com.google.android.gms.tasks.OnCompleteListener;
import com.google.android.gms.tasks.OnTokenCanceledListener;
import com.google.android.gms.tasks.Task;
import com.google.android.gms.tasks.TaskCompletionSource;
import java.util.Objects;

/* JADX INFO: compiled from: com.google.android.gms:play-services-location@@21.2.0 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzdz extends GmsClient {
    public static final /* synthetic */ int zze = 0;
    private final SimpleArrayMap zzf;
    private final SimpleArrayMap zzg;
    private final SimpleArrayMap zzh;
    private final SimpleArrayMap zzi;

    public zzdz(Context context, Looper looper, ClientSettings clientSettings, ConnectionCallbacks connectionCallbacks, OnConnectionFailedListener onConnectionFailedListener) {
        super(context, looper, 23, clientSettings, connectionCallbacks, onConnectionFailedListener);
        this.zzf = new SimpleArrayMap();
        this.zzg = new SimpleArrayMap();
        this.zzh = new SimpleArrayMap();
        this.zzi = new SimpleArrayMap();
    }

    private final boolean zzG(Feature feature) {
        Feature feature2;
        Feature[] availableFeatures = getAvailableFeatures();
        if (availableFeatures != null) {
            int i = 0;
            while (true) {
                if (i >= availableFeatures.length) {
                    feature2 = null;
                    break;
                }
                feature2 = availableFeatures[i];
                if (feature.getName().equals(feature2.getName())) {
                    break;
                }
                i++;
            }
            if (feature2 != null && feature2.getVersion() >= feature.getVersion()) {
                return true;
            }
        }
        return false;
    }

    @Override // com.google.android.gms.common.internal.BaseGmsClient
    protected final /* synthetic */ IInterface createServiceInterface(IBinder iBinder) {
        if (iBinder == null) {
            return null;
        }
        IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface("com.google.android.gms.location.internal.IGoogleLocationManagerService");
        return iInterfaceQueryLocalInterface instanceof zzv ? (zzv) iInterfaceQueryLocalInterface : new zzu(iBinder);
    }

    @Override // com.google.android.gms.common.internal.BaseGmsClient
    public final Feature[] getApiFeatures() {
        return zzo.zzp;
    }

    @Override // com.google.android.gms.common.internal.BaseGmsClient, com.google.android.gms.common.api.Api.Client
    public final int getMinApkVersion() {
        return 11717000;
    }

    @Override // com.google.android.gms.common.internal.BaseGmsClient
    protected final String getServiceDescriptor() {
        return "com.google.android.gms.location.internal.IGoogleLocationManagerService";
    }

    @Override // com.google.android.gms.common.internal.BaseGmsClient
    protected final String getStartServiceAction() {
        return "com.google.android.location.internal.GoogleLocationManagerService.START";
    }

    @Override // com.google.android.gms.common.internal.BaseGmsClient
    public final void onConnectionSuspended(int i) {
        super.onConnectionSuspended(i);
        synchronized (this.zzf) {
            this.zzf.clear();
        }
        synchronized (this.zzg) {
            this.zzg.clear();
        }
        synchronized (this.zzh) {
            this.zzh.clear();
        }
    }

    @Override // com.google.android.gms.common.internal.BaseGmsClient
    public final boolean usesClientTelemetry() {
        return true;
    }

    public final void zzA(Location location, TaskCompletionSource taskCompletionSource) throws RemoteException {
        if (zzG(zzo.zzh)) {
            ((zzv) getService()).zzB(location, new zzdj(null, taskCompletionSource));
        } else {
            ((zzv) getService()).zzA(location);
            taskCompletionSource.setResult(null);
        }
    }

    public final void zzB(TaskCompletionSource taskCompletionSource) throws RemoteException {
        ((zzv) getService()).zzC(new zzdn(null, taskCompletionSource));
    }

    public final void zzC(ListenerHolder listenerHolder, DeviceOrientationRequest deviceOrientationRequest, TaskCompletionSource taskCompletionSource) throws RemoteException {
        ListenerHolder.ListenerKey listenerKey = (ListenerHolder.ListenerKey) Objects.requireNonNull(listenerHolder.getListenerKey());
        synchronized (this.zzh) {
            zzdq zzdqVar = (zzdq) this.zzh.get(listenerKey);
            if (zzdqVar == null) {
                zzdqVar = new zzdq(listenerHolder);
                this.zzh.put(listenerKey, zzdqVar);
            } else {
                zzdqVar.zzc(listenerHolder);
            }
            ((zzv) getService()).zzF(new zzj(1, new zzh(deviceOrientationRequest, zzh.zza, null), zzdqVar, new zzdn(null, taskCompletionSource)));
        }
    }

    public final void zzD(ListenerHolder.ListenerKey listenerKey, TaskCompletionSource taskCompletionSource) throws RemoteException {
        synchronized (this.zzh) {
            zzdq zzdqVar = (zzdq) this.zzh.remove(listenerKey);
            if (zzdqVar == null) {
                taskCompletionSource.setResult(Boolean.FALSE);
            } else {
                zzdqVar.zze();
                ((zzv) getService()).zzF(new zzj(2, null, zzdqVar, new zzdn(Boolean.TRUE, taskCompletionSource)));
            }
        }
    }

    public final void zzE(GeofencingRequest geofencingRequest, PendingIntent pendingIntent, TaskCompletionSource taskCompletionSource) throws RemoteException {
        if (zzG(zzo.zzn)) {
            ((zzv) getService()).zze(geofencingRequest, pendingIntent, new zzdj(null, taskCompletionSource));
        } else {
            ((zzv) getService()).zzd(geofencingRequest, pendingIntent, new zzdg(taskCompletionSource));
        }
    }

    public final void zzF(zzem zzemVar, TaskCompletionSource taskCompletionSource) throws RemoteException {
        if (zzG(zzo.zzn)) {
            ((zzv) getService()).zzg(zzemVar, new zzdj(null, taskCompletionSource));
        } else {
            ((zzv) getService()).zzf(zzemVar, new zzdg(taskCompletionSource));
        }
    }

    public final void zzp(zzad zzadVar, TaskCompletionSource taskCompletionSource) throws RemoteException {
        if (zzG(zzo.zzj)) {
            ((zzv) getService()).zzo(zzadVar, new zzee(5, null, new zzdl(taskCompletionSource), null, null));
        } else {
            taskCompletionSource.setResult(((zzv) getService()).zzp(getContext().getPackageName()));
        }
    }

    public final void zzq(LastLocationRequest lastLocationRequest, TaskCompletionSource taskCompletionSource) throws RemoteException {
        if (zzG(zzo.zzj)) {
            ((zzv) getService()).zzq(lastLocationRequest, zzee.zzd(new zzdk(taskCompletionSource)));
        } else if (zzG(zzo.zzf)) {
            ((zzv) getService()).zzr(lastLocationRequest, new zzdk(taskCompletionSource));
        } else {
            taskCompletionSource.setResult(((zzv) getService()).zzs());
        }
    }

    public final void zzr(CurrentLocationRequest currentLocationRequest, CancellationToken cancellationToken, final TaskCompletionSource taskCompletionSource) throws RemoteException {
        if (zzG(zzo.zzj)) {
            final ICancelToken iCancelTokenZzt = ((zzv) getService()).zzt(currentLocationRequest, zzee.zzd(new zzdk(taskCompletionSource)));
            if (cancellationToken != null) {
                cancellationToken.onCanceledRequested(new OnTokenCanceledListener() { // from class: com.google.android.gms.internal.location.zzed
                    @Override // com.google.android.gms.tasks.OnTokenCanceledListener
                    public final /* synthetic */ void onCanceled() {
                        int i = zzdz.zze;
                        try {
                            iCancelTokenZzt.cancel();
                        } catch (RemoteException unused) {
                        }
                    }
                });
                return;
            }
            return;
        }
        if (zzG(zzo.zze)) {
            final ICancelToken iCancelTokenZzu = ((zzv) getService()).zzu(currentLocationRequest, new zzdk(taskCompletionSource));
            if (cancellationToken != null) {
                cancellationToken.onCanceledRequested(new OnTokenCanceledListener() { // from class: com.google.android.gms.internal.location.zzeb
                    @Override // com.google.android.gms.tasks.OnTokenCanceledListener
                    public final /* synthetic */ void onCanceled() {
                        int i = zzdz.zze;
                        try {
                            iCancelTokenZzu.cancel();
                        } catch (RemoteException unused) {
                        }
                    }
                });
                return;
            }
            return;
        }
        ListenerHolder listenerHolderCreateListenerHolder = ListenerHolders.createListenerHolder(new zzdh(this, taskCompletionSource), zzfc.zza(), "GetCurrentLocation");
        final ListenerHolder.ListenerKey listenerKey = (ListenerHolder.ListenerKey) Objects.requireNonNull(listenerHolderCreateListenerHolder.getListenerKey());
        zzdi zzdiVar = new zzdi(this, listenerHolderCreateListenerHolder, taskCompletionSource);
        TaskCompletionSource taskCompletionSource2 = new TaskCompletionSource();
        LocationRequest.Builder builder = new LocationRequest.Builder(currentLocationRequest.getPriority(), 0L);
        builder.setMinUpdateIntervalMillis(0L);
        builder.setDurationMillis(currentLocationRequest.getDurationMillis());
        builder.setGranularity(currentLocationRequest.getGranularity());
        builder.setMaxUpdateAgeMillis(currentLocationRequest.getMaxUpdateAgeMillis());
        builder.zzb(currentLocationRequest.zza());
        builder.zza(currentLocationRequest.zzb());
        builder.setWaitForAccurateLocation(true);
        builder.zzc(currentLocationRequest.zzc());
        zzt(zzdiVar, builder.build(), taskCompletionSource2);
        taskCompletionSource2.getTask().addOnCompleteListener(new OnCompleteListener() { // from class: com.google.android.gms.internal.location.zzea
            @Override // com.google.android.gms.tasks.OnCompleteListener
            public final /* synthetic */ void onComplete(Task task) {
                int i = zzdz.zze;
                if (task.isSuccessful()) {
                    return;
                }
                taskCompletionSource.trySetException((Exception) Objects.requireNonNull(task.getException()));
            }
        });
        if (cancellationToken != null) {
            cancellationToken.onCanceledRequested(new OnTokenCanceledListener() { // from class: com.google.android.gms.internal.location.zzec
                @Override // com.google.android.gms.tasks.OnTokenCanceledListener
                public final /* synthetic */ void onCanceled() {
                    try {
                        this.zza.zzw(listenerKey, true, new TaskCompletionSource());
                    } catch (RemoteException unused) {
                    }
                }
            });
        }
    }

    public final void zzs(zzdr zzdrVar, LocationRequest locationRequest, TaskCompletionSource taskCompletionSource) throws RemoteException {
        zzdy zzdyVar;
        ListenerHolder listenerHolderZza = zzdrVar.zza();
        ListenerHolder.ListenerKey listenerKey = (ListenerHolder.ListenerKey) Objects.requireNonNull(listenerHolderZza.getListenerKey());
        boolean zZzG = zzG(zzo.zzj);
        synchronized (this.zzf) {
            zzdy zzdyVar2 = (zzdy) this.zzf.get(listenerKey);
            if (zzdyVar2 == null || zZzG) {
                zzdy zzdyVar3 = new zzdy(zzdrVar);
                this.zzf.put(listenerKey, zzdyVar3);
                zzdyVar = zzdyVar3;
            } else {
                zzdyVar2.zzc(listenerHolderZza);
                zzdyVar = zzdyVar2;
                zzdyVar2 = null;
            }
            if (zZzG) {
                ((zzv) getService()).zzw(zzee.zza(zzdyVar2, zzdyVar, listenerKey.toIdString()), locationRequest, new zzdj(null, taskCompletionSource));
            } else {
                ((zzv) getService()).zzv(new zzei(1, zzeg.zza(null, locationRequest), zzdyVar, null, null, new zzdo(taskCompletionSource, zzdyVar), listenerKey.toIdString()));
            }
        }
    }

    public final void zzt(zzdr zzdrVar, LocationRequest locationRequest, TaskCompletionSource taskCompletionSource) throws RemoteException {
        zzdv zzdvVar;
        ListenerHolder listenerHolderZza = zzdrVar.zza();
        ListenerHolder.ListenerKey listenerKey = (ListenerHolder.ListenerKey) Objects.requireNonNull(listenerHolderZza.getListenerKey());
        boolean zZzG = zzG(zzo.zzj);
        synchronized (this.zzg) {
            zzdv zzdvVar2 = (zzdv) this.zzg.get(listenerKey);
            if (zzdvVar2 == null || zZzG) {
                zzdv zzdvVar3 = new zzdv(zzdrVar);
                this.zzg.put(listenerKey, zzdvVar3);
                zzdvVar = zzdvVar3;
            } else {
                zzdvVar2.zzc(listenerHolderZza);
                zzdvVar = zzdvVar2;
                zzdvVar2 = null;
            }
            if (zZzG) {
                ((zzv) getService()).zzw(zzee.zzb(zzdvVar2, zzdvVar, listenerKey.toIdString()), locationRequest, new zzdj(null, taskCompletionSource));
            } else {
                ((zzv) getService()).zzv(new zzei(1, zzeg.zza(null, locationRequest), null, zzdvVar, null, new zzdd(taskCompletionSource, zzdvVar), listenerKey.toIdString()));
            }
        }
    }

    public final void zzu(PendingIntent pendingIntent, LocationRequest locationRequest, TaskCompletionSource taskCompletionSource) throws RemoteException {
        if (zzG(zzo.zzj)) {
            ((zzv) getService()).zzw(zzee.zzc(pendingIntent), locationRequest, new zzdj(null, taskCompletionSource));
            return;
        }
        zzv zzvVar = (zzv) getService();
        zzeg zzegVarZza = zzeg.zza(null, locationRequest);
        zzdn zzdnVar = new zzdn(null, taskCompletionSource);
        int iHashCode = pendingIntent.hashCode();
        StringBuilder sb = new StringBuilder(String.valueOf(iHashCode).length() + 14);
        sb.append("PendingIntent@");
        sb.append(iHashCode);
        zzvVar.zzv(new zzei(1, zzegVarZza, null, null, pendingIntent, zzdnVar, sb.toString()));
    }

    public final void zzv(ListenerHolder.ListenerKey listenerKey, boolean z, TaskCompletionSource taskCompletionSource) throws RemoteException {
        synchronized (this.zzf) {
            zzdy zzdyVar = (zzdy) this.zzf.remove(listenerKey);
            if (zzdyVar == null) {
                taskCompletionSource.setResult(Boolean.FALSE);
                return;
            }
            zzdyVar.zzf();
            if (!z) {
                taskCompletionSource.setResult(Boolean.TRUE);
            } else if (zzG(zzo.zzj)) {
                zzv zzvVar = (zzv) getService();
                int iIdentityHashCode = System.identityHashCode(zzdyVar);
                StringBuilder sb = new StringBuilder(String.valueOf(iIdentityHashCode).length() + 18);
                sb.append("ILocationListener@");
                sb.append(iIdentityHashCode);
                zzvVar.zzx(zzee.zza(null, zzdyVar, sb.toString()), new zzdj(Boolean.TRUE, taskCompletionSource));
            } else {
                ((zzv) getService()).zzv(new zzei(2, null, zzdyVar, null, null, new zzdn(Boolean.TRUE, taskCompletionSource), null));
            }
        }
    }

    public final void zzw(ListenerHolder.ListenerKey listenerKey, boolean z, TaskCompletionSource taskCompletionSource) throws RemoteException {
        synchronized (this.zzg) {
            zzdv zzdvVar = (zzdv) this.zzg.remove(listenerKey);
            if (zzdvVar == null) {
                taskCompletionSource.setResult(Boolean.FALSE);
                return;
            }
            zzdvVar.zzg();
            if (!z) {
                taskCompletionSource.setResult(Boolean.TRUE);
            } else if (zzG(zzo.zzj)) {
                zzv zzvVar = (zzv) getService();
                int iIdentityHashCode = System.identityHashCode(zzdvVar);
                StringBuilder sb = new StringBuilder(String.valueOf(iIdentityHashCode).length() + 18);
                sb.append("ILocationCallback@");
                sb.append(iIdentityHashCode);
                zzvVar.zzx(zzee.zzb(null, zzdvVar, sb.toString()), new zzdj(Boolean.TRUE, taskCompletionSource));
            } else {
                ((zzv) getService()).zzv(new zzei(2, null, null, zzdvVar, null, new zzdn(Boolean.TRUE, taskCompletionSource), null));
            }
        }
    }

    public final void zzx(PendingIntent pendingIntent, TaskCompletionSource taskCompletionSource, Object obj) throws RemoteException {
        if (zzG(zzo.zzj)) {
            ((zzv) getService()).zzx(zzee.zzc(pendingIntent), new zzdj(null, taskCompletionSource));
        } else {
            ((zzv) getService()).zzv(new zzei(2, null, null, null, pendingIntent, new zzdn(null, taskCompletionSource), null));
        }
    }

    public final void zzy(TaskCompletionSource taskCompletionSource) throws RemoteException {
        if (zzG(zzo.zzg)) {
            ((zzv) getService()).zzz(true, new zzdj(null, taskCompletionSource));
        } else {
            ((zzv) getService()).zzy(true);
            taskCompletionSource.setResult(null);
        }
    }

    public final void zzz(TaskCompletionSource taskCompletionSource) throws RemoteException {
        if (zzG(zzo.zzg)) {
            ((zzv) getService()).zzz(false, new zzdj(true, taskCompletionSource));
        } else {
            ((zzv) getService()).zzy(false);
            taskCompletionSource.setResult(true);
        }
    }
}
