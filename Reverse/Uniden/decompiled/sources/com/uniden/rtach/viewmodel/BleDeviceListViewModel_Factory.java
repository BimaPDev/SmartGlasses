package com.uniden.rtach.viewmodel;

import android.bluetooth.BluetoothAdapter;
import android.content.Context;
import dagger.internal.Factory;
import javax.inject.Provider;

/* JADX INFO: loaded from: classes2.dex */
public final class BleDeviceListViewModel_Factory implements Factory<BleDeviceListViewModel> {
    private final Provider<BluetoothAdapter> bluetoothAdapterProvider;
    private final Provider<Context> contextProvider;

    public BleDeviceListViewModel_Factory(Provider<BluetoothAdapter> provider, Provider<Context> provider2) {
        this.bluetoothAdapterProvider = provider;
        this.contextProvider = provider2;
    }

    @Override // javax.inject.Provider
    public BleDeviceListViewModel get() {
        return newInstance(this.bluetoothAdapterProvider.get(), this.contextProvider.get());
    }

    public static BleDeviceListViewModel_Factory create(Provider<BluetoothAdapter> provider, Provider<Context> provider2) {
        return new BleDeviceListViewModel_Factory(provider, provider2);
    }

    public static BleDeviceListViewModel newInstance(BluetoothAdapter bluetoothAdapter, Context context) {
        return new BleDeviceListViewModel(bluetoothAdapter, context);
    }
}
