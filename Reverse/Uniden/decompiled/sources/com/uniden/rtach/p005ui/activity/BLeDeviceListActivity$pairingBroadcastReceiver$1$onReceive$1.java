package com.uniden.rtach.p005ui.activity;

import android.bluetooth.BluetoothDevice;
import android.util.Log;
import androidx.constraintlayout.widget.ConstraintLayout;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.Boxing;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.DelayKt;

/* JADX INFO: compiled from: BLeDeviceListActivity.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, m491d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
@DebugMetadata(m503c = "com.uniden.rtach.ui.activity.BLeDeviceListActivity$pairingBroadcastReceiver$1$onReceive$1", m504f = "BLeDeviceListActivity.kt", m505i = {}, m506l = {392}, m507m = "invokeSuspend", m508n = {}, m509s = {})
final class BLeDeviceListActivity$pairingBroadcastReceiver$1$onReceive$1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
    final /* synthetic */ BluetoothDevice $device;
    int label;
    final /* synthetic */ BLeDeviceListActivity this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    BLeDeviceListActivity$pairingBroadcastReceiver$1$onReceive$1(BLeDeviceListActivity bLeDeviceListActivity, BluetoothDevice bluetoothDevice, Continuation<? super BLeDeviceListActivity$pairingBroadcastReceiver$1$onReceive$1> continuation) {
        super(2, continuation);
        this.this$0 = bLeDeviceListActivity;
        this.$device = bluetoothDevice;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        return new BLeDeviceListActivity$pairingBroadcastReceiver$1$onReceive$1(this.this$0, this.$device, continuation);
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
        return ((BLeDeviceListActivity$pairingBroadcastReceiver$1$onReceive$1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Object invokeSuspend(Object obj) {
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = this.label;
        if (i == 0) {
            ResultKt.throwOnFailure(obj);
            this.label = 1;
            if (DelayKt.delay(2000L, this) == coroutine_suspended) {
                return coroutine_suspended;
            }
        } else {
            if (i != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(obj);
        }
        String strValueOf = String.valueOf(this.this$0.getTAG());
        StringBuilder sb = new StringBuilder("페어링 재시도: ");
        BluetoothDevice bluetoothDevice = this.$device;
        Log.d(strValueOf, sb.append(bluetoothDevice != null ? bluetoothDevice.getAddress() : null).toString());
        BluetoothDevice bluetoothDevice2 = this.$device;
        if (bluetoothDevice2 != null) {
            Boxing.boxBoolean(bluetoothDevice2.createBond());
        }
        return Unit.INSTANCE;
    }
}
