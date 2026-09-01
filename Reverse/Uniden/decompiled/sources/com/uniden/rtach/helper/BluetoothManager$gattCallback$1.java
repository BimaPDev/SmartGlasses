package com.uniden.rtach.helper;

import android.bluetooth.BluetoothDevice;
import android.bluetooth.BluetoothGatt;
import android.bluetooth.BluetoothGattCallback;
import android.bluetooth.BluetoothGattCharacteristic;
import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.core.app.NotificationCompat;
import com.uniden.rtach.data.sharedpref.StoreUserData;
import kotlin.Deprecated;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: BluetoothManager.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000/\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0012\n\u0002\b\u0002*\u0001\u0000\b\n\u0018\u00002\u00020\u0001J\"\u0010\u0002\u001a\u00020\u00032\b\u0010\u0004\u001a\u0004\u0018\u00010\u00052\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\u0007H\u0016J\"\u0010\t\u001a\u00020\u00032\b\u0010\u0004\u001a\u0004\u0018\u00010\u00052\u0006\u0010\b\u001a\u00020\u00072\u0006\u0010\n\u001a\u00020\u0007H\u0016J\u001a\u0010\u000b\u001a\u00020\u00032\b\u0010\u0004\u001a\u0004\u0018\u00010\u00052\u0006\u0010\b\u001a\u00020\u0007H\u0016J$\u0010\f\u001a\u00020\u00032\b\u0010\u0004\u001a\u0004\u0018\u00010\u00052\b\u0010\r\u001a\u0004\u0018\u00010\u000e2\u0006\u0010\b\u001a\u00020\u0007H\u0016J$\u0010\u000f\u001a\u00020\u00032\b\u0010\u0004\u001a\u0004\u0018\u00010\u00052\b\u0010\r\u001a\u0004\u0018\u00010\u000e2\u0006\u0010\b\u001a\u00020\u0007H\u0017J(\u0010\u000f\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\u0006\u0010\r\u001a\u00020\u000e2\u0006\u0010\u0010\u001a\u00020\u00112\u0006\u0010\b\u001a\u00020\u0007H\u0016J\u001c\u0010\u0012\u001a\u00020\u00032\b\u0010\u0004\u001a\u0004\u0018\u00010\u00052\b\u0010\r\u001a\u0004\u0018\u00010\u000eH\u0016J \u0010\u0012\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\u0006\u0010\r\u001a\u00020\u000e2\u0006\u0010\u0010\u001a\u00020\u0011H\u0016¨\u0006\u0013"}, m491d2 = {"com/uniden/rtach/helper/BluetoothManager$gattCallback$1", "Landroid/bluetooth/BluetoothGattCallback;", "onMtuChanged", "", "gatt", "Landroid/bluetooth/BluetoothGatt;", "mtu", "", NotificationCompat.CATEGORY_STATUS, "onConnectionStateChange", "newState", "onServicesDiscovered", "onCharacteristicWrite", "characteristic", "Landroid/bluetooth/BluetoothGattCharacteristic;", "onCharacteristicRead", "value", "", "onCharacteristicChanged", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class BluetoothManager$gattCallback$1 extends BluetoothGattCallback {
    final /* synthetic */ BluetoothManager this$0;

    BluetoothManager$gattCallback$1(BluetoothManager bluetoothManager) {
        this.this$0 = bluetoothManager;
    }

    @Override // android.bluetooth.BluetoothGattCallback
    public void onMtuChanged(final BluetoothGatt gatt, int mtu, int status) {
        Log.d(String.valueOf(this.this$0.getTAG()), "gattCallback onMtuChanged");
        if (status == 0) {
            Log.d(String.valueOf(this.this$0.getTAG()), "gattCallback onMtuChanged gatt success");
            CustomLog.INSTANCE.writeFile(this.this$0.getTAG() + " : MTU changed to: " + mtu, this.this$0.getContext());
            Handler handler = new Handler(Looper.getMainLooper());
            final BluetoothManager bluetoothManager = this.this$0;
            handler.postDelayed(new Runnable() { // from class: com.uniden.rtach.helper.BluetoothManager$gattCallback$1$$ExternalSyntheticLambda1
                @Override // java.lang.Runnable
                public final void run() {
                    BluetoothManager$gattCallback$1.onMtuChanged$lambda$0(gatt, bluetoothManager);
                }
            }, 500L);
            return;
        }
        CustomLog.INSTANCE.writeFile(this.this$0.getTAG() + " : MTU negotiation failed with status: " + status, this.this$0.getContext());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void onMtuChanged$lambda$0(BluetoothGatt bluetoothGatt, BluetoothManager this$0) {
        BluetoothDevice device;
        BluetoothDevice device2;
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        if ((bluetoothGatt != null && (device2 = bluetoothGatt.getDevice()) != null && device2.getBondState() == 12) || (bluetoothGatt != null && (device = bluetoothGatt.getDevice()) != null && device.getBondState() == 10)) {
            if (bluetoothGatt != null) {
                bluetoothGatt.discoverServices();
            }
            CustomLog.INSTANCE.writeFile(this$0.getTAG() + " : discoverServices: ", this$0.getContext());
            return;
        }
        CustomLog.INSTANCE.writeFile(this$0.getTAG() + " : skipping service discovery. ", this$0.getContext());
    }

    @Override // android.bluetooth.BluetoothGattCallback
    public void onConnectionStateChange(final BluetoothGatt gatt, int status, int newState) {
        Log.d(String.valueOf(this.this$0.getTAG()), "gattCallback onConnectionStateChange " + status + ", " + newState);
        try {
            CustomLog.INSTANCE.writeFile("onConnectionStateChange newState:- " + newState + " || status:- " + status, this.this$0.getContext());
            if (newState == 2 && status == 0) {
                Log.d(String.valueOf(this.this$0.getTAG()), "state connected or gatt success");
                this.this$0.connected = true;
                StoreUserData storeUserData = this.this$0.sharedPrefs;
                if (storeUserData != null) {
                    storeUserData.setAutoConnectAvailable(true);
                }
                StoreUserData storeUserData2 = this.this$0.sharedPrefs;
                if (storeUserData2 != null) {
                    storeUserData2.setScanRunning(false);
                }
                BluetoothManager bluetoothManager = this.this$0;
                Intrinsics.checkNotNull(gatt);
                bluetoothManager.bluetoothGatt = gatt;
                Handler handler = new Handler(Looper.getMainLooper());
                final BluetoothManager bluetoothManager2 = this.this$0;
                handler.postDelayed(new Runnable() { // from class: com.uniden.rtach.helper.BluetoothManager$gattCallback$1$$ExternalSyntheticLambda0
                    @Override // java.lang.Runnable
                    public final void run() {
                        BluetoothManager$gattCallback$1.onConnectionStateChange$lambda$1(bluetoothManager2, gatt);
                    }
                }, 500L);
                MyBroadcaster.INSTANCE.sendBroadcast(this.this$0.getContext(), MyBroadcaster.BLUETOOTH_CONNECTION_STATE_BROADCAST, BluetoothState.STATE_CONNECTED);
                Log.d(this.this$0.getTAG() + "_C", "STATE_CONNECTED: ");
                CustomLog.INSTANCE.writeFile(this.this$0.getTAG() + " : BluetoothProfile.STATE_CONNECTED:", this.this$0.getContext());
                return;
            }
            if (newState == 1) {
                Log.d(String.valueOf(this.this$0.getTAG()), "state connecting");
                StoreUserData storeUserData3 = this.this$0.sharedPrefs;
                if (storeUserData3 != null) {
                    storeUserData3.setScanRunning(true);
                }
                MyBroadcaster.INSTANCE.sendBroadcast(this.this$0.getContext(), MyBroadcaster.BLUETOOTH_CONNECTION_STATE_BROADCAST, BluetoothState.STATE_CONNECTING);
                Log.d(this.this$0.getTAG() + "_C", "STATE_CONNECTING: ");
                CustomLog.INSTANCE.writeFile(this.this$0.getTAG() + " : BluetoothProfile.STATE_CONNECTING:", this.this$0.getContext());
                return;
            }
            if (newState == 3) {
                Log.d(String.valueOf(this.this$0.getTAG()), "state disconnecting");
                MyBroadcaster.INSTANCE.sendBroadcast(this.this$0.getContext(), MyBroadcaster.BLUETOOTH_CONNECTION_STATE_BROADCAST, BluetoothState.STATE_DISCONNECTING);
                CustomLog.INSTANCE.writeFile(this.this$0.getTAG() + " : BluetoothProfile.STATE_DISCONNECTING:", this.this$0.getContext());
            } else if (newState == 0) {
                Log.d(String.valueOf(this.this$0.getTAG()), "state disconnected");
                this.this$0.connected = false;
                StoreUserData storeUserData4 = this.this$0.sharedPrefs;
                if (storeUserData4 != null) {
                    storeUserData4.setBluetoothConnected(false);
                }
                this.this$0.disconnect();
                StoreUserData storeUserData5 = this.this$0.sharedPrefs;
                if (storeUserData5 != null) {
                    storeUserData5.setBluetoothConnected(false);
                }
                MyBroadcaster.INSTANCE.sendBroadcast(this.this$0.getContext(), MyBroadcaster.BLUETOOTH_CONNECTION_STATE_BROADCAST, BluetoothState.STATE_DISCONNECTED);
                CustomLog.INSTANCE.writeFile(this.this$0.getTAG() + " : BluetoothProfile.STATE_DISCONNECTED:", this.this$0.getContext());
            }
        } catch (Exception e) {
            CustomLog.INSTANCE.writeFile(this.this$0.getTAG() + " : onConnectionStateChange Exception:- " + e.getLocalizedMessage(), this.this$0.getContext());
            e.printStackTrace();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void onConnectionStateChange$lambda$1(BluetoothManager this$0, BluetoothGatt bluetoothGatt) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Log.d(String.valueOf(this$0.getTAG()), "connected Discover Services started");
        bluetoothGatt.requestMtu(512);
    }

    @Override // android.bluetooth.BluetoothGattCallback
    public void onServicesDiscovered(BluetoothGatt gatt, int status) {
        Log.d(String.valueOf(this.this$0.getTAG()), "onServicesDiscovered state : " + status);
        CustomLog.INSTANCE.writeFile(this.this$0.getTAG() + " : onServicesDiscovered status:- " + status + ' ', this.this$0.getContext());
        if (status == 0) {
            this.this$0.readCharacteristicsWithDelay();
        }
    }

    @Override // android.bluetooth.BluetoothGattCallback
    public void onCharacteristicWrite(BluetoothGatt gatt, BluetoothGattCharacteristic characteristic, int status) {
        this.this$0.setWrite_end_flag(true);
        if (characteristic != null) {
            BluetoothManager bluetoothManager = this.this$0;
            MyBroadcaster myBroadcaster = MyBroadcaster.INSTANCE;
            Context context = bluetoothManager.getContext();
            byte[] value = characteristic.getValue();
            Intrinsics.checkNotNullExpressionValue(value, "getValue(...)");
            myBroadcaster.sendBroadcastCharacteristic(context, MyBroadcaster.BLUETOOTH_CHARACTERISTIC_CHANGED, characteristic, value);
        }
    }

    @Override // android.bluetooth.BluetoothGattCallback
    @Deprecated(message = "Deprecated in Java")
    public void onCharacteristicRead(BluetoothGatt gatt, BluetoothGattCharacteristic characteristic, int status) {
        this.this$0.setRead_end_flag(true);
        if (characteristic != null) {
            BluetoothManager bluetoothManager = this.this$0;
            MyBroadcaster myBroadcaster = MyBroadcaster.INSTANCE;
            Context context = bluetoothManager.getContext();
            byte[] value = characteristic.getValue();
            Intrinsics.checkNotNullExpressionValue(value, "getValue(...)");
            myBroadcaster.sendBroadcastCharacteristic(context, MyBroadcaster.BLUETOOTH_CHARACTERISTIC_CHANGED, characteristic, value);
        }
    }

    @Override // android.bluetooth.BluetoothGattCallback
    public void onCharacteristicRead(BluetoothGatt gatt, BluetoothGattCharacteristic characteristic, byte[] value, int status) {
        Intrinsics.checkNotNullParameter(gatt, "gatt");
        Intrinsics.checkNotNullParameter(characteristic, "characteristic");
        Intrinsics.checkNotNullParameter(value, "value");
        this.this$0.setRead_end_flag(true);
        MyBroadcaster.INSTANCE.sendBroadcastCharacteristic(this.this$0.getContext(), MyBroadcaster.BLUETOOTH_CHARACTERISTIC_CHANGED, characteristic, value);
    }

    @Override // android.bluetooth.BluetoothGattCallback
    public void onCharacteristicChanged(BluetoothGatt gatt, BluetoothGattCharacteristic characteristic) {
        if (characteristic != null) {
            try {
                BluetoothManager bluetoothManager = this.this$0;
                MyBroadcaster myBroadcaster = MyBroadcaster.INSTANCE;
                Context context = bluetoothManager.getContext();
                byte[] value = characteristic.getValue();
                Intrinsics.checkNotNullExpressionValue(value, "getValue(...)");
                myBroadcaster.sendBroadcastCharacteristic(context, MyBroadcaster.BLUETOOTH_CHARACTERISTIC_CHANGED, characteristic, value);
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    @Override // android.bluetooth.BluetoothGattCallback
    public void onCharacteristicChanged(BluetoothGatt gatt, BluetoothGattCharacteristic characteristic, byte[] value) {
        Intrinsics.checkNotNullParameter(gatt, "gatt");
        Intrinsics.checkNotNullParameter(characteristic, "characteristic");
        Intrinsics.checkNotNullParameter(value, "value");
        try {
            MyBroadcaster.INSTANCE.sendBroadcastCharacteristic(this.this$0.getContext(), MyBroadcaster.BLUETOOTH_CHARACTERISTIC_CHANGED, characteristic, value);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
