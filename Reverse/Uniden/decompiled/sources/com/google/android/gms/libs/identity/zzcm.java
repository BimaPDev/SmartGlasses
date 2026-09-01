package com.google.android.gms.libs.identity;

import java.util.concurrent.Executor;

/* JADX INFO: compiled from: com.google.android.gms:play-services-location@@21.2.0 */
/* JADX INFO: loaded from: classes2.dex */
final /* synthetic */ class zzcm implements Executor {
    static final /* synthetic */ zzcm zza = new zzcm();

    private /* synthetic */ zzcm() {
    }

    @Override // java.util.concurrent.Executor
    public final /* synthetic */ void execute(Runnable runnable) {
        runnable.run();
    }
}
