package com.google.android.gms.measurement.internal;

import android.app.Activity;
import android.app.Application;
import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.text.TextUtils;
import com.google.android.gms.internal.measurement.zzov;
import kotlinx.coroutines.DebugKt;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
final class zzkz implements Application.ActivityLifecycleCallbacks {
    private final /* synthetic */ zzjq zza;

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStarted(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStopped(Activity activity) {
    }

    static /* synthetic */ void zza(zzkz zzkzVar, boolean z, Uri uri, String str, String str2) {
        Bundle bundleZza;
        zzkzVar.zza.zzt();
        try {
            zzos zzosVarZzq = zzkzVar.zza.zzq();
            boolean z2 = zzov.zza() && zzkzVar.zza.zze().zza(zzbh.zzct);
            if (TextUtils.isEmpty(str2)) {
                bundleZza = null;
            } else if (str2.contains("gclid") || ((z2 && str2.contains("gbraid")) || str2.contains("utm_campaign") || str2.contains("utm_source") || str2.contains("utm_medium") || str2.contains("utm_id") || str2.contains("dclid") || str2.contains("srsltid") || str2.contains("sfmc_id"))) {
                bundleZza = zzosVarZzq.zza(Uri.parse("https://google.com/search?" + str2), z2);
                if (bundleZza != null) {
                    bundleZza.putString("_cis", "referrer");
                }
            } else {
                zzosVarZzq.zzj().zzc().zza("Activity created with data 'referrer' without required params");
                bundleZza = null;
            }
            if (z) {
                Bundle bundleZza2 = zzkzVar.zza.zzq().zza(uri, zzov.zza() && zzkzVar.zza.zze().zza(zzbh.zzct));
                if (bundleZza2 != null) {
                    bundleZza2.putString("_cis", "intent");
                    if (!bundleZza2.containsKey("gclid") && bundleZza != null && bundleZza.containsKey("gclid")) {
                        bundleZza2.putString("_cer", String.format("gclid=%s", bundleZza.getString("gclid")));
                    }
                    zzkzVar.zza.zzc(str, "_cmp", bundleZza2);
                    zzkzVar.zza.zza.zza(str, bundleZza2);
                }
            }
            if (TextUtils.isEmpty(str2)) {
                return;
            }
            zzkzVar.zza.zzj().zzc().zza("Activity created with referrer", str2);
            if (zzkzVar.zza.zze().zza(zzbh.zzbq)) {
                if (bundleZza != null) {
                    zzkzVar.zza.zzc(str, "_cmp", bundleZza);
                    zzkzVar.zza.zza.zza(str, bundleZza);
                } else {
                    zzkzVar.zza.zzj().zzc().zza("Referrer does not contain valid parameters", str2);
                }
                zzkzVar.zza.zza(DebugKt.DEBUG_PROPERTY_VALUE_AUTO, "_ldl", (Object) null, true);
                return;
            }
            if (!str2.contains("gclid") || (!str2.contains("utm_campaign") && !str2.contains("utm_source") && !str2.contains("utm_medium") && !str2.contains("utm_term") && !str2.contains("utm_content"))) {
                zzkzVar.zza.zzj().zzc().zza("Activity created with data 'referrer' without required params");
            } else {
                if (TextUtils.isEmpty(str2)) {
                    return;
                }
                zzkzVar.zza.zza(DebugKt.DEBUG_PROPERTY_VALUE_AUTO, "_ldl", (Object) str2, true);
            }
        } catch (RuntimeException e) {
            zzkzVar.zza.zzj().zzg().zza("Throwable caught in handleReferrerForOnActivityCreated", e);
        }
    }

    zzkz(zzjq zzjqVar) {
        this.zza = zzjqVar;
    }

    /* JADX WARN: Code duplicated, block: B:16:0x0043  */
    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityCreated(Activity activity, Bundle bundle) {
        try {
            try {
                this.zza.zzj().zzp().zza("onActivityCreated");
                Intent intent = activity.getIntent();
                if (intent == null) {
                    return;
                }
                Uri data = intent.getData();
                if (data == null || !data.isHierarchical()) {
                    Bundle extras = intent.getExtras();
                    if (extras != null) {
                        String string = extras.getString("com.android.vending.referral_url");
                        if (TextUtils.isEmpty(string)) {
                            data = null;
                        } else {
                            data = Uri.parse(string);
                        }
                    } else {
                        data = null;
                    }
                }
                Uri uri = data;
                if (uri != null && uri.isHierarchical()) {
                    this.zza.zzq();
                    this.zza.zzl().zzb(new zzlc(this, bundle == null, uri, zzos.zza(intent) ? "gs" : DebugKt.DEBUG_PROPERTY_VALUE_AUTO, uri.getQueryParameter("referrer")));
                    return;
                }
                return;
            } catch (RuntimeException e) {
                this.zza.zzj().zzg().zza("Throwable caught in onActivityCreated", e);
                return;
            }
        } finally {
            this.zza.zzn().zza(activity, bundle);
        }
        this.zza.zzn().zza(activity, bundle);
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityDestroyed(Activity activity) {
        this.zza.zzn().zza(activity);
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityPaused(Activity activity) {
        this.zza.zzn().zzb(activity);
        zznb zznbVarZzp = this.zza.zzp();
        zznbVarZzp.zzl().zzb(new zznd(zznbVarZzp, zznbVarZzp.zzb().elapsedRealtime()));
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityResumed(Activity activity) {
        zznb zznbVarZzp = this.zza.zzp();
        zznbVarZzp.zzl().zzb(new zzne(zznbVarZzp, zznbVarZzp.zzb().elapsedRealtime()));
        this.zza.zzn().zzc(activity);
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivitySaveInstanceState(Activity activity, Bundle bundle) {
        this.zza.zzn().zzb(activity, bundle);
    }
}
