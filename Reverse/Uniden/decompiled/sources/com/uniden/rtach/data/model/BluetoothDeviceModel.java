package com.uniden.rtach.data.model;

import android.bluetooth.BluetoothDevice;
import androidx.constraintlayout.widget.ConstraintLayout;
import com.google.android.gms.measurement.api.AppMeasurementSdk;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: BluetoothDeviceModel.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0010\n\u0002\u0010\b\n\u0002\b\u0002\b\u0086\b\u0018\u00002\u00020\u0001B'\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\u0006\u0010\u0007\u001a\u00020\b¢\u0006\u0004\b\t\u0010\nJ\t\u0010\u0011\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0012\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0013\u001a\u00020\u0006HÆ\u0003J\t\u0010\u0014\u001a\u00020\bHÆ\u0003J1\u0010\u0015\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u00062\b\b\u0002\u0010\u0007\u001a\u00020\bHÆ\u0001J\u0013\u0010\u0016\u001a\u00020\b2\b\u0010\u0017\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0018\u001a\u00020\u0019HÖ\u0001J\t\u0010\u001a\u001a\u00020\u0003HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\fR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\fR\u0011\u0010\u0005\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0011\u0010\u0007\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\u0010¨\u0006\u001b"}, m491d2 = {"Lcom/uniden/rtach/data/model/BluetoothDeviceModel;", "", AppMeasurementSdk.ConditionalUserProperty.NAME, "", "address", "bluetoothDevice", "Landroid/bluetooth/BluetoothDevice;", "isPaired", "", "<init>", "(Ljava/lang/String;Ljava/lang/String;Landroid/bluetooth/BluetoothDevice;Z)V", "getName", "()Ljava/lang/String;", "getAddress", "getBluetoothDevice", "()Landroid/bluetooth/BluetoothDevice;", "()Z", "component1", "component2", "component3", "component4", "copy", "equals", "other", "hashCode", "", "toString", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final /* data */ class BluetoothDeviceModel {
    private final String address;
    private final BluetoothDevice bluetoothDevice;
    private final boolean isPaired;
    private final String name;

    public static /* synthetic */ BluetoothDeviceModel copy$default(BluetoothDeviceModel bluetoothDeviceModel, String str, String str2, BluetoothDevice bluetoothDevice, boolean z, int i, Object obj) {
        if ((i & 1) != 0) {
            str = bluetoothDeviceModel.name;
        }
        if ((i & 2) != 0) {
            str2 = bluetoothDeviceModel.address;
        }
        if ((i & 4) != 0) {
            bluetoothDevice = bluetoothDeviceModel.bluetoothDevice;
        }
        if ((i & 8) != 0) {
            z = bluetoothDeviceModel.isPaired;
        }
        return bluetoothDeviceModel.copy(str, str2, bluetoothDevice, z);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final String getName() {
        return this.name;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final String getAddress() {
        return this.address;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final BluetoothDevice getBluetoothDevice() {
        return this.bluetoothDevice;
    }

    /* JADX INFO: renamed from: component4, reason: from getter */
    public final boolean getIsPaired() {
        return this.isPaired;
    }

    public final BluetoothDeviceModel copy(String name, String address, BluetoothDevice bluetoothDevice, boolean isPaired) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(address, "address");
        Intrinsics.checkNotNullParameter(bluetoothDevice, "bluetoothDevice");
        return new BluetoothDeviceModel(name, address, bluetoothDevice, isPaired);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof BluetoothDeviceModel)) {
            return false;
        }
        BluetoothDeviceModel bluetoothDeviceModel = (BluetoothDeviceModel) other;
        return Intrinsics.areEqual(this.name, bluetoothDeviceModel.name) && Intrinsics.areEqual(this.address, bluetoothDeviceModel.address) && Intrinsics.areEqual(this.bluetoothDevice, bluetoothDeviceModel.bluetoothDevice) && this.isPaired == bluetoothDeviceModel.isPaired;
    }

    public final String getAddress() {
        return this.address;
    }

    public final BluetoothDevice getBluetoothDevice() {
        return this.bluetoothDevice;
    }

    public final String getName() {
        return this.name;
    }

    public int hashCode() {
        return (((((this.name.hashCode() * 31) + this.address.hashCode()) * 31) + this.bluetoothDevice.hashCode()) * 31) + Boolean.hashCode(this.isPaired);
    }

    public final boolean isPaired() {
        return this.isPaired;
    }

    public String toString() {
        return "BluetoothDeviceModel(name=" + this.name + ", address=" + this.address + ", bluetoothDevice=" + this.bluetoothDevice + ", isPaired=" + this.isPaired + ')';
    }

    public BluetoothDeviceModel(String name, String address, BluetoothDevice bluetoothDevice, boolean z) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(address, "address");
        Intrinsics.checkNotNullParameter(bluetoothDevice, "bluetoothDevice");
        this.name = name;
        this.address = address;
        this.bluetoothDevice = bluetoothDevice;
        this.isPaired = z;
    }
}
