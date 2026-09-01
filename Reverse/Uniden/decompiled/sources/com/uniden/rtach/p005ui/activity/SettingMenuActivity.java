package com.uniden.rtach.p005ui.activity;

import android.app.Application;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.databinding.DataBindingUtil;
import androidx.lifecycle.MutableLiveData;
import androidx.lifecycle.ViewModelLazy;
import androidx.lifecycle.ViewModelProvider;
import androidx.lifecycle.ViewModelStore;
import androidx.lifecycle.viewmodel.CreationExtras;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;
import com.uniden.rtach.C2074R;
import com.uniden.rtach.data.model.RadarSettingsModel;
import com.uniden.rtach.data.model.RadarSettingsTitleModel;
import com.uniden.rtach.data.model.RelationalField;
import com.uniden.rtach.databinding.ActivitySettingMenuBinding;
import com.uniden.rtach.helper.BaseApplication;
import com.uniden.rtach.helper.BluetoothManager;
import com.uniden.rtach.helper.BluetoothState;
import com.uniden.rtach.helper.Constant;
import com.uniden.rtach.p005ui.adapter.RadarItemSettingAdapter;
import com.uniden.rtach.viewmodel.SettingMenuItemViewModel;
import dagger.hilt.android.AndroidEntryPoint;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.text.StringsKt;

