package com.uniden.rtach.p005ui.activity;

import android.app.AlertDialog;
import android.app.Application;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.graphics.Color;
import android.graphics.drawable.ColorDrawable;
import android.os.Handler;
import android.os.Looper;
import android.text.Html;
import android.text.method.LinkMovementMethod;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.widget.CompoundButton;
import android.widget.TextView;
import android.widget.Toast;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.lifecycle.ViewModelLazy;
import androidx.lifecycle.ViewModelProvider;
import androidx.lifecycle.ViewModelStore;
import androidx.lifecycle.viewmodel.CreationExtras;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;
import com.uniden.rtach.C2074R;
import com.uniden.rtach.data.model.ETCDataModel;
import com.uniden.rtach.data.model.UpdateProgressModel;
import com.uniden.rtach.data.model.VersionUpdateModel;
import com.uniden.rtach.databinding.ActivityFirmwareUpdateBinding;
import com.uniden.rtach.databinding.FirmwareUpdateDialogBinding;
import com.uniden.rtach.databinding.UpdateWarningDialogBinding;
import com.uniden.rtach.helper.BaseApplication;
import com.uniden.rtach.helper.BluetoothManager;
import com.uniden.rtach.helper.Constant;
import com.uniden.rtach.helper.FIrmWareUpdateProcess;
import com.uniden.rtach.helper.Utils;
import com.uniden.rtach.helper.WakeLockHelper;
import com.uniden.rtach.p005ui.adapter.TableRowAdapter;
import com.uniden.rtach.viewmodel.FirmwareUpdateViewModel;
import dagger.hilt.android.AndroidEntryPoint;
import java.util.ArrayList;
import java.util.Objects;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
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
import kotlin.text.StringsKt;
import kotlinx.coroutines.BuildersKt__Builders_commonKt;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.CoroutineScopeKt;
import kotlinx.coroutines.Dispatchers;

