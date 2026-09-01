package com.uniden.rtach.p005ui.activity;

import android.app.AlertDialog;
import android.app.Application;
import android.bluetooth.BluetoothDevice;
import android.bluetooth.BluetoothManager;
import android.content.BroadcastReceiver;
import android.content.Intent;
import android.content.IntentFilter;
import android.graphics.drawable.ColorDrawable;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.widget.TextView;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.lifecycle.Observer;
import androidx.lifecycle.ViewModelLazy;
import androidx.lifecycle.ViewModelProvider;
import androidx.lifecycle.ViewModelStore;
import androidx.lifecycle.viewmodel.CreationExtras;
import androidx.localbroadcastmanager.content.LocalBroadcastManager;
import androidx.swiperefreshlayout.widget.SwipeRefreshLayout;
import com.uniden.rtach.BuildConfig;
import com.uniden.rtach.C2074R;
import com.uniden.rtach.data.model.BluetoothDeviceModel;
import com.uniden.rtach.databinding.ActivityBleDeviceListBinding;
import com.uniden.rtach.databinding.RadarPairingAssistanceDialogBinding;
import com.uniden.rtach.helper.BaseApplication;
import com.uniden.rtach.helper.CustomLog;
import com.uniden.rtach.helper.Loader;
import com.uniden.rtach.helper.onBTDeviceClick;
import com.uniden.rtach.p005ui.adapter.BLeSearchDeviceAdapter;
import com.uniden.rtach.viewmodel.BleDeviceListViewModel;
import dagger.hilt.android.AndroidEntryPoint;
import java.util.ArrayList;
import java.util.Objects;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlinx.coroutines.BuildersKt__Builders_commonKt;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.CoroutineScopeKt;
import kotlinx.coroutines.DelayKt;
import kotlinx.coroutines.Dispatchers;

