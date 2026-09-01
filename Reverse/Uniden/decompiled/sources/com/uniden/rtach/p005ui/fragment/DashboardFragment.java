package com.uniden.rtach.p005ui.fragment;

import android.app.Activity;
import android.app.Application;
import android.app.Dialog;
import android.content.Context;
import android.graphics.drawable.ColorDrawable;
import android.os.Build;
import android.os.Bundle;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.widget.EditText;
import android.widget.NumberPicker;
import android.widget.TextView;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.core.app.ActivityCompat;
import androidx.core.content.ContextCompat;
import androidx.databinding.DataBindingUtil;
import androidx.fragment.app.FragmentActivity;
import androidx.lifecycle.MutableLiveData;
import androidx.lifecycle.ViewModelProvider;
import com.google.gson.Gson;
import com.uniden.rtach.C2074R;
import com.uniden.rtach.data.model.ETCDataModel;
import com.uniden.rtach.data.sharedpref.StoreUserData;
import com.uniden.rtach.databinding.FragmentDashboardBinding;
import com.uniden.rtach.helper.AlertDataConverter;
import com.uniden.rtach.helper.BaseApplication;
import com.uniden.rtach.helper.BluetoothManager;
import com.uniden.rtach.helper.GaugeView;
import com.uniden.rtach.p005ui.base.BaseFragment;
import com.uniden.rtach.viewmodel.DashboardViewModel;
import com.uniden.rtach.viewmodel.SharedViewModel;
import java.util.List;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;

