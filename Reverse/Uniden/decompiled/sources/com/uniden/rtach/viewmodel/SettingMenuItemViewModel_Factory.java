package com.uniden.rtach.viewmodel;

import dagger.internal.Factory;

/* JADX INFO: loaded from: classes2.dex */
public final class SettingMenuItemViewModel_Factory implements Factory<SettingMenuItemViewModel> {
    @Override // javax.inject.Provider
    public SettingMenuItemViewModel get() {
        return newInstance();
    }

    public static SettingMenuItemViewModel_Factory create() {
        return InstanceHolder.INSTANCE;
    }

    public static SettingMenuItemViewModel newInstance() {
        return new SettingMenuItemViewModel();
    }

    private static final class InstanceHolder {
        private static final SettingMenuItemViewModel_Factory INSTANCE = new SettingMenuItemViewModel_Factory();

        private InstanceHolder() {
        }
    }
}
