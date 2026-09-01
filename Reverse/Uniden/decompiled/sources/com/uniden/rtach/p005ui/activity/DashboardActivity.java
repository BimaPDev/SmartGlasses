package com.uniden.rtach.p005ui.activity;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.animation.AnimatorSet;
import android.animation.ValueAnimator;
import android.app.AlertDialog;
import android.app.Application;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.SharedPreferences;
import android.media.AudioManager;
import android.net.Uri;
import android.os.CountDownTimer;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;
import android.view.KeyEvent;
import android.view.LayoutInflater;
import android.view.View;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.core.app.NotificationCompat;
import androidx.core.content.ContextCompat;
import androidx.core.view.GravityCompat;
import androidx.databinding.DataBindingUtil;
import androidx.exifinterface.media.ExifInterface;
import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentTransaction;
import androidx.lifecycle.MutableLiveData;
import androidx.lifecycle.ViewModelLazy;
import androidx.lifecycle.ViewModelProvider;
import androidx.lifecycle.ViewModelStore;
import androidx.lifecycle.viewmodel.CreationExtras;
import androidx.recyclerview.widget.GridLayoutManager;
import androidx.recyclerview.widget.RecyclerView;
import com.google.firebase.analytics.FirebaseAnalytics;
import com.google.firebase.sessions.settings.RemoteSettings;
import com.uniden.rtach.BuildConfig;
import com.uniden.rtach.C2074R;
import com.uniden.rtach.data.model.AlertBandDataModel;
import com.uniden.rtach.data.model.ETCDataModel;
import com.uniden.rtach.data.model.NavigationMenuModel;
import com.uniden.rtach.data.sharedpref.StoreUserData;
import com.uniden.rtach.databinding.ActivityDashboardBinding;
import com.uniden.rtach.helper.AlertDataConverter;
import com.uniden.rtach.helper.BaseApplication;
import com.uniden.rtach.helper.BluetoothManager;
import com.uniden.rtach.helper.Constant;
import com.uniden.rtach.helper.MyTab;
import com.uniden.rtach.helper.OnMenuItemClick;
import com.uniden.rtach.helper.Utils;
import com.uniden.rtach.p005ui.adapter.BandAlertAdapter;
import com.uniden.rtach.p005ui.adapter.NavigationDrawerAdapter;
import com.uniden.rtach.p005ui.fragment.DashboardFragment;
import com.uniden.rtach.p005ui.fragment.MapsFragment;
import com.uniden.rtach.viewmodel.DashboardViewModel;
import dagger.hilt.android.AndroidEntryPoint;
import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.Reader;
import java.util.ArrayList;
import java.util.List;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
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
import kotlin.p006io.CloseableKt;
import kotlin.p006io.TextStreamsKt;
import kotlin.text.Charsets;
import kotlin.text.StringsKt;
import kotlinx.coroutines.BuildersKt__Builders_commonKt;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.CoroutineScopeKt;
import kotlinx.coroutines.Dispatchers;
import org.json.JSONObject;

