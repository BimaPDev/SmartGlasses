package com.google.android.gms.common.internal;

import java.util.concurrent.ExecutorService;

/* JADX INFO: compiled from: com.google.android.gms:play-services-basement@@18.3.0 */
/* JADX INFO: loaded from: classes2.dex */
public final class CallbackExecutor {
    private CallbackExecutor() {
    }

    public static ExecutorService executorService() {
        return zzj.zza;
    }
}
