package com.google.android.gms.measurement.internal;

import android.text.TextUtils;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
final class zzf {
    private final zzjh zza;

    static zzf zza(String str) {
        return new zzf((TextUtils.isEmpty(str) || str.length() > 1) ? zzjh.UNINITIALIZED : zzje.zza(str.charAt(0)));
    }

    final zzjh zza() {
        return this.zza;
    }

    final String zzb() {
        return String.valueOf(zzje.zza(this.zza));
    }

    zzf(zzjh zzjhVar) {
        this.zza = zzjhVar;
    }
}
