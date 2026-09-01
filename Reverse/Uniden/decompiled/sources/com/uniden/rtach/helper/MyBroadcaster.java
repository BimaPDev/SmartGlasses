package com.uniden.rtach.helper;

import android.bluetooth.BluetoothGattCharacteristic;
import android.content.Context;
import android.content.Intent;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.localbroadcastmanager.content.LocalBroadcastManager;
import com.uniden.rtach.data.model.CharacteristicData;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: MyBroadcaster.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u00006\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0012\n\u0000\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u001e\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\u00052\u0006\u0010\r\u001a\u00020\u000eJ&\u0010\u000f\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\u00052\u0006\u0010\u0010\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u0013R\u000e\u0010\u0004\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000¨\u0006\u0014"}, m491d2 = {"Lcom/uniden/rtach/helper/MyBroadcaster;", "", "<init>", "()V", MyBroadcaster.DATA_KEY, "", "BLUETOOTH_CONNECTION_STATE_BROADCAST", "BLUETOOTH_CHARACTERISTIC_CHANGED", "sendBroadcast", "", "context", "Landroid/content/Context;", "action", "data", "Lcom/uniden/rtach/helper/BluetoothState;", "sendBroadcastCharacteristic", "characteristic", "Landroid/bluetooth/BluetoothGattCharacteristic;", "value", "", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class MyBroadcaster {
    public static final String BLUETOOTH_CHARACTERISTIC_CHANGED = "com.example.BLUETOOTH_CHARACTERISTIC_CHANGED";
    public static final String BLUETOOTH_CONNECTION_STATE_BROADCAST = "com.example.BLUETOOTH_CONNECTION_STATE_BROADCAST";
    public static final String DATA_KEY = "DATA_KEY";
    public static final MyBroadcaster INSTANCE = new MyBroadcaster();

    private MyBroadcaster() {
    }

    public final void sendBroadcast(Context context, String action, BluetoothState data) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(action, "action");
        Intrinsics.checkNotNullParameter(data, "data");
        Intent intent = new Intent(action);
        intent.putExtra(DATA_KEY, data.name());
        LocalBroadcastManager.getInstance(context).sendBroadcast(intent);
    }

    public final void sendBroadcastCharacteristic(Context context, String action, BluetoothGattCharacteristic characteristic, byte[] value) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(action, "action");
        Intrinsics.checkNotNullParameter(characteristic, "characteristic");
        Intrinsics.checkNotNullParameter(value, "value");
        CharacteristicData characteristicData = new CharacteristicData(characteristic, value);
        Intent intent = new Intent(action);
        intent.putExtra(DATA_KEY, characteristicData);
        LocalBroadcastManager.getInstance(context).sendBroadcast(intent);
    }
}