/* JADX INFO: compiled from: DashboardFragment.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000l\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0015\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\u0007¢\u0006\u0004\b\u0003\u0010\u0004J\b\u0010\u0017\u001a\u00020\u0018H\u0002J-\u0010\u0019\u001a\u00020\u00182\u0006\u0010\u001a\u001a\u00020\u00162\u000e\u0010\u001b\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u001d0\u001c2\u0006\u0010\u001e\u001a\u00020\u001fH\u0016¢\u0006\u0002\u0010 J\b\u0010!\u001a\u00020\u0018H\u0017J\u0010\u0010\"\u001a\u00020\u00182\u0006\u0010#\u001a\u00020$H\u0002J\b\u0010%\u001a\u00020\u0018H\u0016J$\u0010&\u001a\u00020'2\u0006\u0010(\u001a\u00020)2\b\u0010*\u001a\u0004\u0018\u00010+2\b\u0010,\u001a\u0004\u0018\u00010-H\u0016R\u001a\u0010\u0005\u001a\u00020\u0006X\u0086.¢\u0006\u000e\n\u0000\u001a\u0004\b\u0007\u0010\b\"\u0004\b\t\u0010\nR\u001a\u0010\u000b\u001a\u00020\fX\u0086.¢\u0006\u000e\n\u0000\u001a\u0004\b\r\u0010\u000e\"\u0004\b\u000f\u0010\u0010R\u000e\u0010\u0011\u001a\u00020\u0012X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\u0013\u001a\u00020\u0014X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\u0015\u001a\u00020\u0016X\u0082D¢\u0006\u0002\n\u0000¨\u0006."}, m491d2 = {"Lcom/uniden/rtach/ui/fragment/DashboardFragment;", "Lcom/uniden/rtach/ui/base/BaseFragment;", "Lcom/uniden/rtach/databinding/FragmentDashboardBinding;", "<init>", "()V", "viewModel", "Lcom/uniden/rtach/viewmodel/DashboardViewModel;", "getViewModel", "()Lcom/uniden/rtach/viewmodel/DashboardViewModel;", "setViewModel", "(Lcom/uniden/rtach/viewmodel/DashboardViewModel;)V", "sharedViewModel", "Lcom/uniden/rtach/viewmodel/SharedViewModel;", "getSharedViewModel", "()Lcom/uniden/rtach/viewmodel/SharedViewModel;", "setSharedViewModel", "(Lcom/uniden/rtach/viewmodel/SharedViewModel;)V", "myApp", "Lcom/uniden/rtach/helper/BaseApplication;", "sharedPrefs", "Lcom/uniden/rtach/data/sharedpref/StoreUserData;", "PERMISSION_REQUEST_CODE", "", "checkPermissions", "", "onRequestPermissionsResult", "requestCode", "permissions", "", "", "grantResults", "", "(I[Ljava/lang/String;[I)V", "initUi", "showDialog", "activity", "Landroid/app/Activity;", "setListeners", "onCreateView", "Landroid/view/View;", "inflater", "Landroid/view/LayoutInflater;", "container", "Landroid/view/ViewGroup;", "savedInstanceState", "Landroid/os/Bundle;", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class DashboardFragment extends BaseFragment<FragmentDashboardBinding> {
    private final int PERMISSION_REQUEST_CODE;
    private BaseApplication myApp;
    private StoreUserData sharedPrefs;
    public SharedViewModel sharedViewModel;
    public DashboardViewModel viewModel;

    public final void setSharedViewModel(SharedViewModel sharedViewModel) {
        Intrinsics.checkNotNullParameter(sharedViewModel, "<set-?>");
        this.sharedViewModel = sharedViewModel;
    }

    public final void setViewModel(DashboardViewModel dashboardViewModel) {
        Intrinsics.checkNotNullParameter(dashboardViewModel, "<set-?>");
        this.viewModel = dashboardViewModel;
    }

    /* JADX INFO: renamed from: com.uniden.rtach.ui.fragment.DashboardFragment$1 */
    /* JADX INFO: compiled from: DashboardFragment.kt */
    @Metadata(m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    /* synthetic */ class C21271 extends FunctionReferenceImpl implements Function3<LayoutInflater, ViewGroup, Boolean, FragmentDashboardBinding> {
        public static final C21271 INSTANCE = new C21271();

        C21271() {
            super(3, FragmentDashboardBinding.class, "inflate", "inflate(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Z)Lcom/uniden/rtach/databinding/FragmentDashboardBinding;", 0);
        }

        public final FragmentDashboardBinding invoke(LayoutInflater p0, ViewGroup viewGroup, boolean z) {
            Intrinsics.checkNotNullParameter(p0, "p0");
            return FragmentDashboardBinding.inflate(p0, viewGroup, z);
        }

        @Override // kotlin.jvm.functions.Function3
        public /* bridge */ /* synthetic */ FragmentDashboardBinding invoke(LayoutInflater layoutInflater, ViewGroup viewGroup, Boolean bool) {
            return invoke(layoutInflater, viewGroup, bool.booleanValue());
        }
    }

    public DashboardFragment() {
        super(C21271.INSTANCE);
        this.PERMISSION_REQUEST_CODE = 1212;
    }

    public final DashboardViewModel getViewModel() {
        DashboardViewModel dashboardViewModel = this.viewModel;
        if (dashboardViewModel != null) {
            return dashboardViewModel;
        }
        Intrinsics.throwUninitializedPropertyAccessException("viewModel");
        return null;
    }

    public final SharedViewModel getSharedViewModel() {
        SharedViewModel sharedViewModel = this.sharedViewModel;
        if (sharedViewModel != null) {
            return sharedViewModel;
        }
        Intrinsics.throwUninitializedPropertyAccessException("sharedViewModel");
        return null;
    }

    private final void checkPermissions() {
        if (ContextCompat.checkSelfPermission(requireContext(), "android.permission.WRITE_EXTERNAL_STORAGE") != 0) {
            ActivityCompat.requestPermissions(requireActivity(), new String[]{"android.permission.WRITE_EXTERNAL_STORAGE"}, this.PERMISSION_REQUEST_CODE);
        }
    }

    @Override // com.uniden.rtach.p005ui.base.BaseFragment, androidx.fragment.app.Fragment
    public void onRequestPermissionsResult(int requestCode, String[] permissions, int[] grantResults) {
        Intrinsics.checkNotNullParameter(permissions, "permissions");
        Intrinsics.checkNotNullParameter(grantResults, "grantResults");
        super.onRequestPermissionsResult(requestCode, permissions, grantResults);
        if (requestCode == this.PERMISSION_REQUEST_CODE) {
            if (!(grantResults.length == 0)) {
                int i = grantResults[0];
            }
        }
    }

    @Override // com.uniden.rtach.p005ui.base.BaseFragment
    public void initUi() {
        FragmentActivity fragmentActivityRequireActivity = requireActivity();
        Intrinsics.checkNotNullExpressionValue(fragmentActivityRequireActivity, "requireActivity(...)");
        setViewModel((DashboardViewModel) new ViewModelProvider(fragmentActivityRequireActivity).get(DashboardViewModel.class));
        FragmentActivity fragmentActivityRequireActivity2 = requireActivity();
        Intrinsics.checkNotNullExpressionValue(fragmentActivityRequireActivity2, "requireActivity(...)");
        setSharedViewModel((SharedViewModel) new ViewModelProvider(fragmentActivityRequireActivity2).get(SharedViewModel.class));
        getBinding().setViewModel(getViewModel());
        getBinding().setLifecycleOwner(getViewLifecycleOwner());
        FragmentActivity activity = getActivity();
        BaseApplication baseApplication = null;
        Application application = activity != null ? activity.getApplication() : null;
        Intrinsics.checkNotNull(application, "null cannot be cast to non-null type com.uniden.rtach.helper.BaseApplication");
        BaseApplication baseApplication2 = (BaseApplication) application;
        this.myApp = baseApplication2;
        if (baseApplication2 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("myApp");
            baseApplication2 = null;
        }
        this.sharedPrefs = baseApplication2.getSharedPrefs();
        checkPermissions();
        getBinding().imgSpeedometer.setTargetValue(0.0f);
        GaugeView gaugeView = getBinding().imgSpeedometer;
        BaseApplication baseApplication3 = this.myApp;
        if (baseApplication3 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("myApp");
            baseApplication3 = null;
        }
        gaugeView.setTargetSpeedUnitValue(baseApplication3.getSharedPrefs().getSpeedUnit());
        BaseApplication baseApplication4 = this.myApp;
        if (baseApplication4 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("myApp");
            baseApplication4 = null;
        }
        baseApplication4.isBTConnected().observe(this, new DashboardFragment$sam$androidx_lifecycle_Observer$0(new Function1() { // from class: com.uniden.rtach.ui.fragment.DashboardFragment$$ExternalSyntheticLambda3
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return DashboardFragment.initUi$lambda$0(this.f$0, (Boolean) obj);
            }
        }));
        BaseApplication baseApplication5 = this.myApp;
        if (baseApplication5 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("myApp");
        } else {
            baseApplication = baseApplication5;
        }
        baseApplication.getEtcDataChanged().observe(getViewLifecycleOwner(), new DashboardFragment$sam$androidx_lifecycle_Observer$0(new Function1() { // from class: com.uniden.rtach.ui.fragment.DashboardFragment$$ExternalSyntheticLambda4
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return DashboardFragment.initUi$lambda$3(this.f$0, (ETCDataModel) obj);
            }
        }));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit initUi$lambda$0(DashboardFragment this$0, Boolean bool) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        if (bool.booleanValue()) {
            this$0.getBinding().layoutMode.setEnabled(true);
            this$0.getBinding().layoutMode.setClickable(true);
        } else {
            this$0.getBinding().layoutMode.setEnabled(false);
            this$0.getBinding().layoutMode.setClickable(false);
            this$0.getViewModel().getVolt().setValue("0 V");
            this$0.getViewModel().getAltitude().setValue("0 ft");
        }
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit initUi$lambda$3(DashboardFragment this$0, ETCDataModel eTCDataModel) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        System.out.print((Object) ("DashbordFragment ===>>> " + new Gson().toJson(eTCDataModel)));
        GaugeView gaugeView = this$0.getBinding().imgSpeedometer;
        BaseApplication baseApplication = this$0.myApp;
        BaseApplication baseApplication2 = null;
        if (baseApplication == null) {
            Intrinsics.throwUninitializedPropertyAccessException("myApp");
            baseApplication = null;
        }
        gaugeView.setTargetSpeedUnitValue(baseApplication.getSharedPrefs().getSpeedUnit());
        this$0.getBinding().imgSpeedometer.setTargetValue(Float.parseFloat(eTCDataModel.getCurrentSpeed()));
        StoreUserData storeUserData = this$0.sharedPrefs;
        if (storeUserData == null) {
            Intrinsics.throwUninitializedPropertyAccessException("sharedPrefs");
            storeUserData = null;
        }
        String string = this$0.getString(Intrinsics.areEqual(storeUserData.getSpeedUnit(), "mph") ? C2074R.string.feet : C2074R.string.meter);
        Intrinsics.checkNotNull(string);
        this$0.getViewModel().getAltitude().setValue(eTCDataModel.getAltitude() + ' ' + string);
        this$0.getViewModel().getVolt().setValue(eTCDataModel.getVoltage() + ' ' + this$0.getString(C2074R.string.volt));
        Context context = this$0.getContext();
        if (context != null) {
            String direction = AlertDataConverter.INSTANCE.getDirection(eTCDataModel.getGpsDirection(), context);
            String str = direction;
            this$0.getViewModel().getDirectionVisibility().setValue(Boolean.valueOf(str.length() > 0));
            if (str.length() > 0) {
                this$0.getViewModel().getUpdateDirection().setValue(direction);
            }
        }
        MutableLiveData<String> mutableLiveData = this$0.getViewModel().get_modeType();
        BaseApplication baseApplication3 = this$0.myApp;
        if (baseApplication3 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("myApp");
        } else {
            baseApplication2 = baseApplication3;
        }
        mutableLiveData.setValue(baseApplication2.getSharedPrefs().getCityMode());
        return Unit.INSTANCE;
    }

    private final void showDialog(final Activity activity) {
        final Dialog dialog = new Dialog(activity);
        dialog.requestWindowFeature(1);
        dialog.setContentView(C2074R.layout.bottomsheetlayout);
        final List listListOf = CollectionsKt.listOf((Object[]) new String[]{"Highway", "City", "Auto", "Advanced"});
        BaseApplication baseApplication = this.myApp;
        if (baseApplication == null) {
            Intrinsics.throwUninitializedPropertyAccessException("myApp");
            baseApplication = null;
        }
        String cityMode = baseApplication.getSharedPrefs().getCityMode();
        final Ref.IntRef intRef = new Ref.IntRef();
        intRef.element = listListOf.indexOf(cityMode);
        final Ref.ObjectRef objectRef = new Ref.ObjectRef();
        objectRef.element = "";
        TextView textView = (TextView) dialog.findViewById(C2074R.id.txtSetItem);
        NumberPicker numberPicker = (NumberPicker) dialog.findViewById(C2074R.id.itemSettingPicker);
        View childAt = numberPicker.getChildAt(0);
        Intrinsics.checkNotNull(childAt, "null cannot be cast to non-null type android.widget.EditText");
        EditText editText = (EditText) childAt;
        editText.setFocusable(false);
        editText.setClickable(false);
        numberPicker.setMinValue(0);
        numberPicker.setMaxValue(listListOf.size() - 1);
        numberPicker.setValue(intRef.element);
        textView.setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.fragment.DashboardFragment$$ExternalSyntheticLambda1
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                DashboardFragment.showDialog$lambda$4(objectRef, activity, this, listListOf, intRef, dialog, view);
            }
        });
        numberPicker.setOnValueChangedListener(new NumberPicker.OnValueChangeListener() { // from class: com.uniden.rtach.ui.fragment.DashboardFragment$$ExternalSyntheticLambda2
            @Override // android.widget.NumberPicker.OnValueChangeListener
            public final void onValueChange(NumberPicker numberPicker2, int i, int i2) {
                DashboardFragment.showDialog$lambda$5(intRef, objectRef, numberPicker2, i, i2);
            }
        });
        if (listListOf.size() > 1) {
            numberPicker.setMaxValue(listListOf.size() - 1);
        } else {
            numberPicker.setMaxValue(0);
        }
        if (Build.VERSION.SDK_INT >= 29) {
            numberPicker.setTextColor(activity.getColor(C2074R.color.black));
        }
        numberPicker.setWrapSelectorWheel(false);
        numberPicker.setDisplayedValues((String[]) listListOf.toArray(new String[0]));
        dialog.show();
        Window window = dialog.getWindow();
        Intrinsics.checkNotNull(window);
        window.setLayout(-1, -2);
        Window window2 = dialog.getWindow();
        Intrinsics.checkNotNull(window2);
        window2.setBackgroundDrawable(new ColorDrawable(0));
        Window window3 = dialog.getWindow();
        Intrinsics.checkNotNull(window3);
        window3.setGravity(80);
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Multi-variable type inference failed */
    public static final void showDialog$lambda$4(Ref.ObjectRef writeStr, Activity activity, DashboardFragment this$0, List listMode, Ref.IntRef selectedIndex, Dialog dialog, View view) {
        Intrinsics.checkNotNullParameter(writeStr, "$writeStr");
        Intrinsics.checkNotNullParameter(activity, "$activity");
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Intrinsics.checkNotNullParameter(listMode, "$listMode");
        Intrinsics.checkNotNullParameter(selectedIndex, "$selectedIndex");
        Intrinsics.checkNotNullParameter(dialog, "$dialog");
        Log.d("TAG_I", (String) writeStr.element);
        BluetoothManager.INSTANCE.getInstance(activity).writeCharacteristic((String) writeStr.element);
        this$0.getViewModel().get_modeType().setValue(listMode.get(selectedIndex.element));
        dialog.dismiss();
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Type inference failed for: r0v3, types: [T, java.lang.String] */
    public static final void showDialog$lambda$5(Ref.IntRef selectedIndex, Ref.ObjectRef writeStr, NumberPicker numberPicker, int i, int i2) {
        Intrinsics.checkNotNullParameter(selectedIndex, "$selectedIndex");
        Intrinsics.checkNotNullParameter(writeStr, "$writeStr");
        selectedIndex.element = i2;
        writeStr.element = "BTreqSETC:1=" + selectedIndex.element;
    }

    @Override // com.uniden.rtach.p005ui.base.BaseFragment
    public void setListeners() {
        getBinding().layoutMode.setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.fragment.DashboardFragment$$ExternalSyntheticLambda0
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                DashboardFragment.setListeners$lambda$6(this.f$0, view);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setListeners$lambda$6(DashboardFragment this$0, View view) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        BaseApplication baseApplication = this$0.myApp;
        if (baseApplication == null) {
            Intrinsics.throwUninitializedPropertyAccessException("myApp");
            baseApplication = null;
        }
        if (Intrinsics.areEqual((Object) baseApplication.isBTConnected().getValue(), (Object) true)) {
            FragmentActivity fragmentActivityRequireActivity = this$0.requireActivity();
            Intrinsics.checkNotNullExpressionValue(fragmentActivityRequireActivity, "requireActivity(...)");
            this$0.showDialog(fragmentActivityRequireActivity);
        }
    }

    @Override // com.uniden.rtach.p005ui.base.BaseFragment, androidx.fragment.app.Fragment
    public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {
        Intrinsics.checkNotNullParameter(inflater, "inflater");
        setBinding(DataBindingUtil.inflate(inflater, C2074R.layout.fragment_dashboard, container, false));
        View root = getBinding().getRoot();
        Intrinsics.checkNotNullExpressionValue(root, "getRoot(...)");
        return root;
    }
}
