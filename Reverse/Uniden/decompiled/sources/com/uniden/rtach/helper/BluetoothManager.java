package com.uniden.rtach.helper;

import android.bluetooth.BluetoothDevice;
import android.bluetooth.BluetoothGatt;
import android.bluetooth.BluetoothGattCharacteristic;
import android.bluetooth.BluetoothGattDescriptor;
import android.bluetooth.BluetoothGattService;
import android.content.Context;
import android.content.SharedPreferences;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.exifinterface.media.ExifInterface;
import com.uniden.rtach.data.sharedpref.StoreUserData;
import java.util.List;
import java.util.UUID;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Charsets;
import kotlin.text.StringsKt;
import kotlinx.coroutines.BuildersKt__Builders_commonKt;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.CoroutineScopeKt;
import kotlinx.coroutines.Dispatchers;
import kotlinx.coroutines.Job;
import kotlinx.coroutines.SupervisorKt;

/* JADX INFO: compiled from: BluetoothManager.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000k\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\b\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\b\n\u0000\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\f\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0003*\u0001%\u0018\u0000 <2\u00020\u0001:\u0001<B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0010\u0010\u001b\u001a\u00020\u001c2\u0006\u0010\u001d\u001a\u00020\u001eH\u0007J\b\u0010 \u001a\u00020\u0013H\u0002J\u0018\u0010!\u001a\u00020\u001c2\u0006\u0010\u001d\u001a\u00020\u001e2\u0006\u0010\"\u001a\u00020#H\u0003J\u0006\u0010'\u001a\u00020\u001cJ\"\u0010(\u001a\u0004\u0018\u00010)2\u0006\u0010*\u001a\u00020\r2\u0006\u0010+\u001a\u00020,2\u0006\u0010-\u001a\u00020,H\u0002J\u0018\u0010.\u001a\u00020\u001c2\u0006\u0010*\u001a\u00020\r2\u0006\u0010/\u001a\u00020)H\u0002J\u0006\u00100\u001a\u00020\u001cJ\u000e\u00101\u001a\u00020\u001c2\u0006\u00102\u001a\u00020\tJ\u000e\u00103\u001a\u00020\u001c2\u0006\u00102\u001a\u00020\tJ\u000e\u00104\u001a\u00020\u001c2\u0006\u00105\u001a\u00020\tJ\u0006\u00106\u001a\u00020\u001cJ\b\u00107\u001a\u0004\u0018\u00010\rJ\u000e\u00108\u001a\n\u0012\u0004\u0012\u00020:\u0018\u000109J\u0006\u0010;\u001a\u00020\u001cR\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007R\u0014\u0010\b\u001a\u00020\tX\u0086D¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000bR\u0010\u0010\f\u001a\u0004\u0018\u00010\rX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u000e\u001a\u0004\u0018\u00010\u000fX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0010\u001a\u00020\u0011X\u0082\u0004¢\u0006\u0002\n\u0000R\u001a\u0010\u0012\u001a\u00020\u0013X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0014\u0010\u0015\"\u0004\b\u0016\u0010\u0017R\u001a\u0010\u0018\u001a\u00020\u0013X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0019\u0010\u0015\"\u0004\b\u001a\u0010\u0017R\u000e\u0010\u001f\u001a\u00020\u0013X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010$\u001a\u00020%X\u0082\u0004¢\u0006\u0004\n\u0002\u0010&¨\u0006="}, m491d2 = {"Lcom/uniden/rtach/helper/BluetoothManager;", "", "context", "Landroid/content/Context;", "<init>", "(Landroid/content/Context;)V", "getContext", "()Landroid/content/Context;", "TAG", "", "getTAG", "()Ljava/lang/String;", "bluetoothGatt", "Landroid/bluetooth/BluetoothGatt;", "sharedPrefs", "Lcom/uniden/rtach/data/sharedpref/StoreUserData;", "handler", "Landroid/os/Handler;", "read_end_flag", "", "getRead_end_flag", "()Z", "setRead_end_flag", "(Z)V", "write_end_flag", "getWrite_end_flag", "setWrite_end_flag", "connectToDevice", "", "device", "Landroid/bluetooth/BluetoothDevice;", "connected", "isGattConnected", "tryConnectGatt", "retryCount", "", "gattCallback", "com/uniden/rtach/helper/BluetoothManager$gattCallback$1", "Lcom/uniden/rtach/helper/BluetoothManager$gattCallback$1;", "readCharacteristicsWithDelay", "findCharacteristic", "Landroid/bluetooth/BluetoothGattCharacteristic;", "gatt", "serviceUuid", "Ljava/util/UUID;", "characteristicUuid", "enableNotifications", "characteristic", "readResponses", "enableReadSettingsNotification", "char", "enableReadSettingsNotification2", "writeCharacteristic", "data", "disconnect", "getBtGatt", "getSupportedGattServices", "", "Landroid/bluetooth/BluetoothGattService;", "readRadarSoftwareVersion", "Companion", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class BluetoothManager {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private final String TAG;
    private BluetoothGatt bluetoothGatt;
    private volatile boolean connected;
    private final Context context;
    private final BluetoothManager$gattCallback$1 gattCallback;
    private final Handler handler;
    private boolean read_end_flag;
    private StoreUserData sharedPrefs;
    private boolean write_end_flag;

    /* JADX INFO: renamed from: isGattConnected, reason: from getter */
    private final boolean getConnected() {
        return this.connected;
    }

    /* JADX INFO: renamed from: getBtGatt, reason: from getter */
    public final BluetoothGatt getBluetoothGatt() {
        return this.bluetoothGatt;
    }

    public final Context getContext() {
        return this.context;
    }

    public final boolean getRead_end_flag() {
        return this.read_end_flag;
    }

    public final String getTAG() {
        return this.TAG;
    }

    public final boolean getWrite_end_flag() {
        return this.write_end_flag;
    }

    public final void setRead_end_flag(boolean z) {
        this.read_end_flag = z;
    }

    public final void setWrite_end_flag(boolean z) {
        this.write_end_flag = z;
    }

    public BluetoothManager(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        this.context = context;
        this.TAG = "BluetoothManager";
        this.handler = new Handler(Looper.getMainLooper());
        this.gattCallback = new BluetoothManager$gattCallback$1(this);
    }

    /* JADX INFO: compiled from: BluetoothManager.kt */
    @Metadata(m490d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u000e\u0012\u0004\u0012\u00020\u0002\u0012\u0004\u0012\u00020\u00030\u0001B\t\b\u0002¢\u0006\u0004\b\u0004\u0010\u0005¨\u0006\u0006"}, m491d2 = {"Lcom/uniden/rtach/helper/BluetoothManager$Companion;", "Lcom/uniden/rtach/helper/SingletonHolder;", "Lcom/uniden/rtach/helper/BluetoothManager;", "Landroid/content/Context;", "<init>", "()V", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    public static final class Companion extends SingletonHolder<BluetoothManager, Context> {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        /* JADX INFO: renamed from: com.uniden.rtach.helper.BluetoothManager$Companion$1 */
        /* JADX INFO: compiled from: BluetoothManager.kt */
        @Metadata(m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
        /* synthetic */ class C20761 extends FunctionReferenceImpl implements Function1<Context, BluetoothManager> {
            public static final C20761 INSTANCE = new C20761();

            C20761() {
                super(1, BluetoothManager.class, "<init>", "<init>(Landroid/content/Context;)V", 0);
            }

            @Override // kotlin.jvm.functions.Function1
            public final BluetoothManager invoke(Context p0) {
                Intrinsics.checkNotNullParameter(p0, "p0");
                return new BluetoothManager(p0);
            }
        }

        private Companion() {
            super(C20761.INSTANCE);
        }
    }

    /* JADX WARN: Code duplicated, block: B:9:0x009c  */
    public final void connectToDevice(BluetoothDevice device) {
        boolean z;
        Intrinsics.checkNotNullParameter(device, "device");
        if (device.getName() == null) {
            return;
        }
        Log.d(String.valueOf(this.TAG), "connectToDevice: " + device.getName());
        CustomLog.INSTANCE.writeFile(this.TAG + " : connectToDevice: " + device.getName(), this.context);
        SharedPreferences sharedPreferences = this.context.getSharedPreferences(StoreUserData.INSTANCE.getPrefName(this.context), 0);
        Intrinsics.checkNotNullExpressionValue(sharedPreferences, "getSharedPreferences(...)");
        StoreUserData storeUserData = new StoreUserData(sharedPreferences);
        this.sharedPrefs = storeUserData;
        storeUserData.setBTConnecting(true);
        storeUserData.setDeviceName(device.getName());
        String name = device.getName();
        Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
        if (!StringsKt.contains$default((CharSequence) name, (CharSequence) ExifInterface.LONGITUDE_WEST, false, 2, (Object) null)) {
            String name2 = device.getName();
            Intrinsics.checkNotNullExpressionValue(name2, "getName(...)");
            z = StringsKt.contains$default((CharSequence) name2, (CharSequence) "AE903i", false, 2, (Object) null);
        }
        storeUserData.setWiFiModel(z);
        tryConnectGatt(device, 1);
    }

    private final void tryConnectGatt(final BluetoothDevice device, final int retryCount) {
        Log.d(String.valueOf(this.TAG), "tryConnectGatt - attemp " + retryCount);
        BluetoothGatt bluetoothGatt = this.bluetoothGatt;
        if (bluetoothGatt != null) {
            bluetoothGatt.requestConnectionPriority(1);
        }
        this.bluetoothGatt = device.connectGatt(this.context, false, this.gattCallback, 2);
        new Handler(Looper.getMainLooper()).postDelayed(new Runnable() { // from class: com.uniden.rtach.helper.BluetoothManager$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                BluetoothManager.tryConnectGatt$lambda$1(this.f$0, retryCount, device);
            }
        }, 300L);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void tryConnectGatt$lambda$1(BluetoothManager this$0, int i, BluetoothDevice device) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Intrinsics.checkNotNullParameter(device, "$device");
        if (this$0.getConnected() || i >= 3) {
            return;
        }
        Log.w(this$0.TAG + "_CC", "Gatt 연결 실패, 재시도 중... (" + i + ')');
        this$0.tryConnectGatt(device, i + 1);
    }

    public final void readCharacteristicsWithDelay() {
        enableReadSettingsNotification(Constant.INSTANCE.getSETTINGS_CHARACTERISTIC_UUID_1());
        enableReadSettingsNotification(Constant.INSTANCE.getSETTINGS_CHARACTERISTIC_UUID_2());
        readResponses();
        BluetoothGatt bluetoothGatt = this.bluetoothGatt;
        if (bluetoothGatt != null) {
            BuildersKt__Builders_commonKt.launch$default(CoroutineScopeKt.CoroutineScope(SupervisorKt.SupervisorJob$default((Job) null, 1, (Object) null).plus(Dispatchers.getMain())), null, null, new BluetoothManager$readCharacteristicsWithDelay$1$1(bluetoothGatt, this, null), 3, null);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final BluetoothGattCharacteristic findCharacteristic(BluetoothGatt gatt, UUID serviceUuid, UUID characteristicUuid) {
        BluetoothGattService service = gatt.getService(serviceUuid);
        if (service != null) {
            return service.getCharacteristic(characteristicUuid);
        }
        return null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void enableNotifications(BluetoothGatt gatt, BluetoothGattCharacteristic characteristic) {
        BluetoothGattDescriptor descriptor = characteristic.getDescriptor(UUID.fromString(Constant.INSTANCE.getCLIENT_CHARACTERISTIC_CONFIG()));
        if (Build.VERSION.SDK_INT >= 33) {
            gatt.writeDescriptor(descriptor, BluetoothGattDescriptor.ENABLE_NOTIFICATION_VALUE);
        } else {
            descriptor.setValue(BluetoothGattDescriptor.ENABLE_NOTIFICATION_VALUE);
            gatt.writeDescriptor(descriptor);
        }
        gatt.setCharacteristicNotification(characteristic, true);
        if (Intrinsics.areEqual(characteristic.getUuid().toString(), Constant.INSTANCE.getETC_DATA_CHARACTERISTIC_UUID()) || Intrinsics.areEqual(characteristic.getUuid().toString(), Constant.INSTANCE.getALERT_CHARACTERISTIC_UUID())) {
            gatt.readCharacteristic(characteristic);
        }
    }

    public final void readResponses() {
        BluetoothGatt bluetoothGatt = this.bluetoothGatt;
        if (bluetoothGatt == null || bluetoothGatt == null) {
            return;
        }
        UUID uuidFromString = UUID.fromString(Constant.INSTANCE.getUNIDEN_SERVICE_5_UUID());
        Intrinsics.checkNotNullExpressionValue(uuidFromString, "fromString(...)");
        UUID uuidFromString2 = UUID.fromString(Constant.INSTANCE.getREAD_COMMAND_CHARACTERISTIC_UUID());
        Intrinsics.checkNotNullExpressionValue(uuidFromString2, "fromString(...)");
        BluetoothGattCharacteristic bluetoothGattCharacteristicFindCharacteristic = findCharacteristic(bluetoothGatt, uuidFromString, uuidFromString2);
        if (bluetoothGattCharacteristicFindCharacteristic != null) {
            bluetoothGatt.setCharacteristicNotification(bluetoothGattCharacteristicFindCharacteristic, true);
            bluetoothGatt.readCharacteristic(bluetoothGattCharacteristicFindCharacteristic);
        }
    }

    public final void enableReadSettingsNotification(String str) {
        Intrinsics.checkNotNullParameter(str, "char");
        BluetoothGatt bluetoothGatt = this.bluetoothGatt;
        if (bluetoothGatt == null || bluetoothGatt == null) {
            return;
        }
        UUID uuidFromString = UUID.fromString(Constant.INSTANCE.getUNIDEN_SERVICE_4_UUID());
        Intrinsics.checkNotNullExpressionValue(uuidFromString, "fromString(...)");
        UUID uuidFromString2 = UUID.fromString(str);
        Intrinsics.checkNotNullExpressionValue(uuidFromString2, "fromString(...)");
        BluetoothGattCharacteristic bluetoothGattCharacteristicFindCharacteristic = findCharacteristic(bluetoothGatt, uuidFromString, uuidFromString2);
        if (bluetoothGattCharacteristicFindCharacteristic != null) {
            bluetoothGatt.setCharacteristicNotification(bluetoothGattCharacteristicFindCharacteristic, true);
            BluetoothGattDescriptor descriptor = bluetoothGattCharacteristicFindCharacteristic.getDescriptor(UUID.fromString(Constant.INSTANCE.getCLIENT_CHARACTERISTIC_CONFIG()));
            if (descriptor != null) {
                if (Build.VERSION.SDK_INT >= 33) {
                    bluetoothGatt.writeDescriptor(descriptor, BluetoothGattDescriptor.ENABLE_NOTIFICATION_VALUE);
                } else {
                    descriptor.setValue(BluetoothGattDescriptor.ENABLE_NOTIFICATION_VALUE);
                    bluetoothGatt.writeDescriptor(descriptor);
                }
            }
            bluetoothGatt.readCharacteristic(bluetoothGattCharacteristicFindCharacteristic);
        }
    }

    public final void enableReadSettingsNotification2(String str) {
        Intrinsics.checkNotNullParameter(str, "char");
        BluetoothGatt bluetoothGatt = this.bluetoothGatt;
        if (bluetoothGatt == null || bluetoothGatt == null) {
            return;
        }
        UUID uuidFromString = UUID.fromString(Constant.INSTANCE.getUNIDEN_SERVICE_4_UUID());
        Intrinsics.checkNotNullExpressionValue(uuidFromString, "fromString(...)");
        UUID uuidFromString2 = UUID.fromString(str);
        Intrinsics.checkNotNullExpressionValue(uuidFromString2, "fromString(...)");
        BluetoothGattCharacteristic bluetoothGattCharacteristicFindCharacteristic = findCharacteristic(bluetoothGatt, uuidFromString, uuidFromString2);
        if (bluetoothGattCharacteristicFindCharacteristic != null) {
            bluetoothGatt.readCharacteristic(bluetoothGattCharacteristicFindCharacteristic);
        }
    }

    public final void writeCharacteristic(String data) {
        Intrinsics.checkNotNullParameter(data, "data");
        this.handler.removeCallbacksAndMessages(null);
        Log.d("TAG_RESPONSE", "writeCharacteristic: " + data);
        BuildersKt__Builders_commonKt.launch$default(CoroutineScopeKt.CoroutineScope(Dispatchers.getIO()), null, null, new C20771(data, null), 3, null);
    }

    /* JADX INFO: renamed from: com.uniden.rtach.helper.BluetoothManager$writeCharacteristic$1 */
    /* JADX INFO: compiled from: BluetoothManager.kt */
    @Metadata(m490d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, m491d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    @DebugMetadata(m503c = "com.uniden.rtach.helper.BluetoothManager$writeCharacteristic$1", m504f = "BluetoothManager.kt", m505i = {}, m506l = {}, m507m = "invokeSuspend", m508n = {}, m509s = {})
    static final class C20771 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ String $data;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C20771(String str, Continuation<? super C20771> continuation) {
            super(2, continuation);
            this.$data = str;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return BluetoothManager.this.new C20771(this.$data, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C20771) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            BluetoothGatt bluetoothGatt;
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label == 0) {
                ResultKt.throwOnFailure(obj);
                if (BluetoothManager.this.bluetoothGatt != null && (bluetoothGatt = BluetoothManager.this.bluetoothGatt) != null) {
                    BluetoothManager bluetoothManager = BluetoothManager.this;
                    String str = this.$data;
                    UUID uuidFromString = UUID.fromString(Constant.INSTANCE.getUNIDEN_SERVICE_5_UUID());
                    Intrinsics.checkNotNullExpressionValue(uuidFromString, "fromString(...)");
                    UUID uuidFromString2 = UUID.fromString(Constant.INSTANCE.getWRITE_COMMAND_CHARACTERISTIC_UUID());
                    Intrinsics.checkNotNullExpressionValue(uuidFromString2, "fromString(...)");
                    BluetoothGattCharacteristic bluetoothGattCharacteristicFindCharacteristic = bluetoothManager.findCharacteristic(bluetoothGatt, uuidFromString, uuidFromString2);
                    byte[] bytes = str.getBytes(Charsets.UTF_8);
                    Intrinsics.checkNotNullExpressionValue(bytes, "getBytes(...)");
                    if (bluetoothGattCharacteristicFindCharacteristic != null) {
                        bluetoothGattCharacteristicFindCharacteristic.setWriteType(1);
                    }
                    if (bluetoothGattCharacteristicFindCharacteristic != null) {
                        bluetoothGattCharacteristicFindCharacteristic.setValue(bytes);
                    }
                    if (bluetoothGattCharacteristicFindCharacteristic != null) {
                        if (Build.VERSION.SDK_INT >= 33) {
                            Log.d("TAG", "high:" + Build.VERSION.SDK_INT + ' ');
                            bluetoothGatt.writeCharacteristic(bluetoothGattCharacteristicFindCharacteristic);
                        } else {
                            Log.d("TAG", "below:" + Build.VERSION.SDK_INT + ' ');
                            bluetoothGattCharacteristicFindCharacteristic.setWriteType(1);
                            bluetoothGattCharacteristicFindCharacteristic.setValue(bytes);
                            bluetoothGatt.writeCharacteristic(bluetoothGattCharacteristicFindCharacteristic);
                        }
                    }
                }
                return Unit.INSTANCE;
            }
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
    }

    public final void disconnect() {
        CustomLog.INSTANCE.writeFile(this.TAG + " : disconnect: bluetoothGatt   isInitialized " + (this.bluetoothGatt != null), this.context);
        BluetoothGatt bluetoothGatt = this.bluetoothGatt;
        if (bluetoothGatt != null) {
            bluetoothGatt.disconnect();
        }
        BluetoothGatt bluetoothGatt2 = this.bluetoothGatt;
        if (bluetoothGatt2 != null) {
            bluetoothGatt2.close();
        }
        this.bluetoothGatt = null;
        CustomLog.INSTANCE.writeFile(this.TAG + " : disconnect:", this.context);
    }

    public final List<BluetoothGattService> getSupportedGattServices() {
        BluetoothGatt bluetoothGatt = this.bluetoothGatt;
        if (bluetoothGatt == null || bluetoothGatt == null) {
            return null;
        }
        return bluetoothGatt.getServices();
    }

    public final void readRadarSoftwareVersion() {
        BluetoothGatt bluetoothGatt = this.bluetoothGatt;
        if (bluetoothGatt == null || bluetoothGatt == null) {
            return;
        }
        UUID uuidFromString = UUID.fromString(Constant.INSTANCE.getUNIDEN_SERVICE_3_UUID());
        Intrinsics.checkNotNullExpressionValue(uuidFromString, "fromString(...)");
        UUID uuidFromString2 = UUID.fromString(Constant.INSTANCE.getREAD_SOFTWEAR_VERSION());
        Intrinsics.checkNotNullExpressionValue(uuidFromString2, "fromString(...)");
        BluetoothGattCharacteristic bluetoothGattCharacteristicFindCharacteristic = findCharacteristic(bluetoothGatt, uuidFromString, uuidFromString2);
        if (bluetoothGattCharacteristicFindCharacteristic != null) {
            bluetoothGatt.readCharacteristic(bluetoothGattCharacteristicFindCharacteristic);
        }
    }
}
