package com.uniden.rtach.viewmodel;

import android.content.Context;
import android.content.SharedPreferences;
import android.util.Log;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.exifinterface.media.ExifInterface;
import androidx.lifecycle.LiveData;
import androidx.lifecycle.MutableLiveData;
import androidx.lifecycle.ViewModel;
import androidx.lifecycle.ViewModelKt;
import com.uniden.rtach.BuildConfig;
import com.uniden.rtach.C2074R;
import com.uniden.rtach.data.model.AlertBandDataModel;
import com.uniden.rtach.data.sharedpref.StoreUserData;
import com.uniden.rtach.helper.CustomLog;
import com.uniden.rtach.helper.MyTab;
import com.uniden.rtach.helper.TypeDash;
import java.util.List;
import java.util.concurrent.CancellationException;
import javax.inject.Inject;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.Boxing;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.enums.EnumEntries;
import kotlin.enums.EnumEntriesKt;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.BuildersKt__Builders_commonKt;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.DelayKt;
import kotlinx.coroutines.Job;

/* JADX INFO: compiled from: DashboardViewModel.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000j\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0010\n\u0002\u0010\b\n\u0002\b\u0006\n\u0002\u0010\u000b\n\u0002\b-\n\u0002\u0010\u0002\n\u0002\b\r\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u001a\b\u0007\u0018\u00002\u00020\u0001:\u0002\u008b\u0001B\u0011\b\u0007\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0016\u0010}\u001a\u00020]2\u0006\u0010y\u001a\u00020\u00172\u0006\u0010{\u001a\u00020\u0017J\u0007\u0010\u0080\u0001\u001a\u00020]J\u0012\u0010\u0081\u0001\u001a\u00020]2\u0007\u0010\u0082\u0001\u001a\u00020(H\u0002J\u000e\u0010l\u001a\u00020]2\u0006\u0010\u0002\u001a\u00020\u0003J\u000e\u0010v\u001a\u00020]2\u0006\u0010\u0002\u001a\u00020\u0003J3\u0010\u0083\u0001\u001a\u00020]2\u0007\u0010\u0084\u0001\u001a\u00020\u00172\u0007\u0010\u0085\u0001\u001a\u00020/2\u0006\u00109\u001a\u00020\u00172\u0007\u0010\u0086\u0001\u001a\u00020\u00172\u0007\u0010\u0087\u0001\u001a\u00020/J\u0018\u0010\u0088\u0001\u001a\u00020]2\u0007\u0010\u0089\u0001\u001a\u00020\u00172\u0006\u0010\u0002\u001a\u00020\u0003J\u0007\u0010\u008a\u0001\u001a\u00020]R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R \u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\b0\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\t\u0010\n\"\u0004\b\u000b\u0010\fR \u0010\r\u001a\b\u0012\u0004\u0012\u00020\u000e0\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u000f\u0010\n\"\u0004\b\u0010\u0010\fR&\u0010\u0011\u001a\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00130\u00120\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0014\u0010\n\"\u0004\b\u0015\u0010\fR\u0014\u0010\u0016\u001a\b\u0012\u0004\u0012\u00020\u00170\u0007X\u0082\u000e¢\u0006\u0002\n\u0000R \u0010\u0018\u001a\b\u0012\u0004\u0012\u00020\u00170\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0019\u0010\n\"\u0004\b\u001a\u0010\fR \u0010\u001b\u001a\b\u0012\u0004\u0012\u00020\u00170\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u001c\u0010\n\"\u0004\b\u001d\u0010\fR \u0010\u001e\u001a\b\u0012\u0004\u0012\u00020\u00170\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u001f\u0010\n\"\u0004\b \u0010\fR \u0010!\u001a\b\u0012\u0004\u0012\u00020\u00170\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\"\u0010\n\"\u0004\b#\u0010\fR \u0010$\u001a\b\u0012\u0004\u0012\u00020\u00170\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b%\u0010\n\"\u0004\b&\u0010\fR \u0010'\u001a\b\u0012\u0004\u0012\u00020(0\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b)\u0010\n\"\u0004\b*\u0010\fR \u0010+\u001a\b\u0012\u0004\u0012\u00020(0\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b,\u0010\n\"\u0004\b-\u0010\fR(\u0010.\u001a\u0010\u0012\f\u0012\n 0*\u0004\u0018\u00010/0/0\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b1\u0010\n\"\u0004\b2\u0010\fR(\u00103\u001a\u0010\u0012\f\u0012\n 0*\u0004\u0018\u00010/0/0\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b3\u0010\n\"\u0004\b4\u0010\fR(\u00105\u001a\u0010\u0012\f\u0012\n 0*\u0004\u0018\u00010/0/0\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b5\u0010\n\"\u0004\b6\u0010\fR(\u00107\u001a\u0010\u0012\f\u0012\n 0*\u0004\u0018\u00010/0/0\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b7\u0010\n\"\u0004\b8\u0010\fR \u00109\u001a\b\u0012\u0004\u0012\u00020\u00170\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b:\u0010\n\"\u0004\b;\u0010\fR(\u0010<\u001a\u0010\u0012\f\u0012\n 0*\u0004\u0018\u00010/0/0\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b<\u0010\n\"\u0004\b=\u0010\fR(\u0010>\u001a\u0010\u0012\f\u0012\n 0*\u0004\u0018\u00010/0/0\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b>\u0010\n\"\u0004\b?\u0010\fR(\u0010@\u001a\u0010\u0012\f\u0012\n 0*\u0004\u0018\u00010/0/0\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b@\u0010\n\"\u0004\bA\u0010\fR(\u0010B\u001a\u0010\u0012\f\u0012\n 0*\u0004\u0018\u00010/0/0\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bB\u0010\n\"\u0004\bC\u0010\fR(\u0010D\u001a\u0010\u0012\f\u0012\n 0*\u0004\u0018\u00010/0/0\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bD\u0010\n\"\u0004\bE\u0010\fR(\u0010F\u001a\u0010\u0012\f\u0012\n 0*\u0004\u0018\u00010/0/0\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bG\u0010\n\"\u0004\bH\u0010\fR(\u0010I\u001a\u0010\u0012\f\u0012\n 0*\u0004\u0018\u00010/0/0\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bI\u0010\n\"\u0004\bJ\u0010\fR(\u0010K\u001a\u0010\u0012\f\u0012\n 0*\u0004\u0018\u00010/0/0\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bK\u0010\n\"\u0004\bL\u0010\fR(\u0010M\u001a\u0010\u0012\f\u0012\n 0*\u0004\u0018\u00010/0/0\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bM\u0010\n\"\u0004\bN\u0010\fR(\u0010O\u001a\u0010\u0012\f\u0012\n 0*\u0004\u0018\u00010/0/0\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bP\u0010\n\"\u0004\bQ\u0010\fR(\u0010R\u001a\u0010\u0012\f\u0012\n 0*\u0004\u0018\u00010/0/0\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bS\u0010\n\"\u0004\bT\u0010\fR \u0010U\u001a\b\u0012\u0004\u0012\u00020\u00170\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bV\u0010\n\"\u0004\bW\u0010\fR(\u0010X\u001a\u0010\u0012\f\u0012\n 0*\u0004\u0018\u00010/0/0\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bX\u0010\n\"\u0004\bY\u0010\fR(\u0010Z\u001a\u0010\u0012\f\u0012\n 0*\u0004\u0018\u00010/0/0\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bZ\u0010\n\"\u0004\b[\u0010\fR\u001f\u0010\\\u001a\u0010\u0012\f\u0012\n 0*\u0004\u0018\u00010]0]0\u0007¢\u0006\b\n\u0000\u001a\u0004\b^\u0010\nR(\u0010_\u001a\u0010\u0012\f\u0012\n 0*\u0004\u0018\u00010/0/0\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b`\u0010\n\"\u0004\ba\u0010\fR\u001f\u0010b\u001a\u0010\u0012\f\u0012\n 0*\u0004\u0018\u00010/0/0\u0007¢\u0006\b\n\u0000\u001a\u0004\bc\u0010\nR(\u0010d\u001a\u0010\u0012\f\u0012\n 0*\u0004\u0018\u00010/0/0\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\be\u0010\n\"\u0004\bf\u0010\fR(\u0010g\u001a\u0010\u0012\f\u0012\n 0*\u0004\u0018\u00010/0/0\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bh\u0010\n\"\u0004\bi\u0010\fR\u0017\u0010j\u001a\b\u0012\u0004\u0012\u00020\u00170k8F¢\u0006\u0006\u001a\u0004\bl\u0010mR\u0010\u0010n\u001a\u0004\u0018\u00010oX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010p\u001a\u0004\u0018\u00010oX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010q\u001a\u00020rX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010s\u001a\u00020(X\u0082\u000e¢\u0006\u0002\n\u0000R\u0014\u0010t\u001a\b\u0012\u0004\u0012\u00020\u00170\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u0017\u0010u\u001a\b\u0012\u0004\u0012\u00020\u00170k8F¢\u0006\u0006\u001a\u0004\bv\u0010mR\u0014\u0010w\u001a\b\u0012\u0004\u0012\u00020\u00170\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010x\u001a\b\u0012\u0004\u0012\u00020\u00170\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u0017\u0010y\u001a\b\u0012\u0004\u0012\u00020\u00170k8F¢\u0006\u0006\u001a\u0004\bz\u0010mR\u0017\u0010{\u001a\b\u0012\u0004\u0012\u00020\u00170k8F¢\u0006\u0006\u001a\u0004\b|\u0010mR\u0014\u0010~\u001a\b\u0012\u0004\u0012\u00020/0\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u0017\u0010\u007f\u001a\b\u0012\u0004\u0012\u00020/0k8F¢\u0006\u0006\u001a\u0004\b\u007f\u0010m¨\u0006\u008c\u0001"}, m491d2 = {"Lcom/uniden/rtach/viewmodel/DashboardViewModel;", "Landroidx/lifecycle/ViewModel;", "context", "Landroid/content/Context;", "<init>", "(Landroid/content/Context;)V", "selectedTab", "Landroidx/lifecycle/MutableLiveData;", "Lcom/uniden/rtach/helper/MyTab;", "getSelectedTab", "()Landroidx/lifecycle/MutableLiveData;", "setSelectedTab", "(Landroidx/lifecycle/MutableLiveData;)V", "typeDash", "Lcom/uniden/rtach/helper/TypeDash;", "getTypeDash", "setTypeDash", "listBandAlert", "", "Lcom/uniden/rtach/data/model/AlertBandDataModel;", "getListBandAlert", "setListBandAlert", "_connectedDevice", "", "_modeType", "get_modeType", "set_modeType", "_speedDistance", "get_speedDistance", "set_speedDistance", "altitude", "getAltitude", "setAltitude", "volt", "getVolt", "setVolt", "updateDirection", "getUpdateDirection", "setUpdateDirection", "btConnected", "", "getBtConnected", "setBtConnected", "gpsConnected", "getGpsConnected", "setGpsConnected", "directionVisibility", "", "kotlin.jvm.PlatformType", "getDirectionVisibility", "setDirectionVisibility", "isMute", "setMute", "isMuteEnable", "setMuteEnable", "isMuteClickable", "setMuteClickable", "laserTpMode", "getLaserTpMode", "setLaserTpMode", "isLaserTpAlertEnable", "setLaserTpAlertEnable", "isReceiveBtnVisible", "setReceiveBtnVisible", "isWorkReceiveModeFunction", "setWorkReceiveModeFunction", "isJammingIconEnable", "setJammingIconEnable", "isMuteStatusEnable", "setMuteStatusEnable", "labelMuteMem", "getLabelMuteMem", "setLabelMuteMem", "isR9Device", "setR9Device", "isGrayOut", "setGrayOut", "isKBlockMute", "setKBlockMute", "gpsIconVisibility", "getGpsIconVisibility", "setGpsIconVisibility", "onGpsClick", "getOnGpsClick", "setOnGpsClick", "receiveModeBtnText", "getReceiveModeBtnText", "setReceiveModeBtnText", "isReceiveOnlyClickable", "setReceiveOnlyClickable", "isMuteMemClickable", "setMuteMemClickable", "callBackNorthUpHeadingUp", "", "getCallBackNorthUpHeadingUp", "addUserMarkVisibility", "getAddUserMarkVisibility", "setAddUserMarkVisibility", "bandAlertVisibility", "getBandAlertVisibility", "deleteUserMarkVisibility", "getDeleteUserMarkVisibility", "setDeleteUserMarkVisibility", "deleteRedLightVisibility", "getDeleteRedLightVisibility", "setDeleteRedLightVisibility", "connectedDevice", "Landroidx/lifecycle/LiveData;", "getConnectedDevice", "()Landroidx/lifecycle/LiveData;", "waitReceiveModeTimer", "Lkotlinx/coroutines/Job;", "receiveModeTimer", "rcvBtnStatus", "Lcom/uniden/rtach/viewmodel/DashboardViewModel$RcvButtonStatus;", "rcvBtnRemainingTime", "_appVersion", "appVersion", "getAppVersion", "_lat", "_lng", "lat", "getLat", "lng", "getLng", "setLatLng", "_isDeleteUserMarkVisible", "isDeleteUserMarkVisible", "startWaitReceiveModeReport", "startReceiveModeTimer", "time", "updateLaserTpAlertInfo", "alertType", "laserTpEnable", "rcvModeStatus", "jammingEnable", "updateMuteStatus", "muteType", "toggleDeleteUserMarkVisibility", "RcvButtonStatus", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class DashboardViewModel extends ViewModel {
    private final MutableLiveData<String> _appVersion;
    private MutableLiveData<String> _connectedDevice;
    private final MutableLiveData<Boolean> _isDeleteUserMarkVisible;
    private final MutableLiveData<String> _lat;
    private final MutableLiveData<String> _lng;
    private MutableLiveData<String> _modeType;
    private MutableLiveData<String> _speedDistance;
    private MutableLiveData<Boolean> addUserMarkVisibility;
    private MutableLiveData<String> altitude;
    private final MutableLiveData<Boolean> bandAlertVisibility;
    private MutableLiveData<Integer> btConnected;
    private final MutableLiveData<Unit> callBackNorthUpHeadingUp;
    private final Context context;
    private MutableLiveData<Boolean> deleteRedLightVisibility;
    private MutableLiveData<Boolean> deleteUserMarkVisibility;
    private MutableLiveData<Boolean> directionVisibility;
    private MutableLiveData<Integer> gpsConnected;
    private MutableLiveData<Boolean> gpsIconVisibility;
    private MutableLiveData<Boolean> isGrayOut;
    private MutableLiveData<Boolean> isJammingIconEnable;
    private MutableLiveData<Boolean> isKBlockMute;
    private MutableLiveData<Boolean> isLaserTpAlertEnable;
    private MutableLiveData<Boolean> isMute;
    private MutableLiveData<Boolean> isMuteClickable;
    private MutableLiveData<Boolean> isMuteEnable;
    private MutableLiveData<Boolean> isMuteMemClickable;
    private MutableLiveData<Boolean> isMuteStatusEnable;
    private MutableLiveData<Boolean> isR9Device;
    private MutableLiveData<Boolean> isReceiveBtnVisible;
    private MutableLiveData<Boolean> isReceiveOnlyClickable;
    private MutableLiveData<Boolean> isWorkReceiveModeFunction;
    private MutableLiveData<Boolean> labelMuteMem;
    private MutableLiveData<String> laserTpMode;
    private MutableLiveData<List<AlertBandDataModel>> listBandAlert;
    private MutableLiveData<Boolean> onGpsClick;
    private int rcvBtnRemainingTime;
    private RcvButtonStatus rcvBtnStatus;
    private MutableLiveData<String> receiveModeBtnText;
    private Job receiveModeTimer;
    private MutableLiveData<MyTab> selectedTab;
    private MutableLiveData<TypeDash> typeDash;
    private MutableLiveData<String> updateDirection;
    private MutableLiveData<String> volt;
    private Job waitReceiveModeTimer;

    /* JADX INFO: compiled from: DashboardViewModel.kt */
    @Metadata(m490d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\u0006\b\u0082\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003j\u0002\b\u0004j\u0002\b\u0005j\u0002\b\u0006¨\u0006\u0007"}, m491d2 = {"Lcom/uniden/rtach/viewmodel/DashboardViewModel$RcvButtonStatus;", "", "<init>", "(Ljava/lang/String;I)V", "RCV_BUTTON_RECEIVE_ONLY", "RCV_BUTTON_PREVIOUS_MODE", "RCV_BUTTON_REMAINING_TIME", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    private enum RcvButtonStatus {
        RCV_BUTTON_RECEIVE_ONLY,
        RCV_BUTTON_PREVIOUS_MODE,
        RCV_BUTTON_REMAINING_TIME;

        private static final /* synthetic */ EnumEntries $ENTRIES = EnumEntriesKt.enumEntries(values());

        public static EnumEntries<RcvButtonStatus> getEntries() {
            return $ENTRIES;
        }
    }

    /* JADX INFO: compiled from: DashboardViewModel.kt */
    @Metadata(m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;

        static {
            int[] iArr = new int[RcvButtonStatus.values().length];
            try {
                iArr[RcvButtonStatus.RCV_BUTTON_PREVIOUS_MODE.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[RcvButtonStatus.RCV_BUTTON_RECEIVE_ONLY.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                iArr[RcvButtonStatus.RCV_BUTTON_REMAINING_TIME.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            $EnumSwitchMapping$0 = iArr;
        }
    }

    public final MutableLiveData<Boolean> getAddUserMarkVisibility() {
        return this.addUserMarkVisibility;
    }

    public final MutableLiveData<String> getAltitude() {
        return this.altitude;
    }

    public final MutableLiveData<Boolean> getBandAlertVisibility() {
        return this.bandAlertVisibility;
    }

    public final MutableLiveData<Integer> getBtConnected() {
        return this.btConnected;
    }

    public final MutableLiveData<Unit> getCallBackNorthUpHeadingUp() {
        return this.callBackNorthUpHeadingUp;
    }

    public final MutableLiveData<Boolean> getDeleteRedLightVisibility() {
        return this.deleteRedLightVisibility;
    }

    public final MutableLiveData<Boolean> getDeleteUserMarkVisibility() {
        return this.deleteUserMarkVisibility;
    }

    public final MutableLiveData<Boolean> getDirectionVisibility() {
        return this.directionVisibility;
    }

    public final MutableLiveData<Integer> getGpsConnected() {
        return this.gpsConnected;
    }

    public final MutableLiveData<Boolean> getGpsIconVisibility() {
        return this.gpsIconVisibility;
    }

    public final MutableLiveData<Boolean> getLabelMuteMem() {
        return this.labelMuteMem;
    }

    public final MutableLiveData<String> getLaserTpMode() {
        return this.laserTpMode;
    }

    public final MutableLiveData<List<AlertBandDataModel>> getListBandAlert() {
        return this.listBandAlert;
    }

    public final MutableLiveData<Boolean> getOnGpsClick() {
        return this.onGpsClick;
    }

    public final MutableLiveData<String> getReceiveModeBtnText() {
        return this.receiveModeBtnText;
    }

    public final MutableLiveData<MyTab> getSelectedTab() {
        return this.selectedTab;
    }

    public final MutableLiveData<TypeDash> getTypeDash() {
        return this.typeDash;
    }

    public final MutableLiveData<String> getUpdateDirection() {
        return this.updateDirection;
    }

    public final MutableLiveData<String> getVolt() {
        return this.volt;
    }

    public final MutableLiveData<String> get_modeType() {
        return this._modeType;
    }

    public final MutableLiveData<String> get_speedDistance() {
        return this._speedDistance;
    }

    public final MutableLiveData<Boolean> isGrayOut() {
        return this.isGrayOut;
    }

    public final MutableLiveData<Boolean> isJammingIconEnable() {
        return this.isJammingIconEnable;
    }

    public final MutableLiveData<Boolean> isKBlockMute() {
        return this.isKBlockMute;
    }

    public final MutableLiveData<Boolean> isLaserTpAlertEnable() {
        return this.isLaserTpAlertEnable;
    }

    public final MutableLiveData<Boolean> isMute() {
        return this.isMute;
    }

    public final MutableLiveData<Boolean> isMuteClickable() {
        return this.isMuteClickable;
    }

    public final MutableLiveData<Boolean> isMuteEnable() {
        return this.isMuteEnable;
    }

    public final MutableLiveData<Boolean> isMuteMemClickable() {
        return this.isMuteMemClickable;
    }

    public final MutableLiveData<Boolean> isMuteStatusEnable() {
        return this.isMuteStatusEnable;
    }

    public final MutableLiveData<Boolean> isR9Device() {
        return this.isR9Device;
    }

    public final MutableLiveData<Boolean> isReceiveBtnVisible() {
        return this.isReceiveBtnVisible;
    }

    public final MutableLiveData<Boolean> isReceiveOnlyClickable() {
        return this.isReceiveOnlyClickable;
    }

    public final MutableLiveData<Boolean> isWorkReceiveModeFunction() {
        return this.isWorkReceiveModeFunction;
    }

    public final void setAddUserMarkVisibility(MutableLiveData<Boolean> mutableLiveData) {
        Intrinsics.checkNotNullParameter(mutableLiveData, "<set-?>");
        this.addUserMarkVisibility = mutableLiveData;
    }

    public final void setAltitude(MutableLiveData<String> mutableLiveData) {
        Intrinsics.checkNotNullParameter(mutableLiveData, "<set-?>");
        this.altitude = mutableLiveData;
    }

    public final void setBtConnected(MutableLiveData<Integer> mutableLiveData) {
        Intrinsics.checkNotNullParameter(mutableLiveData, "<set-?>");
        this.btConnected = mutableLiveData;
    }

    public final void setDeleteRedLightVisibility(MutableLiveData<Boolean> mutableLiveData) {
        Intrinsics.checkNotNullParameter(mutableLiveData, "<set-?>");
        this.deleteRedLightVisibility = mutableLiveData;
    }

    public final void setDeleteUserMarkVisibility(MutableLiveData<Boolean> mutableLiveData) {
        Intrinsics.checkNotNullParameter(mutableLiveData, "<set-?>");
        this.deleteUserMarkVisibility = mutableLiveData;
    }

    public final void setDirectionVisibility(MutableLiveData<Boolean> mutableLiveData) {
        Intrinsics.checkNotNullParameter(mutableLiveData, "<set-?>");
        this.directionVisibility = mutableLiveData;
    }

    public final void setGpsConnected(MutableLiveData<Integer> mutableLiveData) {
        Intrinsics.checkNotNullParameter(mutableLiveData, "<set-?>");
        this.gpsConnected = mutableLiveData;
    }

    public final void setGpsIconVisibility(MutableLiveData<Boolean> mutableLiveData) {
        Intrinsics.checkNotNullParameter(mutableLiveData, "<set-?>");
        this.gpsIconVisibility = mutableLiveData;
    }

    public final void setGrayOut(MutableLiveData<Boolean> mutableLiveData) {
        Intrinsics.checkNotNullParameter(mutableLiveData, "<set-?>");
        this.isGrayOut = mutableLiveData;
    }

    public final void setJammingIconEnable(MutableLiveData<Boolean> mutableLiveData) {
        Intrinsics.checkNotNullParameter(mutableLiveData, "<set-?>");
        this.isJammingIconEnable = mutableLiveData;
    }

    public final void setKBlockMute(MutableLiveData<Boolean> mutableLiveData) {
        Intrinsics.checkNotNullParameter(mutableLiveData, "<set-?>");
        this.isKBlockMute = mutableLiveData;
    }

    public final void setLabelMuteMem(MutableLiveData<Boolean> mutableLiveData) {
        Intrinsics.checkNotNullParameter(mutableLiveData, "<set-?>");
        this.labelMuteMem = mutableLiveData;
    }

    public final void setLaserTpAlertEnable(MutableLiveData<Boolean> mutableLiveData) {
        Intrinsics.checkNotNullParameter(mutableLiveData, "<set-?>");
        this.isLaserTpAlertEnable = mutableLiveData;
    }

    public final void setLaserTpMode(MutableLiveData<String> mutableLiveData) {
        Intrinsics.checkNotNullParameter(mutableLiveData, "<set-?>");
        this.laserTpMode = mutableLiveData;
    }

    public final void setListBandAlert(MutableLiveData<List<AlertBandDataModel>> mutableLiveData) {
        Intrinsics.checkNotNullParameter(mutableLiveData, "<set-?>");
        this.listBandAlert = mutableLiveData;
    }

    public final void setMute(MutableLiveData<Boolean> mutableLiveData) {
        Intrinsics.checkNotNullParameter(mutableLiveData, "<set-?>");
        this.isMute = mutableLiveData;
    }

    public final void setMuteClickable(MutableLiveData<Boolean> mutableLiveData) {
        Intrinsics.checkNotNullParameter(mutableLiveData, "<set-?>");
        this.isMuteClickable = mutableLiveData;
    }

    public final void setMuteEnable(MutableLiveData<Boolean> mutableLiveData) {
        Intrinsics.checkNotNullParameter(mutableLiveData, "<set-?>");
        this.isMuteEnable = mutableLiveData;
    }

    public final void setMuteMemClickable(MutableLiveData<Boolean> mutableLiveData) {
        Intrinsics.checkNotNullParameter(mutableLiveData, "<set-?>");
        this.isMuteMemClickable = mutableLiveData;
    }

    public final void setMuteStatusEnable(MutableLiveData<Boolean> mutableLiveData) {
        Intrinsics.checkNotNullParameter(mutableLiveData, "<set-?>");
        this.isMuteStatusEnable = mutableLiveData;
    }

    public final void setOnGpsClick(MutableLiveData<Boolean> mutableLiveData) {
        Intrinsics.checkNotNullParameter(mutableLiveData, "<set-?>");
        this.onGpsClick = mutableLiveData;
    }

    public final void setR9Device(MutableLiveData<Boolean> mutableLiveData) {
        Intrinsics.checkNotNullParameter(mutableLiveData, "<set-?>");
        this.isR9Device = mutableLiveData;
    }

    public final void setReceiveBtnVisible(MutableLiveData<Boolean> mutableLiveData) {
        Intrinsics.checkNotNullParameter(mutableLiveData, "<set-?>");
        this.isReceiveBtnVisible = mutableLiveData;
    }

    public final void setReceiveModeBtnText(MutableLiveData<String> mutableLiveData) {
        Intrinsics.checkNotNullParameter(mutableLiveData, "<set-?>");
        this.receiveModeBtnText = mutableLiveData;
    }

    public final void setReceiveOnlyClickable(MutableLiveData<Boolean> mutableLiveData) {
        Intrinsics.checkNotNullParameter(mutableLiveData, "<set-?>");
        this.isReceiveOnlyClickable = mutableLiveData;
    }

    public final void setSelectedTab(MutableLiveData<MyTab> mutableLiveData) {
        Intrinsics.checkNotNullParameter(mutableLiveData, "<set-?>");
        this.selectedTab = mutableLiveData;
    }

    public final void setTypeDash(MutableLiveData<TypeDash> mutableLiveData) {
        Intrinsics.checkNotNullParameter(mutableLiveData, "<set-?>");
        this.typeDash = mutableLiveData;
    }

    public final void setUpdateDirection(MutableLiveData<String> mutableLiveData) {
        Intrinsics.checkNotNullParameter(mutableLiveData, "<set-?>");
        this.updateDirection = mutableLiveData;
    }

    public final void setVolt(MutableLiveData<String> mutableLiveData) {
        Intrinsics.checkNotNullParameter(mutableLiveData, "<set-?>");
        this.volt = mutableLiveData;
    }

    public final void setWorkReceiveModeFunction(MutableLiveData<Boolean> mutableLiveData) {
        Intrinsics.checkNotNullParameter(mutableLiveData, "<set-?>");
        this.isWorkReceiveModeFunction = mutableLiveData;
    }

    public final void set_modeType(MutableLiveData<String> mutableLiveData) {
        Intrinsics.checkNotNullParameter(mutableLiveData, "<set-?>");
        this._modeType = mutableLiveData;
    }

    public final void set_speedDistance(MutableLiveData<String> mutableLiveData) {
        Intrinsics.checkNotNullParameter(mutableLiveData, "<set-?>");
        this._speedDistance = mutableLiveData;
    }

    @Inject
    public DashboardViewModel(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        this.context = context;
        this.selectedTab = new MutableLiveData<>(MyTab.DASHBOARD);
        this.typeDash = new MutableLiveData<>(TypeDash.DASH);
        this.listBandAlert = new MutableLiveData<>();
        this._connectedDevice = new MutableLiveData<>();
        this._modeType = new MutableLiveData<>();
        this._speedDistance = new MutableLiveData<>();
        this.altitude = new MutableLiveData<>("0 ft");
        this.volt = new MutableLiveData<>("0 V");
        this.updateDirection = new MutableLiveData<>();
        this.btConnected = new MutableLiveData<>(Integer.valueOf(C2074R.drawable.bt_disconnect));
        this.gpsConnected = new MutableLiveData<>(Integer.valueOf(C2074R.drawable.ic_gps_grey));
        this.directionVisibility = new MutableLiveData<>(false);
        this.isMute = new MutableLiveData<>(false);
        this.isMuteEnable = new MutableLiveData<>(true);
        this.isMuteClickable = new MutableLiveData<>(true);
        this.laserTpMode = new MutableLiveData<>("");
        this.isLaserTpAlertEnable = new MutableLiveData<>(false);
        this.isReceiveBtnVisible = new MutableLiveData<>(false);
        this.isWorkReceiveModeFunction = new MutableLiveData<>(false);
        this.isJammingIconEnable = new MutableLiveData<>(false);
        this.isMuteStatusEnable = new MutableLiveData<>(true);
        this.labelMuteMem = new MutableLiveData<>(false);
        this.isR9Device = new MutableLiveData<>(false);
        this.isGrayOut = new MutableLiveData<>(true);
        this.isKBlockMute = new MutableLiveData<>(false);
        this.gpsIconVisibility = new MutableLiveData<>(false);
        this.onGpsClick = new MutableLiveData<>(false);
        this.receiveModeBtnText = new MutableLiveData<>("Receive Only");
        this.isReceiveOnlyClickable = new MutableLiveData<>(true);
        this.isMuteMemClickable = new MutableLiveData<>(true);
        this.callBackNorthUpHeadingUp = new MutableLiveData<>(Unit.INSTANCE);
        this.addUserMarkVisibility = new MutableLiveData<>(false);
        this.bandAlertVisibility = new MutableLiveData<>(false);
        this.deleteUserMarkVisibility = new MutableLiveData<>(false);
        this.deleteRedLightVisibility = new MutableLiveData<>(false);
        this.rcvBtnStatus = RcvButtonStatus.RCV_BUTTON_RECEIVE_ONLY;
        this._appVersion = new MutableLiveData<>();
        this._lat = new MutableLiveData<>();
        this._lng = new MutableLiveData<>();
        MutableLiveData<Boolean> mutableLiveData = new MutableLiveData<>();
        this._isDeleteUserMarkVisible = mutableLiveData;
        mutableLiveData.setValue(false);
    }

    public final LiveData<String> getConnectedDevice() {
        return this._connectedDevice;
    }

    public final LiveData<String> getAppVersion() {
        return this._appVersion;
    }

    public final LiveData<String> getLat() {
        return this._lat;
    }

    public final LiveData<String> getLng() {
        return this._lng;
    }

    public final void setLatLng(String lat, String lng) {
        Intrinsics.checkNotNullParameter(lat, "lat");
        Intrinsics.checkNotNullParameter(lng, "lng");
        this._lat.setValue(lat);
        this._lng.setValue(lng);
    }

    public final LiveData<Boolean> isDeleteUserMarkVisible() {
        return this._isDeleteUserMarkVisible;
    }

    public final void startWaitReceiveModeReport() {
        Job job = this.waitReceiveModeTimer;
        if (job != null) {
            Job.DefaultImpls.cancel$default(job, (CancellationException) null, 1, (Object) null);
        }
        this.isReceiveOnlyClickable.setValue(false);
        this.waitReceiveModeTimer = BuildersKt__Builders_commonKt.launch$default(ViewModelKt.getViewModelScope(this), null, null, new C21311(null), 3, null);
    }

    /* JADX INFO: renamed from: com.uniden.rtach.viewmodel.DashboardViewModel$startWaitReceiveModeReport$1 */
    /* JADX INFO: compiled from: DashboardViewModel.kt */
    @Metadata(m490d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, m491d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    @DebugMetadata(m503c = "com.uniden.rtach.viewmodel.DashboardViewModel$startWaitReceiveModeReport$1", m504f = "DashboardViewModel.kt", m505i = {}, m506l = {105}, m507m = "invokeSuspend", m508n = {}, m509s = {})
    static final class C21311 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        int label;

        C21311(Continuation<? super C21311> continuation) {
            super(2, continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return DashboardViewModel.this.new C21311(continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C21311) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                this.label = 1;
                if (DelayKt.delay(2000L, this) == coroutine_suspended) {
                    return coroutine_suspended;
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
            }
            DashboardViewModel.this.isReceiveOnlyClickable().setValue(Boxing.boxBoolean(true));
            return Unit.INSTANCE;
        }
    }

    /* JADX INFO: renamed from: com.uniden.rtach.viewmodel.DashboardViewModel$startReceiveModeTimer$1 */
    /* JADX INFO: compiled from: DashboardViewModel.kt */
    @Metadata(m490d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, m491d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    @DebugMetadata(m503c = "com.uniden.rtach.viewmodel.DashboardViewModel$startReceiveModeTimer$1", m504f = "DashboardViewModel.kt", m505i = {0}, m506l = {116}, m507m = "invokeSuspend", m508n = {"t"}, m509s = {"I$0"})
    static final class C21301 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ int $time;
        int I$0;
        int label;
        final /* synthetic */ DashboardViewModel this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C21301(int i, DashboardViewModel dashboardViewModel, Continuation<? super C21301> continuation) {
            super(2, continuation);
            this.$time = i;
            this.this$0 = dashboardViewModel;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new C21301(this.$time, this.this$0, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C21301) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        /* JADX WARN: Code duplicated, block: B:10:0x0025  */
        /* JADX WARN: Code duplicated, block: B:12:0x005b A[RETURN] */
        /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:11:0x0059 -> B:13:0x005c). Please report as a decompilation issue!!! */
        /*  JADX ERROR: JadxOverflowException in pass: RegionMakerVisitor
            jadx.core.utils.exceptions.JadxOverflowException: Regions stack size limit reached
            	at jadx.core.utils.ErrorsCounter.addError(ErrorsCounter.java:59)
            	at jadx.core.utils.ErrorsCounter.error(ErrorsCounter.java:31)
            	at jadx.core.dex.attributes.nodes.NotificationAttrNode.addError(NotificationAttrNode.java:19)
            */
        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final java.lang.Object invokeSuspend(java.lang.Object r8) {
            /*
                r7 = this;
                java.lang.Object r0 = kotlin.coroutines.intrinsics.IntrinsicsKt.getCOROUTINE_SUSPENDED()
                int r1 = r7.label
                r2 = -1
                r3 = 1
                if (r1 == 0) goto L1b
                if (r1 != r3) goto L13
                int r1 = r7.I$0
                kotlin.ResultKt.throwOnFailure(r8)
                r8 = r7
                goto L5c
            L13:
                java.lang.IllegalStateException r8 = new java.lang.IllegalStateException
                java.lang.String r0 = "call to 'resume' before 'invoke' with coroutine"
                r8.<init>(r0)
                throw r8
            L1b:
                kotlin.ResultKt.throwOnFailure(r8)
                int r8 = r7.$time
                int r8 = r8 - r3
                r1 = r8
                r8 = r7
            L23:
                if (r2 >= r1) goto L5e
                com.uniden.rtach.viewmodel.DashboardViewModel r4 = r8.this$0
                com.uniden.rtach.viewmodel.DashboardViewModel.access$setRcvBtnRemainingTime$p(r4, r1)
                com.uniden.rtach.viewmodel.DashboardViewModel r4 = r8.this$0
                androidx.lifecycle.MutableLiveData r4 = r4.getReceiveModeBtnText()
                java.lang.StringBuilder r5 = new java.lang.StringBuilder
                r5.<init>()
                com.uniden.rtach.viewmodel.DashboardViewModel r6 = r8.this$0
                int r6 = com.uniden.rtach.viewmodel.DashboardViewModel.access$getRcvBtnRemainingTime$p(r6)
                java.lang.StringBuilder r5 = r5.append(r6)
                java.lang.String r6 = " sec"
                java.lang.StringBuilder r5 = r5.append(r6)
                java.lang.String r5 = r5.toString()
                r4.setValue(r5)
                r4 = r8
                kotlin.coroutines.Continuation r4 = (kotlin.coroutines.Continuation) r4
                r8.I$0 = r1
                r8.label = r3
                r5 = 1000(0x3e8, double:4.94E-321)
                java.lang.Object r4 = kotlinx.coroutines.DelayKt.delay(r5, r4)
                if (r4 != r0) goto L5c
                return r0
            L5c:
                int r1 = r1 + r2
                goto L23
            L5e:
                kotlin.Unit r8 = kotlin.Unit.INSTANCE
                return r8
            */
            throw new UnsupportedOperationException("Method not decompiled: com.uniden.rtach.viewmodel.DashboardViewModel.C21301.invokeSuspend(java.lang.Object):java.lang.Object");
        }
    }

    private final void startReceiveModeTimer(int time) {
        Job job = this.receiveModeTimer;
        if (job != null) {
            Job.DefaultImpls.cancel$default(job, (CancellationException) null, 1, (Object) null);
        }
        this.receiveModeTimer = BuildersKt__Builders_commonKt.launch$default(ViewModelKt.getViewModelScope(this), null, null, new C21301(time, this, null), 3, null);
    }

    public final void getConnectedDevice(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        SharedPreferences sharedPreferences = context.getSharedPreferences(StoreUserData.INSTANCE.getPrefName(context), 0);
        Intrinsics.checkNotNullExpressionValue(sharedPreferences, "getSharedPreferences(...)");
        this._connectedDevice.setValue(new StoreUserData(sharedPreferences).getDeviceName());
    }

    public final void getAppVersion(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        this._appVersion.setValue(BuildConfig.VERSION_NAME);
    }

    public final void updateLaserTpAlertInfo(String alertType, boolean laserTpEnable, String laserTpMode, String rcvModeStatus, boolean jammingEnable) {
        RcvButtonStatus rcvButtonStatus;
        Intrinsics.checkNotNullParameter(alertType, "alertType");
        Intrinsics.checkNotNullParameter(laserTpMode, "laserTpMode");
        Intrinsics.checkNotNullParameter(rcvModeStatus, "rcvModeStatus");
        if (!Intrinsics.areEqual(alertType, "LASER") || !laserTpEnable || Intrinsics.areEqual(rcvModeStatus, "")) {
            this.laserTpMode.setValue("");
            this.isLaserTpAlertEnable.setValue(false);
            this.isJammingIconEnable.setValue(false);
            this.isWorkReceiveModeFunction.setValue(false);
            this.isReceiveBtnVisible.setValue(false);
            return;
        }
        this.isLaserTpAlertEnable.setValue(true);
        this.laserTpMode.setValue(laserTpMode);
        this.isJammingIconEnable.setValue(Boolean.valueOf(jammingEnable));
        int i = Integer.parseInt(rcvModeStatus);
        if (i == -1) {
            rcvButtonStatus = RcvButtonStatus.RCV_BUTTON_PREVIOUS_MODE;
        } else if (i == 0) {
            rcvButtonStatus = RcvButtonStatus.RCV_BUTTON_RECEIVE_ONLY;
        } else {
            rcvButtonStatus = RcvButtonStatus.RCV_BUTTON_REMAINING_TIME;
        }
        if (this.rcvBtnStatus != rcvButtonStatus) {
            Job job = this.waitReceiveModeTimer;
            if (job != null) {
                Job.DefaultImpls.cancel$default(job, (CancellationException) null, 1, (Object) null);
            }
            int i2 = WhenMappings.$EnumSwitchMapping$0[rcvButtonStatus.ordinal()];
            if (i2 == 1) {
                this.receiveModeBtnText.setValue("Previous Mode");
                this.isReceiveOnlyClickable.setValue(true);
                this.isWorkReceiveModeFunction.setValue(true);
                this.rcvBtnStatus = RcvButtonStatus.RCV_BUTTON_PREVIOUS_MODE;
                Job job2 = this.receiveModeTimer;
                if (job2 != null) {
                    Job.DefaultImpls.cancel$default(job2, (CancellationException) null, 1, (Object) null);
                }
            } else if (i2 == 2) {
                this.receiveModeBtnText.setValue("Receive Only");
                this.isReceiveOnlyClickable.setValue(true);
                this.isWorkReceiveModeFunction.setValue(false);
                this.rcvBtnStatus = RcvButtonStatus.RCV_BUTTON_RECEIVE_ONLY;
                Job job3 = this.receiveModeTimer;
                if (job3 != null) {
                    Job.DefaultImpls.cancel$default(job3, (CancellationException) null, 1, (Object) null);
                }
            } else {
                if (i2 != 3) {
                    throw new NoWhenBranchMatchedException();
                }
                startReceiveModeTimer(i);
                this.isReceiveOnlyClickable.setValue(false);
                this.isWorkReceiveModeFunction.setValue(true);
                this.rcvBtnStatus = RcvButtonStatus.RCV_BUTTON_REMAINING_TIME;
            }
            this.rcvBtnStatus = rcvButtonStatus;
        } else if (rcvButtonStatus == RcvButtonStatus.RCV_BUTTON_REMAINING_TIME && this.rcvBtnRemainingTime != i) {
            startReceiveModeTimer(i);
        }
        MutableLiveData<Boolean> mutableLiveData = this.isReceiveBtnVisible;
        Boolean value = this.isWorkReceiveModeFunction.getValue();
        Intrinsics.checkNotNull(value);
        mutableLiveData.setValue(Boolean.valueOf(value.booleanValue() || !Intrinsics.areEqual(laserTpMode, "Receive")));
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    public final void updateMuteStatus(String muteType, Context context) {
        Intrinsics.checkNotNullParameter(muteType, "muteType");
        Intrinsics.checkNotNullParameter(context, "context");
        Log.d("sdSAFDfd", muteType);
        CustomLog.INSTANCE.writeFile("====>> " + muteType, context);
        switch (muteType.hashCode()) {
            case ConstraintLayout.LayoutParams.Table.LAYOUT_EDITOR_ABSOLUTEX /* 49 */:
                if (muteType.equals("1")) {
                    this.isMute.setValue(true);
                    this.isMuteEnable.setValue(true);
                    this.labelMuteMem.setValue(true);
                    this.isGrayOut.setValue(false);
                    this.isMuteStatusEnable.setValue(false);
                    this.isMuteClickable.setValue(true);
                    this.isKBlockMute.setValue(false);
                    return;
                }
                break;
            case 50:
                if (muteType.equals(ExifInterface.GPS_MEASUREMENT_2D)) {
                    this.isMute.setValue(false);
                    this.isMuteEnable.setValue(true);
                    this.labelMuteMem.setValue(true);
                    this.isGrayOut.setValue(false);
                    this.isMuteStatusEnable.setValue(true);
                    this.isMuteClickable.setValue(true);
                    this.isKBlockMute.setValue(false);
                    return;
                }
                break;
            case ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_TAG /* 51 */:
                if (muteType.equals(ExifInterface.GPS_MEASUREMENT_3D)) {
                    this.isMute.setValue(true);
                    this.isMuteEnable.setValue(false);
                    this.labelMuteMem.setValue(false);
                    this.isGrayOut.setValue(true);
                    this.isMuteStatusEnable.setValue(true);
                    this.isMuteClickable.setValue(false);
                    this.isKBlockMute.setValue(false);
                    return;
                }
                break;
            case ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_BASELINE_TO_TOP_OF /* 52 */:
                if (muteType.equals("4")) {
                    this.isMute.setValue(true);
                    this.isMuteEnable.setValue(false);
                    this.labelMuteMem.setValue(false);
                    this.isGrayOut.setValue(true);
                    this.isMuteStatusEnable.setValue(true);
                    this.isMuteClickable.setValue(false);
                    this.isKBlockMute.setValue(false);
                    return;
                }
                break;
            case ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_BASELINE_TO_BOTTOM_OF /* 53 */:
                if (muteType.equals("5")) {
                    this.isMute.setValue(true);
                    this.isMuteEnable.setValue(false);
                    this.labelMuteMem.setValue(true);
                    this.isGrayOut.setValue(false);
                    this.isMuteStatusEnable.setValue(true);
                    this.isMuteClickable.setValue(false);
                    this.isKBlockMute.setValue(true);
                    return;
                }
                break;
            case ConstraintLayout.LayoutParams.Table.LAYOUT_MARGIN_BASELINE /* 54 */:
                if (muteType.equals("6")) {
                    this.isMute.setValue(true);
                    this.isMuteEnable.setValue(false);
                    this.labelMuteMem.setValue(true);
                    this.isGrayOut.setValue(false);
                    this.isMuteStatusEnable.setValue(true);
                    this.isMuteClickable.setValue(false);
                    this.isKBlockMute.setValue(false);
                    return;
                }
                break;
        }
        this.isMute.setValue(true);
        this.isMuteEnable.setValue(false);
        this.labelMuteMem.setValue(true);
        this.isGrayOut.setValue(false);
        this.isMuteStatusEnable.setValue(true);
        this.isMuteClickable.setValue(false);
        this.isKBlockMute.setValue(false);
    }

    public final void toggleDeleteUserMarkVisibility() {
        MutableLiveData<Boolean> mutableLiveData = this._isDeleteUserMarkVisible;
        Boolean value = mutableLiveData.getValue();
        Intrinsics.checkNotNull(value);
        mutableLiveData.setValue(Boolean.valueOf(!value.booleanValue()));
    }
}
