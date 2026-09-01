package com.google.android.gms.measurement.internal;

import com.google.android.gms.common.internal.Preconditions;
import java.util.concurrent.Callable;
import java.util.concurrent.FutureTask;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
final class zzhw<V> extends FutureTask<V> implements Comparable<zzhw<V>> {
    final boolean zza;
    private final long zzb;
    private final String zzc;
    private final /* synthetic */ zzhv zzd;

    @Override // java.lang.Comparable
    public final /* synthetic */ int compareTo(Object obj) {
        zzhw zzhwVar = (zzhw) obj;
        boolean z = this.zza;
        if (z != zzhwVar.zza) {
            return z ? -1 : 1;
        }
        long j = this.zzb;
        long j2 = zzhwVar.zzb;
        if (j < j2) {
            return -1;
        }
        if (j > j2) {
            return 1;
        }
        this.zzd.zzj().zzn().zza("Two tasks share the same index. index", Long.valueOf(this.zzb));
        return 0;
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    zzhw(zzhv zzhvVar, Runnable runnable, boolean z, String str) {
        super(com.google.android.gms.internal.measurement.zzdg.zza().zza(runnable), null);
        this.zzd = zzhvVar;
        Preconditions.checkNotNull(str);
        long andIncrement = zzhv.zza.getAndIncrement();
        this.zzb = andIncrement;
        this.zzc = str;
        this.zza = z;
        if (andIncrement == Long.MAX_VALUE) {
            zzhvVar.zzj().zzg().zza("Tasks index overflow");
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    zzhw(zzhv zzhvVar, Callable<V> callable, boolean z, String str) {
        super(com.google.android.gms.internal.measurement.zzdg.zza().zza(callable));
        this.zzd = zzhvVar;
        Preconditions.checkNotNull(str);
        long andIncrement = zzhv.zza.getAndIncrement();
        this.zzb = andIncrement;
        this.zzc = str;
        this.zza = z;
        if (andIncrement == Long.MAX_VALUE) {
            zzhvVar.zzj().zzg().zza("Tasks index overflow");
        }
    }

    @Override // java.util.concurrent.FutureTask
    protected final void setException(Throwable th) {
        Thread.UncaughtExceptionHandler defaultUncaughtExceptionHandler;
        this.zzd.zzj().zzg().zza(this.zzc, th);
        if ((th instanceof zzhu) && (defaultUncaughtExceptionHandler = Thread.getDefaultUncaughtExceptionHandler()) != null) {
            defaultUncaughtExceptionHandler.uncaughtException(Thread.currentThread(), th);
        }
        super.setException(th);
    }
}
