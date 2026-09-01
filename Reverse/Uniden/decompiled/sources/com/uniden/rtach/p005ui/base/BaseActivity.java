package com.uniden.rtach.p005ui.base;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Application;
import android.bluetooth.BluetoothAdapter;
import android.bluetooth.BluetoothDevice;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.SharedPreferences;
import android.location.LocationManager;
import android.net.ConnectivityManager;
import android.net.Network;
import android.net.NetworkCapabilities;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;
import android.view.LayoutInflater;
import android.widget.Toast;
import androidx.activity.result.ActivityResult;
import androidx.activity.result.ActivityResultCallback;
import androidx.activity.result.ActivityResultLauncher;
import androidx.activity.result.contract.ActivityResultContracts;
import androidx.appcompat.app.AppCompatActivity;
import androidx.constraintlayout.core.motion.utils.TypedValues;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.core.app.ActivityCompat;
import androidx.core.content.ContextCompat;
import androidx.lifecycle.Observer;
import androidx.lifecycle.ViewModelLazy;
import androidx.lifecycle.ViewModelProvider;
import androidx.lifecycle.ViewModelStore;
import androidx.lifecycle.viewmodel.CreationExtras;
import androidx.viewbinding.ViewBinding;
import com.google.firebase.analytics.FirebaseAnalytics;
import com.uniden.rtach.C2074R;
import com.uniden.rtach.data.model.BluetoothDeviceModel;
import com.uniden.rtach.data.sharedpref.StoreUserData;
import com.uniden.rtach.helper.BaseApplication;
import com.uniden.rtach.helper.BluetoothManager;
import com.uniden.rtach.helper.BluetoothScanner;
import com.uniden.rtach.helper.BluetoothState;
import com.uniden.rtach.helper.CustomLog;
import com.uniden.rtach.helper.MyTab;
import com.uniden.rtach.p005ui.activity.BLeDeviceListActivity;
import com.uniden.rtach.p005ui.activity.DashboardActivity;
import com.uniden.rtach.p005ui.activity.SplashActivity;
import com.uniden.rtach.viewmodel.BleDeviceListViewModel;
import com.uniden.rtach.viewmodel.DashboardViewModel;
import com.uniden.rtach.viewmodel.SharedViewModel;
import java.util.Set;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.SetsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.text.StringsKt;

