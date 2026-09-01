package com.google.android.gms.common.api.internal;

/* JADX INFO: compiled from: com.google.android.gms:play-services-base@@18.4.0 */
/* JADX INFO: loaded from: classes2.dex */
final class zabm implements Runnable {
    final /* synthetic */ zabq zaa;

    zabm(zabq zabqVar) {
        this.zaa = zabqVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.zaa.zaH();
    }
}
