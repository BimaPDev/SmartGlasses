package com.uniden.rtach.helper;

import android.bluetooth.BluetoothGattCharacteristic;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.SharedPreferences;
import android.location.Location;
import android.location.LocationManager;
import android.text.SpannableString;
import android.util.Log;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.core.app.ActivityCompat;
import androidx.exifinterface.media.ExifInterface;
import androidx.lifecycle.MutableLiveData;
import androidx.localbroadcastmanager.content.LocalBroadcastManager;
import com.google.android.gms.common.util.Hex;
import com.uniden.rtach.C2074R;
import com.uniden.rtach.data.model.AlertBandDataModel;
import com.uniden.rtach.data.model.CharacteristicData;
import com.uniden.rtach.data.model.ETCDataModel;
import com.uniden.rtach.data.model.MarkerAndPoiDataModel;
import com.uniden.rtach.data.model.RadarSettingsModel;
import com.uniden.rtach.data.model.SettingMenuItemModel;
import com.uniden.rtach.data.model.UpdateProgressModel;
import com.uniden.rtach.data.sharedpref.StoreUserData;
import com.uniden.rtach.helper.firmware_update.FirmwareUtils;
import com.uniden.rtach.helper.simulation.LocationDriverService;
import com.uniden.rtach.helper.simulation.UnidenLocationManager;
import dagger.hilt.android.HiltAndroidApp;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.UUID;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.enums.EnumEntries;
import kotlin.enums.EnumEntriesKt;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Charsets;
import kotlin.text.StringsKt;
import kotlinx.coroutines.BuildersKt__Builders_commonKt;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.CoroutineScopeKt;
import kotlinx.coroutines.Dispatchers;

