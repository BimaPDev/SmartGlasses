package com.uniden.rtach.viewmodel;

import android.bluetooth.BluetoothAdapter;
import android.content.Context;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.lifecycle.LiveData;
import androidx.lifecycle.MutableLiveData;
import androidx.lifecycle.ViewModel;
import androidx.lifecycle.ViewModelKt;
import com.google.gson.Gson;
import com.uniden.rtach.data.model.BluetoothDeviceModel;
import com.uniden.rtach.helper.BluetoothScanner;
import com.uniden.rtach.helper.CustomLog;
import java.util.ArrayList;
import java.util.LinkedHashSet;
import java.util.Set;
import javax.inject.Inject;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import kotlinx.coroutines.BuildersKt__Builders_commonKt;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.Dispatchers;

/* JADX INFO: compiled from: BleDeviceListViewModel.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000N\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010#\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0003\b\u0007\u0018\u00002\u00020\u0001B\u001b\b\u0007\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\b\u0010\u0018\u001a\u00020\u0019H\u0007J\b\u0010\u001a\u001a\u00020\u0019H\u0007J\b\u0010\u001b\u001a\u00020\u0019H\u0015R\u0010\u0010\u0002\u001a\u0004\u0018\u00010\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\b\u001a\b\u0012\u0004\u0012\u00020\n0\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u0017\u0010\u000b\u001a\b\u0012\u0004\u0012\u00020\n0\f8F¢\u0006\u0006\u001a\u0004\b\r\u0010\u000eR\u000e\u0010\u000f\u001a\u00020\u0010X\u0082\u000e¢\u0006\u0002\n\u0000R\u0014\u0010\u0011\u001a\b\u0012\u0004\u0012\u00020\n0\u0012X\u0082\u0004¢\u0006\u0002\n\u0000R \u0010\u0013\u001a\u0012\u0012\u0004\u0012\u00020\u00150\u0016j\b\u0012\u0004\u0012\u00020\u0015`\u0014X\u0082\u000e¢\u0006\u0004\n\u0002\u0010\u0017¨\u0006\u001c"}, m491d2 = {"Lcom/uniden/rtach/viewmodel/BleDeviceListViewModel;", "Landroidx/lifecycle/ViewModel;", "bluetoothAdapter", "Landroid/bluetooth/BluetoothAdapter;", "context", "Landroid/content/Context;", "<init>", "(Landroid/bluetooth/BluetoothAdapter;Landroid/content/Context;)V", "_bleDevices", "Landroidx/lifecycle/MutableLiveData;", "Lcom/uniden/rtach/data/model/BluetoothDeviceModel;", "bleDevices", "Landroidx/lifecycle/LiveData;", "getBleDevices", "()Landroidx/lifecycle/LiveData;", "bluetoothScanner", "Lcom/uniden/rtach/helper/BluetoothScanner;", "scannedDevices", "", "tempList", "Lkotlin/collections/ArrayList;", "", "Ljava/util/ArrayList;", "Ljava/util/ArrayList;", "startBleScan", "", "stopBleScan", "onCleared", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class BleDeviceListViewModel extends ViewModel {
    private final MutableLiveData<BluetoothDeviceModel> _bleDevices;
    private final BluetoothAdapter bluetoothAdapter;
    private BluetoothScanner bluetoothScanner;
    private final Context context;
    private final Set<BluetoothDeviceModel> scannedDevices;
    private ArrayList<String> tempList;

    @Inject
    public BleDeviceListViewModel(BluetoothAdapter bluetoothAdapter, Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        this.bluetoothAdapter = bluetoothAdapter;
        this.context = context;
        this._bleDevices = new MutableLiveData<>();
        this.bluetoothScanner = new BluetoothScanner(context);
        this.scannedDevices = new LinkedHashSet();
        this.tempList = new ArrayList<>();
    }

    public final LiveData<BluetoothDeviceModel> getBleDevices() {
        return this._bleDevices;
    }

    public final void startBleScan() {
        CustomLog.INSTANCE.writeFile("BleDeviceListViewModel : startBleScan():- startBleScan()", this.context);
        this.tempList.clear();
        this.tempList = new ArrayList<>();
        this.bluetoothScanner.flushPendingScanResults();
        BuildersKt__Builders_commonKt.launch$default(ViewModelKt.getViewModelScope(this), Dispatchers.getIO(), null, new C21291(null), 2, null);
    }

    /* JADX INFO: renamed from: com.uniden.rtach.viewmodel.BleDeviceListViewModel$startBleScan$1 */
    /* JADX INFO: compiled from: BleDeviceListViewModel.kt */
    @Metadata(m490d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, m491d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    @DebugMetadata(m503c = "com.uniden.rtach.viewmodel.BleDeviceListViewModel$startBleScan$1", m504f = "BleDeviceListViewModel.kt", m505i = {}, m506l = {}, m507m = "invokeSuspend", m508n = {}, m509s = {})
    static final class C21291 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        int label;

        C21291(Continuation<? super C21291> continuation) {
            super(2, continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return BleDeviceListViewModel.this.new C21291(continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C21291) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label == 0) {
                ResultKt.throwOnFailure(obj);
                BluetoothScanner bluetoothScanner = BleDeviceListViewModel.this.bluetoothScanner;
                final BleDeviceListViewModel bleDeviceListViewModel = BleDeviceListViewModel.this;
                bluetoothScanner.startScan(new Function1() { // from class: com.uniden.rtach.viewmodel.BleDeviceListViewModel$startBleScan$1$$ExternalSyntheticLambda0
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj2) {
                        return BleDeviceListViewModel.C21291.invokeSuspend$lambda$0(bleDeviceListViewModel, (BluetoothDeviceModel) obj2);
                    }
                });
                return Unit.INSTANCE;
            }
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final Unit invokeSuspend$lambda$0(BleDeviceListViewModel bleDeviceListViewModel, BluetoothDeviceModel bluetoothDeviceModel) {
            bluetoothDeviceModel.isPaired();
            if ((StringsKt.contains$default((CharSequence) bluetoothDeviceModel.getName(), (CharSequence) "R4", false, 2, (Object) null) || StringsKt.contains$default((CharSequence) bluetoothDeviceModel.getName(), (CharSequence) "R8", false, 2, (Object) null) || StringsKt.contains$default((CharSequence) bluetoothDeviceModel.getName(), (CharSequence) "R9", false, 2, (Object) null) || StringsKt.contains$default((CharSequence) bluetoothDeviceModel.getName(), (CharSequence) "AE903i", false, 2, (Object) null)) && !bleDeviceListViewModel.tempList.contains(bluetoothDeviceModel.getName())) {
                bleDeviceListViewModel.tempList.add(bluetoothDeviceModel.getName());
                bleDeviceListViewModel.scannedDevices.add(bluetoothDeviceModel);
                bleDeviceListViewModel._bleDevices.postValue(bluetoothDeviceModel);
                CustomLog.INSTANCE.writeFile("BleDeviceListViewModel : startBleScan():- scan Result " + new Gson().toJson(bleDeviceListViewModel.scannedDevices), bleDeviceListViewModel.context);
            }
            return Unit.INSTANCE;
        }
    }

    public final void stopBleScan() {
        this.bluetoothScanner.flushPendingScanResults();
        this.bluetoothScanner.stopScan();
        this.bluetoothScanner = new BluetoothScanner(this.context);
        this.tempList.clear();
        this.tempList = new ArrayList<>();
    }

    @Override // androidx.lifecycle.ViewModel
    protected void onCleared() {
        super.onCleared();
        stopBleScan();
    }
}
