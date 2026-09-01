package com.uniden.rtach.viewmodel;

import android.content.Context;
import dagger.internal.Factory;
import javax.inject.Provider;

/* JADX INFO: loaded from: classes2.dex */
public final class FirmwareUpdateViewModel_Factory implements Factory<FirmwareUpdateViewModel> {
    private final Provider<Context> contextProvider;

    public FirmwareUpdateViewModel_Factory(Provider<Context> provider) {
        this.contextProvider = provider;
    }

    @Override // javax.inject.Provider
    public FirmwareUpdateViewModel get() {
        return newInstance(this.contextProvider.get());
    }

    public static FirmwareUpdateViewModel_Factory create(Provider<Context> provider) {
        return new FirmwareUpdateViewModel_Factory(provider);
    }

    public static FirmwareUpdateViewModel newInstance(Context context) {
        return new FirmwareUpdateViewModel(context);
    }
}
