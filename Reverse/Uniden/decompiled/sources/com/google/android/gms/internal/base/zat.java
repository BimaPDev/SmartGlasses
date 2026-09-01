package com.google.android.gms.internal.base;

/* JADX INFO: compiled from: com.google.android.gms:play-services-base@@18.4.0 */
/* JADX INFO: loaded from: classes2.dex */
public final class zat {
    private static final zaq zaa;
    private static volatile zaq zab;

    static {
        zas zasVar = new zas(null);
        zaa = zasVar;
        zab = zasVar;
    }

    public static zaq zaa() {
        return zab;
    }
}
