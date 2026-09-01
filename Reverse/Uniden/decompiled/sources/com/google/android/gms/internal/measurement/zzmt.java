package com.google.android.gms.internal.measurement;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
final class zzmt extends IllegalArgumentException {
    zzmt(int i, int i2) {
        super("Unpaired surrogate at index " + i + " of " + i2);
    }
}