/* JADX INFO: compiled from: DashboardActivity.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000´\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0004\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u000f\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010!\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0018\u0002\n\u0002\b\r\b\u0007\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\u0007¢\u0006\u0004\b\u0003\u0010\u0004J\b\u00103\u001a\u000204H\u0014J\b\u00105\u001a\u000204H\u0014J\b\u00106\u001a\u000204H\u0014J\b\u00107\u001a\u000204H\u0002J\b\u00108\u001a\u000204H\u0014J\b\u00109\u001a\u000204H\u0002J\b\u0010:\u001a\u000204H\u0002J\u0010\u0010;\u001a\u0002042\u0006\u0010<\u001a\u00020\u0018H\u0002J\u0010\u0010=\u001a\u0002042\u0006\u0010<\u001a\u00020\u0018H\u0002J\b\u0010>\u001a\u000204H\u0002J\b\u0010?\u001a\u000204H\u0002J\b\u0010@\u001a\u000204H\u0002J\u0010\u0010A\u001a\u0002042\u0006\u0010<\u001a\u00020\u0018H\u0002J-\u0010B\u001a\u0002042\u0006\u0010C\u001a\u00020D2\u0016\u0010E\u001a\u0012\u0012\u0004\u0012\u00020!0Gj\b\u0012\u0004\u0012\u00020!`FH\u0002¢\u0006\u0002\u0010HJ\u0010\u0010I\u001a\u0002042\u0006\u0010J\u001a\u00020KH\u0002J\u0010\u0010L\u001a\u0002042\u0006\u0010J\u001a\u00020KH\u0002J\u0010\u0010M\u001a\u0002042\u0006\u0010C\u001a\u00020DH\u0002J-\u0010N\u001a\u000204\"\u0004\b\u0000\u0010O*\b\u0012\u0004\u0012\u0002HO0P2\u0006\u0010Q\u001a\u00020\u00142\u0006\u0010R\u001a\u0002HOH\u0002¢\u0006\u0002\u0010SJ\u0006\u0010T\u001a\u000204J\"\u0010U\u001a\u0002042\u0006\u0010V\u001a\u00020\u00142\u0006\u0010W\u001a\u00020\u00142\b\u0010X\u001a\u0004\u0018\u00010YH\u0014J\u0010\u0010Z\u001a\u0002042\u0006\u0010[\u001a\u00020\\H\u0002J\u0010\u0010]\u001a\u0002042\u0006\u0010^\u001a\u00020\u0018H\u0002J\b\u0010_\u001a\u000204H\u0002J\b\u0010`\u001a\u000204H\u0002J\b\u0010a\u001a\u000204H\u0002J\b\u0010b\u001a\u000204H\u0002J\u001a\u0010c\u001a\u00020\u001d2\u0006\u0010d\u001a\u00020\u00142\b\u0010e\u001a\u0004\u0018\u00010fH\u0016J\u0018\u0010g\u001a\u00020\u00142\u0006\u0010h\u001a\u00020\u00142\u0006\u0010i\u001a\u00020\u0014H\u0002J\u0018\u0010j\u001a\u00020\u00142\u0006\u0010h\u001a\u00020\u00142\u0006\u0010i\u001a\u00020\u0014H\u0002J\u0010\u0010k\u001a\u00020\u00142\u0006\u0010h\u001a\u00020\u0014H\u0002J(\u0010l\u001a\u0002042\u0006\u0010m\u001a\u00020\u00182\u0006\u0010n\u001a\u00020\u00182\u0006\u0010o\u001a\u00020\u00182\u0006\u0010p\u001a\u00020\u0018H\u0002J\u0010\u0010q\u001a\u0002042\u0006\u0010r\u001a\u00020\u001dH\u0002R\u001b\u0010\u0005\u001a\u00020\u00068BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b\t\u0010\n\u001a\u0004\b\u0007\u0010\bR\u000e\u0010\u000b\u001a\u00020\fX\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\r\u001a\u00020\u000eX\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\u000f\u001a\u00020\u0010X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\u0011\u001a\u00020\u0012X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\u0013\u001a\u00020\u0014X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u0015\u001a\u0004\u0018\u00010\u0016X\u0082\u000e¢\u0006\u0002\n\u0000R\u0014\u0010\u0017\u001a\u00020\u0018X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b\u0019\u0010\u001aR\u000e\u0010\u001b\u001a\u00020\u0014X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u001c\u001a\u00020\u001dX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u001e\u001a\u0004\u0018\u00010\u001fX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010 \u001a\u0004\u0018\u00010!X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\"\u001a\u00020#X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010$\u001a\u00020%X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010&\u001a\u00020%X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010'\u001a\u00020%X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010(\u001a\u00020)X\u0082.¢\u0006\u0002\n\u0000R\u001a\u0010*\u001a\u00020\u001dX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b*\u0010+\"\u0004\b,\u0010-R\u000e\u0010.\u001a\u00020\u0014X\u0082D¢\u0006\u0002\n\u0000R\u000e\u0010/\u001a\u00020\u0018X\u0082D¢\u0006\u0002\n\u0000R\u000e\u00100\u001a\u00020\u001dX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u00101\u001a\u000202X\u0082.¢\u0006\u0002\n\u0000¨\u0006s"}, m491d2 = {"Lcom/uniden/rtach/ui/activity/DashboardActivity;", "Lcom/uniden/rtach/ui/base/BaseActivity;", "Lcom/uniden/rtach/databinding/ActivityDashboardBinding;", "<init>", "()V", "viewModel", "Lcom/uniden/rtach/viewmodel/DashboardViewModel;", "getViewModel", "()Lcom/uniden/rtach/viewmodel/DashboardViewModel;", "viewModel$delegate", "Lkotlin/Lazy;", "adapter", "Lcom/uniden/rtach/ui/adapter/NavigationDrawerAdapter;", "myApp", "Lcom/uniden/rtach/helper/BaseApplication;", "bandAdapter", "Lcom/uniden/rtach/ui/adapter/BandAlertAdapter;", "mAudioManager", "Landroid/media/AudioManager;", "clickCount", "", "mapsFragment", "Lcom/uniden/rtach/ui/fragment/MapsFragment;", "alertCharacteristicChanged", "", "getAlertCharacteristicChanged", "()Ljava/lang/String;", "volumeLvlCount", "isReceivingData", "", "timer", "Landroid/os/CountDownTimer;", "mainData", "Lcom/uniden/rtach/data/model/AlertBandDataModel;", "constraintPoiAlert", "Landroidx/constraintlayout/widget/ConstraintLayout;", "txtMarkerType", "Landroid/widget/TextView;", "txtDistance", "txtLimitSpeed", "imgMarkerIcon", "Landroid/widget/ImageView;", "isBluetoothConnected", "()Z", "setBluetoothConnected", "(Z)V", "PICK_FILE_REQUEST_CODE", "REMOTE_FILE_URL", "isBlinking", "animatorSet", "Landroid/animation/AnimatorSet;", "onDestroy", "", "initUi", "setListeners", "updateTitleColor", "onResume", "startTimer", "stopTimer", "showAlert", "alertData", "updateAlertData", "hideAlert", "showMapFragment", "hideMapFragment", "setAlertData", "loadData", "context", "Landroid/content/Context;", "alertModelList", "Lkotlin/collections/ArrayList;", "Ljava/util/ArrayList;", "(Landroid/content/Context;Ljava/util/ArrayList;)V", "startFadeInOutAnimation", "view", "Landroid/view/View;", "stopAnimation", "loadMenu", "safeInsert", ExifInterface.GPS_DIRECTION_TRUE, "", FirebaseAnalytics.Param.INDEX, "element", "(Ljava/util/List;ILjava/lang/Object;)V", "openFilePicker", "onActivityResult", "requestCode", "resultCode", "data", "Landroid/content/Intent;", "readFileContent", "uri", "Landroid/net/Uri;", "processFileContent", "fileContent", "checkFirmwareUpdate", "showUpdateStatus", "closeDrawer", "showNonWifiAlertDialog", "onKeyDown", "keyCode", NotificationCompat.CATEGORY_EVENT, "Landroid/view/KeyEvent;", "getHighVolumeLevel", "maxVolume", "currentVolume", "getLowVolumeLevel", "getCurrentVolume", "displayPoiAlert", "type", "mDistance", "mSpeedLimit", "gpsStatus", "poiAlertVisibility", "visibility", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
@AndroidEntryPoint
public final class DashboardActivity extends Hilt_DashboardActivity<ActivityDashboardBinding> {
    private final int PICK_FILE_REQUEST_CODE;
    private final String REMOTE_FILE_URL;
    private NavigationDrawerAdapter adapter;
    private final String alertCharacteristicChanged;
    private AnimatorSet animatorSet;
    private BandAlertAdapter bandAdapter;
    private int clickCount;
    private ConstraintLayout constraintPoiAlert;
    private ImageView imgMarkerIcon;
    private boolean isBlinking;
    private boolean isBluetoothConnected;
    private boolean isReceivingData;
    private AudioManager mAudioManager;
    private AlertBandDataModel mainData;
    private MapsFragment mapsFragment;
    private BaseApplication myApp;
    private CountDownTimer timer;
    private TextView txtDistance;
    private TextView txtLimitSpeed;
    private TextView txtMarkerType;

    /* JADX INFO: renamed from: viewModel$delegate, reason: from kotlin metadata */
    private final Lazy viewModel;
    private int volumeLvlCount;

    /* JADX INFO: compiled from: DashboardActivity.kt */
    @Metadata(m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;

        static {
            int[] iArr = new int[MyTab.values().length];
            try {
                iArr[MyTab.DASHBOARD.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[MyTab.MAP.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            $EnumSwitchMapping$0 = iArr;
        }
    }

    private final int getLowVolumeLevel(int maxVolume, int currentVolume) {
        if (currentVolume < 1) {
            return 0;
        }
        return (int) ((((double) maxVolume) / ((double) 9)) * ((double) this.volumeLvlCount));
    }

    public final String getAlertCharacteristicChanged() {
        return this.alertCharacteristicChanged;
    }

    /* JADX INFO: renamed from: isBluetoothConnected, reason: from getter */
    public final boolean getIsBluetoothConnected() {
        return this.isBluetoothConnected;
    }

    public final void setBluetoothConnected(boolean z) {
        this.isBluetoothConnected = z;
    }

    /* JADX INFO: renamed from: com.uniden.rtach.ui.activity.DashboardActivity$1 */
    /* JADX INFO: compiled from: DashboardActivity.kt */
    @Metadata(m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    /* synthetic */ class C21031 extends FunctionReferenceImpl implements Function1<LayoutInflater, ActivityDashboardBinding> {
        public static final C21031 INSTANCE = new C21031();

        C21031() {
            super(1, ActivityDashboardBinding.class, "inflate", "inflate(Landroid/view/LayoutInflater;)Lcom/uniden/rtach/databinding/ActivityDashboardBinding;", 0);
        }

        @Override // kotlin.jvm.functions.Function1
        public final ActivityDashboardBinding invoke(LayoutInflater p0) {
            Intrinsics.checkNotNullParameter(p0, "p0");
            return ActivityDashboardBinding.inflate(p0);
        }
    }

    public DashboardActivity() {
        super(C21031.INSTANCE);
        final DashboardActivity dashboardActivity = this;
        final Function0 function0 = null;
        this.viewModel = new ViewModelLazy(Reflection.getOrCreateKotlinClass(DashboardViewModel.class), new Function0<ViewModelStore>() { // from class: com.uniden.rtach.ui.activity.DashboardActivity$special$$inlined$viewModels$default$2
            {
                super(0);
            }

            /* JADX WARN: Can't rename method to resolve collision */
            @Override // kotlin.jvm.functions.Function0
            public final ViewModelStore invoke() {
                return dashboardActivity.getViewModelStore();
            }
        }, new Function0<ViewModelProvider.Factory>() { // from class: com.uniden.rtach.ui.activity.DashboardActivity$special$$inlined$viewModels$default$1
            {
                super(0);
            }

            /* JADX WARN: Can't rename method to resolve collision */
            @Override // kotlin.jvm.functions.Function0
            public final ViewModelProvider.Factory invoke() {
                return dashboardActivity.getDefaultViewModelProviderFactory();
            }
        }, new Function0<CreationExtras>() { // from class: com.uniden.rtach.ui.activity.DashboardActivity$special$$inlined$viewModels$default$3
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(0);
            }

            /* JADX WARN: Can't rename method to resolve collision */
            @Override // kotlin.jvm.functions.Function0
            public final CreationExtras invoke() {
                CreationExtras creationExtras;
                Function0 function1 = function0;
                return (function1 == null || (creationExtras = (CreationExtras) function1.invoke()) == null) ? dashboardActivity.getDefaultViewModelCreationExtras() : creationExtras;
            }
        });
        this.alertCharacteristicChanged = "";
        this.volumeLvlCount = 1;
        this.PICK_FILE_REQUEST_CODE = 1;
        this.REMOTE_FILE_URL = BuildConfig.LATEST_FIRMWARE_VERSION_CHECK_URL;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final DashboardViewModel getViewModel() {
        return (DashboardViewModel) this.viewModel.getValue();
    }

    @Override // com.uniden.rtach.p005ui.base.BaseActivity, androidx.appcompat.app.AppCompatActivity, androidx.fragment.app.FragmentActivity, android.app.Activity
    protected void onDestroy() {
        super.onDestroy();
        Log.d("TAG_DESTROY", "onDestroy: DashboardActivity");
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // com.uniden.rtach.p005ui.base.BaseActivity
    protected void initUi() {
        setBinding(DataBindingUtil.setContentView(this, C2074R.layout.activity_dashboard));
        ((ActivityDashboardBinding) getBinding()).setViewModel(getViewModel());
        DashboardActivity dashboardActivity = this;
        ((ActivityDashboardBinding) getBinding()).setLifecycleOwner(dashboardActivity);
        Application application = getApplication();
        Intrinsics.checkNotNull(application, "null cannot be cast to non-null type com.uniden.rtach.helper.BaseApplication");
        this.myApp = (BaseApplication) application;
        Object systemService = getSystemService("audio");
        Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.media.AudioManager");
        this.mAudioManager = (AudioManager) systemService;
        BaseApplication baseApplication = this.myApp;
        BaseApplication baseApplication2 = null;
        if (baseApplication == null) {
            Intrinsics.throwUninitializedPropertyAccessException("myApp");
            baseApplication = null;
        }
        baseApplication.isBTConnected().observe(dashboardActivity, new DashboardActivity$sam$androidx_lifecycle_Observer$0(new Function1() { // from class: com.uniden.rtach.ui.activity.DashboardActivity$$ExternalSyntheticLambda21
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return DashboardActivity.initUi$lambda$2(this.f$0, (Boolean) obj);
            }
        }));
        DashboardActivity dashboardActivity2 = this;
        getViewModel().getConnectedDevice(dashboardActivity2);
        getViewModel().getAppVersion(dashboardActivity2);
        BuildersKt__Builders_commonKt.launch$default(CoroutineScopeKt.CoroutineScope(Dispatchers.getMain()), null, null, new C21052(null), 3, null);
        loadMenu(dashboardActivity2);
        BaseApplication baseApplication3 = this.myApp;
        if (baseApplication3 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("myApp");
        } else {
            baseApplication2 = baseApplication3;
        }
        baseApplication2.getEtcDataChanged().observe(dashboardActivity, new DashboardActivity$sam$androidx_lifecycle_Observer$0(new Function1() { // from class: com.uniden.rtach.ui.activity.DashboardActivity$$ExternalSyntheticLambda22
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return DashboardActivity.initUi$lambda$3(this.f$0, (ETCDataModel) obj);
            }
        }));
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Multi-variable type inference failed */
    public static final Unit initUi$lambda$2(final DashboardActivity this$0, Boolean bool) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        if (bool != null) {
            boolean zBooleanValue = bool.booleanValue();
            this$0.getViewModel().getBtConnected().setValue(Integer.valueOf(zBooleanValue ? C2074R.drawable.bt_connect : C2074R.drawable.bt_disconnect));
            this$0.isBluetoothConnected = zBooleanValue;
            if (zBooleanValue) {
                this$0.showUpdateStatus();
                new Handler(Looper.getMainLooper()).postDelayed(new Runnable() { // from class: com.uniden.rtach.ui.activity.DashboardActivity$$ExternalSyntheticLambda18
                    @Override // java.lang.Runnable
                    public final void run() {
                        DashboardActivity.initUi$lambda$2$lambda$1$lambda$0(this.f$0);
                    }
                }, 2000L);
                AudioManager audioManager = this$0.mAudioManager;
                AudioManager audioManager2 = null;
                if (audioManager == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("mAudioManager");
                    audioManager = null;
                }
                int currentVolume = this$0.getCurrentVolume(audioManager.getStreamMaxVolume(3));
                AudioManager audioManager3 = this$0.mAudioManager;
                if (audioManager3 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("mAudioManager");
                } else {
                    audioManager2 = audioManager3;
                }
                audioManager2.setStreamVolume(3, currentVolume, 0);
            } else {
                this$0.getViewModel().getAddUserMarkVisibility().setValue(false);
                this$0.getViewModel().getDeleteUserMarkVisibility().setValue(false);
                this$0.getViewModel().getGpsConnected().setValue(Integer.valueOf(C2074R.drawable.ic_gps_grey));
                ((ActivityDashboardBinding) this$0.getBinding()).appBarDashboard.updateWarning.setVisibility(8);
                this$0.loadMenu(this$0);
            }
        }
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void initUi$lambda$2$lambda$1$lambda$0(DashboardActivity this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        this$0.checkFirmwareUpdate();
    }

    /* JADX INFO: renamed from: com.uniden.rtach.ui.activity.DashboardActivity$initUi$2 */
    /* JADX INFO: compiled from: DashboardActivity.kt */
    @Metadata(m490d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, m491d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    @DebugMetadata(m503c = "com.uniden.rtach.ui.activity.DashboardActivity$initUi$2", m504f = "DashboardActivity.kt", m505i = {}, m506l = {}, m507m = "invokeSuspend", m508n = {}, m509s = {})
    static final class C21052 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        int label;

        C21052(Continuation<? super C21052> continuation) {
            super(2, continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return DashboardActivity.this.new C21052(continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C21052) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label == 0) {
                ResultKt.throwOnFailure(obj);
                Utils utils = new Utils();
                Context applicationContext = DashboardActivity.this.getApplicationContext();
                Intrinsics.checkNotNullExpressionValue(applicationContext, "getApplicationContext(...)");
                utils.getFirmwareUrlAndAP(applicationContext);
                return Unit.INSTANCE;
            }
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit initUi$lambda$3(DashboardActivity this$0, ETCDataModel eTCDataModel) {
        int i;
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        String gpsStatus = eTCDataModel.getGpsStatus();
        MutableLiveData<Integer> gpsConnected = this$0.getViewModel().getGpsConnected();
        if (Intrinsics.areEqual(gpsStatus, "C") && !this$0.isBluetoothConnected) {
            i = C2074R.drawable.ic_gps_grey;
        } else if (Intrinsics.areEqual(gpsStatus, "C")) {
            i = C2074R.drawable.ic_gps;
        } else {
            i = Intrinsics.areEqual(gpsStatus, ExifInterface.LONGITUDE_EAST) ? C2074R.drawable.ic_gps_grey : C2074R.drawable.ic_gps_grey;
        }
        gpsConnected.setValue(Integer.valueOf(i));
        this$0.displayPoiAlert(eTCDataModel.getPoiType(), eTCDataModel.getPoiDistance(), eTCDataModel.getPoiLimitSpeed(), eTCDataModel.getGpsStatus());
        return Unit.INSTANCE;
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // com.uniden.rtach.p005ui.base.BaseActivity
    protected void setListeners() {
        ConstraintLayout appBarButton = ((ActivityDashboardBinding) getBinding()).appBarDashboard.appBarButton;
        Intrinsics.checkNotNullExpressionValue(appBarButton, "appBarButton");
        ConstraintLayout constraintLayout = appBarButton;
        ((TextView) constraintLayout.findViewById(C2074R.id.txtAppBarTitle)).setText(getString(C2074R.string.app_menu));
        this.constraintPoiAlert = (ConstraintLayout) constraintLayout.findViewById(C2074R.id.constraintPoiAlert);
        this.txtMarkerType = (TextView) constraintLayout.findViewById(C2074R.id.txtMarkerType);
        this.txtDistance = (TextView) constraintLayout.findViewById(C2074R.id.txtDistance);
        this.txtLimitSpeed = (TextView) constraintLayout.findViewById(C2074R.id.txtLimitSpeed);
        this.imgMarkerIcon = (ImageView) constraintLayout.findViewById(C2074R.id.imgMarkerIcon);
        ((ImageView) constraintLayout.findViewById(C2074R.id.imgGpsIcon)).setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.activity.DashboardActivity$$ExternalSyntheticLambda25
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                DashboardActivity.setListeners$lambda$4(this.f$0, view);
            }
        });
        ((TextView) constraintLayout.findViewById(C2074R.id.txtDashboard)).setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.activity.DashboardActivity$$ExternalSyntheticLambda8
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                DashboardActivity.setListeners$lambda$5(this.f$0, view);
            }
        });
        ((ImageView) constraintLayout.findViewById(C2074R.id.img_menu)).setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.activity.DashboardActivity$$ExternalSyntheticLambda9
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                DashboardActivity.setListeners$lambda$6(this.f$0, view);
            }
        });
        ((ConstraintLayout) constraintLayout.findViewById(C2074R.id.constraintLayoutNorthUpHeadingUp)).setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.activity.DashboardActivity$$ExternalSyntheticLambda10
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                Log.e("TAG_NORTHUP_CLICK", "tagclick");
            }
        });
        ((ImageView) constraintLayout.findViewById(C2074R.id.img_gps)).setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.activity.DashboardActivity$$ExternalSyntheticLambda12
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                DashboardActivity.setListeners$lambda$8(this.f$0, view);
            }
        });
        ((LinearLayout) constraintLayout.findViewById(C2074R.id.llAddMapAlertMark)).setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.activity.DashboardActivity$$ExternalSyntheticLambda13
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                DashboardActivity.setListeners$lambda$9(this.f$0, view);
            }
        });
        ((LinearLayout) constraintLayout.findViewById(C2074R.id.llAddMark)).setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.activity.DashboardActivity$$ExternalSyntheticLambda14
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                DashboardActivity.setListeners$lambda$10(this.f$0, view);
            }
        });
        ((LinearLayout) constraintLayout.findViewById(C2074R.id.llDeleteUserMark)).setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.activity.DashboardActivity$$ExternalSyntheticLambda15
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                DashboardActivity.setListeners$lambda$11(this.f$0, view);
            }
        });
        ((ActivityDashboardBinding) getBinding()).llDeviceName.setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.activity.DashboardActivity$$ExternalSyntheticLambda16
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                DashboardActivity.setListeners$lambda$12(this.f$0, view);
            }
        });
        ((ActivityDashboardBinding) getBinding()).appBarDashboard.updateWarning.setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.activity.DashboardActivity$$ExternalSyntheticLambda17
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                DashboardActivity.setListeners$lambda$13(this.f$0, view);
            }
        });
        ((ActivityDashboardBinding) getBinding()).btnDisconnect.setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.activity.DashboardActivity$$ExternalSyntheticLambda26
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                DashboardActivity.setListeners$lambda$14(this.f$0, view);
            }
        });
        ((ActivityDashboardBinding) getBinding()).imgBack.setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.activity.DashboardActivity$$ExternalSyntheticLambda1
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                DashboardActivity.setListeners$lambda$15(this.f$0, view);
            }
        });
        ((TextView) constraintLayout.findViewById(C2074R.id.txtMap)).setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.activity.DashboardActivity$$ExternalSyntheticLambda2
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                DashboardActivity.setListeners$lambda$16(this.f$0, view);
            }
        });
        DashboardActivity dashboardActivity = this;
        getViewModel().getSelectedTab().observe(dashboardActivity, new DashboardActivity$sam$androidx_lifecycle_Observer$0(new Function1() { // from class: com.uniden.rtach.ui.activity.DashboardActivity$$ExternalSyntheticLambda3
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return DashboardActivity.setListeners$lambda$18(this.f$0, (MyTab) obj);
            }
        }));
        BaseApplication baseApplication = this.myApp;
        if (baseApplication == null) {
            Intrinsics.throwUninitializedPropertyAccessException("myApp");
            baseApplication = null;
        }
        MutableLiveData<String> alertCharacteristicChanged = baseApplication.getAlertCharacteristicChanged();
        if (alertCharacteristicChanged != null) {
            alertCharacteristicChanged.observe(dashboardActivity, new DashboardActivity$sam$androidx_lifecycle_Observer$0(new Function1() { // from class: com.uniden.rtach.ui.activity.DashboardActivity$$ExternalSyntheticLambda4
                @Override // kotlin.jvm.functions.Function1
                public final Object invoke(Object obj) {
                    return DashboardActivity.setListeners$lambda$21(this.f$0, (String) obj);
                }
            }));
        }
        ((ActivityDashboardBinding) getBinding()).appBarDashboard.llMuteButton.setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.activity.DashboardActivity$$ExternalSyntheticLambda5
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                DashboardActivity.setListeners$lambda$22(this.f$0, view);
            }
        });
        ((ActivityDashboardBinding) getBinding()).appBarDashboard.llMuteMemory.setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.activity.DashboardActivity$$ExternalSyntheticLambda6
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                DashboardActivity.setListeners$lambda$23(this.f$0, view);
            }
        });
        ((ActivityDashboardBinding) getBinding()).appBarDashboard.llReceiveMode.setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.activity.DashboardActivity$$ExternalSyntheticLambda7
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                DashboardActivity.setListeners$lambda$24(this.f$0, view);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setListeners$lambda$4(DashboardActivity this$0, View view) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        this$0.getViewModel().getOnGpsClick().postValue(true);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setListeners$lambda$5(DashboardActivity this$0, View view) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        if (this$0.getViewModel().getSelectedTab().getValue() != MyTab.DASHBOARD) {
            this$0.getViewModel().getSelectedTab().postValue(MyTab.DASHBOARD);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Multi-variable type inference failed */
    public static final void setListeners$lambda$6(DashboardActivity this$0, View view) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        ((ActivityDashboardBinding) this$0.getBinding()).drawerLayout.openDrawer(GravityCompat.START);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setListeners$lambda$8(DashboardActivity this$0, View view) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        int i = this$0.clickCount + 1;
        this$0.clickCount = i;
        if (i == 5) {
            this$0.openFilePicker();
            this$0.clickCount = 0;
        }
        Log.e("TAG_NORTHUP_CLICK", "tagclick");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setListeners$lambda$9(DashboardActivity this$0, View view) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        BluetoothManager.INSTANCE.getInstance(this$0.getContext()).writeCharacteristic(Constant.DELETE_RED_LIGHT_CAMERA);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setListeners$lambda$10(DashboardActivity this$0, View view) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        BluetoothManager.INSTANCE.getInstance(this$0.getContext()).writeCharacteristic(Constant.ADD_USER_MARK);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setListeners$lambda$11(DashboardActivity this$0, View view) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        BluetoothManager.INSTANCE.getInstance(this$0.getContext()).writeCharacteristic(Constant.DELETE_USER_MARK);
        this$0.getViewModel().getDeleteUserMarkVisibility().setValue(false);
        BuildersKt__Builders_commonKt.launch$default(CoroutineScopeKt.CoroutineScope(Dispatchers.getMain()), null, null, new DashboardActivity$setListeners$8$1(this$0, null), 3, null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setListeners$lambda$12(DashboardActivity this$0, View view) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        int i = this$0.clickCount + 1;
        this$0.clickCount = i;
        if (i == 5) {
            new Utils().shareLogFile(this$0.getContext());
            this$0.clickCount = 0;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setListeners$lambda$13(DashboardActivity this$0, View view) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        this$0.startActivity(new Intent(this$0.getContext(), (Class<?>) FirmwareUpdateActivity.class));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setListeners$lambda$14(DashboardActivity this$0, View view) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        this$0.getBluetoothManager().disconnect();
        this$0.getSharedPrefs().setBluetoothConnected(false);
        this$0.getSharedPrefs().setBTConnecting(false);
        this$0.getSharedPrefs().setAutoConnectAvailable(false);
        this$0.getSharedPrefs().clearData(this$0.getActivity());
        this$0.startActivity(new Intent(this$0.getContext(), (Class<?>) BLeDeviceListActivity.class).setFlags(32768));
        this$0.finish();
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Multi-variable type inference failed */
    public static final void setListeners$lambda$15(DashboardActivity this$0, View view) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        ((ActivityDashboardBinding) this$0.getBinding()).drawerLayout.closeDrawer(GravityCompat.START);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setListeners$lambda$16(DashboardActivity this$0, View view) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        if (this$0.getViewModel().getSelectedTab().getValue() != MyTab.MAP) {
            this$0.getViewModel().getSelectedTab().postValue(MyTab.MAP);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit setListeners$lambda$18(DashboardActivity this$0, MyTab myTab) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        int i = myTab == null ? -1 : WhenMappings.$EnumSwitchMapping$0[myTab.ordinal()];
        if (i == 1) {
            if (this$0.mapsFragment != null) {
                this$0.hideMapFragment();
            }
            if (this$0.getSupportFragmentManager().findFragmentByTag("DashboardFragment") == null) {
                this$0.getSupportFragmentManager().beginTransaction().replace(C2074R.id.myFragmentFrame, new DashboardFragment(), "DashboardFragment").commit();
            }
        } else if (i == 2) {
            if (this$0.getLocationManager().isProviderEnabled("gps")) {
                this$0.getViewModel().getGpsIconVisibility().postValue(true);
                this$0.showMapFragment();
            } else {
                this$0.displayAlertDialogGPSEnable();
            }
        }
        this$0.updateTitleColor();
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit setListeners$lambda$21(final DashboardActivity this$0, final String str) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Log.d("TAG_FW_DASHBOARD", "characteristic:" + str + ' ');
        Intrinsics.checkNotNull(str);
        if (!StringsKt.contains((CharSequence) str, (CharSequence) "�", true)) {
            if (!this$0.isReceivingData) {
                this$0.runOnUiThread(new Runnable() { // from class: com.uniden.rtach.ui.activity.DashboardActivity$$ExternalSyntheticLambda23
                    @Override // java.lang.Runnable
                    public final void run() {
                        DashboardActivity.setListeners$lambda$21$lambda$19(str, this$0);
                    }
                });
            } else {
                this$0.runOnUiThread(new Runnable() { // from class: com.uniden.rtach.ui.activity.DashboardActivity$$ExternalSyntheticLambda24
                    @Override // java.lang.Runnable
                    public final void run() {
                        DashboardActivity.setListeners$lambda$21$lambda$20(this.f$0, str);
                    }
                });
            }
        }
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setListeners$lambda$21$lambda$19(String str, DashboardActivity this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Intrinsics.checkNotNull(str);
        if (str.length() <= 0 || Intrinsics.areEqual(str, "0&0&0&0") || Intrinsics.areEqual(str, "0&0&0&0&0&0&0&0")) {
            return;
        }
        this$0.showAlert(str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setListeners$lambda$21$lambda$20(DashboardActivity this$0, String str) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Intrinsics.checkNotNull(str);
        this$0.updateAlertData(str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setListeners$lambda$22(DashboardActivity this$0, View view) {
        String str;
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Boolean value = this$0.getViewModel().isMute().getValue();
        Intrinsics.checkNotNull(value);
        boolean z = !value.booleanValue();
        if (z) {
            str = Constant.ALERT_UN_MUTE_CMD;
        } else {
            str = !z ? Constant.ALERT_MUTE_CMD : "BTrepMUTE:0";
        }
        Log.d("TAG_I101", "Old Value  ===>> " + this$0.getViewModel().isMute().getValue() + "  New ==>> " + z + "   write value " + str);
        BluetoothManager.INSTANCE.getInstance(this$0.getContext()).writeCharacteristic(str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setListeners$lambda$23(DashboardActivity this$0, View view) {
        String info;
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Log.d("TAG_I101_1", "  ===>> " + this$0.getViewModel().isMuteMemClickable().getValue() + ' ');
        Boolean value = this$0.getViewModel().getLabelMuteMem().getValue();
        Intrinsics.checkNotNull(value);
        boolean z = !value.booleanValue();
        AlertBandDataModel alertBandDataModel = this$0.mainData;
        String strReplace$default = (alertBandDataModel == null || (info = alertBandDataModel.getInfo()) == null) ? null : StringsKt.replace$default(info, ".", "", false, 4, (Object) null);
        String strDropLast = strReplace$default != null ? StringsKt.dropLast(strReplace$default, 1) : null;
        Integer numValueOf = strDropLast != null ? Integer.valueOf(Integer.parseInt(strDropLast) + 5000) : null;
        AlertBandDataModel alertBandDataModel2 = this$0.mainData;
        String str = "BTrepMUTE:0";
        if (Intrinsics.areEqual(alertBandDataModel2 != null ? alertBandDataModel2.getAlert_type() : null, "MRCD")) {
            if (z) {
                str = "BTreqMMEM:0," + numValueOf;
            } else if (!z) {
                str = "BTreqMMEM:1," + numValueOf;
            }
        } else if (z) {
            str = "BTreqMMEM:0," + strDropLast;
        } else if (!z) {
            str = "BTreqMMEM:1," + strDropLast;
        }
        Log.d("TAG_I101", "Old Value  ===>> " + this$0.getViewModel().getLabelMuteMem().getValue() + "  New ==>> " + z + "   write value " + str);
        BluetoothManager.INSTANCE.getInstance(this$0.getContext()).writeCharacteristic(str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setListeners$lambda$24(DashboardActivity this$0, View view) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Boolean value = this$0.getViewModel().isWorkReceiveModeFunction().getValue();
        Intrinsics.checkNotNull(value);
        String str = value.booleanValue() ? "BTreqMUTE:3" : "BTreqMUTE:4";
        this$0.getViewModel().startWaitReceiveModeReport();
        BluetoothManager.INSTANCE.getInstance(this$0.getContext()).writeCharacteristic(str);
    }

    /* JADX WARN: Multi-variable type inference failed */
    private final void updateTitleColor() {
        ConstraintLayout appBarButton = ((ActivityDashboardBinding) getBinding()).appBarDashboard.appBarButton;
        Intrinsics.checkNotNullExpressionValue(appBarButton, "appBarButton");
        TextView textView = (TextView) appBarButton.findViewById(C2074R.id.txtAppBarTitle);
        if (getViewModel().getSelectedTab().getValue() == MyTab.DASHBOARD) {
            textView.setTextColor(getColor(C2074R.color.white));
        } else if (getSharedPrefs().isMapLight()) {
            textView.setTextColor(getColor(C2074R.color.black));
        } else {
            textView.setTextColor(getColor(C2074R.color.white));
        }
    }

    @Override // com.uniden.rtach.p005ui.base.BaseActivity, androidx.fragment.app.FragmentActivity, android.app.Activity
    protected void onResume() {
        updateTitleColor();
        super.onResume();
    }

    private final void startTimer() {
        stopTimer();
        CountDownTimer countDownTimer = new CountDownTimer() { // from class: com.uniden.rtach.ui.activity.DashboardActivity.startTimer.1
            @Override // android.os.CountDownTimer
            public void onTick(long millisUntilFinished) {
            }

            {
                super(4000L, 1000L);
            }

            @Override // android.os.CountDownTimer
            public void onFinish() {
                DashboardActivity.this.hideAlert();
            }
        };
        this.timer = countDownTimer;
        countDownTimer.start();
    }

    private final void stopTimer() {
        CountDownTimer countDownTimer = this.timer;
        if (countDownTimer != null) {
            countDownTimer.cancel();
        }
    }

    private final void showAlert(String alertData) {
        this.isReceivingData = true;
        getViewModel().getBandAlertVisibility().setValue(true);
        setAlertData(alertData);
        startTimer();
    }

    private final void updateAlertData(String alertData) {
        setAlertData(alertData);
        startTimer();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void hideAlert() {
        getViewModel().getBandAlertVisibility().setValue(false);
        this.isReceivingData = false;
        BaseApplication baseApplication = this.myApp;
        if (baseApplication == null) {
            Intrinsics.throwUninitializedPropertyAccessException("myApp");
            baseApplication = null;
        }
        baseApplication.getAlertCharacteristicChanged().postValue("0&0&0&0");
    }

    private final void showMapFragment() {
        Fragment fragmentFindFragmentByTag = getSupportFragmentManager().findFragmentByTag("MapsFragment");
        MapsFragment mapsFragment = fragmentFindFragmentByTag instanceof MapsFragment ? (MapsFragment) fragmentFindFragmentByTag : null;
        this.mapsFragment = mapsFragment;
        if (mapsFragment == null) {
            this.mapsFragment = new MapsFragment();
            FragmentTransaction fragmentTransactionBeginTransaction = getSupportFragmentManager().beginTransaction();
            int i = C2074R.id.myFragmentFrame;
            MapsFragment mapsFragment2 = this.mapsFragment;
            Intrinsics.checkNotNull(mapsFragment2);
            fragmentTransactionBeginTransaction.add(i, mapsFragment2, "MapsFragment").commit();
            return;
        }
        FragmentTransaction fragmentTransactionBeginTransaction2 = getSupportFragmentManager().beginTransaction();
        MapsFragment mapsFragment3 = this.mapsFragment;
        Intrinsics.checkNotNull(mapsFragment3);
        fragmentTransactionBeginTransaction2.show(mapsFragment3).commit();
    }

    private final void hideMapFragment() {
        MapsFragment mapsFragment = this.mapsFragment;
        if (mapsFragment != null) {
            getSupportFragmentManager().beginTransaction().hide(mapsFragment).commit();
        }
    }

    private final void setAlertData(String alertData) {
        loadData(this, AlertDataConverter.INSTANCE.parseAlertBandData(alertData, StringsKt.contains$default((CharSequence) getSharedPrefs().getDeviceName(), (CharSequence) "R9", false, 2, (Object) null) || StringsKt.contains$default((CharSequence) getSharedPrefs().getDeviceName(), (CharSequence) "AE903i", false, 2, (Object) null)));
    }

    /* JADX WARN: Code duplicated, block: B:38:0x0162  */
    /* JADX WARN: Multi-variable type inference failed */
    private final void loadData(Context context, ArrayList<AlertBandDataModel> alertModelList) {
        boolean z;
        BandAlertAdapter bandAlertAdapter;
        if (!(!alertModelList.isEmpty())) {
            this.isReceivingData = false;
            return;
        }
        AlertBandDataModel alertBandDataModel = alertModelList.get(0);
        this.mainData = alertBandDataModel;
        Log.e("MainData", String.valueOf(alertBandDataModel));
        AlertBandDataModel alertBandDataModel2 = this.mainData;
        if (alertBandDataModel2 != null) {
            int bandColor = AlertDataConverter.INSTANCE.getBandColor(alertBandDataModel2.getAlert_type(), getSharedPrefs(), alertBandDataModel2.getRssi_level());
            int arrowColor = AlertDataConverter.INSTANCE.getArrowColor(alertBandDataModel2.getAlert_type(), getSharedPrefs());
            String mute_type = alertBandDataModel2.getMute_type();
            boolean z2 = Intrinsics.areEqual(mute_type, ExifInterface.GPS_MEASUREMENT_3D) || Intrinsics.areEqual(mute_type, "4");
            boolean zAreEqual = Intrinsics.areEqual(mute_type, "6");
            getViewModel().isR9Device().setValue(Boolean.valueOf(StringsKt.contains$default((CharSequence) getSharedPrefs().getDeviceName(), (CharSequence) "R9", false, 2, (Object) null) || StringsKt.contains$default((CharSequence) getSharedPrefs().getDeviceName(), (CharSequence) "AE903i", false, 2, (Object) null)));
            if (!StringsKt.contains((CharSequence) getSharedPrefs().getMuteMemoryOption(), (CharSequence) "X & K & Ka", true) && Intrinsics.areEqual(alertBandDataModel2.getAlert_type(), "POP")) {
                getViewModel().isMuteMemClickable().setValue(false);
            } else if (StringsKt.contains((CharSequence) getSharedPrefs().getMuteMemoryOption(), (CharSequence) alertBandDataModel2.getAlert_type(), true) || (StringsKt.contains((CharSequence) getSharedPrefs().getMuteMemoryOption(), (CharSequence) "X & K & Ka", true) && (Intrinsics.areEqual(alertBandDataModel2.getAlert_type(), "MRCD") || Intrinsics.areEqual(alertBandDataModel2.getAlert_type(), "POP")))) {
                getViewModel().isMuteMemClickable().setValue(true);
            } else {
                getViewModel().isMuteMemClickable().setValue(false);
            }
            getViewModel().updateMuteStatus(alertBandDataModel2.getMute_type(), context);
            boolean laserTpJammingEnableStatus = AlertDataConverter.INSTANCE.getLaserTpJammingEnableStatus(alertBandDataModel2.getAlert_id());
            Boolean value = getViewModel().isR9Device().getValue();
            Intrinsics.checkNotNull(value);
            if (value.booleanValue()) {
                z = true;
            } else {
                BaseApplication baseApplication = this.myApp;
                if (baseApplication == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("myApp");
                    baseApplication = null;
                }
                if (baseApplication.getLaserTpOnOff() == BaseApplication.LaserTpOnOff.ON) {
                    z = true;
                } else {
                    BaseApplication baseApplication2 = this.myApp;
                    if (baseApplication2 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("myApp");
                        baseApplication2 = null;
                    }
                    if (baseApplication2.getLaserTpAOnOff() == BaseApplication.LaserTpOnOff.ON) {
                        z = true;
                    } else {
                        BaseApplication baseApplication3 = this.myApp;
                        if (baseApplication3 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("myApp");
                            baseApplication3 = null;
                        }
                        if (baseApplication3.getLaserTpBOnOff() == BaseApplication.LaserTpOnOff.ON) {
                            z = true;
                        } else {
                            z = false;
                        }
                    }
                }
            }
            getViewModel().updateLaserTpAlertInfo(alertBandDataModel2.getAlert_type(), z, getSharedPrefs().getLaserTpMode(), alertBandDataModel2.getRcv_mode_status(), laserTpJammingEnableStatus);
            ((ActivityDashboardBinding) getBinding()).appBarDashboard.txtDetectedBand.setText(alertBandDataModel2.getAlert_type());
            if (z2) {
                ((ActivityDashboardBinding) getBinding()).appBarDashboard.txtDetectedBand.setTextColor(ContextCompat.getColor(context, C2074R.color.gray));
            } else {
                ((ActivityDashboardBinding) getBinding()).appBarDashboard.txtDetectedBand.setTextColor(ContextCompat.getColor(context, bandColor));
            }
            if (AlertDataConverter.INSTANCE.getMuteStatus(alertBandDataModel2.getMute_type()).length() == 0) {
                ((ActivityDashboardBinding) getBinding()).appBarDashboard.muteStatus.setVisibility(8);
            } else {
                ((ActivityDashboardBinding) getBinding()).appBarDashboard.muteStatus.setVisibility(0);
                ((ActivityDashboardBinding) getBinding()).appBarDashboard.muteStatus.setText(AlertDataConverter.INSTANCE.getMuteStatus(alertBandDataModel2.getMute_type()));
            }
            ((ActivityDashboardBinding) getBinding()).appBarDashboard.textBandFrequency.setText(AlertDataConverter.INSTANCE.getBandFrequency(alertBandDataModel2.getAlert_type(), alertBandDataModel2.getInfo()));
            if (z2) {
                ((ActivityDashboardBinding) getBinding()).appBarDashboard.textBandFrequency.setTextColor(ContextCompat.getColor(context, C2074R.color.gray));
            } else {
                ((ActivityDashboardBinding) getBinding()).appBarDashboard.textBandFrequency.setTextColor(ContextCompat.getColor(context, C2074R.color.frequency_text));
            }
            String dir_type = alertBandDataModel2.getDir_type();
            Integer direction = AlertDataConverter.INSTANCE.getDirection(alertBandDataModel2.getDir_type(), arrowColor);
            if (direction != null) {
                ((ActivityDashboardBinding) getBinding()).appBarDashboard.imgBandDirection.setImageResource(direction.intValue());
                if (z2) {
                    ((ActivityDashboardBinding) getBinding()).appBarDashboard.imgBandDirection.setColorFilter(ContextCompat.getColor(context, C2074R.color.gray));
                } else {
                    ((ActivityDashboardBinding) getBinding()).appBarDashboard.imgBandDirection.setColorFilter(ContextCompat.getColor(context, arrowColor));
                }
            } else {
                ((ActivityDashboardBinding) getBinding()).appBarDashboard.imgBandDirection.setImageResource(0);
            }
            Integer rSSIArrow = AlertDataConverter.INSTANCE.getRSSIArrow(alertBandDataModel2.getRssi_level(), alertBandDataModel2.getAlert_type(), z2, context);
            if (rSSIArrow != null) {
                ((ActivityDashboardBinding) getBinding()).appBarDashboard.imgBandRSSILevel.setImageResource(rSSIArrow.intValue());
            } else {
                ((ActivityDashboardBinding) getBinding()).appBarDashboard.imgBandRSSILevel.setImageResource(0);
            }
            if (alertModelList.size() > 1) {
                alertModelList.remove(0);
                this.bandAdapter = new BandAlertAdapter(context, alertModelList, dir_type, StringsKt.contains$default((CharSequence) getSharedPrefs().getDeviceName(), (CharSequence) "R9", false, 2, (Object) null) || StringsKt.contains$default((CharSequence) getSharedPrefs().getDeviceName(), (CharSequence) "AE903i", false, 2, (Object) null));
                ((ActivityDashboardBinding) getBinding()).appBarDashboard.recyclerViewBandItem.setVisibility(0);
                ((ActivityDashboardBinding) getBinding()).appBarDashboard.recyclerViewBandItem.setLayoutManager(new GridLayoutManager(getActivity(), 3));
                ((ActivityDashboardBinding) getBinding()).appBarDashboard.recyclerViewBandItem.suppressLayout(true);
                RecyclerView recyclerView = ((ActivityDashboardBinding) getBinding()).appBarDashboard.recyclerViewBandItem;
                BandAlertAdapter bandAlertAdapter2 = this.bandAdapter;
                if (bandAlertAdapter2 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("bandAdapter");
                    bandAlertAdapter = null;
                } else {
                    bandAlertAdapter = bandAlertAdapter2;
                }
                recyclerView.setAdapter(bandAlertAdapter);
            } else {
                ((ActivityDashboardBinding) getBinding()).appBarDashboard.recyclerViewBandItem.setVisibility(8);
            }
            if (zAreEqual) {
                ConstraintLayout conBlink = ((ActivityDashboardBinding) getBinding()).appBarDashboard.conBlink;
                Intrinsics.checkNotNullExpressionValue(conBlink, "conBlink");
                startFadeInOutAnimation(conBlink);
            } else {
                ConstraintLayout conBlink2 = ((ActivityDashboardBinding) getBinding()).appBarDashboard.conBlink;
                Intrinsics.checkNotNullExpressionValue(conBlink2, "conBlink");
                stopAnimation(conBlink2);
            }
        }
    }

    private final void startFadeInOutAnimation(final View view) {
        if (this.isBlinking) {
            return;
        }
        this.isBlinking = true;
        final int i = 2;
        long j = 2;
        ValueAnimator valueAnimatorOfFloat = ValueAnimator.ofFloat(0.0f, 1.0f);
        long j2 = (5000 / j) / j;
        valueAnimatorOfFloat.setDuration(j2);
        valueAnimatorOfFloat.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() { // from class: com.uniden.rtach.ui.activity.DashboardActivity$$ExternalSyntheticLambda11
            @Override // android.animation.ValueAnimator.AnimatorUpdateListener
            public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                DashboardActivity.startFadeInOutAnimation$lambda$33$lambda$32(view, valueAnimator);
            }
        });
        ValueAnimator valueAnimatorOfFloat2 = ValueAnimator.ofFloat(1.0f, 0.0f);
        valueAnimatorOfFloat2.setDuration(j2);
        valueAnimatorOfFloat2.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() { // from class: com.uniden.rtach.ui.activity.DashboardActivity$$ExternalSyntheticLambda19
            @Override // android.animation.ValueAnimator.AnimatorUpdateListener
            public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                DashboardActivity.startFadeInOutAnimation$lambda$35$lambda$34(view, valueAnimator);
            }
        });
        AnimatorSet animatorSet = new AnimatorSet();
        animatorSet.playSequentially(valueAnimatorOfFloat, valueAnimatorOfFloat2);
        this.animatorSet = animatorSet;
        animatorSet.addListener(new AnimatorListenerAdapter() { // from class: com.uniden.rtach.ui.activity.DashboardActivity.startFadeInOutAnimation.2
            @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
            public void onAnimationEnd(Animator animation) {
                Intrinsics.checkNotNullParameter(animation, "animation");
                if (i > 1) {
                    AnimatorSet animatorSet2 = this.animatorSet;
                    if (animatorSet2 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("animatorSet");
                        animatorSet2 = null;
                    }
                    animatorSet2.start();
                    return;
                }
                this.isBlinking = false;
            }
        });
        AnimatorSet animatorSet2 = this.animatorSet;
        AnimatorSet animatorSet3 = null;
        if (animatorSet2 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("animatorSet");
            animatorSet2 = null;
        }
        if (animatorSet2.isRunning()) {
            return;
        }
        AnimatorSet animatorSet4 = this.animatorSet;
        if (animatorSet4 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("animatorSet");
        } else {
            animatorSet3 = animatorSet4;
        }
        animatorSet3.start();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void startFadeInOutAnimation$lambda$33$lambda$32(View view, ValueAnimator animation) {
        Intrinsics.checkNotNullParameter(view, "$view");
        Intrinsics.checkNotNullParameter(animation, "animation");
        Object animatedValue = animation.getAnimatedValue();
        Intrinsics.checkNotNull(animatedValue, "null cannot be cast to non-null type kotlin.Float");
        view.setAlpha(((Float) animatedValue).floatValue());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void startFadeInOutAnimation$lambda$35$lambda$34(View view, ValueAnimator animation) {
        Intrinsics.checkNotNullParameter(view, "$view");
        Intrinsics.checkNotNullParameter(animation, "animation");
        Object animatedValue = animation.getAnimatedValue();
        Intrinsics.checkNotNull(animatedValue, "null cannot be cast to non-null type kotlin.Float");
        view.setAlpha(((Float) animatedValue).floatValue());
    }

    private final void stopAnimation(View view) {
        AnimatorSet animatorSet = this.animatorSet;
        if (animatorSet != null) {
            AnimatorSet animatorSet2 = null;
            if (animatorSet == null) {
                Intrinsics.throwUninitializedPropertyAccessException("animatorSet");
                animatorSet = null;
            }
            if (animatorSet.isRunning()) {
                AnimatorSet animatorSet3 = this.animatorSet;
                if (animatorSet3 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("animatorSet");
                    animatorSet3 = null;
                }
                animatorSet3.removeAllListeners();
                AnimatorSet animatorSet4 = this.animatorSet;
                if (animatorSet4 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("animatorSet");
                    animatorSet4 = null;
                }
                animatorSet4.end();
                AnimatorSet animatorSet5 = this.animatorSet;
                if (animatorSet5 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("animatorSet");
                } else {
                    animatorSet2 = animatorSet5;
                }
                animatorSet2.cancel();
                view.clearAnimation();
                view.setAlpha(1.0f);
                this.isBlinking = false;
            }
        }
    }

    /* JADX WARN: Code duplicated, block: B:12:0x0074  */
    /* JADX WARN: Code duplicated, block: B:14:0x0087  */
    /* JADX WARN: Code duplicated, block: B:16:0x008b  */
    /* JADX WARN: Code duplicated, block: B:17:0x0092  */
    /* JADX WARN: Multi-variable type inference failed */
    private final void loadMenu(final Context context) {
        boolean z = true;
        int i = C2074R.drawable.ic_menu_settings;
        String string = getString(C2074R.string.menu_setting);
        Intrinsics.checkNotNullExpressionValue(string, "getString(...)");
        ArrayList arrayListArrayListOf = CollectionsKt.arrayListOf(new NavigationMenuModel(i, string));
        int i2 = C2074R.drawable.ic_wifi;
        String string2 = getString(C2074R.string.menu_wifi_setting);
        Intrinsics.checkNotNullExpressionValue(string2, "getString(...)");
        NavigationMenuModel navigationMenuModel = new NavigationMenuModel(i2, string2);
        int i3 = C2074R.drawable.ic_menu_frimware_update;
        String string3 = getString(C2074R.string.menu_firmware_updates);
        Intrinsics.checkNotNullExpressionValue(string3, "getString(...)");
        NavigationMenuModel navigationMenuModel2 = new NavigationMenuModel(i3, string3);
        NavigationDrawerAdapter navigationDrawerAdapter = null;
        if (getSharedPrefs().isWiFiModel()) {
            BaseApplication baseApplication = this.myApp;
            if (baseApplication == null) {
                Intrinsics.throwUninitializedPropertyAccessException("myApp");
                baseApplication = null;
            }
            if (Intrinsics.areEqual((Object) baseApplication.isBTConnected().getValue(), (Object) true)) {
                ArrayList arrayList = arrayListArrayListOf;
                safeInsert(arrayList, 1, navigationMenuModel);
                if (this.isBluetoothConnected) {
                    safeInsert(arrayList, 2, navigationMenuModel2);
                }
            } else if (!StringsKt.contains$default((CharSequence) getSharedPrefs().getDeviceName(), (CharSequence) "R9", false, 2, (Object) null)) {
                z = false;
            } else if (this.isBluetoothConnected) {
                safeInsert(arrayListArrayListOf, 1, navigationMenuModel2);
            }
        } else if (!StringsKt.contains$default((CharSequence) getSharedPrefs().getDeviceName(), (CharSequence) "R9", false, 2, (Object) null)) {
            z = false;
        } else if (this.isBluetoothConnected) {
            safeInsert(arrayListArrayListOf, 1, navigationMenuModel2);
        }
        if (StringsKt.contains$default((CharSequence) getSharedPrefs().getDeviceName(), (CharSequence) "R9", false, 2, (Object) null) && !z && this.isBluetoothConnected) {
            safeInsert(arrayListArrayListOf, 2, navigationMenuModel2);
        }
        int i4 = C2074R.drawable.ic_menu_about;
        String string4 = getString(C2074R.string.menu_about);
        Intrinsics.checkNotNullExpressionValue(string4, "getString(...)");
        arrayListArrayListOf.add(new NavigationMenuModel(i4, string4));
        this.adapter = new NavigationDrawerAdapter(this, arrayListArrayListOf, new OnMenuItemClick() { // from class: com.uniden.rtach.ui.activity.DashboardActivity.loadMenu.1
            @Override // com.uniden.rtach.helper.OnMenuItemClick
            public void onClick(NavigationMenuModel device) {
                Intrinsics.checkNotNullParameter(device, "device");
                int icon = device.getIcon();
                if (icon != C2074R.drawable.ic_mark_alert) {
                    if (icon == C2074R.drawable.ic_menu_settings) {
                        DashboardActivity.this.startActivity(new Intent(context, (Class<?>) SettingMenuActivity.class));
                        DashboardActivity.this.closeDrawer();
                        return;
                    }
                    if (icon == C2074R.drawable.ic_wifi) {
                        DashboardActivity.this.startActivity(new Intent(context, (Class<?>) WifiSettingActivity.class));
                        DashboardActivity.this.closeDrawer();
                    } else if (icon == C2074R.drawable.ic_menu_frimware_update) {
                        DashboardActivity.this.startActivity(new Intent(context, (Class<?>) FirmwareUpdateActivity.class));
                        DashboardActivity.this.closeDrawer();
                    } else {
                        if (icon == C2074R.drawable.ic_menu_about) {
                            DashboardActivity.this.startActivity(new Intent(DashboardActivity.this, (Class<?>) WebViewActivity.class));
                            DashboardActivity.this.closeDrawer();
                            return;
                        }
                        int i5 = C2074R.drawable.ic_menu_faq;
                    }
                }
            }
        });
        RecyclerView recyclerView = ((ActivityDashboardBinding) getBinding()).recyclerviewDrawerMenu;
        NavigationDrawerAdapter navigationDrawerAdapter2 = this.adapter;
        if (navigationDrawerAdapter2 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("adapter");
        } else {
            navigationDrawerAdapter = navigationDrawerAdapter2;
        }
        recyclerView.setAdapter(navigationDrawerAdapter);
    }

    /* JADX WARN: Multi-variable type inference failed */
    private final <T> void safeInsert(List<T> list, int i, T t) {
        while (list.size() < i) {
            list.add(CollectionsKt.last((List) list));
        }
        if (list.size() == i) {
            list.add(t);
        } else {
            list.add(i, t);
        }
    }

    public final void openFilePicker() {
        Intent intent = new Intent("android.intent.action.GET_CONTENT");
        intent.setType("application/json");
        startActivityForResult(intent, this.PICK_FILE_REQUEST_CODE);
    }

    @Override // androidx.fragment.app.FragmentActivity, androidx.activity.ComponentActivity, android.app.Activity
    protected void onActivityResult(int requestCode, int resultCode, Intent data) throws FileNotFoundException {
        Uri data2;
        super.onActivityResult(requestCode, resultCode, data);
        if (requestCode != this.PICK_FILE_REQUEST_CODE || resultCode != -1 || data == null || (data2 = data.getData()) == null) {
            return;
        }
        readFileContent(data2);
    }

    private final void readFileContent(Uri uri) throws FileNotFoundException {
        BufferedReader bufferedReader;
        InputStream inputStreamOpenInputStream = getContentResolver().openInputStream(uri);
        if (inputStreamOpenInputStream != null) {
            Reader inputStreamReader = new InputStreamReader(inputStreamOpenInputStream, Charsets.UTF_8);
            bufferedReader = inputStreamReader instanceof BufferedReader ? (BufferedReader) inputStreamReader : new BufferedReader(inputStreamReader, 8192);
        } else {
            bufferedReader = null;
        }
        BufferedReader bufferedReader2 = bufferedReader;
        try {
            BufferedReader bufferedReader3 = bufferedReader2;
            String text = bufferedReader3 != null ? TextStreamsKt.readText(bufferedReader3) : null;
            if (text != null) {
                processFileContent(text);
                Unit unit = Unit.INSTANCE;
            } else {
                Integer.valueOf(Log.e("TAG", "Failed to read file content"));
            }
            CloseableKt.closeFinally(bufferedReader2, null);
        } catch (Throwable th) {
            try {
                throw th;
            } catch (Throwable th2) {
                CloseableKt.closeFinally(bufferedReader2, th);
                throw th2;
            }
        }
    }

    private final void processFileContent(String fileContent) {
        try {
            JSONObject jSONObject = new JSONObject(fileContent);
            SharedPreferences sharedPreferences = getSharedPreferences(StoreUserData.INSTANCE.getPrefName(this), 0);
            Intrinsics.checkNotNullExpressionValue(sharedPreferences, "getSharedPreferences(...)");
            StoreUserData storeUserData = new StoreUserData(sharedPreferences);
            storeUserData.setTestjsonFirmwareURL(jSONObject.getString("firmware_url"));
            checkFirmwareUpdate();
            storeUserData.setIsfileExist(true);
        } catch (Exception e) {
            e.printStackTrace();
            Log.e("TAG", "Failed to process file content", e);
        }
    }

    /* JADX INFO: renamed from: com.uniden.rtach.ui.activity.DashboardActivity$checkFirmwareUpdate$1 */
    /* JADX INFO: compiled from: DashboardActivity.kt */
    @Metadata(m490d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, m491d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    @DebugMetadata(m503c = "com.uniden.rtach.ui.activity.DashboardActivity$checkFirmwareUpdate$1", m504f = "DashboardActivity.kt", m505i = {}, m506l = {}, m507m = "invokeSuspend", m508n = {}, m509s = {})
    static final class C21041 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        int label;

        C21041(Continuation<? super C21041> continuation) {
            super(2, continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return DashboardActivity.this.new C21041(continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C21041) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label == 0) {
                ResultKt.throwOnFailure(obj);
                BluetoothManager.Companion companion = BluetoothManager.INSTANCE;
                Context applicationContext = DashboardActivity.this.getApplicationContext();
                Intrinsics.checkNotNullExpressionValue(applicationContext, "getApplicationContext(...)");
                companion.getInstance(applicationContext).readRadarSoftwareVersion();
                Utils utils = new Utils();
                Context applicationContext2 = DashboardActivity.this.getApplicationContext();
                Intrinsics.checkNotNullExpressionValue(applicationContext2, "getApplicationContext(...)");
                utils.checkIfUpdateAvailable(applicationContext2);
                DashboardActivity.this.showUpdateStatus();
                return Unit.INSTANCE;
            }
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
    }

    private final void checkFirmwareUpdate() {
        BuildersKt__Builders_commonKt.launch$default(CoroutineScopeKt.CoroutineScope(Dispatchers.getMain()), null, null, new C21041(null), 3, null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Multi-variable type inference failed */
    public final void showUpdateStatus() {
        ((ActivityDashboardBinding) getBinding()).appBarDashboard.updateWarning.setVisibility(getSharedPrefs().isUpdateAvailable() ? 0 : 8);
        loadMenu(this);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void closeDrawer() {
        new Handler(Looper.getMainLooper()).postDelayed(new Runnable() { // from class: com.uniden.rtach.ui.activity.DashboardActivity$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                DashboardActivity.closeDrawer$lambda$39(this.f$0);
            }
        }, 1000L);
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Multi-variable type inference failed */
    public static final void closeDrawer$lambda$39(DashboardActivity this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        ((ActivityDashboardBinding) this$0.getBinding()).drawerLayout.closeDrawer(GravityCompat.START);
    }

    private final void showNonWifiAlertDialog() {
        AlertDialog.Builder builder = new AlertDialog.Builder(getContext());
        List listSplit$default = StringsKt.split$default((CharSequence) getSharedPrefs().getCurrentFirmwareVersion(), new String[]{RemoteSettings.FORWARD_SLASH_STRING}, false, 0, 6, (Object) null);
        List listSplit$default2 = StringsKt.split$default((CharSequence) getSharedPrefs().getLatestFirmwareVersion(), new String[]{RemoteSettings.FORWARD_SLASH_STRING}, false, 0, 6, (Object) null);
        builder.setTitle("Uniden Alert");
        builder.setMessage("Important Update Available!.\n Current Version : " + ((String) listSplit$default.get(1)) + "\n New Version :" + ((String) listSplit$default2.get(1)) + ' ');
        builder.setPositiveButton("OK", new DialogInterface.OnClickListener() { // from class: com.uniden.rtach.ui.activity.DashboardActivity$$ExternalSyntheticLambda20
            @Override // android.content.DialogInterface.OnClickListener
            public final void onClick(DialogInterface dialogInterface, int i) {
                DashboardActivity.showNonWifiAlertDialog$lambda$40(this.f$0, dialogInterface, i);
            }
        });
        builder.create().show();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void showNonWifiAlertDialog$lambda$40(DashboardActivity this$0, DialogInterface dialog, int i) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Intrinsics.checkNotNullParameter(dialog, "dialog");
        dialog.dismiss();
        this$0.closeDrawer();
    }

    @Override // androidx.appcompat.app.AppCompatActivity, android.app.Activity, android.view.KeyEvent.Callback
    public boolean onKeyDown(int keyCode, KeyEvent event) {
        AudioManager audioManager = null;
        if (keyCode == 24) {
            AudioManager audioManager2 = this.mAudioManager;
            if (audioManager2 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("mAudioManager");
                audioManager2 = null;
            }
            audioManager2.adjustStreamVolume(3, 1, 1);
            AudioManager audioManager3 = this.mAudioManager;
            if (audioManager3 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("mAudioManager");
                audioManager3 = null;
            }
            int streamVolume = audioManager3.getStreamVolume(3);
            AudioManager audioManager4 = this.mAudioManager;
            if (audioManager4 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("mAudioManager");
                audioManager4 = null;
            }
            int streamMaxVolume = audioManager4.getStreamMaxVolume(3);
            int i = this.volumeLvlCount;
            if (i < 9) {
                this.volumeLvlCount = i + 1;
                int highVolumeLevel = getHighVolumeLevel(streamMaxVolume, streamVolume);
                BluetoothManager.INSTANCE.getInstance(getContext()).writeCharacteristic("BTreqSETC:101=" + (this.volumeLvlCount - 1));
                AudioManager audioManager5 = this.mAudioManager;
                if (audioManager5 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("mAudioManager");
                } else {
                    audioManager = audioManager5;
                }
                audioManager.setStreamVolume(3, highVolumeLevel, 0);
            }
            return true;
        }
        if (keyCode == 25) {
            AudioManager audioManager6 = this.mAudioManager;
            if (audioManager6 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("mAudioManager");
                audioManager6 = null;
            }
            audioManager6.adjustStreamVolume(3, -1, 1);
            AudioManager audioManager7 = this.mAudioManager;
            if (audioManager7 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("mAudioManager");
                audioManager7 = null;
            }
            int streamVolume2 = audioManager7.getStreamVolume(3);
            AudioManager audioManager8 = this.mAudioManager;
            if (audioManager8 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("mAudioManager");
                audioManager8 = null;
            }
            int streamMaxVolume2 = audioManager8.getStreamMaxVolume(3);
            int lowVolumeLevel = getLowVolumeLevel(streamMaxVolume2, streamVolume2);
            getCurrentVolume(streamMaxVolume2);
            int i2 = this.volumeLvlCount;
            if (i2 >= 1) {
                this.volumeLvlCount = i2 - 1;
                BluetoothManager.INSTANCE.getInstance(getContext()).writeCharacteristic("BTreqSETC:101=" + this.volumeLvlCount);
                AudioManager audioManager9 = this.mAudioManager;
                if (audioManager9 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("mAudioManager");
                } else {
                    audioManager = audioManager9;
                }
                audioManager.setStreamVolume(3, lowVolumeLevel, 0);
            }
            return true;
        }
        return super.onKeyDown(keyCode, event);
    }

    private final int getHighVolumeLevel(int maxVolume, int currentVolume) {
        return currentVolume >= maxVolume - (maxVolume / 8) ? maxVolume : (int) ((((double) maxVolume) / ((double) 9)) * ((double) this.volumeLvlCount));
    }

    private final int getCurrentVolume(int maxVolume) {
        int i = 1;
        while (true) {
            int i2 = i - 1;
            if (Intrinsics.areEqual(getSharedPrefs().getVolume(), "Vol Level: " + i2)) {
                this.volumeLvlCount = i2;
                return (int) ((((double) maxVolume) / ((double) 9)) * ((double) i2));
            }
            if (i == 9) {
                return 0;
            }
            i++;
        }
    }

    private final void displayPoiAlert(String type, String mDistance, String mSpeedLimit, String gpsStatus) {
        String str = type;
        if (str.length() > 0) {
            poiAlertVisibility(true);
            int poiAlertIcon = AlertDataConverter.INSTANCE.getPoiAlertIcon(type);
            ImageView imageView = this.imgMarkerIcon;
            TextView textView = null;
            if (imageView == null) {
                Intrinsics.throwUninitializedPropertyAccessException("imgMarkerIcon");
                imageView = null;
            }
            imageView.setImageResource(poiAlertIcon);
            if (!Intrinsics.areEqual(gpsStatus, "D")) {
                if (getViewModel().getSelectedTab().getValue() == MyTab.MAP) {
                    if (!Intrinsics.areEqual(type, Constant.INSTANCE.getREDLIGHT())) {
                        if (Intrinsics.areEqual(type, Constant.INSTANCE.getUSERMARK())) {
                            getViewModel().getDeleteUserMarkVisibility().setValue(true);
                            getViewModel().getAddUserMarkVisibility().setValue(false);
                        } else {
                            getViewModel().getAddUserMarkVisibility().setValue(true);
                        }
                    } else {
                        getViewModel().getDeleteRedLightVisibility().setValue(true);
                        getViewModel().getAddUserMarkVisibility().setValue(true);
                    }
                } else {
                    getViewModel().getAddUserMarkVisibility().setValue(false);
                    getViewModel().getDeleteUserMarkVisibility().setValue(false);
                    getViewModel().getDeleteRedLightVisibility().setValue(false);
                }
            } else {
                getViewModel().getAddUserMarkVisibility().setValue(false);
                getViewModel().getDeleteRedLightVisibility().setValue(false);
                getViewModel().getDeleteUserMarkVisibility().setValue(false);
            }
            if (Intrinsics.areEqual(type, Constant.INSTANCE.getSPEEDCAM())) {
                String speedUnit = getSharedPrefs().getSpeedUnit();
                TextView textView2 = this.txtLimitSpeed;
                if (textView2 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("txtLimitSpeed");
                    textView2 = null;
                }
                textView2.setText(getString(C2074R.string.limit_speed) + ' ' + mSpeedLimit + speedUnit);
                TextView textView3 = this.txtLimitSpeed;
                if (textView3 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("txtLimitSpeed");
                    textView3 = null;
                }
                textView3.setVisibility(0);
            } else {
                TextView textView4 = this.txtLimitSpeed;
                if (textView4 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("txtLimitSpeed");
                    textView4 = null;
                }
                textView4.setVisibility(8);
            }
            if (str.length() > 0) {
                int poiAlertTypeStr = AlertDataConverter.INSTANCE.getPoiAlertTypeStr(type);
                TextView textView5 = this.txtMarkerType;
                if (textView5 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("txtMarkerType");
                    textView5 = null;
                }
                textView5.setText(getString(poiAlertTypeStr));
                TextView textView6 = this.txtMarkerType;
                if (textView6 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("txtMarkerType");
                    textView6 = null;
                }
                textView6.setVisibility(0);
            } else {
                TextView textView7 = this.txtMarkerType;
                if (textView7 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("txtMarkerType");
                    textView7 = null;
                }
                textView7.setVisibility(8);
            }
            if (mDistance.length() <= 0) {
                TextView textView8 = this.txtDistance;
                if (textView8 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("txtDistance");
                } else {
                    textView = textView8;
                }
                textView.setVisibility(8);
                return;
            }
            String string = getString(Intrinsics.areEqual(getSharedPrefs().getSpeedUnit(), "mph") ? C2074R.string.feet : C2074R.string.meter);
            Intrinsics.checkNotNull(string);
            TextView textView9 = this.txtDistance;
            if (textView9 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("txtDistance");
                textView9 = null;
            }
            textView9.setText(mDistance + ' ' + string);
            TextView textView10 = this.txtDistance;
            if (textView10 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("txtDistance");
            } else {
                textView = textView10;
            }
            textView.setVisibility(0);
            return;
        }
        if (Intrinsics.areEqual(gpsStatus, "C")) {
            getViewModel().getAddUserMarkVisibility().setValue(true);
            getViewModel().getDeleteRedLightVisibility().setValue(false);
            getViewModel().getDeleteUserMarkVisibility().setValue(false);
        } else {
            getViewModel().getAddUserMarkVisibility().setValue(false);
            getViewModel().getDeleteRedLightVisibility().setValue(false);
            getViewModel().getDeleteUserMarkVisibility().setValue(false);
        }
        poiAlertVisibility(false);
    }

    private final void poiAlertVisibility(boolean visibility) {
        ConstraintLayout constraintLayout = this.constraintPoiAlert;
        ConstraintLayout constraintLayout2 = null;
        if (constraintLayout == null) {
            Intrinsics.throwUninitializedPropertyAccessException("constraintPoiAlert");
            constraintLayout = null;
        }
        if (constraintLayout.getVisibility() == 8 && visibility) {
            ConstraintLayout constraintLayout3 = this.constraintPoiAlert;
            if (constraintLayout3 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("constraintPoiAlert");
            } else {
                constraintLayout2 = constraintLayout3;
            }
            constraintLayout2.setVisibility(0);
            return;
        }
        ConstraintLayout constraintLayout4 = this.constraintPoiAlert;
        if (constraintLayout4 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("constraintPoiAlert");
            constraintLayout4 = null;
        }
        if (constraintLayout4.getVisibility() != 0 || visibility) {
            return;
        }
        ConstraintLayout constraintLayout5 = this.constraintPoiAlert;
        if (constraintLayout5 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("constraintPoiAlert");
        } else {
            constraintLayout2 = constraintLayout5;
        }
        constraintLayout2.setVisibility(8);
    }
}
