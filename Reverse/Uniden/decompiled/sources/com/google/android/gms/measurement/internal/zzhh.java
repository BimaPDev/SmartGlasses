package com.google.android.gms.measurement.internal;

import android.content.ServiceConnection;
import android.net.Uri;
import android.os.Bundle;
import com.google.android.gms.common.stats.ConnectionTracker;
import com.google.android.gms.internal.measurement.zzov;
import com.google.firebase.analytics.FirebaseAnalytics;
import kotlinx.coroutines.DebugKt;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
final class zzhh implements Runnable {
    private final /* synthetic */ com.google.android.gms.internal.measurement.zzbz zza;
    private final /* synthetic */ ServiceConnection zzb;
    private final /* synthetic */ zzhi zzc;

    zzhh(zzhi zzhiVar, com.google.android.gms.internal.measurement.zzbz zzbzVar, ServiceConnection serviceConnection) {
        this.zza = zzbzVar;
        this.zzb = serviceConnection;
        this.zzc = zzhiVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        zzhf zzhfVar = this.zzc.zza;
        String str = this.zzc.zzb;
        com.google.android.gms.internal.measurement.zzbz zzbzVar = this.zza;
        ServiceConnection serviceConnection = this.zzb;
        Bundle bundleZza = zzhfVar.zza(str, zzbzVar);
        zzhfVar.zza.zzl().zzt();
        zzhfVar.zza.zzy();
        if (bundleZza != null) {
            long j = bundleZza.getLong("install_begin_timestamp_seconds", 0L) * 1000;
            if (j == 0) {
                zzhfVar.zza.zzj().zzu().zza("Service response is missing Install Referrer install timestamp");
            } else {
                String string = bundleZza.getString("install_referrer");
                if (string == null || string.isEmpty()) {
                    zzhfVar.zza.zzj().zzg().zza("No referrer defined in Install Referrer response");
                } else {
                    zzhfVar.zza.zzj().zzp().zza("InstallReferrer API result", string);
                    boolean z = zzov.zza() && zzhfVar.zza.zzf().zza(zzbh.zzcu);
                    Bundle bundleZza2 = zzhfVar.zza.zzt().zza(Uri.parse("?" + string), z);
                    if (bundleZza2 == null) {
                        zzhfVar.zza.zzj().zzg().zza("No campaign params defined in Install Referrer result");
                    } else {
                        if (!z) {
                            String string2 = bundleZza2.getString(FirebaseAnalytics.Param.MEDIUM);
                            if (string2 != null && !"(not set)".equalsIgnoreCase(string2) && !"organic".equalsIgnoreCase(string2)) {
                                long j2 = bundleZza.getLong("referrer_click_timestamp_seconds", 0L) * 1000;
                                if (j2 == 0) {
                                    zzhfVar.zza.zzj().zzg().zza("Install Referrer is missing click timestamp for ad campaign");
                                } else {
                                    bundleZza2.putLong("click_timestamp", j2);
                                }
                            }
                        } else if (bundleZza2.containsKey("gclid") || bundleZza2.containsKey("gbraid")) {
                            long j3 = bundleZza.getLong("referrer_click_timestamp_server_seconds", 0L) * 1000;
                            if (j3 > 0) {
                                bundleZza2.putLong("click_timestamp", j3);
                            }
                        }
                        if (j == zzhfVar.zza.zzn().zzd.zza()) {
                            zzhfVar.zza.zzj().zzp().zza("Logging Install Referrer campaign from module while it may have already been logged.");
                        }
                        if (zzhfVar.zza.zzac()) {
                            zzhfVar.zza.zzn().zzd.zza(j);
                            zzhfVar.zza.zzj().zzp().zza("Logging Install Referrer campaign from gmscore with ", "referrer API v2");
                            bundleZza2.putString("_cis", "referrer API v2");
                            zzhfVar.zza.zzp().zza(DebugKt.DEBUG_PROPERTY_VALUE_AUTO, "_cmp", bundleZza2, str);
                        }
                    }
                }
            }
        }
        if (serviceConnection != null) {
            ConnectionTracker.getInstance().unbindService(zzhfVar.zza.zza(), serviceConnection);
        }
    }
}