/* JADX INFO: compiled from: FirmwareUpdateActivity.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000P\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0011\b\u0007\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\u0007¢\u0006\u0004\b\u0003\u0010\u0004J\b\u0010\u001e\u001a\u00020\u001fH\u0014J\b\u0010 \u001a\u00020\u001fH\u0002J\b\u0010!\u001a\u00020\u001fH\u0002J\u0010\u0010\"\u001a\u00020\u001f2\u0006\u0010\u001b\u001a\u00020\u000eH\u0002J\b\u0010#\u001a\u00020\u001fH\u0014J\b\u0010$\u001a\u00020\u001fH\u0014J\b\u0010%\u001a\u00020\u001fH\u0002J\b\u0010&\u001a\u00020\u001fH\u0002J\b\u0010'\u001a\u00020\u001fH\u0014J\b\u0010(\u001a\u00020\u001fH\u0002J\b\u0010)\u001a\u00020\u001fH\u0014J\b\u0010*\u001a\u00020\u001fH\u0002J\b\u0010+\u001a\u00020\u001fH\u0002J\b\u0010,\u001a\u00020\u001fH\u0002J\b\u0010-\u001a\u00020\u001fH\u0002J\b\u0010.\u001a\u00020\u001fH\u0002J\b\u0010/\u001a\u00020\u001fH\u0002R\u000e\u0010\u0005\u001a\u00020\u0006X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\bX\u0082.¢\u0006\u0002\n\u0000R\u0010\u0010\t\u001a\u0004\u0018\u00010\nX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\fX\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\r\u001a\u00020\u000eX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u000f\u001a\u00020\u000eX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0010\u001a\u00020\u0011X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0012\u001a\u00020\u000eX\u0082\u000e¢\u0006\u0002\n\u0000R\u001b\u0010\u0013\u001a\u00020\u00148BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b\u0017\u0010\u0018\u001a\u0004\b\u0015\u0010\u0016R\u000e\u0010\u0019\u001a\u00020\u001aX\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\u001b\u001a\u00020\u000eX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u001c\u001a\u00020\u000eX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u001d\u001a\u00020\u000eX\u0082\u000e¢\u0006\u0002\n\u0000¨\u00060"}, m491d2 = {"Lcom/uniden/rtach/ui/activity/FirmwareUpdateActivity;", "Lcom/uniden/rtach/ui/base/BaseActivity;", "Lcom/uniden/rtach/databinding/ActivityFirmwareUpdateBinding;", "<init>", "()V", "myApp", "Lcom/uniden/rtach/helper/BaseApplication;", "dialogBinding", "Lcom/uniden/rtach/databinding/FirmwareUpdateDialogBinding;", "versionUpdateModel", "Lcom/uniden/rtach/data/model/VersionUpdateModel;", "updateProgressDialog", "Landroid/app/AlertDialog;", "isRadarWiFiConnected", "", "isDbUpdateOnly", "updateState", "Lcom/uniden/rtach/helper/FIrmWareUpdateProcess;", "isUpdateClick", "viewModel", "Lcom/uniden/rtach/viewmodel/FirmwareUpdateViewModel;", "getViewModel", "()Lcom/uniden/rtach/viewmodel/FirmwareUpdateViewModel;", "viewModel$delegate", "Lkotlin/Lazy;", "tableRowAdapter", "Lcom/uniden/rtach/ui/adapter/TableRowAdapter;", "isupdateProgressDialogShowing", "isUpdateStart", "isBeforeUpdating", "initUi", "", "setFirmwareTable", "setObservables", "isCheckUpdateDialogValidation", "onPause", "onDestroy", "showUpdateProgressDialog", "checkFirmwareUpdate", "onResume", "setData", "setListeners", "checkForUpdates", "showUpdateAlertDialog", "showVersionUptoDateDialog", "doUpdate", "updateFirmwareForWiFiModel", "updateFirmwareForBTModel", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
@AndroidEntryPoint
public final class FirmwareUpdateActivity extends Hilt_FirmwareUpdateActivity<ActivityFirmwareUpdateBinding> {
    private FirmwareUpdateDialogBinding dialogBinding;
    private boolean isBeforeUpdating;
    private boolean isDbUpdateOnly;
    private boolean isRadarWiFiConnected;
    private boolean isUpdateClick;
    private boolean isUpdateStart;
    private boolean isupdateProgressDialogShowing;
    private BaseApplication myApp;
    private TableRowAdapter tableRowAdapter;
    private AlertDialog updateProgressDialog;
    private FIrmWareUpdateProcess updateState;
    private VersionUpdateModel versionUpdateModel;

    /* JADX INFO: renamed from: viewModel$delegate, reason: from kotlin metadata */
    private final Lazy viewModel;

    /* JADX INFO: compiled from: FirmwareUpdateActivity.kt */
    @Metadata(m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;

        static {
            int[] iArr = new int[FIrmWareUpdateProcess.values().length];
            try {
                iArr[FIrmWareUpdateProcess.FILE_DOWNLOAD_START.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[FIrmWareUpdateProcess.FILE_DOWNLOADING.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                iArr[FIrmWareUpdateProcess.FILE_DOWNLOAD_COMPLETE.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                iArr[FIrmWareUpdateProcess.FILE_DOWNLOAD_FAIL.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                iArr[FIrmWareUpdateProcess.FILE_UPDATE_START.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            try {
                iArr[FIrmWareUpdateProcess.FILE_UPDATE_COMPLETE.ordinal()] = 6;
            } catch (NoSuchFieldError unused6) {
            }
            try {
                iArr[FIrmWareUpdateProcess.FILE_UPDATE_FAIL.ordinal()] = 7;
            } catch (NoSuchFieldError unused7) {
            }
            try {
                iArr[FIrmWareUpdateProcess.FILE_INSTALLING.ordinal()] = 8;
            } catch (NoSuchFieldError unused8) {
            }
            try {
                iArr[FIrmWareUpdateProcess.FILE_INSTALL_FINISH.ordinal()] = 9;
            } catch (NoSuchFieldError unused9) {
            }
            $EnumSwitchMapping$0 = iArr;
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static final /* synthetic */ ActivityFirmwareUpdateBinding access$getBinding(FirmwareUpdateActivity firmwareUpdateActivity) {
        return (ActivityFirmwareUpdateBinding) firmwareUpdateActivity.getBinding();
    }

    /* JADX INFO: renamed from: com.uniden.rtach.ui.activity.FirmwareUpdateActivity$1 */
    /* JADX INFO: compiled from: FirmwareUpdateActivity.kt */
    @Metadata(m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    /* synthetic */ class C21091 extends FunctionReferenceImpl implements Function1<LayoutInflater, ActivityFirmwareUpdateBinding> {
        public static final C21091 INSTANCE = new C21091();

        C21091() {
            super(1, ActivityFirmwareUpdateBinding.class, "inflate", "inflate(Landroid/view/LayoutInflater;)Lcom/uniden/rtach/databinding/ActivityFirmwareUpdateBinding;", 0);
        }

        @Override // kotlin.jvm.functions.Function1
        public final ActivityFirmwareUpdateBinding invoke(LayoutInflater p0) {
            Intrinsics.checkNotNullParameter(p0, "p0");
            return ActivityFirmwareUpdateBinding.inflate(p0);
        }
    }

    public FirmwareUpdateActivity() {
        super(C21091.INSTANCE);
        this.updateState = FIrmWareUpdateProcess.FILE_DOWNLOAD_START;
        final FirmwareUpdateActivity firmwareUpdateActivity = this;
        final Function0 function0 = null;
        this.viewModel = new ViewModelLazy(Reflection.getOrCreateKotlinClass(FirmwareUpdateViewModel.class), new Function0<ViewModelStore>() { // from class: com.uniden.rtach.ui.activity.FirmwareUpdateActivity$special$$inlined$viewModels$default$2
            {
                super(0);
            }

            /* JADX WARN: Can't rename method to resolve collision */
            @Override // kotlin.jvm.functions.Function0
            public final ViewModelStore invoke() {
                return firmwareUpdateActivity.getViewModelStore();
            }
        }, new Function0<ViewModelProvider.Factory>() { // from class: com.uniden.rtach.ui.activity.FirmwareUpdateActivity$special$$inlined$viewModels$default$1
            {
                super(0);
            }

            /* JADX WARN: Can't rename method to resolve collision */
            @Override // kotlin.jvm.functions.Function0
            public final ViewModelProvider.Factory invoke() {
                return firmwareUpdateActivity.getDefaultViewModelProviderFactory();
            }
        }, new Function0<CreationExtras>() { // from class: com.uniden.rtach.ui.activity.FirmwareUpdateActivity$special$$inlined$viewModels$default$3
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(0);
            }

            /* JADX WARN: Can't rename method to resolve collision */
            @Override // kotlin.jvm.functions.Function0
            public final CreationExtras invoke() {
                CreationExtras creationExtras;
                Function0 function1 = function0;
                return (function1 == null || (creationExtras = (CreationExtras) function1.invoke()) == null) ? firmwareUpdateActivity.getDefaultViewModelCreationExtras() : creationExtras;
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final FirmwareUpdateViewModel getViewModel() {
        return (FirmwareUpdateViewModel) this.viewModel.getValue();
    }

    @Override // com.uniden.rtach.p005ui.base.BaseActivity
    protected void initUi() {
        new WakeLockHelper(getContext()).acquireWakeLock();
        Application application = getActivity().getApplication();
        Intrinsics.checkNotNull(application, "null cannot be cast to non-null type com.uniden.rtach.helper.BaseApplication");
        this.myApp = (BaseApplication) application;
        FirmwareUpdateViewModel viewModel = getViewModel();
        BaseApplication baseApplication = this.myApp;
        if (baseApplication == null) {
            Intrinsics.throwUninitializedPropertyAccessException("myApp");
            baseApplication = null;
        }
        viewModel.initApp(baseApplication);
        getSharedPrefs().setFirmWareUpdating(false);
        Log.e("FW_VERSION_FILE_EXIST", "InitUI" + getSharedPrefs().getLatestFirmwareVersion());
        Utils utils = new Utils();
        Context applicationContext = getApplicationContext();
        Intrinsics.checkNotNullExpressionValue(applicationContext, "getApplicationContext(...)");
        this.versionUpdateModel = utils.checkIfUpdateAvailable(applicationContext);
        setObservables();
    }

    /* JADX INFO: renamed from: com.uniden.rtach.ui.activity.FirmwareUpdateActivity$setFirmwareTable$1 */
    /* JADX INFO: compiled from: FirmwareUpdateActivity.kt */
    @Metadata(m490d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, m491d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    @DebugMetadata(m503c = "com.uniden.rtach.ui.activity.FirmwareUpdateActivity$setFirmwareTable$1", m504f = "FirmwareUpdateActivity.kt", m505i = {}, m506l = {70}, m507m = "invokeSuspend", m508n = {}, m509s = {})
    static final class C21101 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        int label;

        C21101(Continuation<? super C21101> continuation) {
            super(2, continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return FirmwareUpdateActivity.this.new C21101(continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C21101) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                this.label = 1;
                obj = new Utils().getFirmwareVersions(FirmwareUpdateActivity.this.getContext(), this);
                if (obj == coroutine_suspended) {
                    return coroutine_suspended;
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
            }
            ArrayList arrayList = (ArrayList) obj;
            FirmwareUpdateActivity.this.tableRowAdapter = new TableRowAdapter(arrayList);
            Log.e("Firmware Update Data", arrayList.toString());
            Log.e("FW_VERSION_FILE_EXIST", "setFirmwareTable" + FirmwareUpdateActivity.this.getSharedPrefs().getLatestFirmwareVersion());
            FirmwareUpdateActivity.access$getBinding(FirmwareUpdateActivity.this).tableRecyclerView.setLayoutManager(new LinearLayoutManager(FirmwareUpdateActivity.this.getContext()));
            RecyclerView recyclerView = FirmwareUpdateActivity.access$getBinding(FirmwareUpdateActivity.this).tableRecyclerView;
            TableRowAdapter tableRowAdapter = FirmwareUpdateActivity.this.tableRowAdapter;
            if (tableRowAdapter == null) {
                Intrinsics.throwUninitializedPropertyAccessException("tableRowAdapter");
                tableRowAdapter = null;
            }
            recyclerView.setAdapter(tableRowAdapter);
            return Unit.INSTANCE;
        }
    }

    private final void setFirmwareTable() {
        BuildersKt__Builders_commonKt.launch$default(CoroutineScopeKt.CoroutineScope(Dispatchers.getMain()), null, null, new C21101(null), 3, null);
    }

    private final void setObservables() {
        BaseApplication baseApplication = this.myApp;
        BaseApplication baseApplication2 = null;
        if (baseApplication == null) {
            Intrinsics.throwUninitializedPropertyAccessException("myApp");
            baseApplication = null;
        }
        FirmwareUpdateActivity firmwareUpdateActivity = this;
        baseApplication.getEtcDataChanged().observe(firmwareUpdateActivity, new FirmwareUpdateActivity$sam$androidx_lifecycle_Observer$0(new Function1() { // from class: com.uniden.rtach.ui.activity.FirmwareUpdateActivity$$ExternalSyntheticLambda2
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return FirmwareUpdateActivity.setObservables$lambda$0(this.f$0, (ETCDataModel) obj);
            }
        }));
        BaseApplication baseApplication3 = this.myApp;
        if (baseApplication3 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("myApp");
            baseApplication3 = null;
        }
        baseApplication3.isBTConnected().observeForever(new FirmwareUpdateActivity$sam$androidx_lifecycle_Observer$0(new Function1() { // from class: com.uniden.rtach.ui.activity.FirmwareUpdateActivity$$ExternalSyntheticLambda3
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return FirmwareUpdateActivity.setObservables$lambda$2(this.f$0, (Boolean) obj);
            }
        }));
        BaseApplication baseApplication4 = this.myApp;
        if (baseApplication4 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("myApp");
            baseApplication4 = null;
        }
        baseApplication4.getFirmwareUpdateProcess().observe(firmwareUpdateActivity, new FirmwareUpdateActivity$sam$androidx_lifecycle_Observer$0(new Function1() { // from class: com.uniden.rtach.ui.activity.FirmwareUpdateActivity$$ExternalSyntheticLambda4
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return FirmwareUpdateActivity.setObservables$lambda$3(this.f$0, (UpdateProgressModel) obj);
            }
        }));
        BaseApplication baseApplication5 = this.myApp;
        if (baseApplication5 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("myApp");
        } else {
            baseApplication2 = baseApplication5;
        }
        baseApplication2.getFirmwareUpdateProcessBT().observe(firmwareUpdateActivity, new FirmwareUpdateActivity$sam$androidx_lifecycle_Observer$0(new Function1() { // from class: com.uniden.rtach.ui.activity.FirmwareUpdateActivity$$ExternalSyntheticLambda5
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return FirmwareUpdateActivity.setObservables$lambda$5(this.f$0, (UpdateProgressModel) obj);
            }
        }));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit setObservables$lambda$0(FirmwareUpdateActivity this$0, ETCDataModel eTCDataModel) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        this$0.isRadarWiFiConnected = Intrinsics.areEqual(eTCDataModel.getRadarWiFiStatus(), "C");
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Multi-variable type inference failed */
    public static final Unit setObservables$lambda$2(final FirmwareUpdateActivity this$0, Boolean bool) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        if (bool.booleanValue()) {
            if (this$0.isBeforeUpdating) {
                this$0.isBeforeUpdating = false;
                ((ActivityFirmwareUpdateBinding) this$0.getBinding()).llNoConnection.setVisibility(8);
                ((ActivityFirmwareUpdateBinding) this$0.getBinding()).llWaitVersion.setVisibility(0);
                ((ActivityFirmwareUpdateBinding) this$0.getBinding()).mainLayout.setVisibility(8);
            }
            new Handler(Looper.getMainLooper()).postDelayed(new Runnable() { // from class: com.uniden.rtach.ui.activity.FirmwareUpdateActivity$$ExternalSyntheticLambda1
                @Override // java.lang.Runnable
                public final void run() {
                    FirmwareUpdateActivity.setObservables$lambda$2$lambda$1(this.f$0);
                }
            }, 5000L);
        } else {
            if (this$0.isUpdateStart) {
                UpdateProgressModel updateProgressModel = new UpdateProgressModel(FIrmWareUpdateProcess.FILE_UPDATE_FAIL, "", "");
                BaseApplication baseApplication = this$0.myApp;
                BaseApplication baseApplication2 = null;
                if (baseApplication == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("myApp");
                    baseApplication = null;
                }
                baseApplication.getFirmwareUpdateProcessBT().postValue(updateProgressModel);
                if (this$0.isRadarWiFiConnected) {
                    BaseApplication baseApplication3 = this$0.myApp;
                    if (baseApplication3 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("myApp");
                    } else {
                        baseApplication2 = baseApplication3;
                    }
                    baseApplication2.getFirmwareUpdateProcess().postValue(updateProgressModel);
                }
            }
            ((ActivityFirmwareUpdateBinding) this$0.getBinding()).llNoConnection.setVisibility(0);
            ((ActivityFirmwareUpdateBinding) this$0.getBinding()).llWaitVersion.setVisibility(8);
            ((ActivityFirmwareUpdateBinding) this$0.getBinding()).mainLayout.setVisibility(8);
        }
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setObservables$lambda$2$lambda$1(FirmwareUpdateActivity this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Log.e("FW_VERSION_FILE_EXIST", "isBTConnected" + this$0.getSharedPrefs().getLatestFirmwareVersion());
        this$0.checkFirmwareUpdate();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit setObservables$lambda$3(FirmwareUpdateActivity this$0, UpdateProgressModel updateProgressModel) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        if (this$0.isUpdateClick && this$0.isRadarWiFiConnected) {
            FIrmWareUpdateProcess updateState = updateProgressModel.getUpdateState();
            this$0.updateState = updateState;
            Log.e("FW_UPDATE_STATUS", updateState.toString());
            FirmwareUpdateDialogBinding firmwareUpdateDialogBinding = null;
            switch (WhenMappings.$EnumSwitchMapping$0[updateProgressModel.getUpdateState().ordinal()]) {
                case 1:
                    this$0.isUpdateStart = true;
                    Log.e("FW_UPDATE_STATUS", "DownloadStart");
                    this$0.showUpdateProgressDialog();
                    this$0.isupdateProgressDialogShowing = true;
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding2 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding2 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                    } else {
                        firmwareUpdateDialogBinding = firmwareUpdateDialogBinding2;
                    }
                    firmwareUpdateDialogBinding.header.setText(this$0.getResources().getString(C2074R.string.firmware_update_progress));
                    break;
                case 2:
                    this$0.isUpdateStart = true;
                    Log.e("FW_UPDATE_STATUS", "FileDownloading");
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding3 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding3 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                        firmwareUpdateDialogBinding3 = null;
                    }
                    firmwareUpdateDialogBinding3.title.setText("Downloading...");
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding4 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding4 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                        firmwareUpdateDialogBinding4 = null;
                    }
                    firmwareUpdateDialogBinding4.progressText.setText(updateProgressModel.getProgress());
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding5 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding5 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                    } else {
                        firmwareUpdateDialogBinding = firmwareUpdateDialogBinding5;
                    }
                    firmwareUpdateDialogBinding.progressBar.setProgress(Integer.parseInt(updateProgressModel.getProgress()));
                    break;
                case 3:
                    this$0.isUpdateStart = false;
                    Log.e("FW_UPDATE_STATUS", "FileDownloadComplete");
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding6 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding6 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                        firmwareUpdateDialogBinding6 = null;
                    }
                    firmwareUpdateDialogBinding6.title.setText("Downloaded and getting ready for update.");
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding7 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding7 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                        firmwareUpdateDialogBinding7 = null;
                    }
                    firmwareUpdateDialogBinding7.progressText.setText("0");
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding8 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding8 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                    } else {
                        firmwareUpdateDialogBinding = firmwareUpdateDialogBinding8;
                    }
                    firmwareUpdateDialogBinding.progressBar.setProgress(0);
                    break;
                case 4:
                    this$0.isUpdateStart = false;
                    if (this$0.dialogBinding != null) {
                        this$0.getSharedPrefs().setFirmWareUpdating(false);
                        FirmwareUpdateDialogBinding firmwareUpdateDialogBinding9 = this$0.dialogBinding;
                        if (firmwareUpdateDialogBinding9 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                            firmwareUpdateDialogBinding9 = null;
                        }
                        firmwareUpdateDialogBinding9.header.setText(this$0.getResources().getString(C2074R.string.firmware_updated_fail));
                        FirmwareUpdateDialogBinding firmwareUpdateDialogBinding10 = this$0.dialogBinding;
                        if (firmwareUpdateDialogBinding10 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                            firmwareUpdateDialogBinding10 = null;
                        }
                        firmwareUpdateDialogBinding10.title.setText("Please restart the update process");
                        FirmwareUpdateDialogBinding firmwareUpdateDialogBinding11 = this$0.dialogBinding;
                        if (firmwareUpdateDialogBinding11 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                            firmwareUpdateDialogBinding11 = null;
                        }
                        firmwareUpdateDialogBinding11.llProgress.setVisibility(8);
                        FirmwareUpdateDialogBinding firmwareUpdateDialogBinding12 = this$0.dialogBinding;
                        if (firmwareUpdateDialogBinding12 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                            firmwareUpdateDialogBinding12 = null;
                        }
                        firmwareUpdateDialogBinding12.progressBar.setVisibility(8);
                        FirmwareUpdateDialogBinding firmwareUpdateDialogBinding13 = this$0.dialogBinding;
                        if (firmwareUpdateDialogBinding13 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                        } else {
                            firmwareUpdateDialogBinding = firmwareUpdateDialogBinding13;
                        }
                        firmwareUpdateDialogBinding.btnDone.setVisibility(0);
                    } else {
                        this$0.showUpdateProgressDialog();
                        this$0.isupdateProgressDialogShowing = true;
                    }
                    break;
                case 5:
                    this$0.isUpdateStart = true;
                    this$0.isBeforeUpdating = true;
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding14 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding14 != null) {
                        if (firmwareUpdateDialogBinding14 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                            firmwareUpdateDialogBinding14 = null;
                        }
                        firmwareUpdateDialogBinding14.header.setText(this$0.getResources().getString(C2074R.string.firmware_update_progress));
                        FirmwareUpdateDialogBinding firmwareUpdateDialogBinding15 = this$0.dialogBinding;
                        if (firmwareUpdateDialogBinding15 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                            firmwareUpdateDialogBinding15 = null;
                        }
                        firmwareUpdateDialogBinding15.llProgress.setVisibility(0);
                        FirmwareUpdateDialogBinding firmwareUpdateDialogBinding16 = this$0.dialogBinding;
                        if (firmwareUpdateDialogBinding16 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                            firmwareUpdateDialogBinding16 = null;
                        }
                        firmwareUpdateDialogBinding16.progressBar.setVisibility(0);
                        FirmwareUpdateDialogBinding firmwareUpdateDialogBinding17 = this$0.dialogBinding;
                        if (firmwareUpdateDialogBinding17 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                            firmwareUpdateDialogBinding17 = null;
                        }
                        firmwareUpdateDialogBinding17.btnDone.setVisibility(8);
                        FirmwareUpdateDialogBinding firmwareUpdateDialogBinding18 = this$0.dialogBinding;
                        if (firmwareUpdateDialogBinding18 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                            firmwareUpdateDialogBinding18 = null;
                        }
                        firmwareUpdateDialogBinding18.title.setText("Updating : " + new Utils().getUpdatingFileName(updateProgressModel.getUpdatingFileName()));
                        FirmwareUpdateDialogBinding firmwareUpdateDialogBinding19 = this$0.dialogBinding;
                        if (firmwareUpdateDialogBinding19 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                            firmwareUpdateDialogBinding19 = null;
                        }
                        firmwareUpdateDialogBinding19.progressText.setText(updateProgressModel.getProgress());
                        FirmwareUpdateDialogBinding firmwareUpdateDialogBinding20 = this$0.dialogBinding;
                        if (firmwareUpdateDialogBinding20 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                        } else {
                            firmwareUpdateDialogBinding = firmwareUpdateDialogBinding20;
                        }
                        firmwareUpdateDialogBinding.progressBar.setProgress(Integer.parseInt(updateProgressModel.getProgress()));
                        this$0.getSharedPrefs().setFwDownloadComplete(false);
                    } else {
                        this$0.showUpdateProgressDialog();
                        this$0.isupdateProgressDialogShowing = true;
                    }
                    break;
                case 6:
                    this$0.isUpdateStart = false;
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding21 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding21 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                        firmwareUpdateDialogBinding21 = null;
                    }
                    firmwareUpdateDialogBinding21.progressText.setText("100");
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding22 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding22 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                        firmwareUpdateDialogBinding22 = null;
                    }
                    firmwareUpdateDialogBinding22.progressBar.setProgress(100);
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding23 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding23 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                        firmwareUpdateDialogBinding23 = null;
                    }
                    firmwareUpdateDialogBinding23.header.setText(this$0.getResources().getString(C2074R.string.firmware_updated_success));
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding24 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding24 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                        firmwareUpdateDialogBinding24 = null;
                    }
                    firmwareUpdateDialogBinding24.title.setText("After the 'Update Complete' message appears on your radar screen, please press the power button on the radar device to complete the update.");
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding25 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding25 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                    } else {
                        firmwareUpdateDialogBinding = firmwareUpdateDialogBinding25;
                    }
                    firmwareUpdateDialogBinding.btnDone.setVisibility(0);
                    this$0.getSharedPrefs().setFwDownloadComplete(false);
                    break;
                case 7:
                    this$0.isUpdateStart = false;
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding26 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding26 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                        firmwareUpdateDialogBinding26 = null;
                    }
                    firmwareUpdateDialogBinding26.header.setText(this$0.getResources().getString(C2074R.string.firmware_updated_fail));
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding27 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding27 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                        firmwareUpdateDialogBinding27 = null;
                    }
                    firmwareUpdateDialogBinding27.title.setText("Please restart the update process");
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding28 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding28 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                        firmwareUpdateDialogBinding28 = null;
                    }
                    firmwareUpdateDialogBinding28.llProgress.setVisibility(8);
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding29 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding29 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                        firmwareUpdateDialogBinding29 = null;
                    }
                    firmwareUpdateDialogBinding29.progressBar.setVisibility(8);
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding30 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding30 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                    } else {
                        firmwareUpdateDialogBinding = firmwareUpdateDialogBinding30;
                    }
                    firmwareUpdateDialogBinding.btnDone.setVisibility(0);
                    this$0.getSharedPrefs().setFwDownloadComplete(false);
                    break;
                case 8:
                    this$0.isUpdateStart = true;
                    break;
                case 9:
                    this$0.isUpdateStart = false;
                    break;
                default:
                    throw new NoWhenBranchMatchedException();
            }
        }
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit setObservables$lambda$5(FirmwareUpdateActivity this$0, UpdateProgressModel updateProgressModel) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        if ((this$0.isUpdateClick && !this$0.isRadarWiFiConnected) || updateProgressModel.getUpdateState() == FIrmWareUpdateProcess.FILE_UPDATE_START) {
            FIrmWareUpdateProcess updateState = updateProgressModel.getUpdateState();
            this$0.updateState = updateState;
            Log.e("update state", updateState.toString());
            FirmwareUpdateDialogBinding firmwareUpdateDialogBinding = null;
            switch (WhenMappings.$EnumSwitchMapping$0[updateProgressModel.getUpdateState().ordinal()]) {
                case 1:
                    this$0.isUpdateStart = true;
                    this$0.showUpdateProgressDialog();
                    this$0.isupdateProgressDialogShowing = true;
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding2 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding2 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                    } else {
                        firmwareUpdateDialogBinding = firmwareUpdateDialogBinding2;
                    }
                    firmwareUpdateDialogBinding.header.setText(this$0.getResources().getString(C2074R.string.firmware_update_progress));
                    break;
                case 2:
                    this$0.isUpdateStart = true;
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding3 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding3 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                        firmwareUpdateDialogBinding3 = null;
                    }
                    firmwareUpdateDialogBinding3.title.setText("Checking Version...");
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding4 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding4 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                        firmwareUpdateDialogBinding4 = null;
                    }
                    firmwareUpdateDialogBinding4.progressText.setText(updateProgressModel.getProgress());
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding5 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding5 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                    } else {
                        firmwareUpdateDialogBinding = firmwareUpdateDialogBinding5;
                    }
                    firmwareUpdateDialogBinding.progressBar.setProgress(Integer.parseInt(updateProgressModel.getProgress()));
                    break;
                case 3:
                    this$0.isUpdateStart = false;
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding6 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding6 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                        firmwareUpdateDialogBinding6 = null;
                    }
                    firmwareUpdateDialogBinding6.title.setText("Downloading....");
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding7 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding7 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                        firmwareUpdateDialogBinding7 = null;
                    }
                    firmwareUpdateDialogBinding7.progressText.setText("0");
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding8 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding8 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                        firmwareUpdateDialogBinding8 = null;
                    }
                    firmwareUpdateDialogBinding8.progressBar.setProgress(0);
                    if (this$0.versionUpdateModel != null) {
                        BuildersKt__Builders_commonKt.launch$default(CoroutineScopeKt.CoroutineScope(Dispatchers.getMain()), null, null, new FirmwareUpdateActivity$setObservables$4$1$1(this$0, null), 3, null);
                    }
                    break;
                case 4:
                    if (this$0.dialogBinding != null) {
                        this$0.getSharedPrefs().setFirmWareUpdating(false);
                        this$0.isUpdateStart = false;
                        FirmwareUpdateDialogBinding firmwareUpdateDialogBinding9 = this$0.dialogBinding;
                        if (firmwareUpdateDialogBinding9 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                            firmwareUpdateDialogBinding9 = null;
                        }
                        firmwareUpdateDialogBinding9.header.setText(this$0.getResources().getString(C2074R.string.firmware_updated_fail));
                        FirmwareUpdateDialogBinding firmwareUpdateDialogBinding10 = this$0.dialogBinding;
                        if (firmwareUpdateDialogBinding10 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                            firmwareUpdateDialogBinding10 = null;
                        }
                        firmwareUpdateDialogBinding10.title.setText("Please restart the update process");
                        FirmwareUpdateDialogBinding firmwareUpdateDialogBinding11 = this$0.dialogBinding;
                        if (firmwareUpdateDialogBinding11 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                            firmwareUpdateDialogBinding11 = null;
                        }
                        firmwareUpdateDialogBinding11.llProgress.setVisibility(8);
                        FirmwareUpdateDialogBinding firmwareUpdateDialogBinding12 = this$0.dialogBinding;
                        if (firmwareUpdateDialogBinding12 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                            firmwareUpdateDialogBinding12 = null;
                        }
                        firmwareUpdateDialogBinding12.progressBar.setVisibility(8);
                        FirmwareUpdateDialogBinding firmwareUpdateDialogBinding13 = this$0.dialogBinding;
                        if (firmwareUpdateDialogBinding13 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                        } else {
                            firmwareUpdateDialogBinding = firmwareUpdateDialogBinding13;
                        }
                        firmwareUpdateDialogBinding.btnDone.setVisibility(0);
                    } else {
                        this$0.showUpdateProgressDialog();
                        this$0.isupdateProgressDialogShowing = true;
                    }
                    break;
                case 5:
                    this$0.isUpdateStart = true;
                    this$0.isBeforeUpdating = true;
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding14 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding14 != null) {
                        if (firmwareUpdateDialogBinding14 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                            firmwareUpdateDialogBinding14 = null;
                        }
                        firmwareUpdateDialogBinding14.header.setText(this$0.getResources().getString(C2074R.string.firmware_update_progress));
                        FirmwareUpdateDialogBinding firmwareUpdateDialogBinding15 = this$0.dialogBinding;
                        if (firmwareUpdateDialogBinding15 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                            firmwareUpdateDialogBinding15 = null;
                        }
                        firmwareUpdateDialogBinding15.llProgress.setVisibility(0);
                        FirmwareUpdateDialogBinding firmwareUpdateDialogBinding16 = this$0.dialogBinding;
                        if (firmwareUpdateDialogBinding16 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                            firmwareUpdateDialogBinding16 = null;
                        }
                        firmwareUpdateDialogBinding16.progressBar.setVisibility(0);
                        FirmwareUpdateDialogBinding firmwareUpdateDialogBinding17 = this$0.dialogBinding;
                        if (firmwareUpdateDialogBinding17 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                            firmwareUpdateDialogBinding17 = null;
                        }
                        firmwareUpdateDialogBinding17.btnDone.setVisibility(8);
                        FirmwareUpdateDialogBinding firmwareUpdateDialogBinding18 = this$0.dialogBinding;
                        if (firmwareUpdateDialogBinding18 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                            firmwareUpdateDialogBinding18 = null;
                        }
                        firmwareUpdateDialogBinding18.title.setText("Updating: " + new Utils().getUpdatingFileName(updateProgressModel.getUpdatingFileName()));
                        FirmwareUpdateDialogBinding firmwareUpdateDialogBinding19 = this$0.dialogBinding;
                        if (firmwareUpdateDialogBinding19 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                            firmwareUpdateDialogBinding19 = null;
                        }
                        firmwareUpdateDialogBinding19.progressText.setText(updateProgressModel.getProgress());
                        FirmwareUpdateDialogBinding firmwareUpdateDialogBinding20 = this$0.dialogBinding;
                        if (firmwareUpdateDialogBinding20 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                        } else {
                            firmwareUpdateDialogBinding = firmwareUpdateDialogBinding20;
                        }
                        firmwareUpdateDialogBinding.progressBar.setProgress(Integer.parseInt(updateProgressModel.getProgress()));
                        this$0.getSharedPrefs().setFwDownloadComplete(false);
                    } else {
                        this$0.showUpdateProgressDialog();
                        this$0.isupdateProgressDialogShowing = true;
                    }
                    break;
                case 6:
                    this$0.isUpdateStart = false;
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding21 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding21 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                        firmwareUpdateDialogBinding21 = null;
                    }
                    firmwareUpdateDialogBinding21.progressText.setText("100");
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding22 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding22 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                        firmwareUpdateDialogBinding22 = null;
                    }
                    firmwareUpdateDialogBinding22.progressBar.setProgress(100);
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding23 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding23 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                        firmwareUpdateDialogBinding23 = null;
                    }
                    firmwareUpdateDialogBinding23.header.setText(this$0.getResources().getString(C2074R.string.firmware_updated_success));
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding24 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding24 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                        firmwareUpdateDialogBinding24 = null;
                    }
                    firmwareUpdateDialogBinding24.title.setText("After the 'Update Complete' message appears on your radar screen, please press the power button on the radar device to complete the update.");
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding25 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding25 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                    } else {
                        firmwareUpdateDialogBinding = firmwareUpdateDialogBinding25;
                    }
                    firmwareUpdateDialogBinding.btnDone.setVisibility(0);
                    this$0.getSharedPrefs().setFirmWareUpdating(false);
                    this$0.getSharedPrefs().setFwDownloadComplete(false);
                    break;
                case 7:
                    this$0.getSharedPrefs().setFirmWareUpdating(false);
                    this$0.getSharedPrefs().setFwDownloadComplete(false);
                    this$0.isUpdateStart = false;
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding26 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding26 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                        firmwareUpdateDialogBinding26 = null;
                    }
                    firmwareUpdateDialogBinding26.header.setText(this$0.getResources().getString(C2074R.string.firmware_updated_fail));
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding27 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding27 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                        firmwareUpdateDialogBinding27 = null;
                    }
                    firmwareUpdateDialogBinding27.title.setText("Please restart the update process");
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding28 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding28 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                        firmwareUpdateDialogBinding28 = null;
                    }
                    firmwareUpdateDialogBinding28.llProgress.setVisibility(8);
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding29 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding29 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                        firmwareUpdateDialogBinding29 = null;
                    }
                    firmwareUpdateDialogBinding29.progressBar.setVisibility(8);
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding30 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding30 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                    } else {
                        firmwareUpdateDialogBinding = firmwareUpdateDialogBinding30;
                    }
                    firmwareUpdateDialogBinding.btnDone.setVisibility(0);
                    break;
                case 8:
                    this$0.isUpdateStart = true;
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding31 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding31 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                        firmwareUpdateDialogBinding31 = null;
                    }
                    firmwareUpdateDialogBinding31.title.setText("Downloading....");
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding32 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding32 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                        firmwareUpdateDialogBinding32 = null;
                    }
                    firmwareUpdateDialogBinding32.progressText.setText(updateProgressModel.getProgress());
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding33 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding33 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                    } else {
                        firmwareUpdateDialogBinding = firmwareUpdateDialogBinding33;
                    }
                    firmwareUpdateDialogBinding.progressBar.setProgress(Integer.parseInt(updateProgressModel.getProgress()));
                    break;
                case 9:
                    this$0.isUpdateStart = false;
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding34 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding34 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                        firmwareUpdateDialogBinding34 = null;
                    }
                    firmwareUpdateDialogBinding34.title.setText("Downloaded and getting ready for update.");
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding35 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding35 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                        firmwareUpdateDialogBinding35 = null;
                    }
                    firmwareUpdateDialogBinding35.progressText.setText("100");
                    FirmwareUpdateDialogBinding firmwareUpdateDialogBinding36 = this$0.dialogBinding;
                    if (firmwareUpdateDialogBinding36 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
                    } else {
                        firmwareUpdateDialogBinding = firmwareUpdateDialogBinding36;
                    }
                    firmwareUpdateDialogBinding.progressBar.setProgress(100);
                    break;
                default:
                    throw new NoWhenBranchMatchedException();
            }
        }
        return Unit.INSTANCE;
    }

    private final void isCheckUpdateDialogValidation(boolean isupdateProgressDialogShowing) {
        AlertDialog alertDialog;
        if (isupdateProgressDialogShowing || (alertDialog = this.updateProgressDialog) == null) {
            return;
        }
        if (alertDialog == null) {
            Intrinsics.throwUninitializedPropertyAccessException("updateProgressDialog");
            alertDialog = null;
        }
        alertDialog.show();
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

    @Override // com.uniden.rtach.p005ui.base.BaseActivity, androidx.appcompat.app.AppCompatActivity, androidx.fragment.app.FragmentActivity, android.app.Activity
    protected void onDestroy() {
        super.onDestroy();
        this.isUpdateClick = false;
        new WakeLockHelper(getContext()).releaseWakeLock();
        getSharedPrefs().setFirmWareUpdating(false);
        BaseApplication baseApplication = this.myApp;
        if (baseApplication == null) {
            Intrinsics.throwUninitializedPropertyAccessException("myApp");
            baseApplication = null;
        }
        baseApplication.getAlertCharacteristicChanged().postValue("0&0&0&0");
    }

    private final void showUpdateProgressDialog() {
        AlertDialog.Builder builder = new AlertDialog.Builder(getActivity());
        AlertDialog alertDialog = null;
        View viewInflate = getActivity().getLayoutInflater().inflate(C2074R.layout.firmware_update_dialog, (ViewGroup) null);
        Intrinsics.checkNotNullExpressionValue(viewInflate, "inflate(...)");
        builder.setView(viewInflate);
        builder.setCancelable(false);
        this.dialogBinding = FirmwareUpdateDialogBinding.bind(viewInflate);
        AlertDialog alertDialogCreate = builder.create();
        this.updateProgressDialog = alertDialogCreate;
        if (alertDialogCreate == null) {
            Intrinsics.throwUninitializedPropertyAccessException("updateProgressDialog");
            alertDialogCreate = null;
        }
        Window window = (Window) Objects.requireNonNull(alertDialogCreate.getWindow());
        if (window != null) {
            window.setBackgroundDrawable(new ColorDrawable(0));
        }
        FirmwareUpdateDialogBinding firmwareUpdateDialogBinding = this.dialogBinding;
        if (firmwareUpdateDialogBinding == null) {
            Intrinsics.throwUninitializedPropertyAccessException("dialogBinding");
            firmwareUpdateDialogBinding = null;
        }
        firmwareUpdateDialogBinding.btnDone.setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.activity.FirmwareUpdateActivity$$ExternalSyntheticLambda13
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                FirmwareUpdateActivity.showUpdateProgressDialog$lambda$6(this.f$0, view);
            }
        });
        AlertDialog alertDialog2 = this.updateProgressDialog;
        if (alertDialog2 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("updateProgressDialog");
        } else {
            alertDialog = alertDialog2;
        }
        alertDialog.show();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void showUpdateProgressDialog$lambda$6(FirmwareUpdateActivity this$0, View view) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        AlertDialog alertDialog = this$0.updateProgressDialog;
        if (alertDialog == null) {
            Intrinsics.throwUninitializedPropertyAccessException("updateProgressDialog");
            alertDialog = null;
        }
        alertDialog.dismiss();
        this$0.getSharedPrefs().setFwDownloadComplete(false);
        this$0.getSharedPrefs().setFwFlashing(false);
    }

    private final void checkFirmwareUpdate() {
        BluetoothManager.Companion companion = BluetoothManager.INSTANCE;
        Context applicationContext = getApplicationContext();
        Intrinsics.checkNotNullExpressionValue(applicationContext, "getApplicationContext(...)");
        companion.getInstance(applicationContext).readRadarSoftwareVersion();
        new Handler(Looper.getMainLooper()).postDelayed(new Runnable() { // from class: com.uniden.rtach.ui.activity.FirmwareUpdateActivity$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                FirmwareUpdateActivity.checkFirmwareUpdate$lambda$7(this.f$0);
            }
        }, 600L);
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Multi-variable type inference failed */
    public static final void checkFirmwareUpdate$lambda$7(FirmwareUpdateActivity this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        ((ActivityFirmwareUpdateBinding) this$0.getBinding()).llNoConnection.setVisibility(8);
        ((ActivityFirmwareUpdateBinding) this$0.getBinding()).llWaitVersion.setVisibility(8);
        ((ActivityFirmwareUpdateBinding) this$0.getBinding()).mainLayout.setVisibility(0);
        Utils utils = new Utils();
        Context applicationContext = this$0.getApplicationContext();
        Intrinsics.checkNotNullExpressionValue(applicationContext, "getApplicationContext(...)");
        this$0.versionUpdateModel = utils.checkIfUpdateAvailable(applicationContext);
        Log.e("FW_VERSION_FILE_EXIST", "checkFirmwareUpdate" + this$0.getSharedPrefs().getLatestFirmwareVersion());
        this$0.setData();
    }

    @Override // com.uniden.rtach.p005ui.base.BaseActivity, androidx.fragment.app.FragmentActivity, android.app.Activity
    protected void onResume() {
        super.onResume();
        setData();
    }

    /* JADX WARN: Multi-variable type inference failed */
    private final void setData() {
        AlertDialog alertDialog;
        String string;
        Log.e("FW_VERSION_FILE_EXIST", "setData" + getSharedPrefs().getLatestFirmwareVersion());
        this.versionUpdateModel = new Utils().checkIfUpdateAvailable(getContext());
        setFirmwareTable();
        if (getSharedPrefs().isWiFiModel()) {
            String connectedWiFiSSID = getSharedPrefs().getConnectedWiFiSSID();
            if (this.isRadarWiFiConnected) {
                ((ActivityFirmwareUpdateBinding) getBinding()).constraintWifi.setVisibility(8);
            } else {
                ((ActivityFirmwareUpdateBinding) getBinding()).constraintWifi.setVisibility(0);
                ((ActivityFirmwareUpdateBinding) getBinding()).btnChangeSsid.setText(getResources().getString(C2074R.string.connect));
                TextView textView = ((ActivityFirmwareUpdateBinding) getBinding()).txtConnectedWifi;
                if (connectedWiFiSSID.length() > 0) {
                    string = connectedWiFiSSID + " (disconnected)";
                } else {
                    string = getResources().getString(C2074R.string.connect_wifi_text);
                    Intrinsics.checkNotNullExpressionValue(string, "getString(...)");
                }
                textView.setText(string);
                ((ActivityFirmwareUpdateBinding) getBinding()).imgWife.setImageResource(C2074R.drawable.ic_wifi_not_connect);
            }
        } else {
            ((ActivityFirmwareUpdateBinding) getBinding()).constraintWifi.setVisibility(8);
        }
        AlertDialog alertDialog2 = null;
        if (getSharedPrefs().isUpdateAvailable()) {
            if (!getSharedPrefs().isWiFiModel() && !StringsKt.contains$default((CharSequence) getSharedPrefs().getDeviceName(), (CharSequence) "R9", false, 2, (Object) null)) {
                ((ActivityFirmwareUpdateBinding) getBinding()).txtFirmwareUpdateText.setText(Html.fromHtml("Firmware Update available for your device. Please connect your device to a PC and use the PC Tool to complete the update. Visit our website <a href=\"https://www.uniden.info/download/\" style=\"color: #09a0ff; text-decoration: none;\">Uniden Support - Downloads and Manuals</a> and enter your model number to download the latest version of the R/TACH Tool to install the firmware updates."));
                ((ActivityFirmwareUpdateBinding) getBinding()).txtFirmwareUpdateText.setMovementMethod(LinkMovementMethod.getInstance());
                ((ActivityFirmwareUpdateBinding) getBinding()).txtFirmwareUpdateText.setLinkTextColor(Color.parseColor("#09a0ff"));
                ((ActivityFirmwareUpdateBinding) getBinding()).llUpdate.setVisibility(8);
            } else {
                ((ActivityFirmwareUpdateBinding) getBinding()).txtFirmwareUpdateText.setText("Firmware Update available for " + getSharedPrefs().getDeviceName() + " device.");
                ((ActivityFirmwareUpdateBinding) getBinding()).llUpdate.setVisibility(0);
            }
        } else {
            ((ActivityFirmwareUpdateBinding) getBinding()).constraintWifi.setVisibility(8);
            ((ActivityFirmwareUpdateBinding) getBinding()).llUpdate.setVisibility(8);
            ((ActivityFirmwareUpdateBinding) getBinding()).txtFirmwareUpdateText.setText("Your Firmware is up to date.");
        }
        if (this.updateState != FIrmWareUpdateProcess.FILE_UPDATE_COMPLETE || (alertDialog = this.updateProgressDialog) == null) {
            return;
        }
        if (alertDialog == null) {
            Intrinsics.throwUninitializedPropertyAccessException("updateProgressDialog");
            alertDialog = null;
        }
        if (alertDialog.isShowing()) {
            this.isupdateProgressDialogShowing = false;
            AlertDialog alertDialog3 = this.updateProgressDialog;
            if (alertDialog3 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("updateProgressDialog");
            } else {
                alertDialog2 = alertDialog3;
            }
            alertDialog2.dismiss();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setListeners$lambda$8(FirmwareUpdateActivity this$0, View view) {
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
        ((ActivityFirmwareUpdateBinding) getBinding()).btnBack.setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.activity.FirmwareUpdateActivity$$ExternalSyntheticLambda6
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                FirmwareUpdateActivity.setListeners$lambda$8(this.f$0, view);
            }
        });
        ((ActivityFirmwareUpdateBinding) getBinding()).checkRecoveryMode.setOnCheckedChangeListener(new CompoundButton.OnCheckedChangeListener() { // from class: com.uniden.rtach.ui.activity.FirmwareUpdateActivity$$ExternalSyntheticLambda7
            @Override // android.widget.CompoundButton.OnCheckedChangeListener
            public final void onCheckedChanged(CompoundButton compoundButton, boolean z) {
                FirmwareUpdateActivity.setListeners$lambda$9(compoundButton, z);
            }
        });
        ((ActivityFirmwareUpdateBinding) getBinding()).txtFullUpdate.setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.activity.FirmwareUpdateActivity$$ExternalSyntheticLambda8
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                FirmwareUpdateActivity.setListeners$lambda$10(this.f$0, view);
            }
        });
        ((ActivityFirmwareUpdateBinding) getBinding()).txtDbUpdate.setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.activity.FirmwareUpdateActivity$$ExternalSyntheticLambda9
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                FirmwareUpdateActivity.setListeners$lambda$12(this.f$0, view);
            }
        });
        ((ActivityFirmwareUpdateBinding) getBinding()).btnChangeSsid.setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.activity.FirmwareUpdateActivity$$ExternalSyntheticLambda10
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                FirmwareUpdateActivity.setListeners$lambda$13(this.f$0, view);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setListeners$lambda$9(CompoundButton compoundButton, boolean z) {
        Constant.INSTANCE.setUpdateMode(z ? "R" : "N");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setListeners$lambda$10(FirmwareUpdateActivity this$0, View view) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Constant.INSTANCE.setUpdateType("F");
        this$0.isDbUpdateOnly = false;
        this$0.checkForUpdates();
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Multi-variable type inference failed */
    public static final void setListeners$lambda$12(FirmwareUpdateActivity this$0, View view) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Constant.INSTANCE.setUpdateType("D");
        this$0.isDbUpdateOnly = true;
        VersionUpdateModel versionUpdateModel = this$0.versionUpdateModel;
        if (versionUpdateModel != null) {
            if (versionUpdateModel.isGpsDbUpdateAvailable() || ((ActivityFirmwareUpdateBinding) this$0.getBinding()).checkRecoveryMode.isChecked()) {
                this$0.checkForUpdates();
            } else {
                this$0.showVersionUptoDateDialog();
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setListeners$lambda$13(FirmwareUpdateActivity this$0, View view) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        this$0.startActivity(new Intent(this$0.getContext(), (Class<?>) WifiSettingActivity.class));
    }

    private final void checkForUpdates() {
        if (new Utils().isNetworkAvailable(getActivity()) || getSharedPrefs().isWiFiModel()) {
            showUpdateAlertDialog();
        } else {
            Toast.makeText(getActivity(), "Please enable internet connection to update firmware", 0).show();
        }
    }

    private final void showUpdateAlertDialog() {
        AlertDialog.Builder builder = new AlertDialog.Builder(getActivity());
        View viewInflate = getActivity().getLayoutInflater().inflate(C2074R.layout.update_warning_dialog, (ViewGroup) null);
        Intrinsics.checkNotNullExpressionValue(viewInflate, "inflate(...)");
        builder.setView(viewInflate);
        builder.setCancelable(false);
        UpdateWarningDialogBinding updateWarningDialogBindingBind = UpdateWarningDialogBinding.bind(viewInflate);
        Intrinsics.checkNotNullExpressionValue(updateWarningDialogBindingBind, "bind(...)");
        final AlertDialog alertDialogCreate = builder.create();
        Window window = (Window) Objects.requireNonNull(alertDialogCreate.getWindow());
        if (window != null) {
            window.setBackgroundDrawable(new ColorDrawable(0));
        }
        updateWarningDialogBindingBind.btnCancel.setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.activity.FirmwareUpdateActivity$$ExternalSyntheticLambda11
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                alertDialogCreate.dismiss();
            }
        });
        updateWarningDialogBindingBind.btnOk.setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.activity.FirmwareUpdateActivity$$ExternalSyntheticLambda12
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                FirmwareUpdateActivity.showUpdateAlertDialog$lambda$15(alertDialogCreate, this, view);
            }
        });
        alertDialogCreate.show();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void showUpdateAlertDialog$lambda$15(AlertDialog alertDialog, FirmwareUpdateActivity this$0, View view) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        alertDialog.dismiss();
        this$0.doUpdate();
    }

    private final void showVersionUptoDateDialog() {
        AlertDialog.Builder builder = new AlertDialog.Builder(getContext());
        builder.setTitle("Update Alert.");
        builder.setMessage("Your firmware DB version is upto date.\n\n");
        builder.setPositiveButton("OK", new DialogInterface.OnClickListener() { // from class: com.uniden.rtach.ui.activity.FirmwareUpdateActivity$$ExternalSyntheticLambda14
            @Override // android.content.DialogInterface.OnClickListener
            public final void onClick(DialogInterface dialogInterface, int i) {
                FirmwareUpdateActivity.showVersionUptoDateDialog$lambda$16(dialogInterface, i);
            }
        });
        builder.create().show();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void showVersionUptoDateDialog$lambda$16(DialogInterface dialog, int i) {
        Intrinsics.checkNotNullParameter(dialog, "dialog");
        dialog.dismiss();
    }

    private final void doUpdate() {
        if (!getSharedPrefs().isWiFiModel()) {
            updateFirmwareForBTModel();
            return;
        }
        if (this.isRadarWiFiConnected) {
            updateFirmwareForWiFiModel();
        } else if (new Utils().isNetworkAvailable(getActivity())) {
            updateFirmwareForBTModel();
        } else {
            Toast.makeText(getActivity(), "Please enable internet connection to update firmware", 0).show();
        }
    }

    private final void updateFirmwareForWiFiModel() {
        this.isUpdateClick = true;
        Log.e("TAG_FW", getSharedPrefs().getLatestFirmwareUrl());
        BluetoothManager.INSTANCE.getInstance(getContext()).writeCharacteristic("BTdnSTWFU:" + Constant.INSTANCE.getUpdateType() + ',' + Constant.INSTANCE.getUpdateMode() + ',' + getSharedPrefs().getLatestFirmwareUrl());
    }

    private final void updateFirmwareForBTModel() {
        this.isUpdateClick = true;
        getSharedPrefs().setFirmWareUpdating(true);
        UpdateProgressModel updateProgressModel = new UpdateProgressModel(FIrmWareUpdateProcess.FILE_DOWNLOAD_START, "", "");
        BaseApplication baseApplication = this.myApp;
        if (baseApplication == null) {
            Intrinsics.throwUninitializedPropertyAccessException("myApp");
            baseApplication = null;
        }
        baseApplication.getFirmwareUpdateProcessBT().postValue(updateProgressModel);
        BuildersKt__Builders_commonKt.launch$default(CoroutineScopeKt.CoroutineScope(Dispatchers.getIO()), null, null, new C21111(null), 3, null);
    }

    /* JADX INFO: renamed from: com.uniden.rtach.ui.activity.FirmwareUpdateActivity$updateFirmwareForBTModel$1 */
    /* JADX INFO: compiled from: FirmwareUpdateActivity.kt */
    @Metadata(m490d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, m491d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    @DebugMetadata(m503c = "com.uniden.rtach.ui.activity.FirmwareUpdateActivity$updateFirmwareForBTModel$1", m504f = "FirmwareUpdateActivity.kt", m505i = {}, m506l = {645}, m507m = "invokeSuspend", m508n = {}, m509s = {})
    static final class C21111 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        int label;

        C21111(Continuation<? super C21111> continuation) {
            super(2, continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return FirmwareUpdateActivity.this.new C21111(continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C21111) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                String latestFirmwareUrl = FirmwareUpdateActivity.this.getSharedPrefs().getLatestFirmwareUrl();
                if (latestFirmwareUrl.length() <= 0) {
                    Toast.makeText(FirmwareUpdateActivity.this.getActivity(), "Download Url not found!!!", 0).show();
                } else {
                    Log.d("TAG_FW_URL", "FW url:" + latestFirmwareUrl + ' ');
                    this.label = 1;
                    if (FirmwareUpdateActivity.this.getViewModel().downloadFile(latestFirmwareUrl, this) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
            }
            return Unit.INSTANCE;
        }
    }
}
