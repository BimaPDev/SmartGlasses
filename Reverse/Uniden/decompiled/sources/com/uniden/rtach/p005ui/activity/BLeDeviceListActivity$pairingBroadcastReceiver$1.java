package com.uniden.rtach.p005ui.activity;

import android.bluetooth.BluetoothDevice;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.util.Log;
import androidx.constraintlayout.widget.ConstraintLayout;
import com.uniden.rtach.helper.CustomLog;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.BuildersKt__Builders_commonKt;
import kotlinx.coroutines.CoroutineScopeKt;
import kotlinx.coroutines.Dispatchers;

/* JADX INFO: compiled from: BLeDeviceListActivity.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000\u001d\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000*\u0001\u0000\b\n\u0018\u00002\u00020\u0001J\u001c\u0010\u0002\u001a\u00020\u00032\b\u0010\u0004\u001a\u0004\u0018\u00010\u00052\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007H\u0016¨\u0006\b"}, m491d2 = {"com/uniden/rtach/ui/activity/BLeDeviceListActivity$pairingBroadcastReceiver$1", "Landroid/content/BroadcastReceiver;", "onReceive", "", "context", "Landroid/content/Context;", "intent", "Landroid/content/Intent;", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class BLeDeviceListActivity$pairingBroadcastReceiver$1 extends BroadcastReceiver {
    final /* synthetic */ BLeDeviceListActivity this$0;

    BLeDeviceListActivity$pairingBroadcastReceiver$1(BLeDeviceListActivity bLeDeviceListActivity) {
        this.this$0 = bLeDeviceListActivity;
    }

    @Override // android.content.BroadcastReceiver
    public void onReceive(final Context context, Intent intent) {
        BluetoothDevice bluetoothDevice = intent != null ? (BluetoothDevice) intent.getParcelableExtra("android.bluetooth.device.extra.DEVICE") : null;
        Log.d(String.valueOf(this.this$0.getTAG()), "Bond state receiver " + ("Bond state change: state " + this.this$0.printBondState(intent != null ? Integer.valueOf(intent.getIntExtra("android.bluetooth.device.extra.BOND_STATE", -1)) : null) + ", previous state " + this.this$0.printBondState(intent != null ? Integer.valueOf(intent.getIntExtra("android.bluetooth.device.extra.PREVIOUS_BOND_STATE", -1)) : null)));
        String action = intent != null ? intent.getAction() : null;
        if (context != null) {
            CustomLog.INSTANCE.writeFile(this.this$0.getTAG() + " : pairingBroadcastReceiver Received action " + action + ' ', context);
        }
        if (Intrinsics.areEqual(action, "android.bluetooth.device.action.BOND_STATE_CHANGED")) {
            int intExtra = intent.getIntExtra("android.bluetooth.device.extra.BOND_STATE", Integer.MIN_VALUE);
            if (intExtra != 10) {
                if (intExtra != 12) {
                    return;
                }
                Log.d(String.valueOf(this.this$0.getTAG()), "BOND BONDED " + (bluetoothDevice != null ? bluetoothDevice.getAddress() : null));
                if (context != null) {
                    CustomLog.INSTANCE.writeFile(this.this$0.getTAG() + " : pairingBroadcastReceiver Received bondState dismissed loader, BOND_BONDED goto connectBluetooth()", context);
                }
                this.this$0.connectBluetooth();
                return;
            }
            BuildersKt__Builders_commonKt.launch$default(CoroutineScopeKt.CoroutineScope(Dispatchers.getMain()), null, null, new BLeDeviceListActivity$pairingBroadcastReceiver$1$onReceive$1(this.this$0, bluetoothDevice, null), 3, null);
            if (context != null) {
                CustomLog.INSTANCE.writeFile(this.this$0.getTAG() + " : pairingBroadcastReceiver Received  BOND_NONE  !isErrorToastShown " + (!this.this$0.isErrorToastShown), context);
            }
            if (this.this$0.isErrorToastShown) {
                return;
            }
            this.this$0.getLoader().dismiss();
            if (context != null) {
                CustomLog.INSTANCE.writeFile(this.this$0.getTAG() + " : pairingBroadcastReceiver Received  BOND_NONE  !isErrorToastShown " + (!this.this$0.isErrorToastShown) + " and !this@BLeDeviceListActivity.isFinishing && !this@BLeDeviceListActivity.isDestroyed " + ((this.this$0.isFinishing() || this.this$0.isDestroyed()) ? false : true), context);
            }
            if (this.this$0.isFinishing() || this.this$0.isDestroyed()) {
                return;
            }
            final BLeDeviceListActivity bLeDeviceListActivity = this.this$0;
            bLeDeviceListActivity.runOnUiThread(new Runnable() { // from class: com.uniden.rtach.ui.activity.BLeDeviceListActivity$pairingBroadcastReceiver$1$$ExternalSyntheticLambda0
                @Override // java.lang.Runnable
                public final void run() {
                    BLeDeviceListActivity$pairingBroadcastReceiver$1.onReceive$lambda$0(context, bLeDeviceListActivity);
                }
            });
            this.this$0.isErrorToastShown = true;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void onReceive$lambda$0(Context context, BLeDeviceListActivity this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        if (context != null) {
            CustomLog.INSTANCE.writeFile(this$0.getTAG() + " : pairingBroadcastReceiver Received  BOND_NONE  display pairing instruction dialog", context);
        }
    }
}
