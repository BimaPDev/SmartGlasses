package com.google.android.gms.measurement.internal;

import android.app.Application;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.Pair;
import androidx.core.content.ContextCompat;
import com.google.android.gms.common.internal.Preconditions;
import com.google.android.gms.common.util.Clock;
import com.google.android.gms.common.util.DefaultClock;
import com.google.android.gms.common.wrappers.Wrappers;
import com.google.android.gms.internal.measurement.zzov;
import com.google.android.gms.internal.measurement.zzpn;
import com.google.firebase.analytics.FirebaseAnalytics;
import java.net.URL;
import java.util.Map;
import java.util.Objects;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.concurrent.atomic.AtomicReference;
import kotlinx.coroutines.DebugKt;
import org.checkerframework.dataflow.qual.Pure;
import org.checkerframework.dataflow.qual.SideEffectFree;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public class zzhy implements zzjc {
    private static volatile zzhy zzb;
    final long zza;
    private Boolean zzaa;
    private long zzab;
    private volatile Boolean zzac;
    private Boolean zzad;
    private Boolean zzae;
    private volatile boolean zzaf;
    private int zzag;
    private int zzah;
    private final Context zzc;
    private final String zzd;
    private final String zze;
    private final String zzf;
    private final boolean zzg;
    private final zzab zzh;
    private final zzag zzi;
    private final zzha zzj;
    private final zzgo zzk;
    private final zzhv zzl;
    private final zznb zzm;
    private final zzos zzn;
    private final zzgh zzo;
    private final Clock zzp;
    private final zzlj zzq;
    private final zzjq zzr;
    private final zzb zzs;
    private final zzle zzt;
    private final String zzu;
    private zzgf zzv;
    private zzls zzw;
    private zzaz zzx;
    private zzgg zzy;
    private boolean zzz = false;
    private AtomicInteger zzai = new AtomicInteger(0);

    @Override // com.google.android.gms.measurement.internal.zzjc
    @Pure
    public final Context zza() {
        return this.zzc;
    }

    final void zzaa() {
        this.zzag++;
    }

    @Pure
    public final boolean zzag() {
        return this.zzg;
    }

    @Override // com.google.android.gms.measurement.internal.zzjc
    @Pure
    public final Clock zzb() {
        return this.zzp;
    }

    @Override // com.google.android.gms.measurement.internal.zzjc
    @Pure
    public final zzab zzd() {
        return this.zzh;
    }

    @Pure
    public final zzag zzf() {
        return this.zzi;
    }

    @Pure
    public final zzgh zzk() {
        return this.zzo;
    }

    @SideEffectFree
    final zzhv zzo() {
        return this.zzl;
    }

    @Pure
    public final String zzu() {
        return this.zzd;
    }

    @Pure
    public final String zzv() {
        return this.zze;
    }

    @Pure
    public final String zzw() {
        return this.zzf;
    }

    @Pure
    public final String zzx() {
        return this.zzu;
    }

    public final int zzc() {
        zzl().zzt();
        if (this.zzi.zzx()) {
            return 1;
        }
        Boolean bool = this.zzae;
        if (bool != null && bool.booleanValue()) {
            return 2;
        }
        if (!zzad()) {
            return 8;
        }
        Boolean boolZzv = zzn().zzv();
        if (boolZzv != null) {
            return boolZzv.booleanValue() ? 0 : 3;
        }
        Boolean boolZze = this.zzi.zze("firebase_analytics_collection_enabled");
        if (boolZze != null) {
            return boolZze.booleanValue() ? 0 : 4;
        }
        Boolean bool2 = this.zzad;
        if (bool2 != null) {
            return bool2.booleanValue() ? 0 : 5;
        }
        return (this.zzac == null || this.zzac.booleanValue()) ? 0 : 7;
    }

    @Pure
    public final zzb zze() {
        zzb zzbVar = this.zzs;
        if (zzbVar != null) {
            return zzbVar;
        }
        throw new IllegalStateException("Component not created");
    }

    @Pure
    public final zzaz zzg() {
        zza((zzjd) this.zzx);
        return this.zzx;
    }

    @Pure
    public final zzgg zzh() {
        zza((zzh) this.zzy);
        return this.zzy;
    }

    @Pure
    public final zzgf zzi() {
        zza((zzh) this.zzv);
        return this.zzv;
    }

    @Override // com.google.android.gms.measurement.internal.zzjc
    @Pure
    public final zzgo zzj() {
        zza((zzjd) this.zzk);
        return this.zzk;
    }

    public final zzgo zzm() {
        zzgo zzgoVar = this.zzk;
        if (zzgoVar == null || !zzgoVar.zzaf()) {
            return null;
        }
        return this.zzk;
    }

    @Pure
    public final zzha zzn() {
        zza((zzja) this.zzj);
        return this.zzj;
    }

    @Override // com.google.android.gms.measurement.internal.zzjc
    @Pure
    public final zzhv zzl() {
        zza((zzjd) this.zzl);
        return this.zzl;
    }

    public static zzhy zza(Context context, com.google.android.gms.internal.measurement.zzdw zzdwVar, Long l) {
        if (zzdwVar != null && (zzdwVar.zze == null || zzdwVar.zzf == null)) {
            zzdwVar = new com.google.android.gms.internal.measurement.zzdw(zzdwVar.zza, zzdwVar.zzb, zzdwVar.zzc, zzdwVar.zzd, null, null, zzdwVar.zzg, null);
        }
        Preconditions.checkNotNull(context);
        Preconditions.checkNotNull(context.getApplicationContext());
        if (zzb == null) {
            synchronized (zzhy.class) {
                if (zzb == null) {
                    zzb = new zzhy(new zzjo(context, zzdwVar, l));
                }
            }
        } else if (zzdwVar != null && zzdwVar.zzg != null && zzdwVar.zzg.containsKey("dataCollectionDefaultEnabled")) {
            Preconditions.checkNotNull(zzb);
            zzb.zza(zzdwVar.zzg.getBoolean("dataCollectionDefaultEnabled"));
        }
        Preconditions.checkNotNull(zzb);
        return zzb;
    }

    @Pure
    public final zzjq zzp() {
        zza((zzh) this.zzr);
        return this.zzr;
    }

    @Pure
    private final zzle zzai() {
        zza((zzjd) this.zzt);
        return this.zzt;
    }

    @Pure
    public final zzlj zzq() {
        zza((zzh) this.zzq);
        return this.zzq;
    }

    @Pure
    public final zzls zzr() {
        zza((zzh) this.zzw);
        return this.zzw;
    }

    @Pure
    public final zznb zzs() {
        zza((zzh) this.zzm);
        return this.zzm;
    }

    @Pure
    public final zzos zzt() {
        zza((zzja) this.zzn);
        return this.zzn;
    }

    static /* synthetic */ void zza(zzhy zzhyVar, zzjo zzjoVar) {
        zzhyVar.zzl().zzt();
        zzaz zzazVar = new zzaz(zzhyVar);
        zzazVar.zzad();
        zzhyVar.zzx = zzazVar;
        zzgg zzggVar = new zzgg(zzhyVar, zzjoVar.zzf);
        zzggVar.zzv();
        zzhyVar.zzy = zzggVar;
        zzgf zzgfVar = new zzgf(zzhyVar);
        zzgfVar.zzv();
        zzhyVar.zzv = zzgfVar;
        zzls zzlsVar = new zzls(zzhyVar);
        zzlsVar.zzv();
        zzhyVar.zzw = zzlsVar;
        zzhyVar.zzn.zzae();
        zzhyVar.zzj.zzae();
        zzhyVar.zzy.zzw();
        zzhyVar.zzj().zzo().zza("App measurement initialized, version", 106000L);
        zzhyVar.zzj().zzo().zza("To enable debug logging run: adb shell setprop log.tag.FA VERBOSE");
        String strZzad = zzggVar.zzad();
        if (TextUtils.isEmpty(zzhyVar.zzd)) {
            if (zzhyVar.zzt().zzd(strZzad, zzhyVar.zzi.zzu())) {
                zzhyVar.zzj().zzo().zza("Faster debug mode event logging enabled. To disable, run:\n  adb shell setprop debug.firebase.analytics.app .none.");
            } else {
                zzhyVar.zzj().zzo().zza("To enable faster debug mode event logging run:\n  adb shell setprop debug.firebase.analytics.app " + strZzad);
            }
        }
        zzhyVar.zzj().zzc().zza("Debug-level message logging enabled");
        if (zzhyVar.zzag != zzhyVar.zzai.get()) {
            zzhyVar.zzj().zzg().zza("Not all components initialized", Integer.valueOf(zzhyVar.zzag), Integer.valueOf(zzhyVar.zzai.get()));
        }
        zzhyVar.zzz = true;
    }

    private zzhy(zzjo zzjoVar) {
        long jCurrentTimeMillis;
        boolean z = false;
        Preconditions.checkNotNull(zzjoVar);
        zzab zzabVar = new zzab(zzjoVar.zza);
        this.zzh = zzabVar;
        zzga.zza = zzabVar;
        Context context = zzjoVar.zza;
        this.zzc = context;
        this.zzd = zzjoVar.zzb;
        this.zze = zzjoVar.zzc;
        this.zzf = zzjoVar.zzd;
        this.zzg = zzjoVar.zzh;
        this.zzac = zzjoVar.zze;
        this.zzu = zzjoVar.zzj;
        this.zzaf = true;
        com.google.android.gms.internal.measurement.zzdw zzdwVar = zzjoVar.zzg;
        if (zzdwVar != null && zzdwVar.zzg != null) {
            Object obj = zzdwVar.zzg.get("measurementEnabled");
            if (obj instanceof Boolean) {
                this.zzad = (Boolean) obj;
            }
            Object obj2 = zzdwVar.zzg.get("measurementDeactivated");
            if (obj2 instanceof Boolean) {
                this.zzae = (Boolean) obj2;
            }
        }
        com.google.android.gms.internal.measurement.zzhj.zzb(context);
        Clock defaultClock = DefaultClock.getInstance();
        this.zzp = defaultClock;
        if (zzjoVar.zzi != null) {
            jCurrentTimeMillis = zzjoVar.zzi.longValue();
        } else {
            jCurrentTimeMillis = defaultClock.currentTimeMillis();
        }
        this.zza = jCurrentTimeMillis;
        this.zzi = new zzag(this);
        zzha zzhaVar = new zzha(this);
        zzhaVar.zzad();
        this.zzj = zzhaVar;
        zzgo zzgoVar = new zzgo(this);
        zzgoVar.zzad();
        this.zzk = zzgoVar;
        zzos zzosVar = new zzos(this);
        zzosVar.zzad();
        this.zzn = zzosVar;
        this.zzo = new zzgh(new zzjn(zzjoVar, this));
        this.zzs = new zzb(this);
        zzlj zzljVar = new zzlj(this);
        zzljVar.zzv();
        this.zzq = zzljVar;
        zzjq zzjqVar = new zzjq(this);
        zzjqVar.zzv();
        this.zzr = zzjqVar;
        zznb zznbVar = new zznb(this);
        zznbVar.zzv();
        this.zzm = zznbVar;
        zzle zzleVar = new zzle(this);
        zzleVar.zzad();
        this.zzt = zzleVar;
        zzhv zzhvVar = new zzhv(this);
        zzhvVar.zzad();
        this.zzl = zzhvVar;
        if (zzjoVar.zzg != null && zzjoVar.zzg.zzb != 0) {
            z = true;
        }
        boolean z2 = !z;
        if (context.getApplicationContext() instanceof Application) {
            zzp().zzb(z2);
        } else {
            zzj().zzu().zza("Application context is not an Application");
        }
        zzhvVar.zzb(new zzid(this, zzjoVar));
    }

    private static void zza(zzja zzjaVar) {
        if (zzjaVar == null) {
            throw new IllegalStateException("Component not created");
        }
    }

    private static void zza(zzh zzhVar) {
        if (zzhVar == null) {
            throw new IllegalStateException("Component not created");
        }
        if (zzhVar.zzy()) {
            return;
        }
        throw new IllegalStateException("Component not initialized: " + String.valueOf(zzhVar.getClass()));
    }

    private static void zza(zzjd zzjdVar) {
        if (zzjdVar == null) {
            throw new IllegalStateException("Component not created");
        }
        if (zzjdVar.zzaf()) {
            return;
        }
        throw new IllegalStateException("Component not initialized: " + String.valueOf(zzjdVar.getClass()));
    }

    final void zzy() {
        throw new IllegalStateException("Unexpected call on client side");
    }

    final void zzz() {
        this.zzai.incrementAndGet();
    }

    final /* synthetic */ void zza(String str, int i, Throwable th, byte[] bArr, Map map) {
        if ((i != 200 && i != 204 && i != 304) || th != null) {
            zzj().zzu().zza("Network Request for Deferred Deep Link failed. response, exception", Integer.valueOf(i), th);
            return;
        }
        zzn().zzo.zza(true);
        if (bArr == null || bArr.length == 0) {
            zzj().zzc().zza("Deferred Deep Link response empty.");
            return;
        }
        try {
            JSONObject jSONObject = new JSONObject(new String(bArr));
            String strOptString = jSONObject.optString("deeplink", "");
            if (TextUtils.isEmpty(strOptString)) {
                zzj().zzc().zza("Deferred Deep Link is empty.");
                return;
            }
            String strOptString2 = jSONObject.optString("gclid", "");
            String strOptString3 = jSONObject.optString("gbraid", "");
            String strOptString4 = jSONObject.optString("gad_source", "");
            double dOptDouble = jSONObject.optDouble("timestamp", 0.0d);
            Bundle bundle = new Bundle();
            if (zzov.zza() && this.zzi.zza(zzbh.zzct)) {
                if (!zzt().zzi(strOptString)) {
                    zzj().zzu().zza("Deferred Deep Link validation failed. gclid, gbraid, deep link", strOptString2, strOptString3, strOptString);
                    return;
                }
                if (!TextUtils.isEmpty(strOptString3)) {
                    bundle.putString("gbraid", strOptString3);
                }
                if (!TextUtils.isEmpty(strOptString4)) {
                    bundle.putString("gad_source", strOptString4);
                }
            } else if (!zzt().zzi(strOptString)) {
                zzj().zzu().zza("Deferred Deep Link validation failed. gclid, deep link", strOptString2, strOptString);
                return;
            }
            if (zzov.zza()) {
                this.zzi.zza(zzbh.zzct);
            }
            bundle.putString("gclid", strOptString2);
            bundle.putString("_cis", "ddp");
            this.zzr.zzc(DebugKt.DEBUG_PROPERTY_VALUE_AUTO, "_cmp", bundle);
            zzos zzosVarZzt = zzt();
            if (TextUtils.isEmpty(strOptString) || !zzosVarZzt.zza(strOptString, dOptDouble)) {
                return;
            }
            zzosVarZzt.zza().sendBroadcast(new Intent("android.google.analytics.action.DEEPLINK_ACTION"));
        } catch (JSONException e) {
            zzj().zzg().zza("Failed to parse the Deferred Deep Link response. exception", e);
        }
    }

    final void zza(boolean z) {
        this.zzac = Boolean.valueOf(z);
    }

    public final void zzb(boolean z) {
        zzl().zzt();
        this.zzaf = z;
    }

    protected final void zza(com.google.android.gms.internal.measurement.zzdw zzdwVar) {
        zzje zzjeVarZza;
        Boolean boolZza;
        zzl().zzt();
        if (zzpn.zza() && this.zzi.zza(zzbh.zzci) && zzt().zzw()) {
            zzos zzosVarZzt = zzt();
            zzosVarZzt.zzt();
            IntentFilter intentFilter = new IntentFilter();
            intentFilter.addAction("com.google.android.gms.measurement.TRIGGERS_AVAILABLE");
            ContextCompat.registerReceiver(zzosVarZzt.zza(), new zzp(zzosVarZzt.zzu), intentFilter, 2);
            zzosVarZzt.zzj().zzc().zza("Registered app receiver");
        }
        zzje zzjeVarZzo = zzn().zzo();
        int iZza = zzjeVarZzo.zza();
        zzjh zzjhVarZzc = this.zzi.zzc("google_analytics_default_allow_ad_storage", false);
        zzjh zzjhVarZzc2 = this.zzi.zzc("google_analytics_default_allow_analytics_storage", false);
        if ((zzjhVarZzc != zzjh.UNINITIALIZED || zzjhVarZzc2 != zzjh.UNINITIALIZED) && zzn().zza(-10)) {
            zzjeVarZza = zzje.zza(zzjhVarZzc, zzjhVarZzc2, -10);
        } else {
            if (!TextUtils.isEmpty(zzh().zzae()) && (iZza == 0 || iZza == 30 || iZza == 10 || iZza == 30 || iZza == 30 || iZza == 40)) {
                zzp().zza(new zzje(null, null, -10), this.zza, false);
            } else if (TextUtils.isEmpty(zzh().zzae()) && zzdwVar != null && zzdwVar.zzg != null && zzn().zza(30)) {
                zzjeVarZza = zzje.zza(zzdwVar.zzg, 30);
                if (!zzjeVarZza.zzi()) {
                }
            }
            zzjeVarZza = null;
        }
        if (zzjeVarZza != null) {
            zzp().zza(zzjeVarZza, this.zza, true);
            zzjeVarZzo = zzjeVarZza;
        }
        zzp().zza(zzjeVarZzo);
        int iZza2 = zzn().zzn().zza();
        zzjh zzjhVarZzc3 = this.zzi.zzc("google_analytics_default_allow_ad_personalization_signals", true);
        if (zzjhVarZzc3 != zzjh.UNINITIALIZED) {
            zzj().zzp().zza("Default ad personalization consent from Manifest", zzjhVarZzc3);
        }
        zzjh zzjhVarZzc4 = this.zzi.zzc("google_analytics_default_allow_ad_user_data", true);
        if (zzjhVarZzc4 != zzjh.UNINITIALIZED && zzje.zza(-10, iZza2)) {
            zzp().zza(zzax.zza(zzjhVarZzc4, -10), true);
        } else if (!TextUtils.isEmpty(zzh().zzae()) && (iZza2 == 0 || iZza2 == 30)) {
            zzp().zza(new zzax(null, -10), true);
        } else {
            if (TextUtils.isEmpty(zzh().zzae()) && zzdwVar != null && zzdwVar.zzg != null && zzje.zza(30, iZza2)) {
                zzax zzaxVarZza = zzax.zza(zzdwVar.zzg, 30);
                if (zzaxVarZza.zzg()) {
                    zzp().zza(zzaxVarZza, true);
                }
            }
            if (TextUtils.isEmpty(zzh().zzae()) && zzdwVar != null && zzdwVar.zzg != null && zzn().zzh.zza() == null && (boolZza = zzax.zza(zzdwVar.zzg)) != null) {
                zzp().zza(zzdwVar.zze, FirebaseAnalytics.UserProperty.ALLOW_AD_PERSONALIZATION_SIGNALS, (Object) boolZza.toString(), false);
            }
        }
        Boolean boolZze = this.zzi.zze("google_analytics_tcf_data_enabled");
        if (boolZze == null || boolZze.booleanValue()) {
            zzj().zzc().zza("TCF client enabled.");
            zzp().zzat();
            zzp().zzar();
        }
        if (zzn().zzc.zza() == 0) {
            zzj().zzp().zza("Persisting first open", Long.valueOf(this.zza));
            zzn().zzc.zza(this.zza);
        }
        zzp().zza.zzb();
        if (!zzaf()) {
            if (zzac()) {
                if (!zzt().zze("android.permission.INTERNET")) {
                    zzj().zzg().zza("App is missing INTERNET permission");
                }
                if (!zzt().zze("android.permission.ACCESS_NETWORK_STATE")) {
                    zzj().zzg().zza("App is missing ACCESS_NETWORK_STATE permission");
                }
                if (!Wrappers.packageManager(this.zzc).isCallerInstantApp() && !this.zzi.zzy()) {
                    if (!zzos.zza(this.zzc)) {
                        zzj().zzg().zza("AppMeasurementReceiver not registered/enabled");
                    }
                    if (!zzos.zza(this.zzc, false)) {
                        zzj().zzg().zza("AppMeasurementService not registered/enabled");
                    }
                }
                zzj().zzg().zza("Uploading is not possible. App measurement disabled");
            }
        } else {
            if (!TextUtils.isEmpty(zzh().zzae()) || !TextUtils.isEmpty(zzh().zzac())) {
                zzt();
                if (zzos.zza(zzh().zzae(), zzn().zzy(), zzh().zzac(), zzn().zzx())) {
                    zzj().zzo().zza("Rechecking which service to use due to a GMP App Id change");
                    zzn().zzz();
                    zzi().zzaa();
                    this.zzw.zzaf();
                    this.zzw.zzae();
                    zzn().zzc.zza(this.zza);
                    zzn().zze.zza(null);
                }
                zzn().zzc(zzh().zzae());
                zzn().zzb(zzh().zzac());
            }
            if (!zzn().zzo().zza(zzje.zza.ANALYTICS_STORAGE)) {
                zzn().zze.zza(null);
            }
            zzp().zzc(zzn().zze.zza());
            if (!zzt().zzx() && !TextUtils.isEmpty(zzn().zzq.zza())) {
                zzj().zzu().zza("Remote config removed with active feature rollouts");
                zzn().zzq.zza(null);
            }
            if (!TextUtils.isEmpty(zzh().zzae()) || !TextUtils.isEmpty(zzh().zzac())) {
                boolean zZzac = zzac();
                if (!zzn().zzab() && !this.zzi.zzx()) {
                    zzn().zzb(!zZzac);
                }
                if (zZzac) {
                    zzp().zzan();
                }
                zzs().zza.zza();
                zzr().zza(new AtomicReference<>());
                zzr().zza(zzn().zzt.zza());
            }
        }
        if (zzpn.zza() && this.zzi.zza(zzbh.zzci) && zzt().zzw()) {
            final zzjq zzjqVarZzp = zzp();
            Objects.requireNonNull(zzjqVarZzp);
            new Thread(new Runnable() { // from class: com.google.android.gms.measurement.internal.zzib
                @Override // java.lang.Runnable
                public final void run() {
                    zzjqVarZzp.zzap();
                }
            }).start();
        }
        zzn().zzj.zza(true);
    }

    public final boolean zzab() {
        return this.zzac != null && this.zzac.booleanValue();
    }

    public final boolean zzac() {
        return zzc() == 0;
    }

    public final boolean zzad() {
        zzl().zzt();
        return this.zzaf;
    }

    @Pure
    public final boolean zzae() {
        return TextUtils.isEmpty(this.zzd);
    }

    protected final boolean zzaf() {
        if (!this.zzz) {
            throw new IllegalStateException("AppMeasurement is not initialized");
        }
        zzl().zzt();
        Boolean bool = this.zzaa;
        if (bool == null || this.zzab == 0 || (bool != null && !bool.booleanValue() && Math.abs(this.zzp.elapsedRealtime() - this.zzab) > 1000)) {
            this.zzab = this.zzp.elapsedRealtime();
            boolean z = true;
            Boolean boolValueOf = Boolean.valueOf(zzt().zze("android.permission.INTERNET") && zzt().zze("android.permission.ACCESS_NETWORK_STATE") && (Wrappers.packageManager(this.zzc).isCallerInstantApp() || this.zzi.zzy() || (zzos.zza(this.zzc) && zzos.zza(this.zzc, false))));
            this.zzaa = boolValueOf;
            if (boolValueOf.booleanValue()) {
                if (!zzt().zza(zzh().zzae(), zzh().zzac()) && TextUtils.isEmpty(zzh().zzac())) {
                    z = false;
                }
                this.zzaa = Boolean.valueOf(z);
            }
        }
        return this.zzaa.booleanValue();
    }

    public final boolean zzah() {
        zzl().zzt();
        zza((zzjd) zzai());
        String strZzad = zzh().zzad();
        if (!this.zzi.zzv()) {
            zzj().zzp().zza("ADID collection is disabled from Manifest. Skipping");
            return false;
        }
        Pair<String, Boolean> pairZza = zzn().zza(strZzad);
        if (((Boolean) pairZza.second).booleanValue() || TextUtils.isEmpty((CharSequence) pairZza.first)) {
            zzj().zzp().zza("ADID unavailable to retrieve Deferred Deep Link. Skipping");
            return false;
        }
        if (!zzai().zzc()) {
            zzj().zzu().zza("Network is not available for Deferred Deep Link request. Skipping");
            return false;
        }
        StringBuilder sb = new StringBuilder();
        zzls zzlsVarZzr = zzr();
        zzlsVarZzr.zzt();
        zzlsVarZzr.zzu();
        if (!zzlsVarZzr.zzap() || zzlsVarZzr.zzq().zzg() >= 234200) {
            zzaj zzajVarZzab = zzp().zzab();
            Bundle bundle = zzajVarZzab != null ? zzajVarZzab.zza : null;
            if (bundle == null) {
                int i = this.zzah;
                this.zzah = i + 1;
                boolean z = i < 10;
                zzj().zzc().zza("Failed to retrieve DMA consent from the service, " + (z ? "Retrying." : "Skipping.") + " retryCount", Integer.valueOf(this.zzah));
                return z;
            }
            sb.append("&gcs=").append(zzje.zza(bundle, 100).zze());
            zzax zzaxVarZza = zzax.zza(bundle, 100);
            sb.append("&dma=").append(zzaxVarZza.zzd() == Boolean.FALSE ? 0 : 1);
            if (!TextUtils.isEmpty(zzaxVarZza.zze())) {
                sb.append("&dma_cps=").append(zzaxVarZza.zze());
            }
            sb.append("&npa=").append(zzax.zza(bundle) == Boolean.TRUE ? 0 : 1);
            zzj().zzp().zza("Consent query parameters to Bow", sb);
        }
        zzos zzosVarZzt = zzt();
        zzh();
        URL urlZza = zzosVarZzt.zza(106000L, strZzad, (String) pairZza.first, zzn().zzp.zza() - 1, sb.toString());
        if (urlZza != null) {
            zzle zzleVarZzai = zzai();
            zzld zzldVar = new zzld() { // from class: com.google.android.gms.measurement.internal.zzia
                @Override // com.google.android.gms.measurement.internal.zzld
                public final void zza(String str, int i2, Throwable th, byte[] bArr, Map map) {
                    this.zza.zza(str, i2, th, bArr, map);
                }
            };
            zzleVarZzai.zzt();
            zzleVarZzai.zzac();
            Preconditions.checkNotNull(urlZza);
            Preconditions.checkNotNull(zzldVar);
            zzleVarZzai.zzl().zza(new zzlg(zzleVarZzai, strZzad, urlZza, null, null, zzldVar));
        }
        return false;
    }
}
