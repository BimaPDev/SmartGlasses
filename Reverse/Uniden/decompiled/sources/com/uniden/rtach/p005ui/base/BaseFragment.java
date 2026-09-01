package com.uniden.rtach.p005ui.base;

import android.bluetooth.BluetoothAdapter;
import android.content.Context;
import android.content.Intent;
import android.location.LocationManager;
import android.os.Build;
import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Toast;
import androidx.activity.result.ActivityResult;
import androidx.activity.result.ActivityResultCallback;
import androidx.activity.result.ActivityResultLauncher;
import androidx.activity.result.contract.ActivityResultContracts;
import androidx.constraintlayout.core.motion.utils.TypedValues;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.core.app.ActivityCompat;
import androidx.core.content.ContextCompat;
import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentActivity;
import androidx.lifecycle.ViewModelProvider;
import androidx.viewbinding.ViewBinding;
import com.google.firebase.analytics.FirebaseAnalytics;
import com.uniden.rtach.helper.BluetoothManager;
import com.uniden.rtach.viewmodel.BleDeviceListViewModel;
import com.uniden.rtach.viewmodel.SharedViewModel;
import java.util.Set;
import kotlin.Metadata;
import kotlin.collections.SetsKt;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: BaseFragment.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000~\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u000b\n\u0002\b\n\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\n\n\u0002\u0010\u0011\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0015\n\u0002\b\u0006\b&\u0018\u0000*\b\b\u0000\u0010\u0001*\u00020\u00022\u00020\u0003B3\u0012*\u0010\u0004\u001a&\u0012\u0004\u0012\u00020\u0007\u0012\u0006\u0012\u0004\u0018\u00010\b\u0012\u0004\u0012\u00020\t\u0012\u0004\u0012\u00028\u00000\u0006j\b\u0012\u0004\u0012\u00028\u0000`\u0005¢\u0006\u0004\b\n\u0010\u000bJ&\u0010'\u001a\u0004\u0018\u00010(2\u0006\u0010)\u001a\u00020\u00072\b\u0010*\u001a\u0004\u0018\u00010\b2\b\u0010+\u001a\u0004\u0018\u00010,H\u0016J\b\u0010-\u001a\u00020.H\u0002J\u001a\u0010/\u001a\u00020.2\u0006\u00100\u001a\u00020(2\b\u0010+\u001a\u0004\u0018\u00010,H\u0016J\u0006\u00101\u001a\u00020.J\b\u00102\u001a\u00020\tH\u0002J\b\u00103\u001a\u00020.H\u0002J\b\u00104\u001a\u00020.H\u0002J\b\u00105\u001a\u00020.H\u0002J-\u00106\u001a\u00020.2\u0006\u00107\u001a\u00020\u001a2\u000e\u00108\u001a\n\u0012\u0006\b\u0001\u0012\u00020:092\u0006\u0010;\u001a\u00020<H\u0016¢\u0006\u0002\u0010=J\u0010\u0010>\u001a\u00020.2\u0006\u0010?\u001a\u00020\tH\u0002J\b\u0010@\u001a\u00020.H&J\b\u0010A\u001a\u00020.H&R4\u0010\u0004\u001a&\u0012\u0004\u0012\u00020\u0007\u0012\u0006\u0012\u0004\u0018\u00010\b\u0012\u0004\u0012\u00020\t\u0012\u0004\u0012\u00028\u00000\u0006j\b\u0012\u0004\u0012\u00028\u0000`\u0005X\u0082\u0004¢\u0006\u0004\n\u0002\u0010\fR\u001c\u0010\r\u001a\u00028\u0000X\u0084.¢\u0006\u0010\n\u0002\u0010\u0012\u001a\u0004\b\u000e\u0010\u000f\"\u0004\b\u0010\u0010\u0011R\u000e\u0010\u0013\u001a\u00020\u0014X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\u0015\u001a\u00020\u0016X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\u0017\u001a\u00020\u0018X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\u0019\u001a\u00020\u001aX\u0082D¢\u0006\u0002\n\u0000R\u000e\u0010\u001b\u001a\u00020\u001aX\u0082D¢\u0006\u0002\n\u0000R\u000e\u0010\u001c\u001a\u00020\u001aX\u0082D¢\u0006\u0002\n\u0000R\u001a\u0010\u001d\u001a\u00020\u001eX\u0086.¢\u0006\u000e\n\u0000\u001a\u0004\b\u001f\u0010 \"\u0004\b!\u0010\"R\u0014\u0010#\u001a\b\u0012\u0004\u0012\u00020%0$X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010&\u001a\b\u0012\u0004\u0012\u00020%0$X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006B"}, m491d2 = {"Lcom/uniden/rtach/ui/base/BaseFragment;", "VB", "Landroidx/viewbinding/ViewBinding;", "Landroidx/fragment/app/Fragment;", "inflate", "Lcom/uniden/rtach/ui/base/FragmentInflate;", "Lkotlin/Function3;", "Landroid/view/LayoutInflater;", "Landroid/view/ViewGroup;", "", "<init>", "(Lkotlin/jvm/functions/Function3;)V", "Lkotlin/jvm/functions/Function3;", "binding", "getBinding", "()Landroidx/viewbinding/ViewBinding;", "setBinding", "(Landroidx/viewbinding/ViewBinding;)V", "Landroidx/viewbinding/ViewBinding;", "sharedViewModel", "Lcom/uniden/rtach/viewmodel/SharedViewModel;", "viewModel", "Lcom/uniden/rtach/viewmodel/BleDeviceListViewModel;", "bluetoothManager", "Lcom/uniden/rtach/helper/BluetoothManager;", "permissionsRequestCode", "", "bluetoothEnableRequestCode", "enableGpsRequestCode", "locationManager", "Landroid/location/LocationManager;", "getLocationManager", "()Landroid/location/LocationManager;", "setLocationManager", "(Landroid/location/LocationManager;)V", "gpsResultLauncher", "Landroidx/activity/result/ActivityResultLauncher;", "Landroid/content/Intent;", "bluetoothResultLauncher", "onCreateView", "Landroid/view/View;", "inflater", "container", "savedInstanceState", "Landroid/os/Bundle;", "initVariables", "", "onViewCreated", "view", "startPermissionCheck", "isBluetoothAndLocationPermissionsGranted", "requestBluetoothAndLocationPermission", "checkGPSIsEnable", "checkBluetoothIsEnable", "onRequestPermissionsResult", "requestCode", "permissions", "", "", "grantResults", "", "(I[Ljava/lang/String;[I)V", "updateBooleanValue", "newValue", "initUi", "setListeners", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public abstract class BaseFragment<VB extends ViewBinding> extends Fragment {
    protected VB binding;
    private final int bluetoothEnableRequestCode;
    private BluetoothManager bluetoothManager;
    private final ActivityResultLauncher<Intent> bluetoothResultLauncher;
    private final int enableGpsRequestCode;
    private final ActivityResultLauncher<Intent> gpsResultLauncher;
    private final Function3<LayoutInflater, ViewGroup, Boolean, VB> inflate;
    public LocationManager locationManager;
    private final int permissionsRequestCode;
    private SharedViewModel sharedViewModel;
    private BleDeviceListViewModel viewModel;

    public abstract void initUi();

    protected final void setBinding(VB vb) {
        Intrinsics.checkNotNullParameter(vb, "<set-?>");
        this.binding = vb;
    }

    public abstract void setListeners();

    public final void setLocationManager(LocationManager locationManager) {
        Intrinsics.checkNotNullParameter(locationManager, "<set-?>");
        this.locationManager = locationManager;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public BaseFragment(Function3<? super LayoutInflater, ? super ViewGroup, ? super Boolean, ? extends VB> inflate) {
        Intrinsics.checkNotNullParameter(inflate, "inflate");
        this.inflate = inflate;
        this.permissionsRequestCode = 600;
        this.bluetoothEnableRequestCode = 601;
        this.enableGpsRequestCode = TypedValues.MotionType.TYPE_EASING;
        ActivityResultLauncher activityResultLauncherRegisterForActivityResult = registerForActivityResult(new ActivityResultContracts.StartActivityForResult(), new ActivityResultCallback() { // from class: com.uniden.rtach.ui.base.BaseFragment$$ExternalSyntheticLambda0
            @Override // androidx.activity.result.ActivityResultCallback
            public final void onActivityResult(Object obj) {
                BaseFragment.gpsResultLauncher$lambda$0(this.f$0, (ActivityResult) obj);
            }
        });
        Intrinsics.checkNotNullExpressionValue(activityResultLauncherRegisterForActivityResult, "registerForActivityResult(...)");
        this.gpsResultLauncher = activityResultLauncherRegisterForActivityResult;
        ActivityResultLauncher activityResultLauncherRegisterForActivityResult2 = registerForActivityResult(new ActivityResultContracts.StartActivityForResult(), new ActivityResultCallback() { // from class: com.uniden.rtach.ui.base.BaseFragment$$ExternalSyntheticLambda1
            @Override // androidx.activity.result.ActivityResultCallback
            public final void onActivityResult(Object obj) {
                BaseFragment.bluetoothResultLauncher$lambda$1(this.f$0, (ActivityResult) obj);
            }
        });
        Intrinsics.checkNotNullExpressionValue(activityResultLauncherRegisterForActivityResult2, "registerForActivityResult(...)");
        this.bluetoothResultLauncher = activityResultLauncherRegisterForActivityResult2;
    }

    protected final VB getBinding() {
        VB vb = this.binding;
        if (vb != null) {
            return vb;
        }
        Intrinsics.throwUninitializedPropertyAccessException("binding");
        return null;
    }

    public final LocationManager getLocationManager() {
        LocationManager locationManager = this.locationManager;
        if (locationManager != null) {
            return locationManager;
        }
        Intrinsics.throwUninitializedPropertyAccessException("locationManager");
        return null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void gpsResultLauncher$lambda$0(BaseFragment this$0, ActivityResult result) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Intrinsics.checkNotNullParameter(result, "result");
        this$0.checkGPSIsEnable();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void bluetoothResultLauncher$lambda$1(BaseFragment this$0, ActivityResult result) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Intrinsics.checkNotNullParameter(result, "result");
        if (result.getResultCode() == -1) {
            this$0.updateBooleanValue(true);
        } else {
            Toast.makeText(this$0.getActivity(), "Please turn on the Bluetoth", 0).show();
            this$0.checkBluetoothIsEnable();
        }
    }

    @Override // androidx.fragment.app.Fragment
    public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {
        Intrinsics.checkNotNullParameter(inflater, "inflater");
        setBinding(this.inflate.invoke(inflater, container, false));
        initVariables();
        return getBinding().getRoot();
    }

    private final void initVariables() {
        FragmentActivity fragmentActivityRequireActivity = requireActivity();
        Intrinsics.checkNotNullExpressionValue(fragmentActivityRequireActivity, "requireActivity(...)");
        this.sharedViewModel = (SharedViewModel) new ViewModelProvider(fragmentActivityRequireActivity).get(SharedViewModel.class);
        FragmentActivity fragmentActivityRequireActivity2 = requireActivity();
        Intrinsics.checkNotNullExpressionValue(fragmentActivityRequireActivity2, "requireActivity(...)");
        this.viewModel = (BleDeviceListViewModel) new ViewModelProvider(fragmentActivityRequireActivity2).get(BleDeviceListViewModel.class);
        Object systemService = requireActivity().getSystemService(FirebaseAnalytics.Param.LOCATION);
        Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.location.LocationManager");
        setLocationManager((LocationManager) systemService);
        Context baseContext = requireActivity().getBaseContext();
        Intrinsics.checkNotNullExpressionValue(baseContext, "getBaseContext(...)");
        this.bluetoothManager = new BluetoothManager(baseContext);
    }

    @Override // androidx.fragment.app.Fragment
    public void onViewCreated(View view, Bundle savedInstanceState) {
        Intrinsics.checkNotNullParameter(view, "view");
        super.onViewCreated(view, savedInstanceState);
        initUi();
        setListeners();
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
            if (ContextCompat.checkSelfPermission(requireActivity().getBaseContext(), "android.permission.ACCESS_FINE_LOCATION") == 0 && ContextCompat.checkSelfPermission(requireActivity().getBaseContext(), "android.permission.BLUETOOTH_CONNECT") == 0 && ContextCompat.checkSelfPermission(requireActivity().getBaseContext(), "android.permission.BLUETOOTH_SCAN") == 0 && ContextCompat.checkSelfPermission(requireActivity().getBaseContext(), "android.permission.BLUETOOTH_ADMIN") == 0 && ContextCompat.checkSelfPermission(requireActivity().getBaseContext(), "android.permission.BLUETOOTH") == 0) {
                return true;
            }
        } else if (ContextCompat.checkSelfPermission(requireActivity().getBaseContext(), "android.permission.ACCESS_FINE_LOCATION") == 0) {
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
        ActivityCompat.requestPermissions(requireActivity(), (String[]) setMutableSetOf.toArray(new String[0]), this.permissionsRequestCode);
    }

    private final void checkGPSIsEnable() {
        if (getLocationManager().isProviderEnabled("gps")) {
            checkBluetoothIsEnable();
        } else {
            this.gpsResultLauncher.launch(new Intent("android.settings.LOCATION_SOURCE_SETTINGS"));
        }
    }

    private final void checkBluetoothIsEnable() {
        Object systemService = requireActivity().getSystemService("bluetooth");
        Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.bluetooth.BluetoothManager");
        BluetoothAdapter adapter = ((android.bluetooth.BluetoothManager) systemService).getAdapter();
        if (adapter != null) {
            if (!adapter.isEnabled()) {
                this.bluetoothResultLauncher.launch(new Intent("android.bluetooth.adapter.action.REQUEST_ENABLE"));
                return;
            } else {
                updateBooleanValue(true);
                return;
            }
        }
        Toast.makeText(requireActivity(), "Device does not support Bluetooth", 0).show();
    }

    @Override // androidx.fragment.app.Fragment
    public void onRequestPermissionsResult(int requestCode, String[] permissions, int[] grantResults) {
        Intrinsics.checkNotNullParameter(permissions, "permissions");
        Intrinsics.checkNotNullParameter(grantResults, "grantResults");
        if (requestCode == this.permissionsRequestCode && isBluetoothAndLocationPermissionsGranted()) {
            checkGPSIsEnable();
        }
        super.onRequestPermissionsResult(requestCode, permissions, grantResults);
    }

    private final void updateBooleanValue(boolean newValue) {
        SharedViewModel sharedViewModel = this.sharedViewModel;
        if (sharedViewModel == null) {
            Intrinsics.throwUninitializedPropertyAccessException("sharedViewModel");
            sharedViewModel = null;
        }
        sharedViewModel.isRequiredPermissionAllowed().setValue(Boolean.valueOf(newValue));
    }
}
