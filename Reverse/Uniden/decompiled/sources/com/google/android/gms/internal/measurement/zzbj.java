package com.google.android.gms.internal.measurement;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
final /* synthetic */ class zzbj {
    static final /* synthetic */ int[] zza;

    static {
        int[] iArr = new int[zzbv.values().length];
        zza = iArr;
        try {
            iArr[zzbv.AND.ordinal()] = 1;
        } catch (NoSuchFieldError unused) {
        }
        try {
            zza[zzbv.NOT.ordinal()] = 2;
        } catch (NoSuchFieldError unused2) {
        }
        try {
            zza[zzbv.OR.ordinal()] = 3;
        } catch (NoSuchFieldError unused3) {
        }
    }
}
