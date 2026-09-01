package com.uniden.rtach.viewmodel;

import dagger.internal.Factory;

/* JADX INFO: loaded from: classes2.dex */
public final class SharedViewModel_Factory implements Factory<SharedViewModel> {
    @Override // javax.inject.Provider
    public SharedViewModel get() {
        return newInstance();
    }

    public static SharedViewModel_Factory create() {
        return InstanceHolder.INSTANCE;
    }

    public static SharedViewModel newInstance() {
        return new SharedViewModel();
    }

    private static final class InstanceHolder {
        private static final SharedViewModel_Factory INSTANCE = new SharedViewModel_Factory();

        private InstanceHolder() {
        }
    }
}
