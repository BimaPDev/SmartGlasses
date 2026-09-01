package com.uniden.rtach.data.module;

import android.bluetooth.BluetoothAdapter;
import android.content.Context;
import dagger.internal.Factory;
import javax.inject.Provider;

/* JADX INFO: loaded from: classes2.dex */
public final class AppModule_ProvideBluetoothAdapterFactory implements Factory<BluetoothAdapter> {
    private final Provider<Context> contextProvider;

    public AppModule_ProvideBluetoothAdapterFactory(Provider<Context> provider) {
        this.contextProvider = provider;
    }

    @Override // javax.inject.Provider
    public BluetoothAdapter get() {
        return provideBluetoothAdapter(this.contextProvider.get());
    }

    public static AppModule_ProvideBluetoothAdapterFactory create(Provider<Context> provider) {
        return new AppModule_ProvideBluetoothAdapterFactory(provider);
    }

    public static BluetoothAdapter provideBluetoothAdapter(Context context) {
        return AppModule.INSTANCE.provideBluetoothAdapter(context);
    }
}
