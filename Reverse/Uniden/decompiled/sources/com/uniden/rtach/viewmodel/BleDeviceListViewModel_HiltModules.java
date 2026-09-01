package com.uniden.rtach.viewmodel;

import androidx.lifecycle.ViewModel;
import dagger.Binds;
import dagger.Module;
import dagger.Provides;
import dagger.multibindings.IntoMap;
import dagger.multibindings.IntoSet;
import dagger.multibindings.StringKey;

/* JADX INFO: loaded from: classes2.dex */
public final class BleDeviceListViewModel_HiltModules {
    private BleDeviceListViewModel_HiltModules() {
    }

    @Module
    public static abstract class BindsModule {
        @Binds
        @IntoMap
        @StringKey("com.uniden.rtach.viewmodel.BleDeviceListViewModel")
        public abstract ViewModel binds(BleDeviceListViewModel bleDeviceListViewModel);

        private BindsModule() {
        }
    }

    @Module
    public static final class KeyModule {
        @Provides
        @IntoSet
        public static String provide() {
            return "com.uniden.rtach.viewmodel.BleDeviceListViewModel";
        }

        private KeyModule() {
        }
    }
}