/* JADX INFO: compiled from: BLeDeviceListActivity.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000\u0080\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0007\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\u0007¢\u0006\u0004\b\u0003\u0010\u0004J\b\u00103\u001a\u000204H\u0014J\b\u00105\u001a\u000204H\u0014J\b\u00106\u001a\u000204H\u0002J\b\u00107\u001a\u000204H\u0014J\b\u00108\u001a\u000204H\u0014J\b\u00109\u001a\u000204H\u0002J\b\u0010:\u001a\u000204H\u0002J\b\u0010=\u001a\u000204H\u0003J\b\u0010>\u001a\u000204H\u0002J\u0010\u0010?\u001a\u0002042\u0006\u0010@\u001a\u00020\u0012H\u0003J\u0017\u0010A\u001a\u0002002\b\u0010B\u001a\u0004\u0018\u00010.H\u0002¢\u0006\u0002\u0010CJ\u0010\u0010H\u001a\u0002042\u0006\u0010I\u001a\u00020\u0012H\u0002R\u001b\u0010\u0005\u001a\u00020\u00068BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b\t\u0010\n\u001a\u0004\b\u0007\u0010\bR\u001a\u0010\u000b\u001a\u00020\fX\u0086.¢\u0006\u000e\n\u0000\u001a\u0004\b\r\u0010\u000e\"\u0004\b\u000f\u0010\u0010R\u001c\u0010\u0011\u001a\u0004\u0018\u00010\u0012X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0013\u0010\u0014\"\u0004\b\u0015\u0010\u0016R\u001a\u0010\u0017\u001a\u00020\u0018X\u0086.¢\u0006\u000e\n\u0000\u001a\u0004\b\u0019\u0010\u001a\"\u0004\b\u001b\u0010\u001cR\u0010\u0010\u001d\u001a\u0004\u0018\u00010\u001eX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u001f\u001a\u00020 X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010!\u001a\u00020\"X\u0082.¢\u0006\u0002\n\u0000R,\u0010#\u001a\u0012\u0012\u0004\u0012\u00020%0&j\b\u0012\u0004\u0012\u00020%`$X\u0086\u000e¢\u0006\u0010\n\u0002\u0010+\u001a\u0004\b'\u0010(\"\u0004\b)\u0010*R\u000e\u0010,\u001a\u00020 X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010-\u001a\u00020.X\u0082\u000e¢\u0006\u0002\n\u0000R\u0014\u0010/\u001a\u000200X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b1\u00102R\u0010\u0010;\u001a\u0004\u0018\u00010<X\u0082\u000e¢\u0006\u0002\n\u0000R\u0011\u0010D\u001a\u00020E¢\u0006\b\n\u0000\u001a\u0004\bF\u0010GR\u0011\u0010J\u001a\u00020K¢\u0006\b\n\u0000\u001a\u0004\bL\u0010M¨\u0006N"}, m491d2 = {"Lcom/uniden/rtach/ui/activity/BLeDeviceListActivity;", "Lcom/uniden/rtach/ui/base/BaseActivity;", "Lcom/uniden/rtach/databinding/ActivityBleDeviceListBinding;", "<init>", "()V", "viewModel", "Lcom/uniden/rtach/viewmodel/BleDeviceListViewModel;", "getViewModel", "()Lcom/uniden/rtach/viewmodel/BleDeviceListViewModel;", "viewModel$delegate", "Lkotlin/Lazy;", "adapter", "Lcom/uniden/rtach/ui/adapter/BLeSearchDeviceAdapter;", "getAdapter", "()Lcom/uniden/rtach/ui/adapter/BLeSearchDeviceAdapter;", "setAdapter", "(Lcom/uniden/rtach/ui/adapter/BLeSearchDeviceAdapter;)V", "pairedDevice", "Landroid/bluetooth/BluetoothDevice;", "getPairedDevice", "()Landroid/bluetooth/BluetoothDevice;", "setPairedDevice", "(Landroid/bluetooth/BluetoothDevice;)V", "loader", "Lcom/uniden/rtach/helper/Loader;", "getLoader", "()Lcom/uniden/rtach/helper/Loader;", "setLoader", "(Lcom/uniden/rtach/helper/Loader;)V", "tvConn", "Landroid/widget/TextView;", "isConnecting", "", "myApp", "Lcom/uniden/rtach/helper/BaseApplication;", "list", "Lkotlin/collections/ArrayList;", "Lcom/uniden/rtach/data/model/BluetoothDeviceModel;", "Ljava/util/ArrayList;", "getList", "()Ljava/util/ArrayList;", "setList", "(Ljava/util/ArrayList;)V", "Ljava/util/ArrayList;", "isErrorToastShown", "clickCount", "", "TAG", "", "getTAG", "()Ljava/lang/String;", "onStop", "", "onDestroy", "unRegisterBroadCastReceivers", "initUi", "setListeners", "initData", "connectBluetooth", "stopScanRunnable", "Ljava/lang/Runnable;", "fetchBTDevices", "checkRadarList", "pairWithDevice", "device", "printBondState", "state", "(Ljava/lang/Integer;)Ljava/lang/String;", "pairingBroadcastReceiver", "Landroid/content/BroadcastReceiver;", "getPairingBroadcastReceiver", "()Landroid/content/BroadcastReceiver;", "showAssistPairingDialog", "bluetoothDevice", "pairingFilter", "Landroid/content/IntentFilter;", "getPairingFilter", "()Landroid/content/IntentFilter;", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
@AndroidEntryPoint
public final class BLeDeviceListActivity extends Hilt_BLeDeviceListActivity<ActivityBleDeviceListBinding> {
    private final String TAG;
    public BLeSearchDeviceAdapter adapter;
    private int clickCount;
    private boolean isConnecting;
    private boolean isErrorToastShown;
    private ArrayList<BluetoothDeviceModel> list;
    public Loader loader;
    private BaseApplication myApp;
    private BluetoothDevice pairedDevice;
    private final BroadcastReceiver pairingBroadcastReceiver;
    private final IntentFilter pairingFilter;
    private Runnable stopScanRunnable;
    private TextView tvConn;

    /* JADX INFO: renamed from: viewModel$delegate, reason: from kotlin metadata */
    private final Lazy viewModel;

    public final ArrayList<BluetoothDeviceModel> getList() {
        return this.list;
    }

    public final BluetoothDevice getPairedDevice() {
        return this.pairedDevice;
    }

    public final BroadcastReceiver getPairingBroadcastReceiver() {
        return this.pairingBroadcastReceiver;
    }

    public final IntentFilter getPairingFilter() {
        return this.pairingFilter;
    }

    public final String getTAG() {
        return this.TAG;
    }

    public final void setAdapter(BLeSearchDeviceAdapter bLeSearchDeviceAdapter) {
        Intrinsics.checkNotNullParameter(bLeSearchDeviceAdapter, "<set-?>");
        this.adapter = bLeSearchDeviceAdapter;
    }

    public final void setList(ArrayList<BluetoothDeviceModel> arrayList) {
        Intrinsics.checkNotNullParameter(arrayList, "<set-?>");
        this.list = arrayList;
    }

    public final void setLoader(Loader loader) {
        Intrinsics.checkNotNullParameter(loader, "<set-?>");
        this.loader = loader;
    }

    public final void setPairedDevice(BluetoothDevice bluetoothDevice) {
        this.pairedDevice = bluetoothDevice;
    }

    /* JADX INFO: renamed from: com.uniden.rtach.ui.activity.BLeDeviceListActivity$1 */
    /* JADX INFO: compiled from: BLeDeviceListActivity.kt */
    @Metadata(m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    /* synthetic */ class C20991 extends FunctionReferenceImpl implements Function1<LayoutInflater, ActivityBleDeviceListBinding> {
        public static final C20991 INSTANCE = new C20991();

        C20991() {
            super(1, ActivityBleDeviceListBinding.class, "inflate", "inflate(Landroid/view/LayoutInflater;)Lcom/uniden/rtach/databinding/ActivityBleDeviceListBinding;", 0);
        }

        @Override // kotlin.jvm.functions.Function1
        public final ActivityBleDeviceListBinding invoke(LayoutInflater p0) {
            Intrinsics.checkNotNullParameter(p0, "p0");
            return ActivityBleDeviceListBinding.inflate(p0);
        }
    }

    public BLeDeviceListActivity() {
        super(C20991.INSTANCE);
        final BLeDeviceListActivity bLeDeviceListActivity = this;
        final Function0 function0 = null;
        this.viewModel = new ViewModelLazy(Reflection.getOrCreateKotlinClass(BleDeviceListViewModel.class), new Function0<ViewModelStore>() { // from class: com.uniden.rtach.ui.activity.BLeDeviceListActivity$special$$inlined$viewModels$default$2
            {
                super(0);
            }

            /* JADX WARN: Can't rename method to resolve collision */
            @Override // kotlin.jvm.functions.Function0
            public final ViewModelStore invoke() {
                return bLeDeviceListActivity.getViewModelStore();
            }
        }, new Function0<ViewModelProvider.Factory>() { // from class: com.uniden.rtach.ui.activity.BLeDeviceListActivity$special$$inlined$viewModels$default$1
            {
                super(0);
            }

            /* JADX WARN: Can't rename method to resolve collision */
            @Override // kotlin.jvm.functions.Function0
            public final ViewModelProvider.Factory invoke() {
                return bLeDeviceListActivity.getDefaultViewModelProviderFactory();
            }
        }, new Function0<CreationExtras>() { // from class: com.uniden.rtach.ui.activity.BLeDeviceListActivity$special$$inlined$viewModels$default$3
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(0);
            }

            /* JADX WARN: Can't rename method to resolve collision */
            @Override // kotlin.jvm.functions.Function0
            public final CreationExtras invoke() {
                CreationExtras creationExtras;
                Function0 function1 = function0;
                return (function1 == null || (creationExtras = (CreationExtras) function1.invoke()) == null) ? bLeDeviceListActivity.getDefaultViewModelCreationExtras() : creationExtras;
            }
        });
        this.list = new ArrayList<>();
        this.TAG = "BleDeviceListActivity";
        this.pairingBroadcastReceiver = new BLeDeviceListActivity$pairingBroadcastReceiver$1(this);
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("android.bluetooth.device.action.PAIRING_REQUEST");
        intentFilter.addAction("android.bluetooth.device.action.BOND_STATE_CHANGED");
        this.pairingFilter = intentFilter;
    }

    private final BleDeviceListViewModel getViewModel() {
        return (BleDeviceListViewModel) this.viewModel.getValue();
    }

    public final BLeSearchDeviceAdapter getAdapter() {
        BLeSearchDeviceAdapter bLeSearchDeviceAdapter = this.adapter;
        if (bLeSearchDeviceAdapter != null) {
            return bLeSearchDeviceAdapter;
        }
        Intrinsics.throwUninitializedPropertyAccessException("adapter");
        return null;
    }

    public final Loader getLoader() {
        Loader loader = this.loader;
        if (loader != null) {
            return loader;
        }
        Intrinsics.throwUninitializedPropertyAccessException("loader");
        return null;
    }

    @Override // androidx.appcompat.app.AppCompatActivity, androidx.fragment.app.FragmentActivity, android.app.Activity
    protected void onStop() {
        super.onStop();
        unRegisterBroadCastReceivers();
    }

    @Override // com.uniden.rtach.p005ui.base.BaseActivity, androidx.appcompat.app.AppCompatActivity, androidx.fragment.app.FragmentActivity, android.app.Activity
    protected void onDestroy() {
        super.onDestroy();
        Log.d(this.TAG, "onDestroy");
    }

    private final void unRegisterBroadCastReceivers() {
        try {
            LocalBroadcastManager.getInstance(this).unregisterReceiver(this.pairingBroadcastReceiver);
            unregisterReceiver(this.pairingBroadcastReceiver);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // com.uniden.rtach.p005ui.base.BaseActivity
    protected void initUi() {
        ((ActivityBleDeviceListBinding) getBinding()).setViewModel(getViewModel());
        BLeDeviceListActivity bLeDeviceListActivity = this;
        ((ActivityBleDeviceListBinding) getBinding()).setLifecycleOwner(bLeDeviceListActivity);
        ConstraintLayout myAppBar = ((ActivityBleDeviceListBinding) getBinding()).appBar.myAppBar;
        Intrinsics.checkNotNullExpressionValue(myAppBar, "myAppBar");
        ((TextView) myAppBar.findViewById(C2074R.id.txt_app_bar_title)).setText(getString(C2074R.string.str_connect_device));
        setLoader(new Loader(getActivity(), false));
        initData();
        startPermissionCheck();
        getSharedViewModel().isRequiredPermissionAllowed().observe(bLeDeviceListActivity, new Observer() { // from class: com.uniden.rtach.ui.activity.BLeDeviceListActivity$$ExternalSyntheticLambda9
            @Override // androidx.lifecycle.Observer
            public final void onChanged(Object obj) {
                BLeDeviceListActivity.initUi$lambda$0(this.f$0, (Boolean) obj);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void initUi$lambda$0(BLeDeviceListActivity this$0, Boolean bool) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        if (bool.booleanValue()) {
            CustomLog.INSTANCE.writeFile(this$0.TAG + " : initUi > fetchBTDevices() : ", this$0.getContext());
            Log.d(String.valueOf(this$0.TAG), "BleDeviceListActivit initUI");
            this$0.fetchBTDevices();
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // com.uniden.rtach.p005ui.base.BaseActivity
    protected void setListeners() {
        Application application = getActivity().getApplication();
        Intrinsics.checkNotNull(application, "null cannot be cast to non-null type com.uniden.rtach.helper.BaseApplication");
        this.myApp = (BaseApplication) application;
        ((ActivityBleDeviceListBinding) getBinding()).btnRefresh.setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.activity.BLeDeviceListActivity$$ExternalSyntheticLambda0
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                BLeDeviceListActivity.setListeners$lambda$2(this.f$0, view);
            }
        });
        ((ActivityBleDeviceListBinding) getBinding()).swiperefresh.setOnRefreshListener(new SwipeRefreshLayout.OnRefreshListener() { // from class: com.uniden.rtach.ui.activity.BLeDeviceListActivity$$ExternalSyntheticLambda2
            @Override // androidx.swiperefreshlayout.widget.SwipeRefreshLayout.OnRefreshListener
            public final void onRefresh() {
                BLeDeviceListActivity.setListeners$lambda$3(this.f$0);
            }
        });
        ((ActivityBleDeviceListBinding) getBinding()).textView2.setText(BuildConfig.VERSION_NAME);
        ((ActivityBleDeviceListBinding) getBinding()).textView2.setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.activity.BLeDeviceListActivity$$ExternalSyntheticLambda3
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                BLeDeviceListActivity.setListeners$lambda$4(this.f$0, view);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setListeners$lambda$2(final BLeDeviceListActivity this$0, View view) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        this$0.getViewModel().stopBleScan();
        this$0.getAdapter().clearData();
        this$0.getLoader().show();
        new Handler(Looper.getMainLooper()).postDelayed(new Runnable() { // from class: com.uniden.rtach.ui.activity.BLeDeviceListActivity$$ExternalSyntheticLambda6
            @Override // java.lang.Runnable
            public final void run() {
                BLeDeviceListActivity.setListeners$lambda$2$lambda$1(this.f$0);
            }
        }, 1000L);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setListeners$lambda$2$lambda$1(BLeDeviceListActivity this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        CustomLog.INSTANCE.writeFile(this$0.TAG + " : btnRefresh > fetchBTDevices() : ", this$0.getContext());
        Log.d(String.valueOf(this$0.TAG), "BleDeviceListActivity refresh");
        this$0.fetchBTDevices();
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Multi-variable type inference failed */
    public static final void setListeners$lambda$3(BLeDeviceListActivity this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        this$0.getViewModel().stopBleScan();
        ((ActivityBleDeviceListBinding) this$0.getBinding()).swiperefresh.setRefreshing(true);
        this$0.getAdapter().clearData();
        CustomLog.INSTANCE.writeFile(this$0.TAG + " : swiperefresh > fetchBTDevices() : ", this$0.getContext());
        Log.d(String.valueOf(this$0.TAG), "BleDeviceActivity swiperefresh");
        this$0.fetchBTDevices();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setListeners$lambda$4(BLeDeviceListActivity this$0, View view) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        int i = this$0.clickCount + 1;
        this$0.clickCount = i;
        if (i == 5) {
            this$0.startActivity(new Intent(this$0, (Class<?>) DashboardActivity.class));
            this$0.clickCount = 0;
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    private final void initData() {
        setAdapter(new BLeSearchDeviceAdapter(this, new ArrayList(), new onBTDeviceClick() { // from class: com.uniden.rtach.ui.activity.BLeDeviceListActivity.initData.1
            @Override // com.uniden.rtach.helper.onBTDeviceClick
            public void onBTDeviceClick(BluetoothDeviceModel device, TextView btnConnect) {
                Intrinsics.checkNotNullParameter(device, "device");
                Intrinsics.checkNotNullParameter(btnConnect, "btnConnect");
                BLeDeviceListActivity.this.tvConn = btnConnect;
                CustomLog.INSTANCE.writeFile(BLeDeviceListActivity.this.getTAG() + " : initData onBTDeviceClick display animation loader", BLeDeviceListActivity.this.getContext());
                if (!device.isPaired()) {
                    BLeDeviceListActivity.this.showAssistPairingDialog(device.getBluetoothDevice());
                    CustomLog.INSTANCE.writeFile(BLeDeviceListActivity.this.getTAG() + " : initData onBTDeviceClick  device not pair go for pairing with device Name :-" + device.getName() + ", Name :- " + device.getAddress() + ", isPaired :- " + device.isPaired(), BLeDeviceListActivity.this.getContext());
                } else {
                    BLeDeviceListActivity.this.setPairedDevice(device.getBluetoothDevice());
                    CustomLog.INSTANCE.writeFile(BLeDeviceListActivity.this.getTAG() + " : initData onBTDeviceClick  Device Already pair Go for connect Name :-" + device.getName() + ", Name :- " + device.getAddress() + ", isPaired :- " + device.isPaired(), BLeDeviceListActivity.this.getContext());
                    BLeDeviceListActivity.this.connectBluetooth();
                }
            }
        }));
        ((ActivityBleDeviceListBinding) getBinding()).recyclerviewDevice.setAdapter(getAdapter());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void connectBluetooth() {
        CustomLog.INSTANCE.writeFile(this.TAG + " : connectBluetooth() pairedDevice " + this.pairedDevice + " bluetoothManager " + getBluetoothManager(), getContext());
        BluetoothDevice bluetoothDevice = this.pairedDevice;
        if (bluetoothDevice != null) {
            Log.d(String.valueOf(this.TAG), "BLeDeviceListActivity connectBlutooth pairedDevice");
            this.isConnecting = true;
            getViewModel().stopBleScan();
            getSharedPrefs().setAutoConnectAvailable(true);
            getLoader().showAnim();
            CustomLog.INSTANCE.writeFile(this.TAG + " :bluetoothManager  connectBluetooth() pairedDevice", getContext());
            getBluetoothManager().connectToDevice(bluetoothDevice);
        }
    }

    private final void fetchBTDevices() {
        new Handler(Looper.getMainLooper()).post(new Runnable() { // from class: com.uniden.rtach.ui.activity.BLeDeviceListActivity$$ExternalSyntheticLambda10
            @Override // java.lang.Runnable
            public final void run() {
                BLeDeviceListActivity.fetchBTDevices$lambda$6(this.f$0);
            }
        });
        this.isConnecting = false;
        ArrayList<BluetoothDeviceModel> arrayList = new ArrayList<>();
        this.list = arrayList;
        arrayList.clear();
        getViewModel().getBleDevices().observe(this, new BLeDeviceListActivity$sam$androidx_lifecycle_Observer$0(new Function1() { // from class: com.uniden.rtach.ui.activity.BLeDeviceListActivity$$ExternalSyntheticLambda1
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return BLeDeviceListActivity.fetchBTDevices$lambda$10(this.f$0, (BluetoothDeviceModel) obj);
            }
        }));
        CustomLog.INSTANCE.writeFile(this.TAG + " : Start Scan", getContext());
        getViewModel().startBleScan();
        fetchBTDevices$scheduleStopScan(this);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void fetchBTDevices$lambda$6(BLeDeviceListActivity this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        this$0.getLoader().show();
    }

    private static final void fetchBTDevices$scheduleStopScan(final BLeDeviceListActivity bLeDeviceListActivity) {
        Runnable runnable = bLeDeviceListActivity.stopScanRunnable;
        if (runnable != null) {
            bLeDeviceListActivity.getHandler().removeCallbacks(runnable);
        }
        bLeDeviceListActivity.stopScanRunnable = new Runnable() { // from class: com.uniden.rtach.ui.activity.BLeDeviceListActivity$$ExternalSyntheticLambda5
            @Override // java.lang.Runnable
            public final void run() {
                BLeDeviceListActivity.fetchBTDevices$scheduleStopScan$lambda$8(this.f$0);
            }
        };
        Handler handler = bLeDeviceListActivity.getHandler();
        Runnable runnable2 = bLeDeviceListActivity.stopScanRunnable;
        Intrinsics.checkNotNull(runnable2);
        handler.postDelayed(runnable2, 10000L);
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Multi-variable type inference failed */
    public static final void fetchBTDevices$scheduleStopScan$lambda$8(BLeDeviceListActivity this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        if (!this$0.isConnecting && this$0.getActivity() != null && !this$0.getActivity().isFinishing() && !this$0.getActivity().isDestroyed()) {
            this$0.getViewModel().stopBleScan();
            if (this$0.getLoader().isShowing()) {
                this$0.getLoader().dismiss();
            }
            if (((ActivityBleDeviceListBinding) this$0.getBinding()).swiperefresh.isRefreshing()) {
                ((ActivityBleDeviceListBinding) this$0.getBinding()).swiperefresh.setRefreshing(false);
            }
        }
        this$0.checkRadarList();
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Multi-variable type inference failed */
    public static final Unit fetchBTDevices$lambda$10(final BLeDeviceListActivity this$0, BluetoothDeviceModel bluetoothDeviceModel) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Log.d(String.valueOf(this$0.TAG), "fetchBTDevices " + bluetoothDeviceModel.getName());
        Log.d(String.valueOf(this$0.TAG), (bluetoothDeviceModel.isPaired() ? "Paired" : "Unpaired") + ": " + bluetoothDeviceModel.getName() + " (" + bluetoothDeviceModel.getAddress() + ')');
        BLeSearchDeviceAdapter adapter = this$0.getAdapter();
        Intrinsics.checkNotNull(bluetoothDeviceModel);
        adapter.updateData(bluetoothDeviceModel);
        this$0.list.add(bluetoothDeviceModel);
        this$0.checkRadarList();
        ((ActivityBleDeviceListBinding) this$0.getBinding()).swiperefresh.setRefreshing(false);
        fetchBTDevices$scheduleStopScan(this$0);
        if (bluetoothDeviceModel.isPaired()) {
            this$0.getLoader().dismiss();
            new Handler(Looper.getMainLooper()).post(new Runnable() { // from class: com.uniden.rtach.ui.activity.BLeDeviceListActivity$$ExternalSyntheticLambda4
                @Override // java.lang.Runnable
                public final void run() {
                    BLeDeviceListActivity.fetchBTDevices$lambda$10$lambda$9(this.f$0);
                }
            });
            this$0.pairedDevice = bluetoothDeviceModel.getBluetoothDevice();
            Log.d(String.valueOf(this$0.TAG), "fetchBTDevice pairedDevice " + bluetoothDeviceModel.getName() + ", " + bluetoothDeviceModel.getAddress() + ", " + bluetoothDeviceModel.isPaired());
            CustomLog.INSTANCE.writeFile(this$0.TAG + " : fetchBTDevices() >   AutoConnectAvailable >  connectBluetooth() > with device  Name : " + bluetoothDeviceModel.getName() + ", address : " + bluetoothDeviceModel.getAddress() + ", isPaired : " + bluetoothDeviceModel.isPaired(), this$0.getContext());
            this$0.connectBluetooth();
            return Unit.INSTANCE;
        }
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void fetchBTDevices$lambda$10$lambda$9(BLeDeviceListActivity this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        this$0.getLoader().showAnim();
    }

    /* JADX WARN: Multi-variable type inference failed */
    private final void checkRadarList() {
        if (!this.list.isEmpty()) {
            ((ActivityBleDeviceListBinding) getBinding()).llNoDevices.setVisibility(8);
        } else {
            ((ActivityBleDeviceListBinding) getBinding()).llNoDevices.setVisibility(0);
        }
    }

    private final void pairWithDevice(BluetoothDevice device) {
        Object systemService = getContext().getSystemService("bluetooth");
        Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.bluetooth.BluetoothManager");
        BluetoothDevice remoteDevice = ((BluetoothManager) systemService).getAdapter().getRemoteDevice(device.getAddress());
        Intrinsics.checkNotNullExpressionValue(remoteDevice, "getRemoteDevice(...)");
        Log.d(String.valueOf(this.TAG), "bluetoothDevice address " + device.getName() + ", " + device.getAddress() + ", " + device.getBondState());
        getContext().registerReceiver(this.pairingBroadcastReceiver, this.pairingFilter);
        getViewModel().stopBleScan();
        try {
            Log.d(String.valueOf(this.TAG), "onBTDeviceClick > pairWithDevice > createBond (KITKAT 이상)");
            CustomLog.INSTANCE.writeFile(this.TAG + " :onBTDeviceClick > pairWithDevice > createBond (KITKAT 이상)", getContext());
            BuildersKt__Builders_commonKt.launch$default(CoroutineScopeKt.CoroutineScope(Dispatchers.getIO()), null, null, new C21011(remoteDevice, this, device, null), 3, null);
            this.pairedDevice = remoteDevice;
        } catch (Exception e) {
            e.printStackTrace();
            Log.d(String.valueOf(this.TAG), "페어링 중 예외 발생: " + e.getLocalizedMessage());
            CustomLog.INSTANCE.writeFile(this.TAG + " : 페어링 중 예외 발생: " + e.getLocalizedMessage(), getContext());
        }
    }

    /* JADX INFO: renamed from: com.uniden.rtach.ui.activity.BLeDeviceListActivity$pairWithDevice$1 */
    /* JADX INFO: compiled from: BLeDeviceListActivity.kt */
    @Metadata(m490d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, m491d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    @DebugMetadata(m503c = "com.uniden.rtach.ui.activity.BLeDeviceListActivity$pairWithDevice$1", m504f = "BLeDeviceListActivity.kt", m505i = {}, m506l = {303}, m507m = "invokeSuspend", m508n = {}, m509s = {})
    static final class C21011 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ BluetoothDevice $bluetoothDevice;
        final /* synthetic */ BluetoothDevice $device;
        int label;
        final /* synthetic */ BLeDeviceListActivity this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C21011(BluetoothDevice bluetoothDevice, BLeDeviceListActivity bLeDeviceListActivity, BluetoothDevice bluetoothDevice2, Continuation<? super C21011> continuation) {
            super(2, continuation);
            this.$bluetoothDevice = bluetoothDevice;
            this.this$0 = bLeDeviceListActivity;
            this.$device = bluetoothDevice2;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new C21011(this.$bluetoothDevice, this.this$0, this.$device, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C21011) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                this.label = 1;
                if (DelayKt.delay(3000L, this) == coroutine_suspended) {
                    return coroutine_suspended;
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
            }
            if (this.$bluetoothDevice.createBond()) {
                Log.d(String.valueOf(this.this$0.getTAG()), "페어링 요청 성공: " + this.$bluetoothDevice.getAddress());
                CustomLog.INSTANCE.writeFile(this.this$0.getTAG() + " : 페어링 요청 성공: " + this.$bluetoothDevice.getAddress(), this.this$0.getContext());
                Log.d(String.valueOf(this.this$0.getTAG()), "create bond bluetoothDevice address " + this.$device.getName() + ", " + this.$device.getAddress() + ", " + this.$device.getBondState());
                if (this.$bluetoothDevice.getBondState() == 12) {
                    Log.d(String.valueOf(this.this$0.getTAG()), "페어링 완료됨: " + this.$bluetoothDevice.getAddress());
                    this.this$0.getContext().unregisterReceiver(this.this$0.getPairingBroadcastReceiver());
                }
            } else {
                Log.d(String.valueOf(this.this$0.getTAG()), this.this$0.getTAG() + " : 페어링 실패: " + this.$bluetoothDevice.getAddress());
                CustomLog.INSTANCE.writeFile(this.this$0.getTAG() + " : 페어링 실패: " + this.$bluetoothDevice.getAddress(), this.this$0.getContext());
            }
            return Unit.INSTANCE;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final String printBondState(Integer state) {
        if (state != null && state.intValue() == 10) {
            return "BOND_NONE";
        }
        if (state != null && state.intValue() == 11) {
            return "BOND_BONDING";
        }
        return (state != null && state.intValue() == 12) ? "BOND_BONDED" : String.valueOf(state);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void showAssistPairingDialog(final BluetoothDevice bluetoothDevice) {
        AlertDialog.Builder builder = new AlertDialog.Builder(getActivity());
        View viewInflate = getActivity().getLayoutInflater().inflate(C2074R.layout.radar_pairing_assistance_dialog, (ViewGroup) null);
        Intrinsics.checkNotNullExpressionValue(viewInflate, "inflate(...)");
        builder.setView(viewInflate);
        builder.setCancelable(false);
        RadarPairingAssistanceDialogBinding radarPairingAssistanceDialogBindingBind = RadarPairingAssistanceDialogBinding.bind(viewInflate);
        Intrinsics.checkNotNullExpressionValue(radarPairingAssistanceDialogBindingBind, "bind(...)");
        final AlertDialog alertDialogCreate = builder.create();
        Window window = (Window) Objects.requireNonNull(alertDialogCreate.getWindow());
        if (window != null) {
            window.setBackgroundDrawable(new ColorDrawable(0));
        }
        radarPairingAssistanceDialogBindingBind.btnCancel.setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.activity.BLeDeviceListActivity$$ExternalSyntheticLambda7
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                alertDialogCreate.dismiss();
            }
        });
        radarPairingAssistanceDialogBindingBind.btnOk.setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.activity.BLeDeviceListActivity$$ExternalSyntheticLambda8
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                BLeDeviceListActivity.showAssistPairingDialog$lambda$13(this.f$0, alertDialogCreate, bluetoothDevice, view);
            }
        });
        alertDialogCreate.show();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void showAssistPairingDialog$lambda$13(BLeDeviceListActivity this$0, AlertDialog alertDialog, BluetoothDevice bluetoothDevice, View view) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Intrinsics.checkNotNullParameter(bluetoothDevice, "$bluetoothDevice");
        CustomLog.INSTANCE.writeFile(this$0.TAG + " : pairingBroadcastReceiver  display pairing instruction dialog tap on pair : ", this$0.getContext());
        this$0.isErrorToastShown = false;
        alertDialog.dismiss();
        this$0.getLoader().showAnim();
        CustomLog.INSTANCE.writeFile(this$0.TAG + " : pairingBroadcastReceiver  display pairing instruction dialog tap on pair : pairWithDevice() ", this$0.getContext());
        this$0.getViewModel().stopBleScan();
        this$0.pairWithDevice(bluetoothDevice);
    }
}
