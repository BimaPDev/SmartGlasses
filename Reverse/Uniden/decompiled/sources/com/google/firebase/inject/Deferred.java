package com.google.firebase.inject;

/* JADX INFO: loaded from: classes2.dex */
public interface Deferred<T> {

    public interface DeferredHandler<T> {
        void handle(Provider<T> provider);
    }

    void whenAvailable(DeferredHandler<T> deferredHandler);
}