/* JADX INFO: compiled from: SettingMenuActivity.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000L\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010!\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\b\u0004\b\u0007\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\u0007¢\u0006\u0004\b\u0003\u0010\u0004J\b\u0010\u0017\u001a\u00020\u0018H\u0015J\b\u0010\u0019\u001a\u00020\u0018H\u0014J\u001c\u0010\u001a\u001a\b\u0012\u0004\u0012\u00020\u00130\u001b2\f\u0010\u001c\u001a\b\u0012\u0004\u0012\u00020\u00130\u001bH\u0002J\b\u0010\u001d\u001a\u00020\u0018H\u0002J\b\u0010\u001e\u001a\u00020\u0018H\u0014R\u001b\u0010\u0005\u001a\u00020\u00068BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b\t\u0010\n\u001a\u0004\b\u0007\u0010\bR\u000e\u0010\u000b\u001a\u00020\fX\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\r\u001a\u00020\u000eX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u000f\u001a\u00020\u0010X\u0082.¢\u0006\u0002\n\u0000R\u0014\u0010\u0011\u001a\b\u0012\u0004\u0012\u00020\u00130\u0012X\u0082\u000e¢\u0006\u0002\n\u0000R\u0014\u0010\u0014\u001a\b\u0012\u0004\u0012\u00020\u00130\u0012X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0015\u001a\u00020\u0016X\u0082.¢\u0006\u0002\n\u0000¨\u0006\u001f"}, m491d2 = {"Lcom/uniden/rtach/ui/activity/SettingMenuActivity;", "Lcom/uniden/rtach/ui/base/BaseActivity;", "Lcom/uniden/rtach/databinding/ActivitySettingMenuBinding;", "<init>", "()V", "viewModel", "Lcom/uniden/rtach/viewmodel/SettingMenuItemViewModel;", "getViewModel", "()Lcom/uniden/rtach/viewmodel/SettingMenuItemViewModel;", "viewModel$delegate", "Lkotlin/Lazy;", "adapter", "Lcom/uniden/rtach/ui/adapter/RadarItemSettingAdapter;", "adapterSet", "", "myApp", "Lcom/uniden/rtach/helper/BaseApplication;", "settingList", "", "Lcom/uniden/rtach/data/model/RadarSettingsModel;", "newSettingList", "layoutManager", "Landroidx/recyclerview/widget/LinearLayoutManager;", "initUi", "", "setListeners", "filterSettingViseMode", "", "radarSettingsList", "loadRadarSettingItem", "onPause", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
@AndroidEntryPoint
public final class SettingMenuActivity extends Hilt_SettingMenuActivity<ActivitySettingMenuBinding> {
    private RadarItemSettingAdapter adapter;
    private boolean adapterSet;
    private LinearLayoutManager layoutManager;
    private BaseApplication myApp;
    private List<RadarSettingsModel> newSettingList;
    private List<RadarSettingsModel> settingList;

    /* JADX INFO: renamed from: viewModel$delegate, reason: from kotlin metadata */
    private final Lazy viewModel;

    /* JADX WARN: Multi-variable type inference failed */
    public static final /* synthetic */ ActivitySettingMenuBinding access$getBinding(SettingMenuActivity settingMenuActivity) {
        return (ActivitySettingMenuBinding) settingMenuActivity.getBinding();
    }

    /* JADX INFO: renamed from: com.uniden.rtach.ui.activity.SettingMenuActivity$1 */
    /* JADX INFO: compiled from: SettingMenuActivity.kt */
    @Metadata(m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    /* synthetic */ class C21181 extends FunctionReferenceImpl implements Function1<LayoutInflater, ActivitySettingMenuBinding> {
        public static final C21181 INSTANCE = new C21181();

        C21181() {
            super(1, ActivitySettingMenuBinding.class, "inflate", "inflate(Landroid/view/LayoutInflater;)Lcom/uniden/rtach/databinding/ActivitySettingMenuBinding;", 0);
        }

        @Override // kotlin.jvm.functions.Function1
        public final ActivitySettingMenuBinding invoke(LayoutInflater p0) {
            Intrinsics.checkNotNullParameter(p0, "p0");
            return ActivitySettingMenuBinding.inflate(p0);
        }
    }

    public SettingMenuActivity() {
        super(C21181.INSTANCE);
        final SettingMenuActivity settingMenuActivity = this;
        final Function0 function0 = null;
        this.viewModel = new ViewModelLazy(Reflection.getOrCreateKotlinClass(SettingMenuItemViewModel.class), new Function0<ViewModelStore>() { // from class: com.uniden.rtach.ui.activity.SettingMenuActivity$special$$inlined$viewModels$default$2
            {
                super(0);
            }

            /* JADX WARN: Can't rename method to resolve collision */
            @Override // kotlin.jvm.functions.Function0
            public final ViewModelStore invoke() {
                return settingMenuActivity.getViewModelStore();
            }
        }, new Function0<ViewModelProvider.Factory>() { // from class: com.uniden.rtach.ui.activity.SettingMenuActivity$special$$inlined$viewModels$default$1
            {
                super(0);
            }

            /* JADX WARN: Can't rename method to resolve collision */
            @Override // kotlin.jvm.functions.Function0
            public final ViewModelProvider.Factory invoke() {
                return settingMenuActivity.getDefaultViewModelProviderFactory();
            }
        }, new Function0<CreationExtras>() { // from class: com.uniden.rtach.ui.activity.SettingMenuActivity$special$$inlined$viewModels$default$3
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(0);
            }

            /* JADX WARN: Can't rename method to resolve collision */
            @Override // kotlin.jvm.functions.Function0
            public final CreationExtras invoke() {
                CreationExtras creationExtras;
                Function0 function1 = function0;
                return (function1 == null || (creationExtras = (CreationExtras) function1.invoke()) == null) ? settingMenuActivity.getDefaultViewModelCreationExtras() : creationExtras;
            }
        });
        this.settingList = new ArrayList();
        this.newSettingList = new ArrayList();
    }

    private final SettingMenuItemViewModel getViewModel() {
        return (SettingMenuItemViewModel) this.viewModel.getValue();
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // com.uniden.rtach.p005ui.base.BaseActivity
    protected void initUi() {
        setBinding(DataBindingUtil.setContentView(this, C2074R.layout.activity_setting_menu));
        ((ActivitySettingMenuBinding) getBinding()).setViewModel(getViewModel());
        ((ActivitySettingMenuBinding) getBinding()).setLifecycleOwner(this);
        Application application = getApplication();
        Intrinsics.checkNotNull(application, "null cannot be cast to non-null type com.uniden.rtach.helper.BaseApplication");
        this.myApp = (BaseApplication) application;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setListeners$lambda$0(SettingMenuActivity this$0, View view) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        this$0.finish();
        BaseApplication baseApplication = this$0.myApp;
        if (baseApplication == null) {
            Intrinsics.throwUninitializedPropertyAccessException("myApp");
            baseApplication = null;
        }
        baseApplication.getAlertCharacteristicChanged().postValue("0&0&0&0");
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // com.uniden.rtach.p005ui.base.BaseActivity
    protected void setListeners() {
        ((ActivitySettingMenuBinding) getBinding()).btnBack.setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.activity.SettingMenuActivity$$ExternalSyntheticLambda0
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                SettingMenuActivity.setListeners$lambda$0(this.f$0, view);
            }
        });
        BaseApplication baseApplication = this.myApp;
        BaseApplication baseApplication2 = null;
        if (baseApplication == null) {
            Intrinsics.throwUninitializedPropertyAccessException("myApp");
            baseApplication = null;
        }
        baseApplication.getBluetoothConnectionState().observeForever(new SettingMenuActivity$sam$androidx_lifecycle_Observer$0(new Function1() { // from class: com.uniden.rtach.ui.activity.SettingMenuActivity$$ExternalSyntheticLambda1
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return SettingMenuActivity.setListeners$lambda$1(this.f$0, (BluetoothState) obj);
            }
        }));
        ((ActivitySettingMenuBinding) getBinding()).txtBasic.setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.activity.SettingMenuActivity$$ExternalSyntheticLambda2
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                SettingMenuActivity.setListeners$lambda$2(this.f$0, view);
            }
        });
        ((ActivitySettingMenuBinding) getBinding()).txtExpert.setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.activity.SettingMenuActivity$$ExternalSyntheticLambda3
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                SettingMenuActivity.setListeners$lambda$3(this.f$0, view);
            }
        });
        BaseApplication baseApplication3 = this.myApp;
        if (baseApplication3 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("myApp");
        } else {
            baseApplication2 = baseApplication3;
        }
        baseApplication2.getSettingList().observe(this, new SettingMenuActivity$sam$androidx_lifecycle_Observer$0(new Function1() { // from class: com.uniden.rtach.ui.activity.SettingMenuActivity$$ExternalSyntheticLambda4
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return SettingMenuActivity.setListeners$lambda$4(this.f$0, (List) obj);
            }
        }));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit setListeners$lambda$1(SettingMenuActivity this$0, BluetoothState bluetoothState) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Log.e("btconnected", "connected");
        if (bluetoothState == BluetoothState.STATE_CONNECTED) {
            BluetoothManager.INSTANCE.getInstance(this$0.getContext()).enableReadSettingsNotification2(Constant.INSTANCE.getSETTINGS_CHARACTERISTIC_UUID_1());
        }
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setListeners$lambda$2(SettingMenuActivity this$0, View view) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Boolean value = this$0.getViewModel().isBasicMode().getValue();
        Intrinsics.checkNotNull(value);
        if (value.booleanValue()) {
            return;
        }
        BluetoothManager.INSTANCE.getInstance(this$0.getContext()).writeCharacteristic("BTreqSETC:0=0");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setListeners$lambda$3(SettingMenuActivity this$0, View view) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Boolean value = this$0.getViewModel().isBasicMode().getValue();
        Intrinsics.checkNotNull(value);
        if (value.booleanValue()) {
            BluetoothManager.INSTANCE.getInstance(this$0.getContext()).writeCharacteristic("BTreqSETC:0=1");
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit setListeners$lambda$4(SettingMenuActivity this$0, List list) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        BaseApplication baseApplication = this$0.myApp;
        RadarItemSettingAdapter radarItemSettingAdapter = null;
        if (baseApplication == null) {
            Intrinsics.throwUninitializedPropertyAccessException("myApp");
            baseApplication = null;
        }
        if (Intrinsics.areEqual((Object) baseApplication.isBTConnected().getValue(), (Object) false)) {
            MutableLiveData<Boolean> mutableLiveDataIsSettingsAvailable = this$0.getViewModel().isSettingsAvailable();
            Intrinsics.checkNotNull(list);
            mutableLiveDataIsSettingsAvailable.setValue(Boolean.valueOf(!list.isEmpty()));
            this$0.adapterSet = false;
            this$0.settingList = new ArrayList();
            this$0.newSettingList = new ArrayList();
        } else {
            this$0.getViewModel().isSettingsAvailable().setValue(true);
            String settingMode = this$0.getSharedPrefs().getSettingMode();
            if (Intrinsics.areEqual(settingMode, "Basic")) {
                this$0.getViewModel().isBasicMode().setValue(true);
            } else if (Intrinsics.areEqual(settingMode, "Expert")) {
                this$0.getViewModel().isBasicMode().setValue(false);
            } else {
                this$0.getViewModel().isBasicMode().setValue(false);
            }
            if (!this$0.adapterSet) {
                this$0.settingList.clear();
                ArrayList arrayList = new ArrayList();
                this$0.settingList = arrayList;
                Intrinsics.checkNotNull(list);
                arrayList.addAll(this$0.filterSettingViseMode(list));
                this$0.loadRadarSettingItem();
                Log.d("data", this$0.settingList.toString());
            } else {
                this$0.newSettingList.clear();
                ArrayList arrayList2 = new ArrayList();
                this$0.newSettingList = arrayList2;
                Intrinsics.checkNotNull(list);
                arrayList2.addAll(this$0.filterSettingViseMode(list));
                RadarItemSettingAdapter radarItemSettingAdapter2 = this$0.adapter;
                if (radarItemSettingAdapter2 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("adapter");
                } else {
                    radarItemSettingAdapter = radarItemSettingAdapter2;
                }
                radarItemSettingAdapter.updateData(this$0.settingList, this$0.newSettingList);
                this$0.settingList.clear();
                this$0.settingList.addAll(this$0.newSettingList);
            }
        }
        return Unit.INSTANCE;
    }

    /* JADX WARN: Code duplicated, block: B:101:0x01eb  */
    /* JADX WARN: Code duplicated, block: B:104:0x01f9  */
    /* JADX WARN: Code duplicated, block: B:130:0x0251  */
    /* JADX WARN: Code duplicated, block: B:133:0x025e  */
    /* JADX WARN: Code duplicated, block: B:139:0x0275  */
    /* JADX WARN: Code duplicated, block: B:143:0x0282  */
    /* JADX WARN: Code duplicated, block: B:148:0x0298  */
    /* JADX WARN: Code duplicated, block: B:218:0x0270 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:221:0x0293 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:223:? A[LOOP:12: B:141:0x027c->B:223:?, LOOP_END, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:90:0x01bf  */
    /* JADX WARN: Code duplicated, block: B:92:0x01c3  */
    /* JADX WARN: Code duplicated, block: B:95:0x01d3  */
    /* JADX WARN: Code duplicated, block: B:98:0x01df  */
    private final List<RadarSettingsModel> filterSettingViseMode(List<RadarSettingsModel> radarSettingsList) {
        Object obj;
        BaseApplication baseApplication;
        boolean zIsLaserEnable;
        BaseApplication baseApplication2;
        BaseApplication baseApplication3;
        BaseApplication baseApplication4;
        Iterator<T> it;
        Object next;
        RadarSettingsModel radarSettingsModel;
        RadarSettingsModel radarSettingsModel2;
        Object next2;
        Object next3;
        Object next4;
        int i = 0;
        while (true) {
            obj = null;
            if (i >= radarSettingsList.size()) {
                break;
            }
            RadarSettingsModel radarSettingsModel3 = radarSettingsList.get(i);
            if (Intrinsics.areEqual(radarSettingsModel3.getItem(), "K Bogey Tone")) {
                List<RelationalField> relational_fields = radarSettingsModel3.getRelational_fields();
                List<RelationalField> list = relational_fields;
                if (list != null && !list.isEmpty()) {
                    for (RelationalField relationalField : relational_fields) {
                        int selected_value = radarSettingsModel3.getSelected_value();
                        int relational_value = relationalField.getRelational_value();
                        if (relationalField.getRelational_model() != null) {
                            List<String> relational_model = relationalField.getRelational_model();
                            BaseApplication baseApplication5 = this.myApp;
                            if (baseApplication5 == null) {
                                Intrinsics.throwUninitializedPropertyAccessException("myApp");
                                baseApplication5 = null;
                            }
                            if (relational_model.contains(StringsKt.substringBefore$default(baseApplication5.getSharedPrefs().getDeviceName(), "@", (String) null, 2, (Object) null))) {
                            }
                        }
                        if (selected_value == relational_value) {
                            Iterator<T> it2 = relationalField.getVisibility_index().iterator();
                            while (it2.hasNext()) {
                                int iIntValue = ((Number) it2.next()).intValue();
                                if (radarSettingsModel3.isAvailable()) {
                                    Iterator<T> it3 = radarSettingsList.iterator();
                                    do {
                                        if (!it3.hasNext()) {
                                            next4 = null;
                                            break;
                                        }
                                        next4 = it3.next();
                                    } while (((RadarSettingsModel) next4).getWrite_index() != iIntValue);
                                    RadarSettingsModel radarSettingsModel4 = (RadarSettingsModel) next4;
                                    if (radarSettingsModel4 != null) {
                                        radarSettingsModel4.setAvailable(false);
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                List<RelationalField> relational_fields2 = radarSettingsModel3.getRelational_fields();
                List<RelationalField> list2 = relational_fields2;
                if (list2 != null && !list2.isEmpty()) {
                    for (RelationalField relationalField2 : relational_fields2) {
                        int selected_value2 = radarSettingsModel3.getSelected_value();
                        int relational_value2 = relationalField2.getRelational_value();
                        if (relationalField2.getRelational_model() != null) {
                            List<String> relational_model2 = relationalField2.getRelational_model();
                            BaseApplication baseApplication6 = this.myApp;
                            if (baseApplication6 == null) {
                                Intrinsics.throwUninitializedPropertyAccessException("myApp");
                                baseApplication6 = null;
                            }
                            if (relational_model2.contains(StringsKt.substringBefore$default(baseApplication6.getSharedPrefs().getDeviceName(), "@", (String) null, 2, (Object) null))) {
                            }
                        }
                        if (selected_value2 != relational_value2) {
                            Iterator<T> it4 = relationalField2.getVisibility_index().iterator();
                            while (it4.hasNext()) {
                                int iIntValue2 = ((Number) it4.next()).intValue();
                                if (radarSettingsModel3.isAvailable()) {
                                    Iterator<T> it5 = radarSettingsList.iterator();
                                    do {
                                        if (!it5.hasNext()) {
                                            next3 = null;
                                            break;
                                        }
                                        next3 = it5.next();
                                    } while (((RadarSettingsModel) next3).getWrite_index() != iIntValue2);
                                    RadarSettingsModel radarSettingsModel5 = (RadarSettingsModel) next3;
                                    if (radarSettingsModel5 != null) {
                                        radarSettingsModel5.setAvailable(false);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            i++;
        }
        BaseApplication baseApplication7 = this.myApp;
        if (baseApplication7 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("myApp");
            baseApplication7 = null;
        }
        if (StringsKt.contains$default((CharSequence) baseApplication7.getSharedPrefs().getDeviceName(), (CharSequence) "R8W", false, 2, (Object) null)) {
            baseApplication = this.myApp;
            if (baseApplication == null) {
                Intrinsics.throwUninitializedPropertyAccessException("myApp");
                baseApplication = null;
            }
            zIsLaserEnable = baseApplication.getSharedPrefs().isLaserEnable();
            baseApplication2 = this.myApp;
            if (baseApplication2 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("myApp");
                baseApplication2 = null;
            }
            BaseApplication.LaserTpOnOff laserTpOnOff = baseApplication2.getLaserTpOnOff();
            baseApplication3 = this.myApp;
            if (baseApplication3 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("myApp");
                baseApplication3 = null;
            }
            BaseApplication.LaserTpOnOff laserTpAOnOff = baseApplication3.getLaserTpAOnOff();
            baseApplication4 = this.myApp;
            if (baseApplication4 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("myApp");
                baseApplication4 = null;
            }
            BaseApplication.LaserTpOnOff laserTpBOnOff = baseApplication4.getLaserTpBOnOff();
            if (!zIsLaserEnable || laserTpOnOff == BaseApplication.LaserTpOnOff.ON || laserTpAOnOff == BaseApplication.LaserTpOnOff.ON || laserTpBOnOff == BaseApplication.LaserTpOnOff.ON) {
                List<RadarSettingsModel> list3 = radarSettingsList;
                it = list3.iterator();
                do {
                    if (!it.hasNext()) {
                        next = null;
                        break;
                    }
                    next = it.next();
                } while (!Intrinsics.areEqual(((RadarSettingsModel) next).getItem(), "Laser Gun ID"));
                radarSettingsModel = (RadarSettingsModel) next;
                if (radarSettingsModel != null) {
                    radarSettingsModel.setAvailable(true);
                }
                for (Object obj2 : list3) {
                    if (Intrinsics.areEqual(((RadarSettingsModel) obj2).getItem(), "Laser Gun ID Voice On/Off")) {
                        obj = obj2;
                        break;
                    }
                }
                radarSettingsModel2 = (RadarSettingsModel) obj;
                if (radarSettingsModel2 != null) {
                    radarSettingsModel2.setAvailable(true);
                }
            } else {
                List<RadarSettingsModel> list4 = radarSettingsList;
                Iterator<T> it6 = list4.iterator();
                do {
                    if (!it6.hasNext()) {
                        next2 = null;
                        break;
                    }
                    next2 = it6.next();
                } while (!Intrinsics.areEqual(((RadarSettingsModel) next2).getItem(), "Laser Gun ID"));
                RadarSettingsModel radarSettingsModel6 = (RadarSettingsModel) next2;
                if (radarSettingsModel6 != null) {
                    radarSettingsModel6.setAvailable(false);
                }
                for (Object obj3 : list4) {
                    if (Intrinsics.areEqual(((RadarSettingsModel) obj3).getItem(), "Laser Gun ID Voice On/Off")) {
                        obj = obj3;
                        break;
                    }
                }
                RadarSettingsModel radarSettingsModel7 = (RadarSettingsModel) obj;
                if (radarSettingsModel7 != null) {
                    radarSettingsModel7.setAvailable(false);
                }
            }
        } else {
            BaseApplication baseApplication8 = this.myApp;
            if (baseApplication8 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("myApp");
                baseApplication8 = null;
            }
            if (StringsKt.contains$default((CharSequence) baseApplication8.getSharedPrefs().getDeviceName(), (CharSequence) "R4W", false, 2, (Object) null)) {
                baseApplication = this.myApp;
                if (baseApplication == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("myApp");
                    baseApplication = null;
                }
                zIsLaserEnable = baseApplication.getSharedPrefs().isLaserEnable();
                baseApplication2 = this.myApp;
                if (baseApplication2 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("myApp");
                    baseApplication2 = null;
                }
                BaseApplication.LaserTpOnOff laserTpOnOff2 = baseApplication2.getLaserTpOnOff();
                baseApplication3 = this.myApp;
                if (baseApplication3 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("myApp");
                    baseApplication3 = null;
                }
                BaseApplication.LaserTpOnOff laserTpAOnOff2 = baseApplication3.getLaserTpAOnOff();
                baseApplication4 = this.myApp;
                if (baseApplication4 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("myApp");
                    baseApplication4 = null;
                }
                BaseApplication.LaserTpOnOff laserTpBOnOff2 = baseApplication4.getLaserTpBOnOff();
                if (!zIsLaserEnable) {
                    List<RadarSettingsModel> list5 = radarSettingsList;
                    it = list5.iterator();
                    do {
                        if (!it.hasNext()) {
                            next = null;
                            break;
                        }
                        next = it.next();
                    } while (!Intrinsics.areEqual(((RadarSettingsModel) next).getItem(), "Laser Gun ID"));
                    radarSettingsModel = (RadarSettingsModel) next;
                    if (radarSettingsModel != null) {
                        radarSettingsModel.setAvailable(true);
                    }
                    while (r0.hasNext()) {
                        if (Intrinsics.areEqual(((RadarSettingsModel) obj2).getItem(), "Laser Gun ID Voice On/Off")) {
                            obj = obj2;
                            break;
                        }
                    }
                    radarSettingsModel2 = (RadarSettingsModel) obj;
                    if (radarSettingsModel2 != null) {
                        radarSettingsModel2.setAvailable(true);
                    }
                } else {
                    List<RadarSettingsModel> list6 = radarSettingsList;
                    it = list6.iterator();
                    do {
                        if (!it.hasNext()) {
                            next = null;
                            break;
                        }
                        next = it.next();
                    } while (!Intrinsics.areEqual(((RadarSettingsModel) next).getItem(), "Laser Gun ID"));
                    radarSettingsModel = (RadarSettingsModel) next;
                    if (radarSettingsModel != null) {
                        radarSettingsModel.setAvailable(true);
                    }
                    while (r0.hasNext()) {
                        if (Intrinsics.areEqual(((RadarSettingsModel) obj2).getItem(), "Laser Gun ID Voice On/Off")) {
                            obj = obj2;
                            break;
                        }
                    }
                    radarSettingsModel2 = (RadarSettingsModel) obj;
                    if (radarSettingsModel2 != null) {
                        radarSettingsModel2.setAvailable(true);
                    }
                }
            } else {
                BaseApplication baseApplication9 = this.myApp;
                if (baseApplication9 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("myApp");
                    baseApplication9 = null;
                }
                if (StringsKt.contains$default((CharSequence) baseApplication9.getSharedPrefs().getDeviceName(), (CharSequence) "R8", false, 2, (Object) null)) {
                    baseApplication = this.myApp;
                    if (baseApplication == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("myApp");
                        baseApplication = null;
                    }
                    zIsLaserEnable = baseApplication.getSharedPrefs().isLaserEnable();
                    baseApplication2 = this.myApp;
                    if (baseApplication2 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("myApp");
                        baseApplication2 = null;
                    }
                    BaseApplication.LaserTpOnOff laserTpOnOff3 = baseApplication2.getLaserTpOnOff();
                    baseApplication3 = this.myApp;
                    if (baseApplication3 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("myApp");
                        baseApplication3 = null;
                    }
                    BaseApplication.LaserTpOnOff laserTpAOnOff3 = baseApplication3.getLaserTpAOnOff();
                    baseApplication4 = this.myApp;
                    if (baseApplication4 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("myApp");
                        baseApplication4 = null;
                    }
                    BaseApplication.LaserTpOnOff laserTpBOnOff3 = baseApplication4.getLaserTpBOnOff();
                    if (!zIsLaserEnable) {
                        List<RadarSettingsModel> list7 = radarSettingsList;
                        it = list7.iterator();
                        do {
                            if (!it.hasNext()) {
                                next = null;
                                break;
                            }
                            next = it.next();
                        } while (!Intrinsics.areEqual(((RadarSettingsModel) next).getItem(), "Laser Gun ID"));
                        radarSettingsModel = (RadarSettingsModel) next;
                        if (radarSettingsModel != null) {
                            radarSettingsModel.setAvailable(true);
                        }
                        while (r0.hasNext()) {
                            if (Intrinsics.areEqual(((RadarSettingsModel) obj2).getItem(), "Laser Gun ID Voice On/Off")) {
                                obj = obj2;
                                break;
                            }
                        }
                        radarSettingsModel2 = (RadarSettingsModel) obj;
                        if (radarSettingsModel2 != null) {
                            radarSettingsModel2.setAvailable(true);
                        }
                    } else {
                        List<RadarSettingsModel> list8 = radarSettingsList;
                        it = list8.iterator();
                        do {
                            if (!it.hasNext()) {
                                next = null;
                                break;
                            }
                            next = it.next();
                        } while (!Intrinsics.areEqual(((RadarSettingsModel) next).getItem(), "Laser Gun ID"));
                        radarSettingsModel = (RadarSettingsModel) next;
                        if (radarSettingsModel != null) {
                            radarSettingsModel.setAvailable(true);
                        }
                        while (r0.hasNext()) {
                            if (Intrinsics.areEqual(((RadarSettingsModel) obj2).getItem(), "Laser Gun ID Voice On/Off")) {
                                obj = obj2;
                                break;
                            }
                        }
                        radarSettingsModel2 = (RadarSettingsModel) obj;
                        if (radarSettingsModel2 != null) {
                            radarSettingsModel2.setAvailable(true);
                        }
                    }
                } else {
                    BaseApplication baseApplication10 = this.myApp;
                    if (baseApplication10 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("myApp");
                        baseApplication10 = null;
                    }
                    if (StringsKt.contains$default((CharSequence) baseApplication10.getSharedPrefs().getDeviceName(), (CharSequence) "R4", false, 2, (Object) null)) {
                        baseApplication = this.myApp;
                        if (baseApplication == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("myApp");
                            baseApplication = null;
                        }
                        zIsLaserEnable = baseApplication.getSharedPrefs().isLaserEnable();
                        baseApplication2 = this.myApp;
                        if (baseApplication2 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("myApp");
                            baseApplication2 = null;
                        }
                        BaseApplication.LaserTpOnOff laserTpOnOff4 = baseApplication2.getLaserTpOnOff();
                        baseApplication3 = this.myApp;
                        if (baseApplication3 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("myApp");
                            baseApplication3 = null;
                        }
                        BaseApplication.LaserTpOnOff laserTpAOnOff4 = baseApplication3.getLaserTpAOnOff();
                        baseApplication4 = this.myApp;
                        if (baseApplication4 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("myApp");
                            baseApplication4 = null;
                        }
                        BaseApplication.LaserTpOnOff laserTpBOnOff4 = baseApplication4.getLaserTpBOnOff();
                        if (!zIsLaserEnable) {
                            List<RadarSettingsModel> list9 = radarSettingsList;
                            it = list9.iterator();
                            do {
                                if (!it.hasNext()) {
                                    next = null;
                                    break;
                                }
                                next = it.next();
                            } while (!Intrinsics.areEqual(((RadarSettingsModel) next).getItem(), "Laser Gun ID"));
                            radarSettingsModel = (RadarSettingsModel) next;
                            if (radarSettingsModel != null) {
                                radarSettingsModel.setAvailable(true);
                            }
                            while (r0.hasNext()) {
                                if (Intrinsics.areEqual(((RadarSettingsModel) obj2).getItem(), "Laser Gun ID Voice On/Off")) {
                                    obj = obj2;
                                    break;
                                }
                            }
                            radarSettingsModel2 = (RadarSettingsModel) obj;
                            if (radarSettingsModel2 != null) {
                                radarSettingsModel2.setAvailable(true);
                            }
                        } else {
                            List<RadarSettingsModel> list10 = radarSettingsList;
                            it = list10.iterator();
                            do {
                                if (!it.hasNext()) {
                                    next = null;
                                    break;
                                }
                                next = it.next();
                            } while (!Intrinsics.areEqual(((RadarSettingsModel) next).getItem(), "Laser Gun ID"));
                            radarSettingsModel = (RadarSettingsModel) next;
                            if (radarSettingsModel != null) {
                                radarSettingsModel.setAvailable(true);
                            }
                            while (r0.hasNext()) {
                                if (Intrinsics.areEqual(((RadarSettingsModel) obj2).getItem(), "Laser Gun ID Voice On/Off")) {
                                    obj = obj2;
                                    break;
                                }
                            }
                            radarSettingsModel2 = (RadarSettingsModel) obj;
                            if (radarSettingsModel2 != null) {
                                radarSettingsModel2.setAvailable(true);
                            }
                        }
                    }
                }
            }
        }
        ArrayList arrayList = new ArrayList();
        for (Object obj4 : radarSettingsList) {
            if (((RadarSettingsModel) obj4).isAvailable()) {
                arrayList.add(obj4);
            }
        }
        ArrayList arrayList2 = new ArrayList();
        for (Object obj5 : arrayList) {
            if (StringsKt.contains((CharSequence) ((RadarSettingsModel) obj5).getMode(), (CharSequence) getSharedPrefs().getSettingMode(), true)) {
                arrayList2.add(obj5);
            }
        }
        return arrayList2;
    }

    /* JADX WARN: Multi-variable type inference failed */
    private final void loadRadarSettingItem() {
        SettingMenuActivity settingMenuActivity = this;
        this.layoutManager = new LinearLayoutManager(settingMenuActivity);
        RecyclerView recyclerView = ((ActivitySettingMenuBinding) getBinding()).recyclerviewRadarSetting;
        LinearLayoutManager linearLayoutManager = this.layoutManager;
        RadarItemSettingAdapter radarItemSettingAdapter = null;
        if (linearLayoutManager == null) {
            Intrinsics.throwUninitializedPropertyAccessException("layoutManager");
            linearLayoutManager = null;
        }
        recyclerView.setLayoutManager(linearLayoutManager);
        List<RadarSettingsModel> list = this.settingList;
        BaseApplication baseApplication = this.myApp;
        if (baseApplication == null) {
            Intrinsics.throwUninitializedPropertyAccessException("myApp");
            baseApplication = null;
        }
        this.adapter = new RadarItemSettingAdapter(settingMenuActivity, list, baseApplication.getSettingCategories());
        RecyclerView recyclerView2 = ((ActivitySettingMenuBinding) getBinding()).recyclerviewRadarSetting;
        RadarItemSettingAdapter radarItemSettingAdapter2 = this.adapter;
        if (radarItemSettingAdapter2 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("adapter");
        } else {
            radarItemSettingAdapter = radarItemSettingAdapter2;
        }
        recyclerView2.setAdapter(radarItemSettingAdapter);
        RecyclerView.LayoutManager layoutManager = ((ActivitySettingMenuBinding) getBinding()).recyclerviewRadarSetting.getLayoutManager();
        Intrinsics.checkNotNull(layoutManager, "null cannot be cast to non-null type androidx.recyclerview.widget.LinearLayoutManager");
        final LinearLayoutManager linearLayoutManager2 = (LinearLayoutManager) layoutManager;
        linearLayoutManager2.scrollToPositionWithOffset(1, 0);
        ((ActivitySettingMenuBinding) getBinding()).recyclerviewRadarSetting.addOnScrollListener(new RecyclerView.OnScrollListener() { // from class: com.uniden.rtach.ui.activity.SettingMenuActivity.loadRadarSettingItem.1
            @Override // androidx.recyclerview.widget.RecyclerView.OnScrollListener
            public void onScrolled(RecyclerView recyclerView3, int dx, int dy) {
                View viewFindViewByPosition;
                Intrinsics.checkNotNullParameter(recyclerView3, "recyclerView");
                super.onScrolled(recyclerView3, dx, dy);
                RecyclerView.LayoutManager layoutManager2 = recyclerView3.getLayoutManager();
                RadarItemSettingAdapter radarItemSettingAdapter3 = null;
                LinearLayoutManager linearLayoutManager3 = layoutManager2 instanceof LinearLayoutManager ? (LinearLayoutManager) layoutManager2 : null;
                int iFindFirstVisibleItemPosition = linearLayoutManager3 != null ? linearLayoutManager3.findFirstVisibleItemPosition() : -1;
                if (linearLayoutManager3 == null || (viewFindViewByPosition = linearLayoutManager3.findViewByPosition(iFindFirstVisibleItemPosition)) == null) {
                    return;
                }
                int top = viewFindViewByPosition.getTop();
                RadarItemSettingAdapter radarItemSettingAdapter4 = SettingMenuActivity.this.adapter;
                if (radarItemSettingAdapter4 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("adapter");
                } else {
                    radarItemSettingAdapter3 = radarItemSettingAdapter4;
                }
                Object item = radarItemSettingAdapter3.getItem(iFindFirstVisibleItemPosition);
                if (!(item instanceof RadarSettingsTitleModel)) {
                    if (item instanceof RadarSettingsModel) {
                        SettingMenuActivity.access$getBinding(SettingMenuActivity.this).itemListLayout.setClipToPadding(true);
                        SettingMenuActivity.access$getBinding(SettingMenuActivity.this).itemListLayout.setClipChildren(true);
                        SettingMenuActivity.access$getBinding(SettingMenuActivity.this).categoryText.setTranslationY(0.0f);
                        SettingMenuActivity.access$getBinding(SettingMenuActivity.this).categoryText.setText(((RadarSettingsModel) item).getCategory());
                        return;
                    }
                    return;
                }
                if (top < 0) {
                    SettingMenuActivity.access$getBinding(SettingMenuActivity.this).itemListLayout.setClipToPadding(false);
                    SettingMenuActivity.access$getBinding(SettingMenuActivity.this).itemListLayout.setClipChildren(false);
                    SettingMenuActivity.access$getBinding(SettingMenuActivity.this).categoryText.setText("");
                }
                if (dy >= 0 || iFindFirstVisibleItemPosition != 0) {
                    return;
                }
                SettingMenuActivity.access$getBinding(SettingMenuActivity.this).categoryText.setText("");
                linearLayoutManager2.scrollToPositionWithOffset(1, 0);
            }
        });
        this.adapterSet = true;
    }

    @Override // androidx.fragment.app.FragmentActivity, android.app.Activity
    protected void onPause() {
        super.onPause();
        BaseApplication baseApplication = this.myApp;
        if (baseApplication == null) {
            Intrinsics.throwUninitializedPropertyAccessException("myApp");
            baseApplication = null;
        }
        baseApplication.getAlertCharacteristicChanged().postValue("0&0&0&0");
    }
}
