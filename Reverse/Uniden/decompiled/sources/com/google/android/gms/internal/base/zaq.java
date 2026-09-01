package com.google.android.gms.internal.base;

import java.util.concurrent.ExecutorService;
import java.util.concurrent.ThreadFactory;

/* JADX INFO: compiled from: com.google.android.gms:play-services-base@@18.4.0 */
/* JADX INFO: loaded from: classes2.dex */
public interface zaq {
    ExecutorService zaa(ThreadFactory threadFactory, int i);

    ExecutorService zab(int i, int i2);

    ExecutorService zac(int i, ThreadFactory threadFactory, int i2);
}
