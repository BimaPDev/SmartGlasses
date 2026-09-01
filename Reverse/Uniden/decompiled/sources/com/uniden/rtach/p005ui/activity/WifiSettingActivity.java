package com.uniden.rtach.p005ui.activity;

import android.app.Application;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.net.wifi.ScanResult;
import android.net.wifi.WifiManager;
import android.os.CountDownTimer;
import android.view.LayoutInflater;
import android.view.View;
import android.view.inputmethod.InputMethodManager;
import android.widget.ArrayAdapter;
import android.widget.Toast;
import androidx.constraintlayout.widget.ConstraintLayout;
import com.uniden.rtach.C2074R;
import com.uniden.rtach.data.model.ETCDataModel;
import com.uniden.rtach.databinding.ActivityWifiSettingBinding;
import com.uniden.rtach.helper.BaseApplication;
import com.uniden.rtach.helper.BluetoothManager;
import com.uniden.rtach.helper.Loader;
import com.uniden.rtach.helper.Utils;
import dagger.hilt.android.AndroidEntryPoint;
import java.util.ArrayList;
import java.util.List;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* JADX INFO: compiled from: WifiSettingActivity.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000_\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0004\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u000b*\u0001'\b\u0007\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\u0007¢\u0006\u0004\b\u0003\u0010\u0004J\b\u0010)\u001a\u00020*H\u0014J\b\u0010+\u001a\u00020*H\u0014J\b\u0010,\u001a\u00020*H\u0002J\b\u0010-\u001a\u00020*H\u0002J\b\u0010.\u001a\u00020*H\u0002J\b\u0010/\u001a\u00020*H\u0002J\b\u00100\u001a\u00020*H\u0014J\u0006\u00101\u001a\u00020*J\u000e\u00102\u001a\u00020\u00062\u0006\u00103\u001a\u00020\u0012J\b\u00104\u001a\u00020*H\u0014R\u000e\u0010\u0005\u001a\u00020\u0006X\u0082D¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0006X\u0082D¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0006X\u0082D¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\u0006X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\u000bX\u0082\u000e¢\u0006\u0002\n\u0000R \u0010\r\u001a\u0012\u0012\u0004\u0012\u00020\u00060\u000fj\b\u0012\u0004\u0012\u00020\u0006`\u000eX\u0082\u000e¢\u0006\u0004\n\u0002\u0010\u0010R \u0010\u0011\u001a\u0012\u0012\u0004\u0012\u00020\u00120\u000fj\b\u0012\u0004\u0012\u00020\u0012`\u000eX\u0082\u000e¢\u0006\u0004\n\u0002\u0010\u0010R\u001b\u0010\u0013\u001a\u00020\u00148BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b\u0017\u0010\u0018\u001a\u0004\b\u0015\u0010\u0016R\u001b\u0010\u0019\u001a\u00020\u001a8BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b\u001d\u0010\u0018\u001a\u0004\b\u001b\u0010\u001cR\u000e\u0010\u001e\u001a\u00020\u001fX\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010 \u001a\u00020!X\u0082.¢\u0006\u0002\n\u0000R\u001a\u0010\"\u001a\u00020\u000bX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\"\u0010#\"\u0004\b$\u0010%R\u0010\u0010&\u001a\u00020'X\u0082\u0004¢\u0006\u0004\n\u0002\u0010(¨\u00065"}, m491d2 = {"Lcom/uniden/rtach/ui/activity/WifiSettingActivity;", "Lcom/uniden/rtach/ui/base/BaseActivity;", "Lcom/uniden/rtach/databinding/ActivityWifiSettingBinding;", "<init>", "()V", "WIFI_BAND_24_GHZ", "", "WIFI_BAND_5_GHZ", "WIFI_BAND_UNKNOWN", "ssid", "isTimerRunning", "", "isCheckWifi", "ssidList", "Lkotlin/collections/ArrayList;", "Ljava/util/ArrayList;", "Ljava/util/ArrayList;", "freqList", "", "loader", "Lcom/uniden/rtach/helper/Loader;", "getLoader", "()Lcom/uniden/rtach/helper/Loader;", "loader$delegate", "Lkotlin/Lazy;", "wifiManager", "Landroid/net/wifi/WifiManager;", "getWifiManager", "()Landroid/net/wifi/WifiManager;", "wifiManager$delegate", "myApp", "Lcom/uniden/rtach/helper/BaseApplication;", "wifiStateReceiver", "Landroid/content/BroadcastReceiver;", "isSpinnerShowing", "()Z", "setSpinnerShowing", "(Z)V", "timer", "com/uniden/rtach/ui/activity/WifiSettingActivity$timer$1", "Lcom/uniden/rtach/ui/activity/WifiSettingActivity$timer$1;", "onStart", "", "initUi", "setReceiver", "fetchAvailableWiFi", "setSpinner", "showKeyboard", "setListeners", "hideKeyboard", "convertFrequencyToBand", "freq", "onPause", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
@AndroidEntryPoint
public final class WifiSettingActivity extends Hilt_WifiSettingActivity<ActivityWifiSettingBinding> {
    private final String WIFI_BAND_24_GHZ;
    private final String WIFI_BAND_5_GHZ;
    private final String WIFI_BAND_UNKNOWN;
    private ArrayList<Integer> freqList;
    private boolean isCheckWifi;
    private boolean isSpinnerShowing;
    private boolean isTimerRunning;

    /* JADX INFO: renamed from: loader$delegate, reason: from kotlin metadata */
    private final Lazy loader;
    private BaseApplication myApp;
    private String ssid;
    private ArrayList<String> ssidList;
    private final WifiSettingActivity$timer$1 timer;

    /* JADX INFO: renamed from: wifiManager$delegate, reason: from kotlin metadata */
    private final Lazy wifiManager;
    private BroadcastReceiver wifiStateReceiver;

    public final String convertFrequencyToBand(int freq) {
        if (2412 > freq || freq >= 2485) {
            return (5170 > freq || freq >= 5826) ? this.WIFI_BAND_UNKNOWN : this.WIFI_BAND_5_GHZ;
        }
        return this.WIFI_BAND_24_GHZ;
    }

    /* JADX INFO: renamed from: isSpinnerShowing, reason: from getter */
    public final boolean getIsSpinnerShowing() {
        return this.isSpinnerShowing;
    }

    public final void setSpinnerShowing(boolean z) {
        this.isSpinnerShowing = z;
    }

    /* JADX INFO: renamed from: com.uniden.rtach.ui.activity.WifiSettingActivity$1 */
    /* JADX INFO: compiled from: WifiSettingActivity.kt */
    @Metadata(m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    /* synthetic */ class C21211 extends FunctionReferenceImpl implements Function1<LayoutInflater, ActivityWifiSettingBinding> {
        public static final C21211 INSTANCE = new C21211();

        C21211() {
            super(1, ActivityWifiSettingBinding.class, "inflate", "inflate(Landroid/view/LayoutInflater;)Lcom/uniden/rtach/databinding/ActivityWifiSettingBinding;", 0);
        }

        @Override // kotlin.jvm.functions.Function1
        public final ActivityWifiSettingBinding invoke(LayoutInflater p0) {
            Intrinsics.checkNotNullParameter(p0, "p0");
            return ActivityWifiSettingBinding.inflate(p0);
        }
    }

    /* JADX WARN: Type inference failed for: r0v11, types: [com.uniden.rtach.ui.activity.WifiSettingActivity$timer$1] */
    public WifiSettingActivity() {
        super(C21211.INSTANCE);
        this.WIFI_BAND_24_GHZ = "2.4 GHz";
        this.WIFI_BAND_5_GHZ = "5 GHz";
        this.WIFI_BAND_UNKNOWN = "";
        this.ssid = "";
        this.ssidList = new ArrayList<>();
        this.freqList = new ArrayList<>();
        this.loader = LazyKt.lazy(new Function0() { // from class: com.uniden.rtach.ui.activity.WifiSettingActivity$$ExternalSyntheticLambda5
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return WifiSettingActivity.loader_delegate$lambda$0(this.f$0);
            }
        });
        this.wifiManager = LazyKt.lazy(new Function0() { // from class: com.uniden.rtach.ui.activity.WifiSettingActivity$$ExternalSyntheticLambda6
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return WifiSettingActivity.wifiManager_delegate$lambda$1(this.f$0);
            }
        });
        this.timer = new CountDownTimer() { // from class: com.uniden.rtach.ui.activity.WifiSettingActivity$timer$1
            {
                super(10000L, 1000L);
            }

            @Override // android.os.CountDownTimer
            public void onTick(long millisUntilFinished) {
                this.this$0.isTimerRunning = true;
            }

            @Override // android.os.CountDownTimer
            public void onFinish() {
                this.this$0.getLoader().dismiss();
                this.this$0.isTimerRunning = false;
            }
        };
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final Loader getLoader() {
        return (Loader) this.loader.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Loader loader_delegate$lambda$0(WifiSettingActivity this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        return new Loader(this$0, false);
    }

    private final WifiManager getWifiManager() {
        return (WifiManager) this.wifiManager.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final WifiManager wifiManager_delegate$lambda$1(WifiSettingActivity this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Object systemService = this$0.getApplicationContext().getSystemService("wifi");
        Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.net.wifi.WifiManager");
        return (WifiManager) systemService;
    }

    @Override // androidx.appcompat.app.AppCompatActivity, androidx.fragment.app.FragmentActivity, android.app.Activity
    protected void onStart() {
        super.onStart();
        BluetoothManager.INSTANCE.getInstance(getContext()).writeCharacteristic("BTreqGWAP:");
    }

    @Override // com.uniden.rtach.p005ui.base.BaseActivity
    protected void initUi() {
        Application application = getActivity().getApplication();
        Intrinsics.checkNotNull(application, "null cannot be cast to non-null type com.uniden.rtach.helper.BaseApplication");
        BaseApplication baseApplication = (BaseApplication) application;
        this.myApp = baseApplication;
        BaseApplication baseApplication2 = null;
        if (baseApplication == null) {
            Intrinsics.throwUninitializedPropertyAccessException("myApp");
            baseApplication = null;
        }
        WifiSettingActivity wifiSettingActivity = this;
        baseApplication.getConnectedWiFiSSID().observe(wifiSettingActivity, new WifiSettingActivity$sam$androidx_lifecycle_Observer$0(new Function1() { // from class: com.uniden.rtach.ui.activity.WifiSettingActivity$$ExternalSyntheticLambda0
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return WifiSettingActivity.initUi$lambda$2(this.f$0, (String) obj);
            }
        }));
        BaseApplication baseApplication3 = this.myApp;
        if (baseApplication3 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("myApp");
        } else {
            baseApplication2 = baseApplication3;
        }
        baseApplication2.getEtcDataChanged().observe(wifiSettingActivity, new WifiSettingActivity$sam$androidx_lifecycle_Observer$0(new Function1() { // from class: com.uniden.rtach.ui.activity.WifiSettingActivity$$ExternalSyntheticLambda1
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return WifiSettingActivity.initUi$lambda$3(this.f$0, (ETCDataModel) obj);
            }
        }));
        setReceiver();
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Multi-variable type inference failed */
    public static final Unit initUi$lambda$2(WifiSettingActivity this$0, String str) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Intrinsics.checkNotNull(str);
        if (str.length() > 0) {
            this$0.ssid = str;
            ((ActivityWifiSettingBinding) this$0.getBinding()).btnUpdate.setText(this$0.getResources().getString(C2074R.string.change));
            this$0.timer.start();
        } else {
            ((ActivityWifiSettingBinding) this$0.getBinding()).txtConnectedWifi.setText(this$0.getResources().getString(C2074R.string.connect_wifi_text));
            ((ActivityWifiSettingBinding) this$0.getBinding()).btnUpdate.setText(this$0.getResources().getString(C2074R.string.connect));
        }
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Multi-variable type inference failed */
    public static final Unit initUi$lambda$3(WifiSettingActivity this$0, ETCDataModel eTCDataModel) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        if (Intrinsics.areEqual(eTCDataModel.getRadarWiFiStatus(), "C")) {
            ((ActivityWifiSettingBinding) this$0.getBinding()).imgWife.setImageResource(C2074R.drawable.wifi_connected);
            if (this$0.ssid.length() > 0) {
                ((ActivityWifiSettingBinding) this$0.getBinding()).txtConnectedWifi.setText(this$0.ssid + " (connected)");
            }
            this$0.timer.cancel();
            this$0.getLoader().dismiss();
        } else {
            ((ActivityWifiSettingBinding) this$0.getBinding()).llPassword.setVisibility(0);
            ((ActivityWifiSettingBinding) this$0.getBinding()).imgWife.setImageResource(C2074R.drawable.ic_wifi_not_connect);
            if (this$0.ssid.length() > 0 && !this$0.isTimerRunning) {
                ((ActivityWifiSettingBinding) this$0.getBinding()).txtConnectedWifi.setText(this$0.ssid + " (disconnected)");
            }
        }
        return Unit.INSTANCE;
    }

    private final void setReceiver() {
        this.wifiStateReceiver = new BroadcastReceiver() { // from class: com.uniden.rtach.ui.activity.WifiSettingActivity.setReceiver.1
            @Override // android.content.BroadcastReceiver
            public void onReceive(Context context, Intent intent) {
                Intrinsics.checkNotNullParameter(context, "context");
                Intrinsics.checkNotNullParameter(intent, "intent");
                if (intent.getIntExtra("wifi_state", 4) == 3 && WifiSettingActivity.this.isCheckWifi) {
                    WifiSettingActivity.this.fetchAvailableWiFi();
                    WifiSettingActivity.this.setSpinner();
                    WifiSettingActivity.this.isCheckWifi = false;
                }
            }
        };
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void fetchAvailableWiFi() {
        List<ScanResult> scanResults = getWifiManager().getScanResults();
        Intrinsics.checkNotNullExpressionValue(scanResults, "getScanResults(...)");
        ArrayList<ScanResult> arrayList = new ArrayList();
        for (Object obj : scanResults) {
            String SSID = ((ScanResult) obj).SSID;
            Intrinsics.checkNotNullExpressionValue(SSID, "SSID");
            if (SSID.length() > 0) {
                arrayList.add(obj);
            }
        }
        this.ssidList.clear();
        this.freqList.clear();
        for (ScanResult scanResult : arrayList) {
            this.ssidList.add(scanResult.SSID);
            this.freqList.add(Integer.valueOf(scanResult.frequency));
        }
        System.out.println((Object) ("SSID List Size: " + this.ssidList.size()));
        System.out.println((Object) ("Frequency List Size: " + this.freqList.size()));
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Multi-variable type inference failed */
    public final void setSpinner() {
        ((ActivityWifiSettingBinding) getBinding()).selectedSSID.setAdapter(new ArrayAdapter(this, C2074R.layout.dropdown_menu, this.ssidList));
    }

    /* JADX WARN: Multi-variable type inference failed */
    private final void showKeyboard() {
        Object systemService = getSystemService("input_method");
        Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.view.inputmethod.InputMethodManager");
        ((InputMethodManager) systemService).showSoftInput(((ActivityWifiSettingBinding) getBinding()).selectedSSID, 1);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setListeners$lambda$6(WifiSettingActivity this$0, View view) {
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
        ((ActivityWifiSettingBinding) getBinding()).btnBack.setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.activity.WifiSettingActivity$$ExternalSyntheticLambda2
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                WifiSettingActivity.setListeners$lambda$6(this.f$0, view);
            }
        });
        ((ActivityWifiSettingBinding) getBinding()).dropdownWiFi.setEndIconOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.activity.WifiSettingActivity$$ExternalSyntheticLambda3
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                WifiSettingActivity.setListeners$lambda$8(this.f$0, view);
            }
        });
        ((ActivityWifiSettingBinding) getBinding()).btnUpdate.setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.activity.WifiSettingActivity$$ExternalSyntheticLambda4
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                WifiSettingActivity.setListeners$lambda$9(this.f$0, view);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Multi-variable type inference failed */
    public static final void setListeners$lambda$8(final WifiSettingActivity this$0, View view) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        this$0.hideKeyboard();
        if (new Utils().isWiFiOn(this$0)) {
            this$0.fetchAvailableWiFi();
            this$0.setSpinner();
            ((ActivityWifiSettingBinding) this$0.getBinding()).selectedSSID.postDelayed(new Runnable() { // from class: com.uniden.rtach.ui.activity.WifiSettingActivity$$ExternalSyntheticLambda7
                @Override // java.lang.Runnable
                public final void run() {
                    WifiSettingActivity.setListeners$lambda$8$lambda$7(this.f$0);
                }
            }, 100L);
        } else {
            this$0.isCheckWifi = true;
            Toast.makeText(this$0.getActivity(), "Please Turn On the Wifi", 0).show();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Multi-variable type inference failed */
    public static final void setListeners$lambda$8$lambda$7(WifiSettingActivity this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        if (this$0.isSpinnerShowing) {
            ((ActivityWifiSettingBinding) this$0.getBinding()).selectedSSID.dismissDropDown();
        } else {
            ((ActivityWifiSettingBinding) this$0.getBinding()).selectedSSID.showDropDown();
        }
        this$0.isSpinnerShowing = !this$0.isSpinnerShowing;
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Multi-variable type inference failed */
    public static final void setListeners$lambda$9(WifiSettingActivity this$0, View view) {
        String strConvertFrequencyToBand;
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        String string = StringsKt.trim((CharSequence) ((ActivityWifiSettingBinding) this$0.getBinding()).selectedSSID.getText().toString()).toString();
        String string2 = StringsKt.trim((CharSequence) ((ActivityWifiSettingBinding) this$0.getBinding()).edtPassword.getText().toString()).toString();
        if (string.length() > 0 && !Intrinsics.areEqual(string, "Select SSID")) {
            if (this$0.ssidList.contains(string)) {
                int iIndexOf = this$0.ssidList.indexOf(string);
                if (iIndexOf >= 0 && iIndexOf < this$0.freqList.size()) {
                    Integer num = this$0.freqList.get(iIndexOf);
                    Intrinsics.checkNotNullExpressionValue(num, "get(...)");
                    strConvertFrequencyToBand = this$0.convertFrequencyToBand(num.intValue());
                } else {
                    strConvertFrequencyToBand = this$0.WIFI_BAND_UNKNOWN;
                }
            } else {
                strConvertFrequencyToBand = this$0.WIFI_BAND_24_GHZ;
            }
            if (Intrinsics.areEqual(strConvertFrequencyToBand, this$0.WIFI_BAND_5_GHZ)) {
                Toast.makeText(this$0.getActivity(), "Please select 2.4GHz", 0).show();
                return;
            }
            ((ActivityWifiSettingBinding) this$0.getBinding()).txtConnectedWifi.setText(string + " (connecting...)");
            BluetoothManager.INSTANCE.getInstance(this$0.getContext()).writeCharacteristic("BTreqSWAP:" + string + ',' + string2);
            this$0.getLoader().show();
            return;
        }
        Toast.makeText(this$0.getActivity(), "Please select SSID", 0).show();
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final void hideKeyboard() {
        Object systemService = getSystemService("input_method");
        Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.view.inputmethod.InputMethodManager");
        ((InputMethodManager) systemService).hideSoftInputFromWindow(((ActivityWifiSettingBinding) getBinding()).selectedSSID.getWindowToken(), 0);
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
