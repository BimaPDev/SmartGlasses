package com.google.android.gms.internal.measurement;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
final class zzit {
    private final zzjc zza;
    private final byte[] zzb;

    public final zzik zza() {
        this.zza.zzb();
        return new zziv(this.zzb);
    }

    public final zzjc zzb() {
        return this.zza;
    }

    private zzit(int i) {
        byte[] bArr = new byte[i];
        this.zzb = bArr;
        this.zza = zzjc.zzb(bArr);
    }
}
