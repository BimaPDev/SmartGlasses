package com.google.android.gms.measurement.internal;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
final class zzmg extends zzav {
    private final /* synthetic */ zzls zza;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    zzmg(zzls zzlsVar, zzjc zzjcVar) {
        super(zzjcVar);
        this.zza = zzlsVar;
    }

    @Override // com.google.android.gms.measurement.internal.zzav
    public final void zzb() {
        this.zza.zzj().zzu().zza("Tasks have been queued for a long time");
    }
}
