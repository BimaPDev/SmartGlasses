package com.uniden.rtach.viewmodel;

import android.content.Context;
import dagger.internal.Factory;
import javax.inject.Provider;

/* JADX INFO: loaded from: classes2.dex */
public final class DashboardViewModel_Factory implements Factory<DashboardViewModel> {
    private final Provider<Context> contextProvider;

    public DashboardViewModel_Factory(Provider<Context> provider) {
        this.contextProvider = provider;
    }

    @Override // javax.inject.Provider
    public DashboardViewModel get() {
        return newInstance(this.contextProvider.get());
    }

    public static DashboardViewModel_Factory create(Provider<Context> provider) {
        return new DashboardViewModel_Factory(provider);
    }

    public static DashboardViewModel newInstance(Context context) {
        return new DashboardViewModel(context);
    }
}
