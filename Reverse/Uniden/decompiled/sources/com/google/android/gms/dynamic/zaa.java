package com.google.android.gms.dynamic;

import java.util.Iterator;

/* JADX INFO: compiled from: com.google.android.gms:play-services-base@@18.4.0 */
/* JADX INFO: loaded from: classes2.dex */
final class zaa implements OnDelegateCreatedListener {
    final /* synthetic */ DeferredLifecycleHelper zaa;

    zaa(DeferredLifecycleHelper deferredLifecycleHelper) {
        this.zaa = deferredLifecycleHelper;
    }

    @Override // com.google.android.gms.dynamic.OnDelegateCreatedListener
    public final void onDelegateCreated(LifecycleDelegate lifecycleDelegate) {
        this.zaa.zaa = lifecycleDelegate;
        Iterator it = this.zaa.zac.iterator();
        while (it.hasNext()) {
            ((zah) it.next()).zab(this.zaa.zaa);
        }
        this.zaa.zac.clear();
        this.zaa.zab = null;
    }
}
