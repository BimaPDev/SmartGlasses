package dagger.hilt.android.internal.lifecycle;

import dagger.hilt.android.ActivityRetainedLifecycle;
import dagger.hilt.android.ViewModelLifecycle;
import dagger.hilt.android.internal.ThreadUtil;
import dagger.hilt.android.lifecycle.RetainedLifecycle;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

/* JADX INFO: loaded from: classes2.dex */
public final class RetainedLifecycleImpl implements ActivityRetainedLifecycle, ViewModelLifecycle {
    private final Set<RetainedLifecycle.OnClearedListener> listeners = new HashSet();
    private boolean onClearedDispatched = false;

    @Override // dagger.hilt.android.lifecycle.RetainedLifecycle
    public void addOnClearedListener(RetainedLifecycle.OnClearedListener listener) {
        ThreadUtil.ensureMainThread();
        throwIfOnClearedDispatched();
        this.listeners.add(listener);
    }

    @Override // dagger.hilt.android.lifecycle.RetainedLifecycle
    public void removeOnClearedListener(RetainedLifecycle.OnClearedListener listener) {
        ThreadUtil.ensureMainThread();
        throwIfOnClearedDispatched();
        this.listeners.remove(listener);
    }

    public void dispatchOnCleared() {
        ThreadUtil.ensureMainThread();
        this.onClearedDispatched = true;
        Iterator<RetainedLifecycle.OnClearedListener> it = this.listeners.iterator();
        while (it.hasNext()) {
            it.next().onCleared();
        }
    }

    private void throwIfOnClearedDispatched() {
        if (this.onClearedDispatched) {
            throw new IllegalStateException("There was a race between the call to add/remove an OnClearedListener and onCleared(). This can happen when posting to the Main thread from a background thread, which is not supported.");
        }
    }
}
