package com.google.android.gms.internal.measurement;

import android.content.Intent;
import android.os.Bundle;
import android.os.IBinder;
import android.os.Parcel;
import android.os.RemoteException;
import com.google.android.gms.dynamic.IObjectWrapper;
import java.util.Map;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzdl extends zzbu implements zzdj {
    zzdl(IBinder iBinder) {
        super(iBinder, "com.google.android.gms.measurement.api.internal.IAppMeasurementDynamiteService");
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void beginAdUnitExposure(String str, long j) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        parcelM141a_.writeString(str);
        parcelM141a_.writeLong(j);
        zzb(23, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void clearConditionalUserProperty(String str, String str2, Bundle bundle) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        parcelM141a_.writeString(str);
        parcelM141a_.writeString(str2);
        zzbw.zza(parcelM141a_, bundle);
        zzb(9, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void clearMeasurementEnabled(long j) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        parcelM141a_.writeLong(j);
        zzb(43, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void endAdUnitExposure(String str, long j) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        parcelM141a_.writeString(str);
        parcelM141a_.writeLong(j);
        zzb(24, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void generateEventId(zzdo zzdoVar) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        zzbw.zza(parcelM141a_, zzdoVar);
        zzb(22, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void getAppInstanceId(zzdo zzdoVar) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        zzbw.zza(parcelM141a_, zzdoVar);
        zzb(20, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void getCachedAppInstanceId(zzdo zzdoVar) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        zzbw.zza(parcelM141a_, zzdoVar);
        zzb(19, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void getConditionalUserProperties(String str, String str2, zzdo zzdoVar) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        parcelM141a_.writeString(str);
        parcelM141a_.writeString(str2);
        zzbw.zza(parcelM141a_, zzdoVar);
        zzb(10, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void getCurrentScreenClass(zzdo zzdoVar) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        zzbw.zza(parcelM141a_, zzdoVar);
        zzb(17, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void getCurrentScreenName(zzdo zzdoVar) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        zzbw.zza(parcelM141a_, zzdoVar);
        zzb(16, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void getGmpAppId(zzdo zzdoVar) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        zzbw.zza(parcelM141a_, zzdoVar);
        zzb(21, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void getMaxUserProperties(String str, zzdo zzdoVar) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        parcelM141a_.writeString(str);
        zzbw.zza(parcelM141a_, zzdoVar);
        zzb(6, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void getSessionId(zzdo zzdoVar) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        zzbw.zza(parcelM141a_, zzdoVar);
        zzb(46, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void getTestFlag(zzdo zzdoVar, int i) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        zzbw.zza(parcelM141a_, zzdoVar);
        parcelM141a_.writeInt(i);
        zzb(38, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void getUserProperties(String str, String str2, boolean z, zzdo zzdoVar) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        parcelM141a_.writeString(str);
        parcelM141a_.writeString(str2);
        zzbw.zza(parcelM141a_, z);
        zzbw.zza(parcelM141a_, zzdoVar);
        zzb(5, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void initForTests(Map map) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        parcelM141a_.writeMap(map);
        zzb(37, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void initialize(IObjectWrapper iObjectWrapper, zzdw zzdwVar, long j) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        zzbw.zza(parcelM141a_, iObjectWrapper);
        zzbw.zza(parcelM141a_, zzdwVar);
        parcelM141a_.writeLong(j);
        zzb(1, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void isDataCollectionEnabled(zzdo zzdoVar) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        zzbw.zza(parcelM141a_, zzdoVar);
        zzb(40, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void logEvent(String str, String str2, Bundle bundle, boolean z, boolean z2, long j) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        parcelM141a_.writeString(str);
        parcelM141a_.writeString(str2);
        zzbw.zza(parcelM141a_, bundle);
        zzbw.zza(parcelM141a_, z);
        zzbw.zza(parcelM141a_, z2);
        parcelM141a_.writeLong(j);
        zzb(2, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void logEventAndBundle(String str, String str2, Bundle bundle, zzdo zzdoVar, long j) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        parcelM141a_.writeString(str);
        parcelM141a_.writeString(str2);
        zzbw.zza(parcelM141a_, bundle);
        zzbw.zza(parcelM141a_, zzdoVar);
        parcelM141a_.writeLong(j);
        zzb(3, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void logHealthData(int i, String str, IObjectWrapper iObjectWrapper, IObjectWrapper iObjectWrapper2, IObjectWrapper iObjectWrapper3) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        parcelM141a_.writeInt(i);
        parcelM141a_.writeString(str);
        zzbw.zza(parcelM141a_, iObjectWrapper);
        zzbw.zza(parcelM141a_, iObjectWrapper2);
        zzbw.zza(parcelM141a_, iObjectWrapper3);
        zzb(33, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void onActivityCreated(IObjectWrapper iObjectWrapper, Bundle bundle, long j) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        zzbw.zza(parcelM141a_, iObjectWrapper);
        zzbw.zza(parcelM141a_, bundle);
        parcelM141a_.writeLong(j);
        zzb(27, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void onActivityDestroyed(IObjectWrapper iObjectWrapper, long j) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        zzbw.zza(parcelM141a_, iObjectWrapper);
        parcelM141a_.writeLong(j);
        zzb(28, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void onActivityPaused(IObjectWrapper iObjectWrapper, long j) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        zzbw.zza(parcelM141a_, iObjectWrapper);
        parcelM141a_.writeLong(j);
        zzb(29, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void onActivityResumed(IObjectWrapper iObjectWrapper, long j) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        zzbw.zza(parcelM141a_, iObjectWrapper);
        parcelM141a_.writeLong(j);
        zzb(30, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void onActivitySaveInstanceState(IObjectWrapper iObjectWrapper, zzdo zzdoVar, long j) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        zzbw.zza(parcelM141a_, iObjectWrapper);
        zzbw.zza(parcelM141a_, zzdoVar);
        parcelM141a_.writeLong(j);
        zzb(31, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void onActivityStarted(IObjectWrapper iObjectWrapper, long j) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        zzbw.zza(parcelM141a_, iObjectWrapper);
        parcelM141a_.writeLong(j);
        zzb(25, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void onActivityStopped(IObjectWrapper iObjectWrapper, long j) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        zzbw.zza(parcelM141a_, iObjectWrapper);
        parcelM141a_.writeLong(j);
        zzb(26, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void performAction(Bundle bundle, zzdo zzdoVar, long j) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        zzbw.zza(parcelM141a_, bundle);
        zzbw.zza(parcelM141a_, zzdoVar);
        parcelM141a_.writeLong(j);
        zzb(32, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void registerOnMeasurementEventListener(zzdp zzdpVar) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        zzbw.zza(parcelM141a_, zzdpVar);
        zzb(35, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void resetAnalyticsData(long j) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        parcelM141a_.writeLong(j);
        zzb(12, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void setConditionalUserProperty(Bundle bundle, long j) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        zzbw.zza(parcelM141a_, bundle);
        parcelM141a_.writeLong(j);
        zzb(8, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void setConsent(Bundle bundle, long j) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        zzbw.zza(parcelM141a_, bundle);
        parcelM141a_.writeLong(j);
        zzb(44, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void setConsentThirdParty(Bundle bundle, long j) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        zzbw.zza(parcelM141a_, bundle);
        parcelM141a_.writeLong(j);
        zzb(45, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void setCurrentScreen(IObjectWrapper iObjectWrapper, String str, String str2, long j) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        zzbw.zza(parcelM141a_, iObjectWrapper);
        parcelM141a_.writeString(str);
        parcelM141a_.writeString(str2);
        parcelM141a_.writeLong(j);
        zzb(15, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void setDataCollectionEnabled(boolean z) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        zzbw.zza(parcelM141a_, z);
        zzb(39, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void setDefaultEventParameters(Bundle bundle) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        zzbw.zza(parcelM141a_, bundle);
        zzb(42, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void setEventInterceptor(zzdp zzdpVar) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        zzbw.zza(parcelM141a_, zzdpVar);
        zzb(34, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void setInstanceIdProvider(zzdu zzduVar) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        zzbw.zza(parcelM141a_, zzduVar);
        zzb(18, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void setMeasurementEnabled(boolean z, long j) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        zzbw.zza(parcelM141a_, z);
        parcelM141a_.writeLong(j);
        zzb(11, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void setMinimumSessionDuration(long j) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        parcelM141a_.writeLong(j);
        zzb(13, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void setSessionTimeoutDuration(long j) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        parcelM141a_.writeLong(j);
        zzb(14, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void setSgtmDebugInfo(Intent intent) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        zzbw.zza(parcelM141a_, intent);
        zzb(48, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void setUserId(String str, long j) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        parcelM141a_.writeString(str);
        parcelM141a_.writeLong(j);
        zzb(7, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void setUserProperty(String str, String str2, IObjectWrapper iObjectWrapper, boolean z, long j) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        parcelM141a_.writeString(str);
        parcelM141a_.writeString(str2);
        zzbw.zza(parcelM141a_, iObjectWrapper);
        zzbw.zza(parcelM141a_, z);
        parcelM141a_.writeLong(j);
        zzb(4, parcelM141a_);
    }

    @Override // com.google.android.gms.internal.measurement.zzdj
    public final void unregisterOnMeasurementEventListener(zzdp zzdpVar) throws RemoteException {
        Parcel parcelM141a_ = m141a_();
        zzbw.zza(parcelM141a_, zzdpVar);
        zzb(36, parcelM141a_);
    }
}
