package com.uniden.rtach.helper;

import android.bluetooth.BluetoothGatt;
import androidx.constraintlayout.widget.ConstraintLayout;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;

/* JADX INFO: compiled from: BluetoothManager.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, m491d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
@DebugMetadata(m503c = "com.uniden.rtach.helper.BluetoothManager$readCharacteristicsWithDelay$1$1", m504f = "BluetoothManager.kt", m505i = {0, 1}, m506l = {332, 334}, m507m = "invokeSuspend", m508n = {"$this$launch", "$this$launch"}, m509s = {"L$0", "L$0"})
final class BluetoothManager$readCharacteristicsWithDelay$1$1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
    final /* synthetic */ BluetoothGatt $gatt;
    private /* synthetic */ Object L$0;
    Object L$1;
    Object L$2;
    Object L$3;
    Object L$4;
    int label;
    final /* synthetic */ BluetoothManager this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    BluetoothManager$readCharacteristicsWithDelay$1$1(BluetoothGatt bluetoothGatt, BluetoothManager bluetoothManager, Continuation<? super BluetoothManager$readCharacteristicsWithDelay$1$1> continuation) {
        super(2, continuation);
        this.$gatt = bluetoothGatt;
        this.this$0 = bluetoothManager;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        BluetoothManager$readCharacteristicsWithDelay$1$1 bluetoothManager$readCharacteristicsWithDelay$1$1 = new BluetoothManager$readCharacteristicsWithDelay$1$1(this.$gatt, this.this$0, continuation);
        bluetoothManager$readCharacteristicsWithDelay$1$1.L$0 = obj;
        return bluetoothManager$readCharacteristicsWithDelay$1$1;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
        return ((BluetoothManager$readCharacteristicsWithDelay$1$1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    /* JADX WARN: Code duplicated, block: B:18:0x006d A[Catch: Exception -> 0x0204, TryCatch #0 {Exception -> 0x0204, blocks: (B:7:0x0022, B:19:0x0087, B:21:0x008d, B:23:0x0095, B:25:0x00a9, B:27:0x00bd, B:29:0x00d1, B:31:0x00e5, B:33:0x00f9, B:35:0x010d, B:37:0x0121, B:39:0x013c, B:41:0x0150, B:43:0x0164, B:46:0x0179, B:48:0x01a4, B:50:0x01b8, B:53:0x01cd, B:56:0x01e2, B:47:0x0181, B:16:0x0067, B:18:0x006d, B:12:0x0042, B:15:0x0051), top: B:66:0x0008 }] */
    /* JADX WARN: Code duplicated, block: B:69:0x01ff A[SYNTHETIC] */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:18:0x006d -> B:19:0x0087). Please report as a decompilation issue!!! */
    /*  JADX ERROR: JadxOverflowException in pass: RegionMakerVisitor
        jadx.core.utils.exceptions.JadxOverflowException: Regions stack size limit reached
        	at jadx.core.utils.ErrorsCounter.addError(ErrorsCounter.java:59)
        	at jadx.core.utils.ErrorsCounter.error(ErrorsCounter.java:31)
        	at jadx.core.dex.attributes.nodes.NotificationAttrNode.addError(NotificationAttrNode.java:19)
        */
    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final java.lang.Object invokeSuspend(java.lang.Object r14) {
        /*
            Method dump skipped, instruction units count: 527
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.uniden.rtach.helper.BluetoothManager$readCharacteristicsWithDelay$1$1.invokeSuspend(java.lang.Object):java.lang.Object");
    }
}
