package com.google.android.gms.measurement.internal;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
abstract class zznr extends zzns {
    private boolean zza;

    zznr(zznv zznvVar) {
        super(zznvVar);
        this.zzg.zzu();
    }

    final boolean zzan() {
        return this.zza;
    }

    protected abstract boolean zzc();

    protected final void zzal() {
        if (!zzan()) {
            throw new IllegalStateException("Not initialized");
        }
    }

    public final void zzam() {
        if (this.zza) {
            throw new IllegalStateException("Can't initialize twice");
        }
        zzc();
        this.zzg.zzt();
        this.zza = true;
    }
}