/* JADX INFO: compiled from: BaseActivity.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000À\u0001\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u000e\n\u0002\u0010\u0011\n\u0000\n\u0002\u0010\u0015\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0004\b&\u0018\u0000*\b\b\u0000\u0010\u0001*\u00020\u00022\u00020\u0003B%\u0012\u001c\u0010\u0004\u001a\u0018\u0012\u0004\u0012\u00020\u0007\u0012\u0004\u0012\u00028\u00000\u0006j\b\u0012\u0004\u0012\u00028\u0000`\u0005¢\u0006\u0004\b\b\u0010\tJ\b\u0010Z\u001a\u00020[H\u0002J\b\u0010\\\u001a\u00020[H\u0014J\b\u0010]\u001a\u00020[H\u0014J\b\u0010^\u001a\u00020AH\u0002J\u0012\u0010_\u001a\u00020[2\b\u0010`\u001a\u0004\u0018\u00010aH\u0014J\b\u0010b\u001a\u00020[H\u0002J\b\u0010c\u001a\u00020[H\u0002J\b\u0010d\u001a\u00020[H$J\b\u0010e\u001a\u00020[H$J\u0006\u0010f\u001a\u00020[J\b\u0010g\u001a\u00020AH\u0002J\b\u0010h\u001a\u00020[H\u0002J\b\u0010i\u001a\u00020[H\u0002J\u0006\u0010j\u001a\u00020[J\b\u0010k\u001a\u00020[H\u0002J\b\u0010l\u001a\u00020[H\u0002J-\u0010m\u001a\u00020[2\u0006\u0010n\u001a\u00020=2\u000e\u0010o\u001a\n\u0012\u0006\b\u0001\u0012\u00020\f0p2\u0006\u0010q\u001a\u00020rH\u0016¢\u0006\u0002\u0010sJ\u000e\u0010t\u001a\u00020A2\u0006\u0010u\u001a\u00020vJ\u0006\u0010w\u001a\u00020AJ\u0010\u0010x\u001a\u00020[2\u0006\u0010y\u001a\u00020AH\u0002R&\u0010\u0004\u001a\u0018\u0012\u0004\u0012\u00020\u0007\u0012\u0004\u0012\u00028\u00000\u0006j\b\u0012\u0004\u0012\u00028\u0000`\u0005X\u0082\u0004¢\u0006\u0004\n\u0002\u0010\nR\u0014\u0010\u000b\u001a\u00020\fX\u0086D¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u000eR\u001a\u0010\u000f\u001a\u00020\u0010X\u0084.¢\u0006\u000e\n\u0000\u001a\u0004\b\u0011\u0010\u0012\"\u0004\b\u0013\u0010\u0014R\u001a\u0010\u0015\u001a\u00020\u0016X\u0084.¢\u0006\u000e\n\u0000\u001a\u0004\b\u0017\u0010\u0018\"\u0004\b\u0019\u0010\u001aR\u001c\u0010\u001b\u001a\u00028\u0000X\u0084.¢\u0006\u0010\n\u0002\u0010 \u001a\u0004\b\u001c\u0010\u001d\"\u0004\b\u001e\u0010\u001fR\u001b\u0010!\u001a\u00020\"8FX\u0086\u0084\u0002¢\u0006\f\n\u0004\b%\u0010&\u001a\u0004\b#\u0010$R\u001b\u0010'\u001a\u00020(8BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b+\u0010&\u001a\u0004\b)\u0010*R\u001a\u0010,\u001a\u00020-X\u0086.¢\u0006\u000e\n\u0000\u001a\u0004\b.\u0010/\"\u0004\b0\u00101R\u001b\u00102\u001a\u0002038FX\u0086\u0084\u0002¢\u0006\f\n\u0004\b6\u0010&\u001a\u0004\b4\u00105R\u001b\u00107\u001a\u0002088BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b;\u0010&\u001a\u0004\b9\u0010:R\u000e\u0010<\u001a\u00020=X\u0082D¢\u0006\u0002\n\u0000R\u000e\u0010>\u001a\u00020=X\u0082D¢\u0006\u0002\n\u0000R\u000e\u0010?\u001a\u00020=X\u0082D¢\u0006\u0002\n\u0000R\u000e\u0010@\u001a\u00020AX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010B\u001a\u00020AX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010C\u001a\u00020AX\u0082\u000e¢\u0006\u0002\n\u0000R\u001a\u0010D\u001a\u00020EX\u0086.¢\u0006\u000e\n\u0000\u001a\u0004\bF\u0010G\"\u0004\bH\u0010IR\u0011\u0010J\u001a\u00020K¢\u0006\b\n\u0000\u001a\u0004\bL\u0010MR\u001a\u0010N\u001a\u00020OX\u0086.¢\u0006\u000e\n\u0000\u001a\u0004\bP\u0010Q\"\u0004\bR\u0010SR\u0014\u0010T\u001a\b\u0012\u0004\u0012\u00020V0UX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010W\u001a\b\u0012\u0004\u0012\u00020V0UX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010X\u001a\u00020YX\u0082.¢\u0006\u0002\n\u0000¨\u0006z"}, m491d2 = {"Lcom/uniden/rtach/ui/base/BaseActivity;", "VB", "Landroidx/viewbinding/ViewBinding;", "Landroidx/appcompat/app/AppCompatActivity;", "activityInflate", "Lcom/uniden/rtach/ui/base/ActivityInflate;", "Lkotlin/Function1;", "Landroid/view/LayoutInflater;", "<init>", "(Lkotlin/jvm/functions/Function1;)V", "Lkotlin/jvm/functions/Function1;", "TAG_BA", "", "getTAG_BA", "()Ljava/lang/String;", "activity", "Landroid/app/Activity;", "getActivity", "()Landroid/app/Activity;", "setActivity", "(Landroid/app/Activity;)V", "context", "Landroid/content/Context;", "getContext", "()Landroid/content/Context;", "setContext", "(Landroid/content/Context;)V", "binding", "getBinding", "()Landroidx/viewbinding/ViewBinding;", "setBinding", "(Landroidx/viewbinding/ViewBinding;)V", "Landroidx/viewbinding/ViewBinding;", "sharedViewModel", "Lcom/uniden/rtach/viewmodel/SharedViewModel;", "getSharedViewModel", "()Lcom/uniden/rtach/viewmodel/SharedViewModel;", "sharedViewModel$delegate", "Lkotlin/Lazy;", "viewModel", "Lcom/uniden/rtach/viewmodel/BleDeviceListViewModel;", "getViewModel", "()Lcom/uniden/rtach/viewmodel/BleDeviceListViewModel;", "viewModel$delegate", "bluetoothManager", "Lcom/uniden/rtach/helper/BluetoothManager;", "getBluetoothManager", "()Lcom/uniden/rtach/helper/BluetoothManager;", "setBluetoothManager", "(Lcom/uniden/rtach/helper/BluetoothManager;)V", "sharedPrefs", "Lcom/uniden/rtach/data/sharedpref/StoreUserData;", "getSharedPrefs", "()Lcom/uniden/rtach/data/sharedpref/StoreUserData;", "sharedPrefs$delegate", "dashboardviewModel", "Lcom/uniden/rtach/viewmodel/DashboardViewModel;", "getDashboardviewModel", "()Lcom/uniden/rtach/viewmodel/DashboardViewModel;", "dashboardviewModel$delegate", "permissionsRequestCode", "", "bluetoothEnableRequestCode", "enableGpsRequestCode", "isBTPermissionShown", "", "isHandlerRunning", "isActivityOpening", "locationManager", "Landroid/location/LocationManager;", "getLocationManager", "()Landroid/location/LocationManager;", "setLocationManager", "(Landroid/location/LocationManager;)V", "handler", "Landroid/os/Handler;", "getHandler", "()Landroid/os/Handler;", "yourRunnable", "Ljava/lang/Runnable;", "getYourRunnable", "()Ljava/lang/Runnable;", "setYourRunnable", "(Ljava/lang/Runnable;)V", "gpsResultLauncher", "Landroidx/activity/result/ActivityResultLauncher;", "Landroid/content/Intent;", "bluetoothResultLauncher", "bluetoothScanner", "Lcom/uniden/rtach/helper/BluetoothScanner;", "findBTDevice", "", "onDestroy", "onResume", "checkBluetoothIsOn", "onCreate", "savedInstanceState", "Landroid/os/Bundle;", "initVariables", "initObservables", "initUi", "setListeners", "startPermissionCheck", "isBluetoothAndLocationPermissionsGranted", "requestBluetoothAndLocationPermission", "checkGPSIsEnable", "displayAlertDialogGPSEnable", "checkBluetoothIsEnable", "fetchBTDevices", "onRequestPermissionsResult", "requestCode", "permissions", "", "grantResults", "", "(I[Ljava/lang/String;[I)V", "isConnected", "device", "Landroid/bluetooth/BluetoothDevice;", "isNetworkAvailable", "updateBooleanValue", "newValue", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public abstract class BaseActivity<VB extends ViewBinding> extends AppCompatActivity {
    private final String TAG_BA;
    protected Activity activity;
    private final Function1<LayoutInflater, VB> activityInflate;
    protected VB binding;
    private final int bluetoothEnableRequestCode;
    public BluetoothManager bluetoothManager;
    private final ActivityResultLauncher<Intent> bluetoothResultLauncher;
    private BluetoothScanner bluetoothScanner;
    protected Context context;

    /* JADX INFO: renamed from: dashboardviewModel$delegate, reason: from kotlin metadata */
    private final Lazy dashboardviewModel;
    private final int enableGpsRequestCode;
    private final ActivityResultLauncher<Intent> gpsResultLauncher;
    private final Handler handler;
    private boolean isActivityOpening;
    private boolean isBTPermissionShown;
    private boolean isHandlerRunning;
    public LocationManager locationManager;
    private final int permissionsRequestCode;

    /* JADX INFO: renamed from: sharedPrefs$delegate, reason: from kotlin metadata */
    private final Lazy sharedPrefs;

    /* JADX INFO: renamed from: sharedViewModel$delegate, reason: from kotlin metadata */
    private final Lazy sharedViewModel;

    /* JADX INFO: renamed from: viewModel$delegate, reason: from kotlin metadata */
    private final Lazy viewModel;
    public Runnable yourRunnable;

    public final Handler getHandler() {
        return this.handler;
    }

    public final String getTAG_BA() {
        return this.TAG_BA;
    }

    protected abstract void initUi();

    protected final void setActivity(Activity activity) {
        Intrinsics.checkNotNullParameter(activity, "<set-?>");
        this.activity = activity;
    }

    protected final void setBinding(VB vb) {
        Intrinsics.checkNotNullParameter(vb, "<set-?>");
        this.binding = vb;
    }

    public final void setBluetoothManager(BluetoothManager bluetoothManager) {
        Intrinsics.checkNotNullParameter(bluetoothManager, "<set-?>");
        this.bluetoothManager = bluetoothManager;
    }

    protected final void setContext(Context context) {
        Intrinsics.checkNotNullParameter(context, "<set-?>");
        this.context = context;
    }

    protected abstract void setListeners();

    public final void setLocationManager(LocationManager locationManager) {
        Intrinsics.checkNotNullParameter(locationManager, "<set-?>");
        this.locationManager = locationManager;
    }

    public final void setYourRunnable(Runnable runnable) {
        Intrinsics.checkNotNullParameter(runnable, "<set-?>");
        this.yourRunnable = runnable;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public BaseActivity(Function1<? super LayoutInflater, ? extends VB> activityInflate) {
        Intrinsics.checkNotNullParameter(activityInflate, "activityInflate");
        this.activityInflate = activityInflate;
        this.TAG_BA = "BaseActivity";
        final BaseActivity<VB> baseActivity = this;
        final Function0 function0 = null;
        this.sharedViewModel = new ViewModelLazy(Reflection.getOrCreateKotlinClass(SharedViewModel.class), new Function0<ViewModelStore>() { // from class: com.uniden.rtach.ui.base.BaseActivity$special$$inlined$viewModels$default$2
            {
                super(0);
            }

            /* JADX WARN: Can't rename method to resolve collision */
            @Override // kotlin.jvm.functions.Function0
            public final ViewModelStore invoke() {
                return baseActivity.getViewModelStore();
            }
        }, new Function0<ViewModelProvider.Factory>() { // from class: com.uniden.rtach.ui.base.BaseActivity$special$$inlined$viewModels$default$1
            {
                super(0);
            }

            /* JADX WARN: Can't rename method to resolve collision */
            @Override // kotlin.jvm.functions.Function0
            public final ViewModelProvider.Factory invoke() {
                return baseActivity.getDefaultViewModelProviderFactory();
            }
        }, new Function0<CreationExtras>() { // from class: com.uniden.rtach.ui.base.BaseActivity$special$$inlined$viewModels$default$3
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(0);
            }

            /* JADX WARN: Can't rename method to resolve collision */
            @Override // kotlin.jvm.functions.Function0
            public final CreationExtras invoke() {
                CreationExtras creationExtras;
                Function0 function1 = function0;
                return (function1 == null || (creationExtras = (CreationExtras) function1.invoke()) == null) ? baseActivity.getDefaultViewModelCreationExtras() : creationExtras;
            }
        });
        this.viewModel = new ViewModelLazy(Reflection.getOrCreateKotlinClass(BleDeviceListViewModel.class), new Function0<ViewModelStore>() { // from class: com.uniden.rtach.ui.base.BaseActivity$special$$inlined$viewModels$default$5
            {
                super(0);
            }

            /* JADX WARN: Can't rename method to resolve collision */
            @Override // kotlin.jvm.functions.Function0
            public final ViewModelStore invoke() {
                return baseActivity.getViewModelStore();
            }
        }, new Function0<ViewModelProvider.Factory>() { // from class: com.uniden.rtach.ui.base.BaseActivity$special$$inlined$viewModels$default$4
            {
                super(0);
            }

            /* JADX WARN: Can't rename method to resolve collision */
            @Override // kotlin.jvm.functions.Function0
            public final ViewModelProvider.Factory invoke() {
                return baseActivity.getDefaultViewModelProviderFactory();
            }
        }, new Function0<CreationExtras>() { // from class: com.uniden.rtach.ui.base.BaseActivity$special$$inlined$viewModels$default$6
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(0);
            }

            /* JADX WARN: Can't rename method to resolve collision */
            @Override // kotlin.jvm.functions.Function0
            public final CreationExtras invoke() {
                CreationExtras creationExtras;
                Function0 function1 = function0;
                return (function1 == null || (creationExtras = (CreationExtras) function1.invoke()) == null) ? baseActivity.getDefaultViewModelCreationExtras() : creationExtras;
            }
        });
        this.sharedPrefs = LazyKt.lazy(new Function0() { // from class: com.uniden.rtach.ui.base.BaseActivity$$ExternalSyntheticLambda9
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return BaseActivity.sharedPrefs_delegate$lambda$0(this.f$0);
            }
        });
        this.dashboardviewModel = new ViewModelLazy(Reflection.getOrCreateKotlinClass(DashboardViewModel.class), new Function0<ViewModelStore>() { // from class: com.uniden.rtach.ui.base.BaseActivity$special$$inlined$viewModels$default$8
            {
                super(0);
            }

            /* JADX WARN: Can't rename method to resolve collision */
            @Override // kotlin.jvm.functions.Function0
            public final ViewModelStore invoke() {
                return baseActivity.getViewModelStore();
            }
        }, new Function0<ViewModelProvider.Factory>() { // from class: com.uniden.rtach.ui.base.BaseActivity$special$$inlined$viewModels$default$7
            {
                super(0);
            }

            /* JADX WARN: Can't rename method to resolve collision */
            @Override // kotlin.jvm.functions.Function0
            public final ViewModelProvider.Factory invoke() {
                return baseActivity.getDefaultViewModelProviderFactory();
            }
        }, new Function0<CreationExtras>() { // from class: com.uniden.rtach.ui.base.BaseActivity$special$$inlined$viewModels$default$9
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(0);
            }

            /* JADX WARN: Can't rename method to resolve collision */
            @Override // kotlin.jvm.functions.Function0
            public final CreationExtras invoke() {
                CreationExtras creationExtras;
                Function0 function1 = function0;
                return (function1 == null || (creationExtras = (CreationExtras) function1.invoke()) == null) ? baseActivity.getDefaultViewModelCreationExtras() : creationExtras;
            }
        });
        this.permissionsRequestCode = 600;
        this.bluetoothEnableRequestCode = 601;
        this.enableGpsRequestCode = TypedValues.MotionType.TYPE_EASING;
        this.handler = new Handler(Looper.getMainLooper());
        this.gpsResultLauncher = registerForActivityResult(new ActivityResultContracts.StartActivityForResult(), new ActivityResultCallback() { // from class: com.uniden.rtach.ui.base.BaseActivity$$ExternalSyntheticLambda10
            @Override // androidx.activity.result.ActivityResultCallback
            public final void onActivityResult(Object obj) {
                BaseActivity.gpsResultLauncher$lambda$1(this.f$0, (ActivityResult) obj);
            }
        });
        this.bluetoothResultLauncher = registerForActivityResult(new ActivityResultContracts.StartActivityForResult(), new ActivityResultCallback() { // from class: com.uniden.rtach.ui.base.BaseActivity$$ExternalSyntheticLambda1
            @Override // androidx.activity.result.ActivityResultCallback
            public final void onActivityResult(Object obj) {
                BaseActivity.bluetoothResultLauncher$lambda$3(this.f$0, (ActivityResult) obj);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: protected */
    public final Activity getActivity() {
        Activity activity = this.activity;
        if (activity != null) {
            return activity;
        }
        Intrinsics.throwUninitializedPropertyAccessException("activity");
        return null;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    public final Context getContext() {
        Context context = this.context;
        if (context != null) {
            return context;
        }
        Intrinsics.throwUninitializedPropertyAccessException("context");
        return null;
    }

    protected final VB getBinding() {
        VB vb = this.binding;
        if (vb != null) {
            return vb;
        }
        Intrinsics.throwUninitializedPropertyAccessException("binding");
        return null;
    }

    public final SharedViewModel getSharedViewModel() {
        return (SharedViewModel) this.sharedViewModel.getValue();
    }

    private final BleDeviceListViewModel getViewModel() {
        return (BleDeviceListViewModel) this.viewModel.getValue();
    }

    public final BluetoothManager getBluetoothManager() {
        BluetoothManager bluetoothManager = this.bluetoothManager;
        if (bluetoothManager != null) {
            return bluetoothManager;
        }
        Intrinsics.throwUninitializedPropertyAccessException("bluetoothManager");
        return null;
    }

    public final StoreUserData getSharedPrefs() {
        return (StoreUserData) this.sharedPrefs.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final StoreUserData sharedPrefs_delegate$lambda$0(BaseActivity this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        SharedPreferences sharedPreferences = this$0.getSharedPreferences(StoreUserData.INSTANCE.getPrefName(this$0), 0);
        Intrinsics.checkNotNullExpressionValue(sharedPreferences, "getSharedPreferences(...)");
        return new StoreUserData(sharedPreferences);
    }

    private final DashboardViewModel getDashboardviewModel() {
        return (DashboardViewModel) this.dashboardviewModel.getValue();
    }

    public final LocationManager getLocationManager() {
        LocationManager locationManager = this.locationManager;
        if (locationManager != null) {
            return locationManager;
        }
        Intrinsics.throwUninitializedPropertyAccessException("locationManager");
        return null;
    }

    public final Runnable getYourRunnable() {
        Runnable runnable = this.yourRunnable;
        if (runnable != null) {
            return runnable;
        }
        Intrinsics.throwUninitializedPropertyAccessException("yourRunnable");
        return null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void gpsResultLauncher$lambda$1(BaseActivity this$0, ActivityResult result) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Intrinsics.checkNotNullParameter(result, "result");
        this$0.checkGPSIsEnable();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void bluetoothResultLauncher$lambda$3(final BaseActivity this$0, ActivityResult result) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Intrinsics.checkNotNullParameter(result, "result");
        if (result.getResultCode() == -1) {
            this$0.updateBooleanValue(true);
            this$0.isBTPermissionShown = false;
        } else {
            this$0.runOnUiThread(new Runnable() { // from class: com.uniden.rtach.ui.base.BaseActivity$$ExternalSyntheticLambda4
                @Override // java.lang.Runnable
                public final void run() {
                    BaseActivity.bluetoothResultLauncher$lambda$3$lambda$2(this.f$0);
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void bluetoothResultLauncher$lambda$3$lambda$2(BaseActivity this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Toast.makeText(this$0.getActivity(), "Please turn on the Bluetooth", 0).show();
    }

    private final void findBTDevice() {
        initVariables();
        startPermissionCheck();
        getSharedViewModel().isRequiredPermissionAllowed().observe(this, new Observer() { // from class: com.uniden.rtach.ui.base.BaseActivity$$ExternalSyntheticLambda5
            @Override // androidx.lifecycle.Observer
            public final void onChanged(Object obj) {
                BaseActivity.findBTDevice$lambda$4(this.f$0, (Boolean) obj);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void findBTDevice$lambda$4(BaseActivity this$0, Boolean bool) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        if (!bool.booleanValue() || this$0.getSharedPrefs().isBluetoothConnected() || this$0.getSharedPrefs().isBTConnecting() || this$0.isHandlerRunning) {
            return;
        }
        Log.d(String.valueOf(this$0.TAG_BA), "BaseActivity fetchBTDevice running");
        this$0.fetchBTDevices();
    }

    @Override // androidx.appcompat.app.AppCompatActivity, androidx.fragment.app.FragmentActivity, android.app.Activity
    protected void onDestroy() {
        super.onDestroy();
        if (this.yourRunnable != null) {
            this.handler.removeCallbacks(getYourRunnable());
        }
    }

    @Override // androidx.fragment.app.FragmentActivity, android.app.Activity
    protected void onResume() {
        super.onResume();
        if ((getActivity() instanceof BLeDeviceListActivity) || (getActivity() instanceof SplashActivity)) {
            return;
        }
        initVariables();
        if (getSharedPrefs().isBluetoothConnected() && checkBluetoothIsOn()) {
            return;
        }
        getSharedPrefs().setBluetoothConnected(false);
        getSharedPrefs().setBTConnecting(false);
        CustomLog.INSTANCE.writeFile("Search AutoConnect:- onResume", getContext());
        if (this.isBTPermissionShown) {
            return;
        }
        findBTDevice();
    }

    private final boolean checkBluetoothIsOn() {
        Object systemService = getSystemService("bluetooth");
        Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.bluetooth.BluetoothManager");
        BluetoothAdapter adapter = ((android.bluetooth.BluetoothManager) systemService).getAdapter();
        if (adapter != null) {
            return adapter.isEnabled();
        }
        return false;
    }

    @Override // androidx.fragment.app.FragmentActivity, androidx.activity.ComponentActivity, androidx.core.app.ComponentActivity, android.app.Activity
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setActivity(this);
        setContext(this);
        getWindow().addFlags(128);
        Function1<LayoutInflater, VB> function1 = this.activityInflate;
        LayoutInflater layoutInflater = getLayoutInflater();
        Intrinsics.checkNotNullExpressionValue(layoutInflater, "getLayoutInflater(...)");
        setBinding(function1.invoke(layoutInflater));
        setContentView(getBinding().getRoot());
        initVariables();
        initUi();
        setListeners();
        initObservables();
    }

    private final void initVariables() {
        Object systemService = getSystemService(FirebaseAnalytics.Param.LOCATION);
        Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.location.LocationManager");
        setLocationManager((LocationManager) systemService);
        setBluetoothManager(BluetoothManager.INSTANCE.getInstance(getContext()));
    }

    private final void initObservables() {
        Application application = getApplication();
        Intrinsics.checkNotNull(application, "null cannot be cast to non-null type com.uniden.rtach.helper.BaseApplication");
        ((BaseApplication) application).getBluetoothConnectionState().observe(this, new Observer() { // from class: com.uniden.rtach.ui.base.BaseActivity$$ExternalSyntheticLambda6
            @Override // androidx.lifecycle.Observer
            public final void onChanged(Object obj) {
                BaseActivity.initObservables$lambda$6(this.f$0, (BluetoothState) obj);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void initObservables$lambda$6(final BaseActivity this$0, BluetoothState bluetoothState) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        CustomLog.INSTANCE.writeFile("BaseActivity : bluetoothConnectionState " + bluetoothState, this$0.getContext());
        if (bluetoothState == BluetoothState.STATE_SWITCH_ON) {
            if (this$0.getSharedPrefs().isBluetoothConnected() || this$0.getSharedPrefs().isBTConnecting()) {
                return;
            }
            CustomLog.INSTANCE.writeFile("BaseActivity : fetchBTDevices() BT Receiver", this$0.getContext());
            this$0.findBTDevice();
            return;
        }
        if (bluetoothState == BluetoothState.STATE_SWITCH_OFF) {
            this$0.getBluetoothManager().disconnect();
            this$0.getSharedPrefs().setBluetoothConnected(false);
            this$0.getSharedPrefs().setBTConnecting(false);
            return;
        }
        if (bluetoothState == BluetoothState.STATE_CONNECTING) {
            this$0.getSharedPrefs().setBTConnecting(true);
            return;
        }
        if (bluetoothState == BluetoothState.STATE_CONNECTED) {
            this$0.getSharedPrefs().setBluetoothConnected(true);
            this$0.getSharedPrefs().setBTConnecting(false);
            this$0.isHandlerRunning = false;
            CustomLog.INSTANCE.writeFile("BaseActivity :bluetoothConnectionState  BluetoothState.STATE_CONNECTED activity is BLeDeviceListActivity " + (this$0.getActivity() instanceof BLeDeviceListActivity), this$0.getContext());
            if (this$0.getActivity() instanceof BLeDeviceListActivity) {
                CustomLog.INSTANCE.writeFile("BaseActivity :bluetoothConnectionState  BluetoothState.STATE_CONNECTED !isActivityOpening " + (!this$0.isActivityOpening), this$0.getContext());
                if (this$0.isActivityOpening) {
                    return;
                }
                this$0.isActivityOpening = true;
                new Handler(Looper.getMainLooper()).postDelayed(new Runnable() { // from class: com.uniden.rtach.ui.base.BaseActivity$$ExternalSyntheticLambda3
                    @Override // java.lang.Runnable
                    public final void run() {
                        BaseActivity.initObservables$lambda$6$lambda$5(this.f$0);
                    }
                }, 5000L);
                return;
            }
            return;
        }
        if (bluetoothState == BluetoothState.STATE_DISCONNECTING) {
            this$0.getSharedPrefs().setBTConnecting(false);
            return;
        }
        if (bluetoothState == BluetoothState.STATE_DISCONNECTED) {
            this$0.getSharedPrefs().setBluetoothConnected(false);
            this$0.getSharedPrefs().setBTConnecting(false);
            this$0.getSharedPrefs().setScanRunning(false);
            if ((this$0.getActivity() instanceof BLeDeviceListActivity) && !this$0.getActivity().isFinishing()) {
                Activity activity = this$0.getActivity();
                Intrinsics.checkNotNull(activity, "null cannot be cast to non-null type com.uniden.rtach.ui.activity.BLeDeviceListActivity");
                ((BLeDeviceListActivity) activity).getLoader().dismiss();
            }
            if (this$0.getActivity() instanceof BLeDeviceListActivity) {
                return;
            }
            this$0.findBTDevice();
            return;
        }
        Log.d(String.valueOf(this$0.TAG_BA), "no state");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void initObservables$lambda$6$lambda$5(BaseActivity this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Activity activity = this$0.getActivity();
        Intrinsics.checkNotNull(activity, "null cannot be cast to non-null type com.uniden.rtach.ui.activity.BLeDeviceListActivity");
        ((BLeDeviceListActivity) activity).getLoader().dismiss();
        this$0.isActivityOpening = false;
        CustomLog.INSTANCE.writeFile("BaseActivity :bluetoothConnectionState  BluetoothState.STATE_CONNECTED go to Dashboard", this$0.getContext());
        this$0.startActivity(new Intent(this$0.getActivity(), (Class<?>) DashboardActivity.class));
        this$0.finish();
    }

    public final void startPermissionCheck() {
        updateBooleanValue(false);
        if (isBluetoothAndLocationPermissionsGranted()) {
            checkGPSIsEnable();
        } else {
            requestBluetoothAndLocationPermission();
        }
    }

    private final boolean isBluetoothAndLocationPermissionsGranted() {
        if (Build.VERSION.SDK_INT >= 31) {
            if (ContextCompat.checkSelfPermission(getContext(), "android.permission.ACCESS_FINE_LOCATION") == 0 && ContextCompat.checkSelfPermission(getContext(), "android.permission.BLUETOOTH_CONNECT") == 0 && ContextCompat.checkSelfPermission(getContext(), "android.permission.BLUETOOTH_SCAN") == 0 && ContextCompat.checkSelfPermission(getContext(), "android.permission.BLUETOOTH_ADMIN") == 0 && ContextCompat.checkSelfPermission(getContext(), "android.permission.BLUETOOTH") == 0) {
                return true;
            }
        } else if (ContextCompat.checkSelfPermission(getContext(), "android.permission.ACCESS_FINE_LOCATION") == 0) {
            return true;
        }
        return false;
    }

    private final void requestBluetoothAndLocationPermission() {
        Set setMutableSetOf = SetsKt.mutableSetOf("android.permission.BLUETOOTH", "android.permission.BLUETOOTH_ADMIN", "android.permission.ACCESS_COARSE_LOCATION", "android.permission.ACCESS_FINE_LOCATION");
        if (Build.VERSION.SDK_INT >= 31) {
            setMutableSetOf.add("android.permission.BLUETOOTH_CONNECT");
            setMutableSetOf.add("android.permission.BLUETOOTH_SCAN");
        }
        ActivityCompat.requestPermissions(this, (String[]) setMutableSetOf.toArray(new String[0]), this.permissionsRequestCode);
    }

    private final void checkGPSIsEnable() {
        if (getLocationManager().isProviderEnabled("gps")) {
            checkBluetoothIsEnable();
        } else {
            displayAlertDialogGPSEnable();
        }
    }

    public final void displayAlertDialogGPSEnable() {
        AlertDialog.Builder builder = new AlertDialog.Builder(this);
        builder.setMessage(getString(C2074R.string.please_enable_location_from_settings_to_access_map)).setTitle(getString(C2074R.string.uniden_alerts)).setPositiveButton("Settings", new DialogInterface.OnClickListener() { // from class: com.uniden.rtach.ui.base.BaseActivity$$ExternalSyntheticLambda0
            @Override // android.content.DialogInterface.OnClickListener
            public final void onClick(DialogInterface dialogInterface, int i) {
                BaseActivity.displayAlertDialogGPSEnable$lambda$7(this.f$0, dialogInterface, i);
            }
        }).setNegativeButton("Cancel", new DialogInterface.OnClickListener() { // from class: com.uniden.rtach.ui.base.BaseActivity$$ExternalSyntheticLambda2
            @Override // android.content.DialogInterface.OnClickListener
            public final void onClick(DialogInterface dialogInterface, int i) {
                BaseActivity.displayAlertDialogGPSEnable$lambda$8(this.f$0, dialogInterface, i);
            }
        });
        AlertDialog alertDialogCreate = builder.create();
        Intrinsics.checkNotNullExpressionValue(alertDialogCreate, "create(...)");
        alertDialogCreate.show();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void displayAlertDialogGPSEnable$lambda$7(BaseActivity this$0, DialogInterface dialogInterface, int i) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        this$0.gpsResultLauncher.launch(new Intent("android.settings.LOCATION_SOURCE_SETTINGS"));
        dialogInterface.dismiss();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void displayAlertDialogGPSEnable$lambda$8(BaseActivity this$0, DialogInterface dialogInterface, int i) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        this$0.getDashboardviewModel().getSelectedTab().setValue(MyTab.DASHBOARD);
        dialogInterface.dismiss();
    }

    private final void checkBluetoothIsEnable() {
        Object systemService = getContext().getSystemService("bluetooth");
        Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.bluetooth.BluetoothManager");
        BluetoothAdapter adapter = ((android.bluetooth.BluetoothManager) systemService).getAdapter();
        if (adapter != null) {
            if (!adapter.isEnabled()) {
                this.bluetoothResultLauncher.launch(new Intent("android.bluetooth.adapter.action.REQUEST_ENABLE"));
                this.isBTPermissionShown = true;
                return;
            }
            updateBooleanValue(true);
            return;
        }
        Toast.makeText(this, "Device does not support Bluetooth", 0).show();
    }

    private final void fetchBTDevices() {
        this.bluetoothScanner = new BluetoothScanner(getActivity());
        if (!getSharedPrefs().isBluetoothConnected() && !getSharedPrefs().isBTConnecting() && !getSharedPrefs().isScanRunning()) {
            CustomLog.INSTANCE.writeFile("BaseActivity : Start Scan : ", getContext());
            Log.d(String.valueOf(this.TAG_BA), "BaseActivity : Start Scan : " + getContext());
            BaseActivity<VB> baseActivity = this;
            if (ActivityCompat.checkSelfPermission(baseActivity, "android.permission.BLUETOOTH_SCAN") == 0 || ActivityCompat.checkSelfPermission(baseActivity, "android.permission.BLUETOOTH_CONNECT") == 0) {
                BluetoothScanner bluetoothScanner = this.bluetoothScanner;
                if (bluetoothScanner == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("bluetoothScanner");
                    bluetoothScanner = null;
                }
                bluetoothScanner.startScan(new Function1() { // from class: com.uniden.rtach.ui.base.BaseActivity$$ExternalSyntheticLambda7
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj) {
                        return BaseActivity.fetchBTDevices$lambda$9(this.f$0, (BluetoothDeviceModel) obj);
                    }
                });
            }
        }
        setYourRunnable(new Runnable() { // from class: com.uniden.rtach.ui.base.BaseActivity$$ExternalSyntheticLambda8
            @Override // java.lang.Runnable
            public final void run() {
                BaseActivity.fetchBTDevices$lambda$10(this.f$0);
            }
        });
        this.handler.postDelayed(getYourRunnable(), 5000L);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit fetchBTDevices$lambda$9(BaseActivity this$0, BluetoothDeviceModel device) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Intrinsics.checkNotNullParameter(device, "device");
        Log.d(String.valueOf(this$0.TAG_BA), "SCANNER  " + (device.isPaired() ? "Paired" : "Unpaired") + ": " + device.getName() + " (" + device.getAddress() + ')');
        BluetoothScanner bluetoothScanner = null;
        if ((StringsKt.contains$default((CharSequence) device.getName(), (CharSequence) "R4", false, 2, (Object) null) || StringsKt.contains$default((CharSequence) device.getName(), (CharSequence) "R8", false, 2, (Object) null) || StringsKt.contains$default((CharSequence) device.getName(), (CharSequence) "R9", false, 2, (Object) null) || StringsKt.contains$default((CharSequence) device.getName(), (CharSequence) "AE903i", false, 2, (Object) null)) && device.isPaired() && Intrinsics.areEqual(device.getName(), this$0.getSharedPrefs().getDeviceName())) {
            CustomLog.INSTANCE.writeFile("", this$0.getContext());
            Log.d("#1040", "fetchBTDevices isBluetoothConnected : " + (!this$0.getSharedPrefs().isBluetoothConnected()) + " == isBTConnecting : " + (!this$0.getSharedPrefs().isBTConnecting()) + " Last Device : " + this$0.getSharedPrefs().getDeviceName() + " current Device: " + device.getName() + " == " + Intrinsics.areEqual(device.getName(), this$0.getSharedPrefs().getDeviceName()));
            if (!this$0.isConnected(device.getBluetoothDevice()) && !this$0.getSharedPrefs().isBTConnecting()) {
                BluetoothScanner bluetoothScanner2 = this$0.bluetoothScanner;
                if (bluetoothScanner2 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("bluetoothScanner");
                } else {
                    bluetoothScanner = bluetoothScanner2;
                }
                bluetoothScanner.stopScan();
                this$0.getSharedPrefs().setScanRunning(false);
                if (this$0.yourRunnable != null) {
                    this$0.handler.removeCallbacks(this$0.getYourRunnable());
                }
                Log.d("#1040", "Go For Connect =>");
                this$0.getBluetoothManager().connectToDevice(device.getBluetoothDevice());
            }
        }
        this$0.getSharedPrefs().setScanRunning(true);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void fetchBTDevices$lambda$10(BaseActivity this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        this$0.fetchBTDevices();
    }

    @Override // androidx.fragment.app.FragmentActivity, androidx.activity.ComponentActivity, android.app.Activity
    public void onRequestPermissionsResult(int requestCode, String[] permissions, int[] grantResults) {
        Intrinsics.checkNotNullParameter(permissions, "permissions");
        Intrinsics.checkNotNullParameter(grantResults, "grantResults");
        if (requestCode == this.permissionsRequestCode && isBluetoothAndLocationPermissionsGranted()) {
            checkGPSIsEnable();
        }
        super.onRequestPermissionsResult(requestCode, permissions, grantResults);
    }

    public final boolean isConnected(BluetoothDevice device) {
        Intrinsics.checkNotNullParameter(device, "device");
        try {
            Object objInvoke = device.getClass().getMethod("isConnected", new Class[0]).invoke(device, new Object[0]);
            Intrinsics.checkNotNull(objInvoke, "null cannot be cast to non-null type kotlin.Boolean");
            return ((Boolean) objInvoke).booleanValue();
        } catch (Exception e) {
            throw new IllegalStateException(e);
        }
    }

    public final boolean isNetworkAvailable() {
        NetworkCapabilities networkCapabilities;
        Object systemService = getActivity().getSystemService("connectivity");
        Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.net.ConnectivityManager");
        ConnectivityManager connectivityManager = (ConnectivityManager) systemService;
        Network activeNetwork = connectivityManager.getActiveNetwork();
        if (activeNetwork == null || (networkCapabilities = connectivityManager.getNetworkCapabilities(activeNetwork)) == null) {
            return false;
        }
        return networkCapabilities.hasTransport(1) || networkCapabilities.hasTransport(0) || networkCapabilities.hasTransport(3) || networkCapabilities.hasTransport(2);
    }

    private final void updateBooleanValue(boolean newValue) {
        Boolean value = getSharedViewModel().isRequiredPermissionAllowed().getValue();
        if (value == null) {
            getSharedViewModel().isRequiredPermissionAllowed().postValue(Boolean.valueOf(newValue));
        } else if (newValue != value.booleanValue()) {
            getSharedViewModel().isRequiredPermissionAllowed().postValue(Boolean.valueOf(newValue));
        }
    }
}
