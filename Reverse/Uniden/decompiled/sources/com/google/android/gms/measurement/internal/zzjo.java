package com.google.android.gms.measurement.internal;

import android.content.Context;
import com.google.android.gms.common.internal.Preconditions;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzjo {
    final Context zza;
    String zzb;
    String zzc;
    String zzd;
    Boolean zze;
    long zzf;
    com.google.android.gms.internal.measurement.zzdw zzg;
    boolean zzh;
    Long zzi;
    String zzj;

    public zzjo(Context context, com.google.android.gms.internal.measurement.zzdw zzdwVar, Long l) {
        this.zzh = true;
        Preconditions.checkNotNull(context);
        Context applicationContext = context.getApplicationContext();
        Preconditions.checkNotNull(applicationContext);
        this.zza = applicationContext;
        this.zzi = l;
        if (zzdwVar != null) {
            this.zzg = zzdwVar;
            this.zzb = zzdwVar.zzf;
            this.zzc = zzdwVar.zze;
            this.zzd = zzdwVar.zzd;
            this.zzh = zzdwVar.zzc;
            this.zzf = zzdwVar.zzb;
            this.zzj = zzdwVar.zzh;
            if (zzdwVar.zzg != null) {
                this.zze = Boolean.valueOf(zzdwVar.zzg.getBoolean("dataCollectionDefaultEnabled", true));
            }
        }
    }
}
