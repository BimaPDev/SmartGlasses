package androidx.databinding;

import java.lang.ref.ReferenceQueue;

/* JADX INFO: loaded from: classes.dex */
interface CreateWeakListener {
    WeakListener create(ViewDataBinding viewDataBinding, int i, ReferenceQueue<ViewDataBinding> referenceQueue);
}
