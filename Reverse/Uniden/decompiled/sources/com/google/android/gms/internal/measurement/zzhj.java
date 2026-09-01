package com.google.android.gms.internal.measurement;

import android.content.Context;
import com.google.common.base.Optional;
import com.google.common.base.Preconditions;
import com.google.common.base.Supplier;
import com.google.common.base.Suppliers;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.concurrent.atomic.AtomicReference;
import javax.annotation.Nullable;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public abstract class zzhj<T> {
    private static final Object zza = new Object();

    @Nullable
    private static volatile zzhu zzb = null;
    private static volatile boolean zzc = false;
    private static zzhy zzd;
    private static final AtomicInteger zze;
    private final zzhr zzf;
    private final String zzg;
    private Object zzh;
    private volatile int zzi;
    private volatile T zzj;
    private final boolean zzk;
    private volatile boolean zzl;

    static /* synthetic */ boolean zzd() {
        return true;
    }

    private final T zze() {
        return (T) this.zzh;
    }

    abstract T zza(Object obj);

    static /* synthetic */ zzhj zza(zzhr zzhrVar, String str, Boolean bool, boolean z) {
        return new zzhq(zzhrVar, str, bool, true);
    }

    static /* synthetic */ zzhj zza(zzhr zzhrVar, String str, Double d, boolean z) {
        return new zzhp(zzhrVar, str, d, true);
    }

    static /* synthetic */ zzhj zza(zzhr zzhrVar, String str, Long l, boolean z) {
        return new zzhn(zzhrVar, str, l, true);
    }

    static /* synthetic */ zzhj zza(zzhr zzhrVar, String str, String str2, boolean z) {
        return new zzhs(zzhrVar, str, str2, true);
    }

    /* JADX WARN: Code duplicated, block: B:32:0x007d A[Catch: all -> 0x0098, TryCatch #0 {, blocks: (B:8:0x001c, B:10:0x0020, B:12:0x0029, B:14:0x0039, B:18:0x0056, B:20:0x0061, B:33:0x0081, B:36:0x0089, B:37:0x008e, B:38:0x0092, B:23:0x0068, B:32:0x007d, B:26:0x006f, B:29:0x0076, B:39:0x0096), top: B:46:0x001c }] */
    public final T zza() {
        T tZzb;
        if (!this.zzk) {
            Preconditions.checkState(zzd.zza(this.zzg), "Attempt to access PhenotypeFlag not via codegen. All new PhenotypeFlags must be accessed through codegen APIs. If you believe you are seeing this error by mistake, you can add your flag to the exemption list located at //java/com/google/android/libraries/phenotype/client/lockdown/flags.textproto. Send the addition CL to ph-reviews@. See go/phenotype-android-codegen for information about generated code. See go/ph-lockdown for more information about this error.");
        }
        int i = zze.get();
        if (this.zzi < i) {
            synchronized (this) {
                if (this.zzi < i) {
                    zzhu zzhuVar = zzb;
                    Optional<zzhh> optionalAbsent = Optional.absent();
                    String strZza = null;
                    if (zzhuVar != null) {
                        optionalAbsent = zzhuVar.zzb().get();
                        if (optionalAbsent.isPresent()) {
                            strZza = optionalAbsent.get().zza(this.zzf.zzb, this.zzf.zza, this.zzf.zzd, this.zzg);
                        }
                    }
                    Preconditions.checkState(zzhuVar != null, "Must call PhenotypeFlagInitializer.maybeInit() first");
                    if (this.zzf.zzf) {
                        tZzb = zza(zzhuVar);
                        if (tZzb == null && (tZzb = zzb(zzhuVar)) == null) {
                            tZzb = zze();
                        }
                    } else {
                        tZzb = zzb(zzhuVar);
                        if (tZzb == null && (tZzb = zza(zzhuVar)) == null) {
                            tZzb = zze();
                        }
                    }
                    if (optionalAbsent.isPresent()) {
                        tZzb = strZza == null ? zze() : zza((Object) strZza);
                    }
                    this.zzj = tZzb;
                    this.zzi = i;
                }
            }
        }
        return this.zzj;
    }

    @Nullable
    private final T zza(zzhu zzhuVar) {
        if (!this.zzf.zze && (this.zzf.zzh == null || this.zzf.zzh.apply(zzhuVar.zza()).booleanValue())) {
            Object objZza = zzhc.zza(zzhuVar.zza()).zza(this.zzf.zze ? null : zza(this.zzf.zzc));
            if (objZza != null) {
                return zza(objZza);
            }
        }
        return null;
    }

    @Nullable
    private final T zzb(zzhu zzhuVar) {
        zzhb zzhbVarZza;
        Object objZza;
        if (this.zzf.zzb != null) {
            if (!zzhi.zza(zzhuVar.zza(), this.zzf.zzb)) {
                zzhbVarZza = null;
            } else if (this.zzf.zzg) {
                zzhbVarZza = zzgu.zza(zzhuVar.zza().getContentResolver(), zzhk.zza(zzhk.zza(zzhuVar.zza(), this.zzf.zzb.getLastPathSegment())), new Runnable() { // from class: com.google.android.gms.internal.measurement.zzhm
                    @Override // java.lang.Runnable
                    public final void run() {
                        zzhj.zzc();
                    }
                });
            } else {
                zzhbVarZza = zzgu.zza(zzhuVar.zza().getContentResolver(), this.zzf.zzb, new Runnable() { // from class: com.google.android.gms.internal.measurement.zzhm
                    @Override // java.lang.Runnable
                    public final void run() {
                        zzhj.zzc();
                    }
                });
            }
        } else {
            zzhbVarZza = zzhw.zza(zzhuVar.zza(), this.zzf.zza, new Runnable() { // from class: com.google.android.gms.internal.measurement.zzhm
                @Override // java.lang.Runnable
                public final void run() {
                    zzhj.zzc();
                }
            });
        }
        if (zzhbVarZza == null || (objZza = zzhbVarZza.zza(zzb())) == null) {
            return null;
        }
        return zza(objZza);
    }

    public final String zzb() {
        return zza(this.zzf.zzd);
    }

    private final String zza(String str) {
        if (str != null && str.isEmpty()) {
            return this.zzg;
        }
        return str + this.zzg;
    }

    static {
        new AtomicReference();
        zzd = new zzhy(new zzhx() { // from class: com.google.android.gms.internal.measurement.zzho
            @Override // com.google.android.gms.internal.measurement.zzhx
            public final boolean zza() {
                return zzhj.zzd();
            }
        });
        zze = new AtomicInteger();
    }

    private zzhj(zzhr zzhrVar, String str, T t, boolean z) {
        this.zzi = -1;
        if (zzhrVar.zza == null && zzhrVar.zzb == null) {
            throw new IllegalArgumentException("Must pass a valid SharedPreferences file name or ContentProvider URI");
        }
        if (zzhrVar.zza != null && zzhrVar.zzb != null) {
            throw new IllegalArgumentException("Must pass one of SharedPreferences file name or ContentProvider URI");
        }
        this.zzf = zzhrVar;
        this.zzg = str;
        this.zzh = t;
        this.zzk = z;
        this.zzl = false;
    }

    public static void zzc() {
        zze.incrementAndGet();
    }

    public static void zzb(final Context context) {
        if (zzb != null || context == null) {
            return;
        }
        Object obj = zza;
        synchronized (obj) {
            if (zzb == null && context != null) {
                synchronized (obj) {
                    zzhu zzhuVar = zzb;
                    Context applicationContext = context.getApplicationContext();
                    if (applicationContext != null) {
                        context = applicationContext;
                    }
                    if (zzhuVar == null || zzhuVar.zza() != context) {
                        if (zzhuVar != null) {
                            zzgu.zzc();
                            zzhw.zza();
                            zzhc.zza();
                        }
                        zzb = new zzgv(context, Suppliers.memoize(new Supplier() { // from class: com.google.android.gms.internal.measurement.zzhl
                            @Override // com.google.common.base.Supplier
                            public final Object get() {
                                return zzhg.zza.zza(context);
                            }
                        }));
                        zze.incrementAndGet();
                    }
                }
            }
        }
    }
}
