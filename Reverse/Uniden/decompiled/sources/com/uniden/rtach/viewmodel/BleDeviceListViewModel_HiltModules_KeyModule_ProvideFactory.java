package com.uniden.rtach.viewmodel;

import dagger.internal.Factory;
import dagger.internal.Preconditions;

/* JADX INFO: loaded from: classes2.dex */
public final class BleDeviceListViewModel_HiltModules_KeyModule_ProvideFactory implements Factory<String> {
    @Override // javax.inject.Provider
    public String get() {
        return provide();
    }

    public static BleDeviceListViewModel_HiltModules_KeyModule_ProvideFactory create() {
        return InstanceHolder.INSTANCE;
    }

    public static String provide() {
        return (String) Preconditions.checkNotNullFromProvides(BleDeviceListViewModel_HiltModules.KeyModule.provide());
    }

    private static final class InstanceHolder {
        private static final BleDeviceListViewModel_HiltModules_KeyModule_ProvideFactory INSTANCE = new BleDeviceListViewModel_HiltModules_KeyModule_ProvideFactory();

        private InstanceHolder() {
        }
    }
}
