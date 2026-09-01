package com.uniden.rtach.data.sharedpref;

import android.app.Activity;
import android.content.Context;
import android.content.SharedPreferences;
import androidx.constraintlayout.widget.ConstraintLayout;
import java.util.Locale;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Regex;

/* JADX INFO: compiled from: StoreUserData.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\r\n\u0002\u0010\u000e\n\u0002\bb\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\u0018\u0000 {2\u00020\u0001:\u0001{B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u000e\u0010w\u001a\u00020x2\u0006\u0010y\u001a\u00020zR\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R$\u0010\b\u001a\u00020\u00072\u0006\u0010\u0006\u001a\u00020\u00078F@FX\u0086\u000e¢\u0006\f\u001a\u0004\b\b\u0010\t\"\u0004\b\n\u0010\u000bR$\u0010\f\u001a\u00020\u00072\u0006\u0010\u0006\u001a\u00020\u00078F@FX\u0086\u000e¢\u0006\f\u001a\u0004\b\f\u0010\t\"\u0004\b\r\u0010\u000bR$\u0010\u000e\u001a\u00020\u00072\u0006\u0010\u0006\u001a\u00020\u00078F@FX\u0086\u000e¢\u0006\f\u001a\u0004\b\u000e\u0010\t\"\u0004\b\u000f\u0010\u000bR$\u0010\u0010\u001a\u00020\u00072\u0006\u0010\u0006\u001a\u00020\u00078F@FX\u0086\u000e¢\u0006\f\u001a\u0004\b\u0010\u0010\t\"\u0004\b\u0011\u0010\u000bR$\u0010\u0012\u001a\u00020\u00072\u0006\u0010\u0006\u001a\u00020\u00078F@FX\u0086\u000e¢\u0006\f\u001a\u0004\b\u0013\u0010\t\"\u0004\b\u0014\u0010\u000bR$\u0010\u0016\u001a\u00020\u00152\u0006\u0010\u0006\u001a\u00020\u00158F@FX\u0086\u000e¢\u0006\f\u001a\u0004\b\u0017\u0010\u0018\"\u0004\b\u0019\u0010\u001aR$\u0010\u001b\u001a\u00020\u00152\u0006\u0010\u0006\u001a\u00020\u00158F@FX\u0086\u000e¢\u0006\f\u001a\u0004\b\u001c\u0010\u0018\"\u0004\b\u001d\u0010\u001aR$\u0010\u001e\u001a\u00020\u00152\u0006\u0010\u0006\u001a\u00020\u00158F@FX\u0086\u000e¢\u0006\f\u001a\u0004\b\u001f\u0010\u0018\"\u0004\b \u0010\u001aR$\u0010!\u001a\u00020\u00152\u0006\u0010\u0006\u001a\u00020\u00158F@FX\u0086\u000e¢\u0006\f\u001a\u0004\b\"\u0010\u0018\"\u0004\b#\u0010\u001aR$\u0010$\u001a\u00020\u00152\u0006\u0010\u0006\u001a\u00020\u00158F@FX\u0086\u000e¢\u0006\f\u001a\u0004\b%\u0010\u0018\"\u0004\b&\u0010\u001aR$\u0010'\u001a\u00020\u00152\u0006\u0010\u0006\u001a\u00020\u00158F@FX\u0086\u000e¢\u0006\f\u001a\u0004\b(\u0010\u0018\"\u0004\b)\u0010\u001aR$\u0010*\u001a\u00020\u00072\u0006\u0010\u0006\u001a\u00020\u00078F@FX\u0086\u000e¢\u0006\f\u001a\u0004\b*\u0010\t\"\u0004\b+\u0010\u000bR$\u0010,\u001a\u00020\u00072\u0006\u0010\u0006\u001a\u00020\u00078F@FX\u0086\u000e¢\u0006\f\u001a\u0004\b,\u0010\t\"\u0004\b-\u0010\u000bR$\u0010.\u001a\u00020\u00072\u0006\u0010\u0006\u001a\u00020\u00078F@FX\u0086\u000e¢\u0006\f\u001a\u0004\b.\u0010\t\"\u0004\b/\u0010\u000bR$\u00100\u001a\u00020\u00152\u0006\u0010\u0006\u001a\u00020\u00158F@FX\u0086\u000e¢\u0006\f\u001a\u0004\b1\u0010\u0018\"\u0004\b2\u0010\u001aR$\u00103\u001a\u00020\u00152\u0006\u0010\u0006\u001a\u00020\u00158F@FX\u0086\u000e¢\u0006\f\u001a\u0004\b4\u0010\u0018\"\u0004\b5\u0010\u001aR$\u00106\u001a\u00020\u00072\u0006\u0010\u0006\u001a\u00020\u00078F@FX\u0086\u000e¢\u0006\f\u001a\u0004\b6\u0010\t\"\u0004\b7\u0010\u000bR$\u00108\u001a\u00020\u00152\u0006\u0010\u0006\u001a\u00020\u00158F@FX\u0086\u000e¢\u0006\f\u001a\u0004\b9\u0010\u0018\"\u0004\b:\u0010\u001aR$\u0010;\u001a\u00020\u00152\u0006\u0010\u0006\u001a\u00020\u00158F@FX\u0086\u000e¢\u0006\f\u001a\u0004\b<\u0010\u0018\"\u0004\b=\u0010\u001aR$\u0010>\u001a\u00020\u00152\u0006\u0010\u0006\u001a\u00020\u00158F@FX\u0086\u000e¢\u0006\f\u001a\u0004\b?\u0010\u0018\"\u0004\b@\u0010\u001aR$\u0010A\u001a\u00020\u00152\u0006\u0010\u0006\u001a\u00020\u00158F@FX\u0086\u000e¢\u0006\f\u001a\u0004\bB\u0010\u0018\"\u0004\bC\u0010\u001aR$\u0010D\u001a\u00020\u00152\u0006\u0010\u0006\u001a\u00020\u00158F@FX\u0086\u000e¢\u0006\f\u001a\u0004\bE\u0010\u0018\"\u0004\bF\u0010\u001aR$\u0010G\u001a\u00020\u00152\u0006\u0010\u0006\u001a\u00020\u00158F@FX\u0086\u000e¢\u0006\f\u001a\u0004\bH\u0010\u0018\"\u0004\bI\u0010\u001aR$\u0010J\u001a\u00020\u00152\u0006\u0010\u0006\u001a\u00020\u00158F@FX\u0086\u000e¢\u0006\f\u001a\u0004\bK\u0010\u0018\"\u0004\bL\u0010\u001aR$\u0010M\u001a\u00020\u00152\u0006\u0010\u0006\u001a\u00020\u00158F@FX\u0086\u000e¢\u0006\f\u001a\u0004\bN\u0010\u0018\"\u0004\bO\u0010\u001aR$\u0010P\u001a\u00020\u00152\u0006\u0010\u0006\u001a\u00020\u00158F@FX\u0086\u000e¢\u0006\f\u001a\u0004\bQ\u0010\u0018\"\u0004\bR\u0010\u001aR$\u0010S\u001a\u00020\u00152\u0006\u0010\u0006\u001a\u00020\u00158F@FX\u0086\u000e¢\u0006\f\u001a\u0004\bT\u0010\u0018\"\u0004\bU\u0010\u001aR$\u0010V\u001a\u00020\u00152\u0006\u0010\u0006\u001a\u00020\u00158F@FX\u0086\u000e¢\u0006\f\u001a\u0004\bW\u0010\u0018\"\u0004\bX\u0010\u001aR$\u0010Y\u001a\u00020\u00152\u0006\u0010\u0006\u001a\u00020\u00158F@FX\u0086\u000e¢\u0006\f\u001a\u0004\bZ\u0010\u0018\"\u0004\b[\u0010\u001aR$\u0010\\\u001a\u00020\u00152\u0006\u0010\u0006\u001a\u00020\u00158F@FX\u0086\u000e¢\u0006\f\u001a\u0004\b]\u0010\u0018\"\u0004\b^\u0010\u001aR$\u0010_\u001a\u00020\u00152\u0006\u0010\u0006\u001a\u00020\u00158F@FX\u0086\u000e¢\u0006\f\u001a\u0004\b`\u0010\u0018\"\u0004\ba\u0010\u001aR$\u0010b\u001a\u00020\u00072\u0006\u0010\u0006\u001a\u00020\u00078F@FX\u0086\u000e¢\u0006\f\u001a\u0004\bb\u0010\t\"\u0004\bc\u0010\u000bR$\u0010d\u001a\u00020\u00072\u0006\u0010\u0006\u001a\u00020\u00078F@FX\u0086\u000e¢\u0006\f\u001a\u0004\bd\u0010\t\"\u0004\be\u0010\u000bR$\u0010f\u001a\u00020\u00072\u0006\u0010\u0006\u001a\u00020\u00078F@FX\u0086\u000e¢\u0006\f\u001a\u0004\bf\u0010\t\"\u0004\bg\u0010\u000bR$\u0010h\u001a\u00020\u00072\u0006\u0010\u0006\u001a\u00020\u00078F@FX\u0086\u000e¢\u0006\f\u001a\u0004\bh\u0010\t\"\u0004\bi\u0010\u000bR$\u0010j\u001a\u00020\u00152\u0006\u0010\u0006\u001a\u00020\u00158F@FX\u0086\u000e¢\u0006\f\u001a\u0004\bk\u0010\u0018\"\u0004\bl\u0010\u001aR$\u0010m\u001a\u00020\u00072\u0006\u0010\u0006\u001a\u00020\u00078F@FX\u0086\u000e¢\u0006\f\u001a\u0004\bm\u0010\t\"\u0004\bn\u0010\u000bR$\u0010o\u001a\u00020\u00072\u0006\u0010\u0006\u001a\u00020\u00078F@FX\u0086\u000e¢\u0006\f\u001a\u0004\bo\u0010\t\"\u0004\bp\u0010\u000bR$\u0010q\u001a\u00020\u00152\u0006\u0010\u0006\u001a\u00020\u00158F@FX\u0086\u000e¢\u0006\f\u001a\u0004\br\u0010\u0018\"\u0004\bs\u0010\u001aR$\u0010t\u001a\u00020\u00152\u0006\u0010\u0006\u001a\u00020\u00158F@FX\u0086\u000e¢\u0006\f\u001a\u0004\bu\u0010\u0018\"\u0004\bv\u0010\u001a¨\u0006|"}, m491d2 = {"Lcom/uniden/rtach/data/sharedpref/StoreUserData;", "Lcom/uniden/rtach/data/sharedpref/BaseSharedPrefs;", "sharedPreferences", "Landroid/content/SharedPreferences;", "<init>", "(Landroid/content/SharedPreferences;)V", "value", "", "isScanRunning", "()Z", "setScanRunning", "(Z)V", "isBluetoothConnected", "setBluetoothConnected", "isBTConnecting", "setBTConnecting", "isWiFiModel", "setWiFiModel", "isfileExist", "getIsfileExist", "setIsfileExist", "", "deviceName", "getDeviceName", "()Ljava/lang/String;", "setDeviceName", "(Ljava/lang/String;)V", "testjsonFirmwareURL", "getTestjsonFirmwareURL", "setTestjsonFirmwareURL", "currentFirmwareVersion", "getCurrentFirmwareVersion", "setCurrentFirmwareVersion", "latestFirmwareVersion", "getLatestFirmwareVersion", "setLatestFirmwareVersion", "latestFirmwareUrl", "getLatestFirmwareUrl", "setLatestFirmwareUrl", "connectedWiFiSSID", "getConnectedWiFiSSID", "setConnectedWiFiSSID", "isRecentlyWriteSetting", "setRecentlyWriteSetting", "isFirmWareUpdating", "setFirmWareUpdating", "isUpdateAvailable", "setUpdateAvailable", "settingMode", "getSettingMode", "setSettingMode", "cityMode", "getCityMode", "setCityMode", "isAutoConnectAvailable", "setAutoConnectAvailable", "xArrowColor", "getXArrowColor", "setXArrowColor", "kArrowColor", "getKArrowColor", "setKArrowColor", "mrcdArrowColor", "getMrcdArrowColor", "setMrcdArrowColor", "gatsoArrowColor", "getGatsoArrowColor", "setGatsoArrowColor", "kaArrowColor", "getKaArrowColor", "setKaArrowColor", "xBandColor", "getXBandColor", "setXBandColor", "kBandColor", "getKBandColor", "setKBandColor", "mrcdBandColor", "getMrcdBandColor", "setMrcdBandColor", "gatsoBandColor", "getGatsoBandColor", "setGatsoBandColor", "kaBandColor", "getKaBandColor", "setKaBandColor", "speedUnit", "getSpeedUnit", "setSpeedUnit", "autoMute", "getAutoMute", "setAutoMute", "autoMuteMemory", "getAutoMuteMemory", "setAutoMuteMemory", "muteMemoryOption", "getMuteMemoryOption", "setMuteMemoryOption", "isGpsOn", "setGpsOn", "isMapLight", "setMapLight", "isMrcdOn", "setMrcdOn", "isFwDownloadComplete", "setFwDownloadComplete", "volume", "getVolume", "setVolume", "isFwFlashing", "setFwFlashing", "isLaserEnable", "setLaserEnable", "laserTpMode", "getLaserTpMode", "setLaserTpMode", "powerButtonReceiveMode", "getPowerButtonReceiveMode", "setPowerButtonReceiveMode", "clearData", "", "context", "Landroid/app/Activity;", "Companion", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class StoreUserData extends BaseSharedPrefs {
    private static final String CONNECTED_WIFI_SSID = "AppPreferences_connected_wifi_ssid";
    private static final String CURRENT_FIRMWARE_VERSION = "AppPreferences_current_firmware_version";

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private static final String FIRMWARE_TEST_URL = "AppPreferences_firmware_test_url";
    private static final String IS_FILE_EXIST = "AppPreferences_isfileExist";
    private static final String IS_FIRMWARE_UPDATING = "AppPreferences_is_firmware_updating";
    private static final String IS_FW_DOWNLOADED = "AppPreferences_is_fw_downloaded";
    private static final String IS_FW_FLASHING = "AppPreferences_is_fw_flashing";
    private static final String IS_GPS_ON = "AppPreferences_is_gps_on";
    private static final String IS_LASER_ENABLE = "AppPreferences_is_laser_enable";
    private static final String IS_MRCD_ON = "AppPreferences_is_mrcd_on";
    private static final String IS_Map_Light = "AppPreferences_is_map_light";
    private static final String IS_UPDATE_AVAILABLE = "AppPreferences_is_update_available";
    private static final String IS_WIFI_MODEL = "AppPreferences_is_wifi_model";
    private static final String LATEST_FIRMWARE_URL = "AppPreferences_latest_firmware_url";
    private static final String LATEST_FIRMWARE_VERSION = "AppPreferences_latest_firmware_version";
    private static final String PREFIX = "AppPreferences_";
    private static final String PREF_AUTO_CONNECT_AVAILABLE = "AppPreferences_auto_conn_available";
    private static final String PREF_AUTO_MUTE = "AppPreferences_auto_mute";
    private static final String PREF_AUTO_MUTE_MEMORY = "AppPreferences_auto_mute_memory";
    private static final String PREF_BLUETOOTH_CONNECTED = "AppPreferences_bt_connection";
    private static final String PREF_BLUETOOTH_CONNECTING = "AppPreferences_bt_connecting";
    private static final String PREF_CITY_MODE = "AppPreferences_city_mode";
    private static final String PREF_DEVICE_NAME = "AppPreferences_device_name";
    private static final String PREF_GATSO_ARROW_COLOR = "AppPreferences_gatso_arrow_color";
    private static final String PREF_GATSO_BAND_COLOR = "AppPreferences_gatso_band_color";
    private static final String PREF_KA_ARROW_COLOR = "AppPreferences_ka_arrow_color";
    private static final String PREF_KA_BAND_COLOR = "AppPreferences_ka_band_color";
    private static final String PREF_K_ARROW_COLOR = "AppPreferences_k_arrow_color";
    private static final String PREF_K_BAND_COLOR = "AppPreferences_k_band_color";
    private static final String PREF_LASER_TP_MODE = "AppPreferences_laser_tp_mode";
    private static final String PREF_MRCD_ARROW_COLOR = "AppPreferences_mrcd_arrow_color";
    private static final String PREF_MRCD_BAND_COLOR = "AppPreferences_mrcd_band_color";
    private static final String PREF_MUTE_MEMORY_OPTION = "AppPreferences_mute_memory_option";
    private static final String PREF_POWER_BUTTON_RECEIVE_MODE = "AppPreferences_power_button_receive_mode";
    private static final String PREF_SETTING_MODE = "AppPreferences_setting_mode";
    private static final String PREF_SPEED_UNIT = "AppPreferences_speed_unit";
    private static final String PREF_VOLUME_OPTION = "AppPreferences_volume";
    private static final String PREF_WRITE_SETTING = "AppPreferences_write_setting";
    private static final String PREF_X_ARROW_COLOR = "AppPreferences_x_arrow_color";
    private static final String PREF_X_BAND_COLOR = "AppPreferences_x_band_color";
    private final SharedPreferences sharedPreferences;

    public StoreUserData(SharedPreferences sharedPreferences) {
        Intrinsics.checkNotNullParameter(sharedPreferences, "sharedPreferences");
        this.sharedPreferences = sharedPreferences;
    }

    public final void setScanRunning(boolean z) {
        set(this.sharedPreferences, PREF_BLUETOOTH_CONNECTED, Boolean.valueOf(z));
    }

    public final boolean isScanRunning() {
        return ((Boolean) get(this.sharedPreferences, PREF_BLUETOOTH_CONNECTED, Boolean.TYPE)).booleanValue();
    }

    public final void setBluetoothConnected(boolean z) {
        set(this.sharedPreferences, PREF_BLUETOOTH_CONNECTED, Boolean.valueOf(z));
    }

    public final boolean isBluetoothConnected() {
        return ((Boolean) get(this.sharedPreferences, PREF_BLUETOOTH_CONNECTED, Boolean.TYPE)).booleanValue();
    }

    public final void setBTConnecting(boolean z) {
        set(this.sharedPreferences, PREF_BLUETOOTH_CONNECTING, Boolean.valueOf(z));
    }

    public final boolean isBTConnecting() {
        return ((Boolean) get(this.sharedPreferences, PREF_BLUETOOTH_CONNECTING, Boolean.TYPE)).booleanValue();
    }

    public final void setWiFiModel(boolean z) {
        set(this.sharedPreferences, IS_WIFI_MODEL, Boolean.valueOf(z));
    }

    public final boolean isWiFiModel() {
        return ((Boolean) get(this.sharedPreferences, IS_WIFI_MODEL, Boolean.TYPE)).booleanValue();
    }

    public final void setIsfileExist(boolean z) {
        set(this.sharedPreferences, IS_FILE_EXIST, Boolean.valueOf(z));
    }

    public final boolean getIsfileExist() {
        return ((Boolean) get(this.sharedPreferences, IS_FILE_EXIST, Boolean.TYPE)).booleanValue();
    }

    public final void setDeviceName(String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        set(this.sharedPreferences, PREF_DEVICE_NAME, value);
    }

    public final String getDeviceName() {
        return (String) get(this.sharedPreferences, PREF_DEVICE_NAME, String.class);
    }

    public final void setTestjsonFirmwareURL(String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        set(this.sharedPreferences, FIRMWARE_TEST_URL, value);
    }

    public final String getTestjsonFirmwareURL() {
        return (String) get(this.sharedPreferences, FIRMWARE_TEST_URL, String.class);
    }

    public final void setCurrentFirmwareVersion(String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        set(this.sharedPreferences, CURRENT_FIRMWARE_VERSION, value);
    }

    public final String getCurrentFirmwareVersion() {
        return (String) get(this.sharedPreferences, CURRENT_FIRMWARE_VERSION, String.class);
    }

    public final void setLatestFirmwareVersion(String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        set(this.sharedPreferences, LATEST_FIRMWARE_VERSION, value);
    }

    public final String getLatestFirmwareVersion() {
        return (String) get(this.sharedPreferences, LATEST_FIRMWARE_VERSION, String.class);
    }

    public final void setLatestFirmwareUrl(String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        set(this.sharedPreferences, LATEST_FIRMWARE_URL, value);
    }

    public final String getLatestFirmwareUrl() {
        return (String) get(this.sharedPreferences, LATEST_FIRMWARE_URL, String.class);
    }

    public final void setConnectedWiFiSSID(String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        set(this.sharedPreferences, CONNECTED_WIFI_SSID, value);
    }

    public final String getConnectedWiFiSSID() {
        return (String) get(this.sharedPreferences, CONNECTED_WIFI_SSID, String.class);
    }

    public final void setRecentlyWriteSetting(boolean z) {
        set(this.sharedPreferences, PREF_WRITE_SETTING, Boolean.valueOf(z));
    }

    public final boolean isRecentlyWriteSetting() {
        return ((Boolean) get(this.sharedPreferences, PREF_WRITE_SETTING, Boolean.TYPE)).booleanValue();
    }

    public final void setFirmWareUpdating(boolean z) {
        set(this.sharedPreferences, IS_FIRMWARE_UPDATING, Boolean.valueOf(z));
    }

    public final boolean isFirmWareUpdating() {
        return ((Boolean) get(this.sharedPreferences, IS_FIRMWARE_UPDATING, Boolean.TYPE)).booleanValue();
    }

    public final void setUpdateAvailable(boolean z) {
        set(this.sharedPreferences, IS_UPDATE_AVAILABLE, Boolean.valueOf(z));
    }

    public final boolean isUpdateAvailable() {
        return ((Boolean) get(this.sharedPreferences, IS_UPDATE_AVAILABLE, Boolean.TYPE)).booleanValue();
    }

    public final void setSettingMode(String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        set(this.sharedPreferences, PREF_SETTING_MODE, value);
    }

    public final String getSettingMode() {
        return (String) get(this.sharedPreferences, PREF_SETTING_MODE, String.class);
    }

    public final void setCityMode(String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        set(this.sharedPreferences, PREF_CITY_MODE, value);
    }

    public final String getCityMode() {
        return (String) get(this.sharedPreferences, PREF_CITY_MODE, String.class);
    }

    public final void setAutoConnectAvailable(boolean z) {
        set(this.sharedPreferences, PREF_AUTO_CONNECT_AVAILABLE, Boolean.valueOf(z));
    }

    public final boolean isAutoConnectAvailable() {
        return ((Boolean) get(this.sharedPreferences, PREF_AUTO_CONNECT_AVAILABLE, Boolean.TYPE)).booleanValue();
    }

    public final void setXArrowColor(String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        set(this.sharedPreferences, PREF_X_ARROW_COLOR, value);
    }

    public final String getXArrowColor() {
        return (String) get(this.sharedPreferences, PREF_X_ARROW_COLOR, String.class);
    }

    public final void setKArrowColor(String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        set(this.sharedPreferences, PREF_K_ARROW_COLOR, value);
    }

    public final String getKArrowColor() {
        return (String) get(this.sharedPreferences, PREF_K_ARROW_COLOR, String.class);
    }

    public final void setMrcdArrowColor(String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        set(this.sharedPreferences, PREF_MRCD_ARROW_COLOR, value);
    }

    public final String getMrcdArrowColor() {
        return (String) get(this.sharedPreferences, PREF_MRCD_ARROW_COLOR, String.class);
    }

    public final void setGatsoArrowColor(String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        set(this.sharedPreferences, PREF_GATSO_ARROW_COLOR, value);
    }

    public final String getGatsoArrowColor() {
        return (String) get(this.sharedPreferences, PREF_GATSO_ARROW_COLOR, String.class);
    }

    public final void setKaArrowColor(String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        set(this.sharedPreferences, PREF_KA_ARROW_COLOR, value);
    }

    public final String getKaArrowColor() {
        return (String) get(this.sharedPreferences, PREF_KA_ARROW_COLOR, String.class);
    }

    public final void setXBandColor(String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        set(this.sharedPreferences, PREF_X_BAND_COLOR, value);
    }

    public final String getXBandColor() {
        return (String) get(this.sharedPreferences, PREF_X_BAND_COLOR, String.class);
    }

    public final void setKBandColor(String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        set(this.sharedPreferences, PREF_K_BAND_COLOR, value);
    }

    public final String getKBandColor() {
        return (String) get(this.sharedPreferences, PREF_K_BAND_COLOR, String.class);
    }

    public final void setMrcdBandColor(String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        set(this.sharedPreferences, PREF_MRCD_BAND_COLOR, value);
    }

    public final String getMrcdBandColor() {
        return (String) get(this.sharedPreferences, PREF_MRCD_BAND_COLOR, String.class);
    }

    public final void setGatsoBandColor(String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        set(this.sharedPreferences, PREF_GATSO_BAND_COLOR, value);
    }

    public final String getGatsoBandColor() {
        return (String) get(this.sharedPreferences, PREF_GATSO_BAND_COLOR, String.class);
    }

    public final void setKaBandColor(String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        set(this.sharedPreferences, PREF_KA_BAND_COLOR, value);
    }

    public final String getKaBandColor() {
        return (String) get(this.sharedPreferences, PREF_KA_BAND_COLOR, String.class);
    }

    public final void setSpeedUnit(String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        set(this.sharedPreferences, PREF_SPEED_UNIT, value);
    }

    public final String getSpeedUnit() {
        return (String) get(this.sharedPreferences, PREF_SPEED_UNIT, String.class);
    }

    public final void setAutoMute(String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        set(this.sharedPreferences, PREF_AUTO_MUTE, value);
    }

    public final String getAutoMute() {
        return (String) get(this.sharedPreferences, PREF_AUTO_MUTE, String.class);
    }

    public final void setAutoMuteMemory(String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        set(this.sharedPreferences, PREF_AUTO_MUTE_MEMORY, value);
    }

    public final String getAutoMuteMemory() {
        return (String) get(this.sharedPreferences, PREF_AUTO_MUTE_MEMORY, String.class);
    }

    public final void setMuteMemoryOption(String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        set(this.sharedPreferences, PREF_MUTE_MEMORY_OPTION, value);
    }

    public final String getMuteMemoryOption() {
        return (String) get(this.sharedPreferences, PREF_MUTE_MEMORY_OPTION, String.class);
    }

    public final void setGpsOn(boolean z) {
        set(this.sharedPreferences, IS_GPS_ON, Boolean.valueOf(z));
    }

    public final boolean isGpsOn() {
        return ((Boolean) get(this.sharedPreferences, IS_GPS_ON, Boolean.TYPE)).booleanValue();
    }

    public final void setMapLight(boolean z) {
        set(this.sharedPreferences, IS_Map_Light, Boolean.valueOf(z));
    }

    public final boolean isMapLight() {
        return ((Boolean) get(this.sharedPreferences, IS_Map_Light, Boolean.TYPE)).booleanValue();
    }

    public final void setMrcdOn(boolean z) {
        set(this.sharedPreferences, IS_MRCD_ON, Boolean.valueOf(z));
    }

    public final boolean isMrcdOn() {
        return ((Boolean) get(this.sharedPreferences, IS_MRCD_ON, Boolean.TYPE)).booleanValue();
    }

    public final void setFwDownloadComplete(boolean z) {
        set(this.sharedPreferences, IS_FW_DOWNLOADED, Boolean.valueOf(z));
    }

    public final boolean isFwDownloadComplete() {
        return ((Boolean) get(this.sharedPreferences, IS_FW_DOWNLOADED, Boolean.TYPE)).booleanValue();
    }

    public final void setVolume(String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        set(this.sharedPreferences, PREF_VOLUME_OPTION, value);
    }

    public final String getVolume() {
        return (String) get(this.sharedPreferences, PREF_VOLUME_OPTION, new String().getClass());
    }

    public final void setFwFlashing(boolean z) {
        set(this.sharedPreferences, IS_FW_FLASHING, Boolean.valueOf(z));
    }

    public final boolean isFwFlashing() {
        return ((Boolean) get(this.sharedPreferences, IS_FW_FLASHING, Boolean.TYPE)).booleanValue();
    }

    public final void setLaserEnable(boolean z) {
        set(this.sharedPreferences, IS_LASER_ENABLE, Boolean.valueOf(z));
    }

    public final boolean isLaserEnable() {
        return ((Boolean) get(this.sharedPreferences, IS_LASER_ENABLE, Boolean.TYPE)).booleanValue();
    }

    public final void setLaserTpMode(String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        set(this.sharedPreferences, PREF_LASER_TP_MODE, value);
    }

    public final String getLaserTpMode() {
        return (String) get(this.sharedPreferences, PREF_LASER_TP_MODE, String.class);
    }

    public final void setPowerButtonReceiveMode(String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        set(this.sharedPreferences, PREF_POWER_BUTTON_RECEIVE_MODE, value);
    }

    public final String getPowerButtonReceiveMode() {
        return (String) get(this.sharedPreferences, PREF_POWER_BUTTON_RECEIVE_MODE, String.class);
    }

    public final void clearData(Activity context) {
        Intrinsics.checkNotNullParameter(context, "context");
        context.getSharedPreferences(INSTANCE.getPrefName(context), 0).edit().clear().apply();
    }

    /* JADX INFO: compiled from: StoreUserData.kt */
    @Metadata(m490d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b)\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007R\u000e\u0010\b\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\r\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u000f\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0010\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0011\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0012\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0013\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0014\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0015\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0016\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0017\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0018\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0019\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u001a\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u001b\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u001c\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u001d\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u001e\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u001f\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010 \u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010!\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\"\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010#\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010$\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010%\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010&\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010'\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010(\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010)\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010*\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010+\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010,\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010-\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010.\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010/\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000¨\u00060"}, m491d2 = {"Lcom/uniden/rtach/data/sharedpref/StoreUserData$Companion;", "", "<init>", "()V", "getPrefName", "", "activity", "Landroid/content/Context;", "PREFIX", "PREF_BLUETOOTH_CONNECTED", "PREF_BLUETOOTH_CONNECTING", "IS_WIFI_MODEL", "IS_FILE_EXIST", "PREF_DEVICE_NAME", "FIRMWARE_TEST_URL", "CURRENT_FIRMWARE_VERSION", "LATEST_FIRMWARE_VERSION", "LATEST_FIRMWARE_URL", "CONNECTED_WIFI_SSID", "PREF_SETTING_MODE", "PREF_CITY_MODE", "PREF_WRITE_SETTING", "IS_UPDATE_AVAILABLE", "IS_FIRMWARE_UPDATING", "PREF_AUTO_CONNECT_AVAILABLE", "PREF_X_ARROW_COLOR", "PREF_K_ARROW_COLOR", "PREF_MRCD_ARROW_COLOR", "PREF_GATSO_ARROW_COLOR", "PREF_KA_ARROW_COLOR", "PREF_X_BAND_COLOR", "PREF_K_BAND_COLOR", "PREF_MRCD_BAND_COLOR", "PREF_GATSO_BAND_COLOR", "PREF_KA_BAND_COLOR", "PREF_SPEED_UNIT", "PREF_AUTO_MUTE", "PREF_AUTO_MUTE_MEMORY", "PREF_MUTE_MEMORY_OPTION", "PREF_VOLUME_OPTION", "IS_FW_DOWNLOADED", "IS_GPS_ON", "IS_MRCD_ON", "IS_FW_FLASHING", "IS_LASER_ENABLE", "PREF_LASER_TP_MODE", "PREF_POWER_BUTTON_RECEIVE_MODE", "IS_Map_Light", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final String getPrefName(Context activity) {
            Intrinsics.checkNotNullParameter(activity, "activity");
            String packageName = activity.getPackageName();
            Intrinsics.checkNotNullExpressionValue(packageName, "getPackageName(...)");
            String strReplace = new Regex("\\.").replace(packageName, "_");
            Locale locale = Locale.getDefault();
            Intrinsics.checkNotNullExpressionValue(locale, "getDefault(...)");
            String lowerCase = strReplace.toLowerCase(locale);
            Intrinsics.checkNotNullExpressionValue(lowerCase, "toLowerCase(...)");
            return lowerCase;
        }
    }
}