/* JADX INFO: compiled from: BaseApplication.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000«\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\u0010\u0002\n\u0002\b\u0004\n\u0002\b\u0003\n\u0002\b\u0003\n\u0002\b\t\n\u0002\u0010\u0012\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u0005\n\u0002\b\b*\u0003KNQ\b\u0007\u0018\u0000 e2\u00020\u0001:\u0003cdeB\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\b\u0010E\u001a\u00020FH\u0016J\b\u0010G\u001a\u00020FH\u0016J\u0006\u0010H\u001a\u00020FJ\u0006\u0010I\u001a\u00020FJ\u0010\u0010S\u001a\u00020F2\u0006\u0010T\u001a\u00020\u0018H\u0002J\u0010\u0010U\u001a\u00020F2\u0006\u0010V\u001a\u00020\u0005H\u0002J\u0010\u0010W\u001a\u00020F2\u0006\u0010V\u001a\u00020\u0005H\u0002J\u0010\u0010X\u001a\u00020F2\u0006\u0010V\u001a\u00020\u0005H\u0002J\u0010\u0010Y\u001a\u00020F2\u0006\u0010V\u001a\u00020ZH\u0002J\u0010\u0010[\u001a\u00020\\2\u0006\u0010]\u001a\u00020^H\u0002J\u0010\u0010_\u001a\u00020F2\u0006\u0010V\u001a\u00020ZH\u0002J\u0010\u0010`\u001a\u00020F2\u0006\u0010a\u001a\u00020.H\u0002J\u0010\u0010b\u001a\u00020F2\u0006\u0010a\u001a\u00020.H\u0002R\u0014\u0010\u0004\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007R\u001a\u0010\b\u001a\u00020\tX\u0086.¢\u0006\u000e\n\u0000\u001a\u0004\b\n\u0010\u000b\"\u0004\b\f\u0010\rR\u000e\u0010\u000e\u001a\u00020\u000fX\u0082.¢\u0006\u0002\n\u0000R\u0017\u0010\u0010\u001a\b\u0012\u0004\u0012\u00020\u00120\u0011¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0014R\u0017\u0010\u0015\u001a\b\u0012\u0004\u0012\u00020\u00160\u0011¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0014R\u0017\u0010\u0017\u001a\b\u0012\u0004\u0012\u00020\u00180\u0011¢\u0006\b\n\u0000\u001a\u0004\b\u0019\u0010\u0014R \u0010\u001a\u001a\b\u0012\u0004\u0012\u00020\u00050\u0011X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u001b\u0010\u0014\"\u0004\b\u001c\u0010\u001dR \u0010\u001e\u001a\b\u0012\u0004\u0012\u00020\u00050\u0011X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u001f\u0010\u0014\"\u0004\b \u0010\u001dR\u0017\u0010!\u001a\b\u0012\u0004\u0012\u00020\"0\u0011¢\u0006\b\n\u0000\u001a\u0004\b#\u0010\u0014R#\u0010$\u001a\u0014\u0012\u0010\u0012\u000e\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020&0%0\u0011¢\u0006\b\n\u0000\u001a\u0004\b'\u0010\u0014R\u0017\u0010(\u001a\b\u0012\u0004\u0012\u00020\u00120\u0011¢\u0006\b\n\u0000\u001a\u0004\b)\u0010\u0014R\u0017\u0010*\u001a\b\u0012\u0004\u0012\u00020+0\u0011¢\u0006\b\n\u0000\u001a\u0004\b*\u0010\u0014R\u001d\u0010,\u001a\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u00020.0-0\u0011¢\u0006\b\n\u0000\u001a\u0004\b/\u0010\u0014R \u00100\u001a\u0012\u0012\u0004\u0012\u00020.02j\b\u0012\u0004\u0012\u00020.`1X\u0082\u000e¢\u0006\u0004\n\u0002\u00103R\u0014\u00104\u001a\b\u0012\u0004\u0012\u0002050\u0011X\u0082\u0004¢\u0006\u0002\n\u0000R#\u00106\u001a\u0012\u0012\u0004\u0012\u00020\u000502j\b\u0012\u0004\u0012\u00020\u0005`1¢\u0006\n\n\u0002\u00103\u001a\u0004\b7\u00108R\u001a\u00109\u001a\u00020:X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b;\u0010<\"\u0004\b=\u0010>R\u001a\u0010?\u001a\u00020:X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b@\u0010<\"\u0004\bA\u0010>R\u001a\u0010B\u001a\u00020:X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bC\u0010<\"\u0004\bD\u0010>R\u0010\u0010J\u001a\u00020KX\u0082\u0004¢\u0006\u0004\n\u0002\u0010LR\u0010\u0010M\u001a\u00020NX\u0082\u0004¢\u0006\u0004\n\u0002\u0010OR\u0010\u0010P\u001a\u00020QX\u0082\u0004¢\u0006\u0004\n\u0002\u0010R¨\u0006f"}, m491d2 = {"Lcom/uniden/rtach/helper/BaseApplication;", "Landroid/app/Application;", "<init>", "()V", "TAG", "", "getTAG", "()Ljava/lang/String;", "sharedPrefs", "Lcom/uniden/rtach/data/sharedpref/StoreUserData;", "getSharedPrefs", "()Lcom/uniden/rtach/data/sharedpref/StoreUserData;", "setSharedPrefs", "(Lcom/uniden/rtach/data/sharedpref/StoreUserData;)V", "btManager", "Lcom/uniden/rtach/helper/BluetoothManager;", "firmwareUpdateProcessBT", "Landroidx/lifecycle/MutableLiveData;", "Lcom/uniden/rtach/data/model/UpdateProgressModel;", "getFirmwareUpdateProcessBT", "()Landroidx/lifecycle/MutableLiveData;", "isBTConnected", "", "bluetoothConnectionState", "Lcom/uniden/rtach/helper/BluetoothState;", "getBluetoothConnectionState", "alertCharacteristicChanged", "getAlertCharacteristicChanged", "setAlertCharacteristicChanged", "(Landroidx/lifecycle/MutableLiveData;)V", "connectedWiFiSSID", "getConnectedWiFiSSID", "setConnectedWiFiSSID", "etcDataChanged", "Lcom/uniden/rtach/data/model/ETCDataModel;", "getEtcDataChanged", "poiDataChanged", "Ljava/util/HashMap;", "Lcom/uniden/rtach/data/model/MarkerAndPoiDataModel;", "getPoiDataChanged", "firmwareUpdateProcess", "getFirmwareUpdateProcess", "isWriteSuccess", "Lcom/uniden/rtach/helper/BaseApplication$Ack;", "settingList", "", "Lcom/uniden/rtach/data/model/RadarSettingsModel;", "getSettingList", "settingListTemp", "Lkotlin/collections/ArrayList;", "Ljava/util/ArrayList;", "Ljava/util/ArrayList;", "_radarSettings", "Lcom/uniden/rtach/data/model/SettingMenuItemModel;", "settingCategories", "getSettingCategories", "()Ljava/util/ArrayList;", "laserTpOnOff", "Lcom/uniden/rtach/helper/BaseApplication$LaserTpOnOff;", "getLaserTpOnOff", "()Lcom/uniden/rtach/helper/BaseApplication$LaserTpOnOff;", "setLaserTpOnOff", "(Lcom/uniden/rtach/helper/BaseApplication$LaserTpOnOff;)V", "laserTpAOnOff", "getLaserTpAOnOff", "setLaserTpAOnOff", "laserTpBOnOff", "getLaserTpBOnOff", "setLaserTpBOnOff", "onCreate", "", "onTerminate", "registerBroadCastReceivers", "unRegisterBroadCastReceivers", "deviceBluetoothReceiver", "com/uniden/rtach/helper/BaseApplication$deviceBluetoothReceiver$1", "Lcom/uniden/rtach/helper/BaseApplication$deviceBluetoothReceiver$1;", "bluetoothConnectionReceiver", "com/uniden/rtach/helper/BaseApplication$bluetoothConnectionReceiver$1", "Lcom/uniden/rtach/helper/BaseApplication$bluetoothConnectionReceiver$1;", "bluetoothCharacteristicChangedReceiver", "com/uniden/rtach/helper/BaseApplication$bluetoothCharacteristicChangedReceiver$1", "Lcom/uniden/rtach/helper/BaseApplication$bluetoothCharacteristicChangedReceiver$1;", "updateBluetoothConnectionState", "stateConnected", "updateAlertCharacteristic", "characteristicData", "updateETCCharacteristic", "updatePoiMarkerCharacteristic", "updateSettingsCharacteristic", "", "convertUnsignedIntFromByte", "", "b", "", "saveSettingInLocal", "setSettingsToLocal", "d", "setSettingsToLocalWhen0xFF", "Ack", "LaserTpOnOff", "Companion", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
@HiltAndroidApp
public final class BaseApplication extends Hilt_BaseApplication {
    private static Context context;
    private static Location lastLocation;
    private BluetoothManager btManager;
    public StoreUserData sharedPrefs;

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private static final BroadcastReceiver gpsLocationUpdateReceiver = new BroadcastReceiver() { // from class: com.uniden.rtach.helper.BaseApplication$Companion$gpsLocationUpdateReceiver$1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context2, Intent intent) {
            Intrinsics.checkNotNullParameter(context2, "context");
            Intrinsics.checkNotNullParameter(intent, "intent");
            Location location = (Location) intent.getParcelableExtra(Constant.GPS_LOCATION_EXTRA);
            if (location != null) {
                BaseApplication.INSTANCE.setLastLocation(location);
            }
        }
    };
    private final String TAG = "BaseApplication";
    private final MutableLiveData<UpdateProgressModel> firmwareUpdateProcessBT = new MutableLiveData<>();
    private final MutableLiveData<Boolean> isBTConnected = new MutableLiveData<>();
    private final MutableLiveData<BluetoothState> bluetoothConnectionState = new MutableLiveData<>();
    private MutableLiveData<String> alertCharacteristicChanged = new MutableLiveData<>();
    private MutableLiveData<String> connectedWiFiSSID = new MutableLiveData<>();
    private final MutableLiveData<ETCDataModel> etcDataChanged = new MutableLiveData<>();
    private final MutableLiveData<HashMap<String, MarkerAndPoiDataModel>> poiDataChanged = new MutableLiveData<>();
    private final MutableLiveData<UpdateProgressModel> firmwareUpdateProcess = new MutableLiveData<>();
    private final MutableLiveData<Ack> isWriteSuccess = new MutableLiveData<>();
    private final MutableLiveData<List<RadarSettingsModel>> settingList = new MutableLiveData<>();
    private ArrayList<RadarSettingsModel> settingListTemp = new ArrayList<>();
    private final MutableLiveData<SettingMenuItemModel> _radarSettings = new MutableLiveData<>();
    private final ArrayList<String> settingCategories = new ArrayList<>();
    private LaserTpOnOff laserTpOnOff = LaserTpOnOff.NOT_CONNECTED;
    private LaserTpOnOff laserTpAOnOff = LaserTpOnOff.NOT_CONNECTED;
    private LaserTpOnOff laserTpBOnOff = LaserTpOnOff.NOT_CONNECTED;
    private final BaseApplication$deviceBluetoothReceiver$1 deviceBluetoothReceiver = new BroadcastReceiver() { // from class: com.uniden.rtach.helper.BaseApplication$deviceBluetoothReceiver$1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context2, Intent intent) {
            Intrinsics.checkNotNullParameter(context2, "context");
            Intrinsics.checkNotNullParameter(intent, "intent");
            if (Intrinsics.areEqual("android.bluetooth.adapter.action.STATE_CHANGED", intent.getAction())) {
                if (intent.getIntExtra("android.bluetooth.adapter.extra.STATE", -1) == 12) {
                    CustomLog.INSTANCE.writeFile("Bluetooth State :-  BluetoothState.STATE_SWITCH_ON", context2);
                    this.this$0.updateBluetoothConnectionState(BluetoothState.STATE_SWITCH_ON);
                    return;
                }
                if (intent.getIntExtra("android.bluetooth.adapter.extra.STATE", -1) == 10) {
                    CustomLog.INSTANCE.writeFile("Bluetooth State :-  BluetoothState.STATE_SWITCH_OFF", context2);
                    BluetoothManager bluetoothManager = this.this$0.btManager;
                    if (bluetoothManager == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("btManager");
                        bluetoothManager = null;
                    }
                    bluetoothManager.disconnect();
                    this.this$0.updateBluetoothConnectionState(BluetoothState.STATE_SWITCH_OFF);
                    this.this$0.isBTConnected().postValue(false);
                    this.this$0.getSettingList().postValue(CollectionsKt.emptyList());
                }
            }
        }
    };
    private final BaseApplication$bluetoothConnectionReceiver$1 bluetoothConnectionReceiver = new BroadcastReceiver() { // from class: com.uniden.rtach.helper.BaseApplication$bluetoothConnectionReceiver$1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context2, Intent intent) {
            if (context2 != null) {
                CustomLog.INSTANCE.writeFile(this.this$0.getTAG() + " : bluetoothConnectionReceiver action  " + (intent != null ? intent.getAction() : null), context2);
            }
            if (Intrinsics.areEqual(intent != null ? intent.getAction() : null, MyBroadcaster.BLUETOOTH_CONNECTION_STATE_BROADCAST)) {
                String stringExtra = intent.getStringExtra(MyBroadcaster.DATA_KEY);
                if (context2 != null) {
                    CustomLog.INSTANCE.writeFile(this.this$0.getTAG() + " : bluetoothConnectionReceiver action data " + stringExtra, context2);
                }
                if (StringsKt.equals(stringExtra, "STATE_CONNECTED", true)) {
                    this.this$0.getSharedPrefs().setBluetoothConnected(true);
                    this.this$0.getSharedPrefs().setBTConnecting(false);
                    this.this$0.isBTConnected().postValue(true);
                    this.this$0.updateBluetoothConnectionState(BluetoothState.STATE_CONNECTED);
                    return;
                }
                if (StringsKt.equals(stringExtra, "STATE_CONNECTING", true)) {
                    this.this$0.getSharedPrefs().setBTConnecting(true);
                    this.this$0.updateBluetoothConnectionState(BluetoothState.STATE_CONNECTING);
                    return;
                }
                if (StringsKt.equals(stringExtra, "STATE_DISCONNECTING", true)) {
                    this.this$0.getSharedPrefs().setBTConnecting(false);
                    this.this$0.isBTConnected().postValue(false);
                    this.this$0.updateBluetoothConnectionState(BluetoothState.STATE_DISCONNECTING);
                } else if (StringsKt.equals(stringExtra, "STATE_DISCONNECTED", true)) {
                    CustomLog customLog = CustomLog.INSTANCE;
                    Context applicationContext = this.this$0.getApplicationContext();
                    Intrinsics.checkNotNullExpressionValue(applicationContext, "getApplicationContext(...)");
                    customLog.writeFile("Bluetooth DisConnected and Searching for AutoConnect", applicationContext);
                    this.this$0.getSharedPrefs().setBluetoothConnected(false);
                    this.this$0.getSharedPrefs().setBTConnecting(false);
                    this.this$0.isBTConnected().postValue(false);
                    this.this$0.getSettingList().postValue(CollectionsKt.emptyList());
                    intent.removeExtra(MyBroadcaster.DATA_KEY);
                    this.this$0.updateBluetoothConnectionState(BluetoothState.STATE_DISCONNECTED);
                }
            }
        }
    };
    private final BaseApplication$bluetoothCharacteristicChangedReceiver$1 bluetoothCharacteristicChangedReceiver = new BroadcastReceiver() { // from class: com.uniden.rtach.helper.BaseApplication$bluetoothCharacteristicChangedReceiver$1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context2, Intent intent) {
            if (Intrinsics.areEqual(intent != null ? intent.getAction() : null, MyBroadcaster.BLUETOOTH_CHARACTERISTIC_CHANGED)) {
                CharacteristicData characteristicData = (CharacteristicData) intent.getParcelableExtra(MyBroadcaster.DATA_KEY);
                BluetoothGattCharacteristic bluetoothGattCharacteristic = characteristicData != null ? characteristicData.getBluetoothGattCharacteristic() : null;
                byte[] byteArrayData = characteristicData != null ? characteristicData.getByteArrayData() : null;
                String strValueOf = String.valueOf(byteArrayData != null ? new String(byteArrayData, 0, byteArrayData.length, Charsets.UTF_8) : null);
                if (Intrinsics.areEqual(bluetoothGattCharacteristic != null ? bluetoothGattCharacteristic.getUuid() : null, UUID.fromString(Constant.INSTANCE.getALERT_CHARACTERISTIC_UUID())) && strValueOf.length() > 0 && !Intrinsics.areEqual(strValueOf, "0&0&0&0")) {
                    this.this$0.updateAlertCharacteristic(strValueOf);
                    Context applicationContext = this.this$0.getApplicationContext();
                    Intrinsics.checkNotNullExpressionValue(applicationContext, "getApplicationContext(...)");
                    CustomLog.INSTANCE.writeFile("AlertData:- " + strValueOf, applicationContext);
                    return;
                }
                if (Intrinsics.areEqual(bluetoothGattCharacteristic != null ? bluetoothGattCharacteristic.getUuid() : null, UUID.fromString(Constant.INSTANCE.getSETTINGS_CHARACTERISTIC_UUID_1())) && strValueOf.length() > 0 && !Intrinsics.areEqual(strValueOf, "0&0&0&0")) {
                    if (this.this$0.getSharedPrefs().isFirmWareUpdating()) {
                        return;
                    }
                    if (byteArrayData != null) {
                        this.this$0.updateSettingsCharacteristic(byteArrayData);
                        return;
                    }
                    BaseApplication baseApplication = this.this$0;
                    Log.d("TAG_SETTINGS", "SettingData:- No Settings Found (null value).");
                    CustomLog customLog = CustomLog.INSTANCE;
                    Context applicationContext2 = baseApplication.getApplicationContext();
                    Intrinsics.checkNotNullExpressionValue(applicationContext2, "getApplicationContext(...)");
                    customLog.writeFile("SettingData:- No Settings Found (null value).", applicationContext2);
                    return;
                }
                if (Intrinsics.areEqual(bluetoothGattCharacteristic != null ? bluetoothGattCharacteristic.getUuid() : null, UUID.fromString(Constant.INSTANCE.getETC_DATA_CHARACTERISTIC_UUID())) && strValueOf.length() > 0 && !Intrinsics.areEqual(strValueOf, "0&0&0&0")) {
                    if (this.this$0.getSharedPrefs().isFirmWareUpdating()) {
                        return;
                    }
                    this.this$0.updateETCCharacteristic(strValueOf);
                    Log.e("Auto Brightness Sett", strValueOf);
                    return;
                }
                if (Intrinsics.areEqual(bluetoothGattCharacteristic != null ? bluetoothGattCharacteristic.getUuid() : null, UUID.fromString(Constant.INSTANCE.getSETTINGS_CHARACTERISTIC_UUID_3()))) {
                    if (byteArrayData != null) {
                        BaseApplication baseApplication2 = this.this$0;
                        String strBytesToStringUppercase = Hex.bytesToStringUppercase(byteArrayData);
                        Intrinsics.checkNotNullExpressionValue(strBytesToStringUppercase, "bytesToStringUppercase(...)");
                        baseApplication2.updatePoiMarkerCharacteristic(strBytesToStringUppercase);
                        return;
                    }
                    return;
                }
                if (Intrinsics.areEqual(bluetoothGattCharacteristic != null ? bluetoothGattCharacteristic.getUuid() : null, UUID.fromString(Constant.INSTANCE.getREAD_SOFTWEAR_VERSION())) && strValueOf.length() > 0 && !Intrinsics.areEqual(strValueOf, "0&0&0&0")) {
                    this.this$0.getSharedPrefs().setCurrentFirmwareVersion(strValueOf);
                    Log.d("TAG_Latest_Version", "current Version: " + strValueOf);
                    FirmwareUtils firmwareUtils = FirmwareUtils.INSTANCE;
                    Context applicationContext3 = this.this$0.getApplicationContext();
                    Intrinsics.checkNotNullExpressionValue(applicationContext3, "getApplicationContext(...)");
                    Utils utils = new Utils();
                    Context applicationContext4 = this.this$0.getApplicationContext();
                    Intrinsics.checkNotNullExpressionValue(applicationContext4, "getApplicationContext(...)");
                    firmwareUtils.readLatestFirmwareVersions(applicationContext3, utils.getFirmwareUpdateURL(applicationContext4));
                    return;
                }
                if (Intrinsics.areEqual(bluetoothGattCharacteristic != null ? bluetoothGattCharacteristic.getUuid() : null, UUID.fromString(Constant.INSTANCE.getREAD_COMMAND_CHARACTERISTIC_UUID()))) {
                    String str = strValueOf;
                    if (str.length() > 0) {
                        Log.d("TAG_BASE_APPLICATION", "Firmware update read Data : " + strValueOf);
                        if (StringsKt.contains$default((CharSequence) str, (CharSequence) "RDrptWIAP:", false, 2, (Object) null)) {
                            String string = StringsKt.trim((CharSequence) StringsKt.substringAfter$default(strValueOf, "RDrptWIAP:", (String) null, 2, (Object) null)).toString();
                            this.this$0.getConnectedWiFiSSID().postValue(string);
                            this.this$0.getSharedPrefs().setConnectedWiFiSSID(string);
                        } else if (StringsKt.contains$default((CharSequence) str, (CharSequence) "RDrespNAK", false, 2, (Object) null)) {
                            this.this$0.getFirmwareUpdateProcess().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_DOWNLOAD_FAIL, "", new Utils().getErrorMessageWiFiUpdate(StringsKt.trim((CharSequence) StringsKt.substringAfter$default(strValueOf, "RDrespNAK:", (String) null, 2, (Object) null)).toString())));
                            this.this$0.isWriteSuccess().postValue(BaseApplication.Ack.NACK);
                        } else if (StringsKt.contains$default((CharSequence) str, (CharSequence) "RDrespACK", false, 2, (Object) null)) {
                            this.this$0.isWriteSuccess().postValue(BaseApplication.Ack.ACK);
                            this.this$0.getFirmwareUpdateProcess().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_DOWNLOAD_START, "", ""));
                        } else if (StringsKt.contains$default((CharSequence) str, (CharSequence) "RDrptDSTS:", false, 2, (Object) null)) {
                            this.this$0.getFirmwareUpdateProcess().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_DOWNLOADING, StringsKt.trim((CharSequence) StringsKt.substringAfter$default(strValueOf, "RDrptDSTS:", (String) null, 2, (Object) null)).toString(), ""));
                        } else if (StringsKt.contains$default((CharSequence) str, (CharSequence) "RDrptDEND:1", false, 2, (Object) null)) {
                            this.this$0.getFirmwareUpdateProcess().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_DOWNLOAD_COMPLETE, "", ""));
                        } else if (StringsKt.contains$default((CharSequence) str, (CharSequence) "RDrptDEND:0", false, 2, (Object) null)) {
                            this.this$0.getFirmwareUpdateProcess().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_DOWNLOAD_FAIL, "", ""));
                        } else if (StringsKt.contains$default((CharSequence) str, (CharSequence) "RDrptWSTS:", false, 2, (Object) null)) {
                            List listSplit$default = StringsKt.split$default((CharSequence) StringsKt.trim((CharSequence) StringsKt.substringAfter$default(strValueOf, "RDrptWSTS:", (String) null, 2, (Object) null)).toString(), new String[]{","}, false, 0, 6, (Object) null);
                            UpdateProgressModel updateProgressModel = new UpdateProgressModel(FIrmWareUpdateProcess.FILE_UPDATE_START, String.valueOf(listSplit$default.get(1)), String.valueOf(listSplit$default.get(0)));
                            this.this$0.getFirmwareUpdateProcess().postValue(updateProgressModel);
                            this.this$0.getFirmwareUpdateProcessBT().postValue(updateProgressModel);
                        } else if (StringsKt.contains$default((CharSequence) str, (CharSequence) "RDrptWEND:1", false, 2, (Object) null)) {
                            UpdateProgressModel updateProgressModel2 = new UpdateProgressModel(FIrmWareUpdateProcess.FILE_UPDATE_COMPLETE, "", "");
                            this.this$0.getFirmwareUpdateProcess().postValue(updateProgressModel2);
                            this.this$0.getFirmwareUpdateProcessBT().postValue(updateProgressModel2);
                        } else if (StringsKt.contains$default((CharSequence) str, (CharSequence) "RDrptWEND:0", false, 2, (Object) null)) {
                            UpdateProgressModel updateProgressModel3 = new UpdateProgressModel(FIrmWareUpdateProcess.FILE_UPDATE_FAIL, "", "");
                            this.this$0.getFirmwareUpdateProcess().postValue(updateProgressModel3);
                            this.this$0.getFirmwareUpdateProcessBT().postValue(updateProgressModel3);
                            Log.d("TAG_FW", " FILE_UPDATE_FAIL: " + strValueOf + " || " + updateProgressModel3);
                        }
                        Log.d("TAG_RESPONSE", "response : " + strValueOf);
                        CustomLog.INSTANCE.writeFile("response : " + strValueOf, this.this$0);
                        return;
                    }
                }
                Log.d("TAG_OTHER_DATA", "data: " + strValueOf);
            }
        }
    };

    /* JADX INFO: compiled from: BaseApplication.kt */
    @Metadata(m490d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\u0006\b\u0086\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003j\u0002\b\u0004j\u0002\b\u0005j\u0002\b\u0006¨\u0006\u0007"}, m491d2 = {"Lcom/uniden/rtach/helper/BaseApplication$Ack;", "", "<init>", "(Ljava/lang/String;I)V", "WAIT", "ACK", "NACK", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    public enum Ack {
        WAIT,
        ACK,
        NACK;

        private static final /* synthetic */ EnumEntries $ENTRIES = EnumEntriesKt.enumEntries(values());

        public static EnumEntries<Ack> getEntries() {
            return $ENTRIES;
        }
    }

    /* JADX INFO: compiled from: BaseApplication.kt */
    @Metadata(m490d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\u0006\b\u0086\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003j\u0002\b\u0004j\u0002\b\u0005j\u0002\b\u0006¨\u0006\u0007"}, m491d2 = {"Lcom/uniden/rtach/helper/BaseApplication$LaserTpOnOff;", "", "<init>", "(Ljava/lang/String;I)V", "ON", "OFF", "NOT_CONNECTED", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    public enum LaserTpOnOff {
        ON,
        OFF,
        NOT_CONNECTED;

        private static final /* synthetic */ EnumEntries $ENTRIES = EnumEntriesKt.enumEntries(values());

        public static EnumEntries<LaserTpOnOff> getEntries() {
            return $ENTRIES;
        }
    }

    private final int convertUnsignedIntFromByte(byte b) {
        return b < 0 ? b + 256 : b;
    }

    public final MutableLiveData<String> getAlertCharacteristicChanged() {
        return this.alertCharacteristicChanged;
    }

    public final MutableLiveData<BluetoothState> getBluetoothConnectionState() {
        return this.bluetoothConnectionState;
    }

    public final MutableLiveData<String> getConnectedWiFiSSID() {
        return this.connectedWiFiSSID;
    }

    public final MutableLiveData<ETCDataModel> getEtcDataChanged() {
        return this.etcDataChanged;
    }

    public final MutableLiveData<UpdateProgressModel> getFirmwareUpdateProcess() {
        return this.firmwareUpdateProcess;
    }

    public final MutableLiveData<UpdateProgressModel> getFirmwareUpdateProcessBT() {
        return this.firmwareUpdateProcessBT;
    }

    public final LaserTpOnOff getLaserTpAOnOff() {
        return this.laserTpAOnOff;
    }

    public final LaserTpOnOff getLaserTpBOnOff() {
        return this.laserTpBOnOff;
    }

    public final LaserTpOnOff getLaserTpOnOff() {
        return this.laserTpOnOff;
    }

    public final MutableLiveData<HashMap<String, MarkerAndPoiDataModel>> getPoiDataChanged() {
        return this.poiDataChanged;
    }

    public final ArrayList<String> getSettingCategories() {
        return this.settingCategories;
    }

    public final MutableLiveData<List<RadarSettingsModel>> getSettingList() {
        return this.settingList;
    }

    public final String getTAG() {
        return this.TAG;
    }

    public final MutableLiveData<Boolean> isBTConnected() {
        return this.isBTConnected;
    }

    public final MutableLiveData<Ack> isWriteSuccess() {
        return this.isWriteSuccess;
    }

    public final void setAlertCharacteristicChanged(MutableLiveData<String> mutableLiveData) {
        Intrinsics.checkNotNullParameter(mutableLiveData, "<set-?>");
        this.alertCharacteristicChanged = mutableLiveData;
    }

    public final void setConnectedWiFiSSID(MutableLiveData<String> mutableLiveData) {
        Intrinsics.checkNotNullParameter(mutableLiveData, "<set-?>");
        this.connectedWiFiSSID = mutableLiveData;
    }

    public final void setLaserTpAOnOff(LaserTpOnOff laserTpOnOff) {
        Intrinsics.checkNotNullParameter(laserTpOnOff, "<set-?>");
        this.laserTpAOnOff = laserTpOnOff;
    }

    public final void setLaserTpBOnOff(LaserTpOnOff laserTpOnOff) {
        Intrinsics.checkNotNullParameter(laserTpOnOff, "<set-?>");
        this.laserTpBOnOff = laserTpOnOff;
    }

    public final void setLaserTpOnOff(LaserTpOnOff laserTpOnOff) {
        Intrinsics.checkNotNullParameter(laserTpOnOff, "<set-?>");
        this.laserTpOnOff = laserTpOnOff;
    }

    public final void setSharedPrefs(StoreUserData storeUserData) {
        Intrinsics.checkNotNullParameter(storeUserData, "<set-?>");
        this.sharedPrefs = storeUserData;
    }

    public final StoreUserData getSharedPrefs() {
        StoreUserData storeUserData = this.sharedPrefs;
        if (storeUserData != null) {
            return storeUserData;
        }
        Intrinsics.throwUninitializedPropertyAccessException("sharedPrefs");
        return null;
    }

    @Override // com.uniden.rtach.helper.Hilt_BaseApplication, android.app.Application
    public void onCreate() {
        super.onCreate();
        BaseApplication baseApplication = this;
        context = baseApplication;
        this.alertCharacteristicChanged.setValue("0&0&0&0");
        SharedPreferences sharedPreferences = getSharedPreferences(StoreUserData.INSTANCE.getPrefName(baseApplication), 0);
        Intrinsics.checkNotNullExpressionValue(sharedPreferences, "getSharedPreferences(...)");
        setSharedPrefs(new StoreUserData(sharedPreferences));
        getSharedPrefs().setBluetoothConnected(false);
        this.btManager = BluetoothManager.INSTANCE.getInstance(this);
        registerBroadCastReceivers();
        new Intent(context, (Class<?>) LocationDriverService.class);
        UnidenLocationManager.getInstance().setupLocationSource();
    }

    @Override // android.app.Application
    public void onTerminate() {
        super.onTerminate();
        unRegisterBroadCastReceivers();
        Log.d("TAG_TERMINATE", "onTerminate: ");
        getSharedPrefs().setBluetoothConnected(false);
        this.alertCharacteristicChanged.postValue("0&0&0&0");
    }

    public final void registerBroadCastReceivers() {
        this.alertCharacteristicChanged.postValue("0&0&0&0");
        BaseApplication baseApplication = this;
        LocalBroadcastManager.getInstance(baseApplication).registerReceiver(this.bluetoothConnectionReceiver, new IntentFilter(MyBroadcaster.BLUETOOTH_CONNECTION_STATE_BROADCAST));
        LocalBroadcastManager.getInstance(baseApplication).registerReceiver(this.bluetoothCharacteristicChangedReceiver, new IntentFilter(MyBroadcaster.BLUETOOTH_CHARACTERISTIC_CHANGED));
        registerReceiver(this.deviceBluetoothReceiver, new IntentFilter("android.bluetooth.adapter.action.STATE_CHANGED"));
    }

    public final void unRegisterBroadCastReceivers() {
        BaseApplication baseApplication = this;
        LocalBroadcastManager.getInstance(baseApplication).unregisterReceiver(this.bluetoothCharacteristicChangedReceiver);
        LocalBroadcastManager.getInstance(baseApplication).unregisterReceiver(this.bluetoothConnectionReceiver);
        unregisterReceiver(this.deviceBluetoothReceiver);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void updateBluetoothConnectionState(BluetoothState stateConnected) {
        this.bluetoothConnectionState.postValue(stateConnected);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void updateAlertCharacteristic(String characteristicData) {
        Log.d("updateAlertData", "AlertData:- " + characteristicData);
        ArrayList<AlertBandDataModel> alertBandData = AlertDataConverter.INSTANCE.parseAlertBandData(characteristicData, StringsKt.contains$default((CharSequence) getSharedPrefs().getDeviceName(), (CharSequence) "R9", false, 2, (Object) null) || StringsKt.contains$default((CharSequence) getSharedPrefs().getDeviceName(), (CharSequence) "AE903i", false, 2, (Object) null));
        if (!alertBandData.isEmpty()) {
            AlertBandDataModel alertBandDataModel = alertBandData.get(0);
            int arrowColor = AlertDataConverter.INSTANCE.getArrowColor(alertBandDataModel.getAlert_type(), getSharedPrefs());
            String mute_type = alertBandDataModel.getMute_type();
            if (!Intrinsics.areEqual(mute_type, ExifInterface.GPS_MEASUREMENT_3D)) {
                Intrinsics.areEqual(mute_type, "4");
            }
            AlertDataConverter.INSTANCE.getDirection(alertBandDataModel.getDir_type(), arrowColor);
        }
        this.alertCharacteristicChanged.postValue(characteristicData);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void updateETCCharacteristic(String characteristicData) {
        ETCDataModel eTCData = AlertDataConverter.INSTANCE.parseETCData(characteristicData);
        Log.d("TAG_ETC_DATA", "ETC Data Update ===>>> " + eTCData);
        if (eTCData.getPoiType().length() > 0) {
            new SpannableString("");
            AlertDataConverter.INSTANCE.getPoiAlertIcon(eTCData.getPoiType());
            if (eTCData.getPoiDistance().length() > 0) {
                getString(Intrinsics.areEqual(getSharedPrefs().getSpeedUnit(), "mph") ? C2074R.string.feet : C2074R.string.meter);
            }
            getString(AlertDataConverter.INSTANCE.getPoiAlertTypeStr(eTCData.getPoiType()));
        }
        this.etcDataChanged.postValue(eTCData);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void updatePoiMarkerCharacteristic(String characteristicData) {
        String strSubstring;
        Log.d("TAG_POI_DATA", "characteristicData: " + characteristicData);
        if (characteristicData.length() > 0) {
            strSubstring = characteristicData.substring(0, 2);
            Intrinsics.checkNotNullExpressionValue(strSubstring, "substring(...)");
        } else {
            strSubstring = "";
        }
        if ((strSubstring.length() > 0 && Intrinsics.areEqual(characteristicData, "0000")) || Intrinsics.areEqual(strSubstring, "00") || Intrinsics.areEqual(strSubstring, "01") || Intrinsics.areEqual(strSubstring, "02") || Intrinsics.areEqual(strSubstring, "03")) {
            this.poiDataChanged.postValue(AlertDataConverter.INSTANCE.parsePoiData(characteristicData));
        }
    }

    /* JADX INFO: renamed from: com.uniden.rtach.helper.BaseApplication$updateSettingsCharacteristic$1 */
    /* JADX INFO: compiled from: BaseApplication.kt */
    @Metadata(m490d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, m491d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    @DebugMetadata(m503c = "com.uniden.rtach.helper.BaseApplication$updateSettingsCharacteristic$1", m504f = "BaseApplication.kt", m505i = {}, m506l = {}, m507m = "invokeSuspend", m508n = {}, m509s = {})
    static final class C20751 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ byte[] $characteristicData;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C20751(byte[] bArr, Continuation<? super C20751> continuation) {
            super(2, continuation);
            this.$characteristicData = bArr;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return BaseApplication.this.new C20751(this.$characteristicData, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C20751) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        /* JADX WARN: Code duplicated, block: B:138:0x0182 A[SYNTHETIC] */
        /* JADX WARN: Code duplicated, block: B:140:0x014d A[SYNTHETIC] */
        /* JADX WARN: Multi-variable type inference failed */
        /*  JADX ERROR: JadxRuntimeException in pass: IfRegionVisitor
            jadx.core.utils.exceptions.JadxRuntimeException: Can't remove SSA var: r9v12 java.lang.Object, still in use, count: 2, list:
              (r9v12 java.lang.Object) from 0x017e: PHI (r9 I:??) = (r9v9 java.lang.Object), (r9v12 java.lang.Object) binds: [B:51:0x017d, B:142:0x017e] A[DONT_GENERATE, DONT_INLINE]
              (r9v12 java.lang.Object) from 0x0174: CHECK_CAST (com.uniden.rtach.data.model.RadarSettingsModel) (r9v12 java.lang.Object)
            	at jadx.core.utils.InsnRemover.removeSsaVar(InsnRemover.java:164)
            	at jadx.core.utils.InsnRemover.unbindResult(InsnRemover.java:129)
            	at jadx.core.utils.InsnRemover.unbindInsn(InsnRemover.java:93)
            	at jadx.core.dex.visitors.regions.TernaryMod.makeTernaryInsn(TernaryMod.java:132)
            	at jadx.core.dex.visitors.regions.TernaryMod.processRegion(TernaryMod.java:67)
            	at jadx.core.dex.visitors.regions.TernaryMod.enterRegion(TernaryMod.java:50)
            	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:96)
            	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverse(DepthRegionTraversal.java:27)
            	at jadx.core.dex.visitors.regions.TernaryMod.process(TernaryMod.java:36)
            	at jadx.core.dex.visitors.regions.IfRegionVisitor.process(IfRegionVisitor.java:44)
            	at jadx.core.dex.visitors.regions.IfRegionVisitor.visit(IfRegionVisitor.java:30)
            */
        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final java.lang.Object invokeSuspend(java.lang.Object r19) {
            /*
                Method dump skipped, instruction units count: 1072
                To view this dump add '--comments-level debug' option
            */
            throw new UnsupportedOperationException("Method not decompiled: com.uniden.rtach.helper.BaseApplication.C20751.invokeSuspend(java.lang.Object):java.lang.Object");
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void updateSettingsCharacteristic(byte[] characteristicData) {
        BuildersKt__Builders_commonKt.launch$default(CoroutineScopeKt.CoroutineScope(Dispatchers.getMain()), null, null, new C20751(characteristicData, null), 3, null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void saveSettingInLocal(byte[] characteristicData) {
        String str;
        getSharedPrefs().setSettingMode(characteristicData[0] == 1 ? "Expert" : "Basic");
        StoreUserData sharedPrefs = getSharedPrefs();
        byte b = characteristicData[1];
        if (b == 0) {
            str = "Highway";
        } else if (b == 1) {
            str = "City";
        } else if (b != 2) {
            str = b != 3 ? "" : "Advanced";
        } else {
            str = "Auto";
        }
        sharedPrefs.setCityMode(str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void setSettingsToLocal(RadarSettingsModel d) {
        String str;
        try {
            String item = d.getItem();
            if (d.getConflict_radars().length() > 0 && d.getConflict_values() != null && StringsKt.split$default((CharSequence) d.getConflict_radars(), new String[]{","}, false, 0, 6, (Object) null).contains(StringsKt.substringBefore$default(getSharedPrefs().getDeviceName(), "@", (String) null, 2, (Object) null))) {
                str = d.getConflict_values().get(d.getSelected_value());
            } else {
                str = d.getValues().size() > d.getSelected_value() ? d.getValues().get(d.getSelected_value()) : "";
            }
            String str2 = str;
            if (StringsKt.equals(item, "X Arrow Color", true)) {
                getSharedPrefs().setXArrowColor(str2);
                return;
            }
            if (StringsKt.equals(item, "K Arrow Color", true)) {
                getSharedPrefs().setKArrowColor(str2);
                return;
            }
            if (StringsKt.equals(item, "MRCD Arrow Color", true)) {
                getSharedPrefs().setMrcdArrowColor(str2);
                return;
            }
            if (StringsKt.equals(item, "Gatso Arrow Color", true)) {
                getSharedPrefs().setGatsoArrowColor(str2);
                return;
            }
            if (StringsKt.equals(item, "Ka Arrow Color", true)) {
                getSharedPrefs().setKaArrowColor(str2);
                return;
            }
            if (StringsKt.equals(item, "X Band Color", true)) {
                getSharedPrefs().setXBandColor(str2);
                return;
            }
            if (StringsKt.equals(item, "K Band Color", true)) {
                getSharedPrefs().setKBandColor(str2);
                return;
            }
            if (!StringsKt.contains((CharSequence) item, (CharSequence) "MRCD Band Color", true) && !StringsKt.contains((CharSequence) item, (CharSequence) "MRCD/T Band Color", true)) {
                if (StringsKt.equals(item, "Gatso Band Color", true)) {
                    getSharedPrefs().setGatsoBandColor(str2);
                    return;
                }
                if (StringsKt.equals(item, "Ka Band Color", true)) {
                    getSharedPrefs().setKaBandColor(str2);
                    return;
                }
                if (StringsKt.equals(item, "Speed Unit", true)) {
                    getSharedPrefs().setSpeedUnit(str2);
                    return;
                }
                if (StringsKt.equals(item, "Auto Mute", true)) {
                    getSharedPrefs().setAutoMute(str2);
                    return;
                }
                if (StringsKt.equals(item, "Auto Mute Memory?", true)) {
                    getSharedPrefs().setAutoMuteMemory(str2);
                    return;
                }
                if (StringsKt.equals(item, "Mute Memory Option", true)) {
                    getSharedPrefs().setMuteMemoryOption(str2);
                    return;
                }
                if (StringsKt.equals(item, "Volume", true)) {
                    Log.d("TAG_RESPONSE", "writeCharacteristic settingName:" + item + " ==>> settingValue :   ==>> index : " + d.getRead_index());
                    getSharedPrefs().setVolume(str2);
                    return;
                }
                if (StringsKt.equals(item, "MRCD", true)) {
                    getSharedPrefs().setMrcdOn(Intrinsics.areEqual(str2, "On"));
                    return;
                }
                if (StringsKt.equals(item, "GPS", true)) {
                    getSharedPrefs().setGpsOn(Intrinsics.areEqual(str2, "On"));
                    return;
                }
                if (StringsKt.equals(item, "Laser", true)) {
                    getSharedPrefs().setLaserEnable(Intrinsics.areEqual(str2, "On"));
                    return;
                }
                if (StringsKt.equals(item, "Laser TP", true)) {
                    this.laserTpOnOff = Intrinsics.areEqual(str2, "On") ? LaserTpOnOff.ON : LaserTpOnOff.OFF;
                    return;
                }
                if (StringsKt.equals(item, "Laser TP A", true)) {
                    this.laserTpAOnOff = Intrinsics.areEqual(str2, "On") ? LaserTpOnOff.ON : LaserTpOnOff.OFF;
                    return;
                }
                if (StringsKt.equals(item, "Laser TP B", true)) {
                    this.laserTpBOnOff = Intrinsics.areEqual(str2, "On") ? LaserTpOnOff.ON : LaserTpOnOff.OFF;
                    return;
                } else if (StringsKt.equals(item, "Laser TP Mode", true)) {
                    getSharedPrefs().setLaserTpMode(StringsKt.replace$default(str2, " Mode", "", false, 4, (Object) null));
                    return;
                } else {
                    if (StringsKt.equals(item, "Power Button Rx Mode", true)) {
                        getSharedPrefs().setPowerButtonReceiveMode(str2);
                        return;
                    }
                    return;
                }
            }
            getSharedPrefs().setMrcdBandColor(str2);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void setSettingsToLocalWhen0xFF(RadarSettingsModel d) {
        try {
            String item = d.getItem();
            if (d.getConflict_radars().length() > 0 && d.getConflict_values() != null && StringsKt.split$default((CharSequence) d.getConflict_radars(), new String[]{","}, false, 0, 6, (Object) null).contains(StringsKt.substringBefore$default(getSharedPrefs().getDeviceName(), "@", (String) null, 2, (Object) null))) {
                d.getConflict_values().get(d.getSelected_value());
            } else {
                d.getValues().get(d.getSelected_value());
            }
            if (StringsKt.equals(item, "Laser", true)) {
                getSharedPrefs().setLaserEnable(false);
                return;
            }
            if (StringsKt.equals(item, "Laser TP", true)) {
                this.laserTpOnOff = LaserTpOnOff.NOT_CONNECTED;
                return;
            }
            if (StringsKt.equals(item, "Laser TP A", true)) {
                this.laserTpAOnOff = LaserTpOnOff.NOT_CONNECTED;
                return;
            }
            if (StringsKt.equals(item, "Laser TP B", true)) {
                this.laserTpBOnOff = LaserTpOnOff.NOT_CONNECTED;
            } else if (StringsKt.equals(item, "Laser TP Mode", true)) {
                getSharedPrefs().setLaserTpMode("");
            } else if (StringsKt.equals(item, "Power Button Rx Mode", true)) {
                getSharedPrefs().setPowerButtonReceiveMode("");
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    /* JADX INFO: compiled from: BaseApplication.kt */
    @Metadata(m490d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0006\u0010\u0010\u001a\u00020\u0011J\u0012\u0010\u0012\u001a\u0004\u0018\u00010\u000b2\b\u0010\u0013\u001a\u0004\u0018\u00010\u0014R\u001c\u0010\u0004\u001a\u0004\u0018\u00010\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0006\u0010\u0007\"\u0004\b\b\u0010\tR\u001c\u0010\n\u001a\u0004\u0018\u00010\u000bX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\f\u0010\r\"\u0004\b\u000e\u0010\u000fR\u0011\u0010\u0015\u001a\u00020\u0016¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u0018¨\u0006\u0019"}, m491d2 = {"Lcom/uniden/rtach/helper/BaseApplication$Companion;", "", "<init>", "()V", "context", "Landroid/content/Context;", "getContext", "()Landroid/content/Context;", "setContext", "(Landroid/content/Context;)V", "lastLocation", "Landroid/location/Location;", "getLastLocation", "()Landroid/location/Location;", "setLastLocation", "(Landroid/location/Location;)V", "isPermissionAvailable", "", "getLastKnownLocation", "mLocationManager", "Landroid/location/LocationManager;", "gpsLocationUpdateReceiver", "Landroid/content/BroadcastReceiver;", "getGpsLocationUpdateReceiver", "()Landroid/content/BroadcastReceiver;", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final Context getContext() {
            return BaseApplication.context;
        }

        public final void setContext(Context context) {
            BaseApplication.context = context;
        }

        public final Location getLastLocation() {
            return BaseApplication.lastLocation;
        }

        public final void setLastLocation(Location location) {
            BaseApplication.lastLocation = location;
        }

        public final boolean isPermissionAvailable() {
            Context context = getContext();
            Intrinsics.checkNotNull(context);
            if (ActivityCompat.checkSelfPermission(context, "android.permission.ACCESS_FINE_LOCATION") != 0) {
                return false;
            }
            Context context2 = getContext();
            Intrinsics.checkNotNull(context2);
            return ActivityCompat.checkSelfPermission(context2, "android.permission.ACCESS_COARSE_LOCATION") == 0;
        }

        public final Location getLastKnownLocation(LocationManager mLocationManager) {
            Location location = null;
            if (isPermissionAvailable()) {
                if (mLocationManager == null) {
                    return null;
                }
                List<String> providers = mLocationManager.getProviders(true);
                Intrinsics.checkNotNullExpressionValue(providers, "getProviders(...)");
                for (String str : providers) {
                    Intrinsics.checkNotNull(str);
                    Location lastKnownLocation = mLocationManager.getLastKnownLocation(str);
                    if (lastKnownLocation != null && (location == null || lastKnownLocation.getAccuracy() < location.getAccuracy())) {
                        location = lastKnownLocation;
                    }
                }
            }
            return location;
        }

        public final BroadcastReceiver getGpsLocationUpdateReceiver() {
            return BaseApplication.gpsLocationUpdateReceiver;
        }
    }
}
