package com.google.android.gms.common.api.internal;

import android.app.Activity;

/* JADX INFO: compiled from: com.google.android.gms:play-services-base@@18.4.0 */
/* JADX INFO: loaded from: classes2.dex */
public abstract class ActivityLifecycleObserver {
    /* JADX INFO: renamed from: of */
    public static final ActivityLifecycleObserver m119of(Activity activity) {
        return new zab(zaa.zaa(activity));
    }

    public abstract ActivityLifecycleObserver onStopCallOnce(Runnable runnable);
}
