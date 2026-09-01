package com.uniden.rtach.helper;

import androidx.constraintlayout.widget.ConstraintLayout;
import com.uniden.rtach.BuildConfig;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: Constant.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b3\n\u0002\u0010\u0007\n\u0000\n\u0002\u0010\u0006\n\u0002\b\r\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003R\u001a\u0010\u0004\u001a\u00020\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0006\u0010\u0007\"\u0004\b\b\u0010\tR\u0014\u0010\n\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\u0007R\u0014\u0010\f\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u0007R\u0014\u0010\u000e\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u0007R\u0014\u0010\u0010\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0007R\u0014\u0010\u0012\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0007R\u0014\u0010\u0014\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0007R\u0014\u0010\u0016\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u0007R\u0014\u0010\u0018\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b\u0019\u0010\u0007R\u0014\u0010\u001a\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b\u001b\u0010\u0007R\u0014\u0010\u001c\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b\u001d\u0010\u0007R\u0014\u0010\u001e\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b\u001f\u0010\u0007R\u0014\u0010 \u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b!\u0010\u0007R\u0014\u0010\"\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b#\u0010\u0007R\u0014\u0010$\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b%\u0010\u0007R\u0014\u0010&\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b'\u0010\u0007R\u0014\u0010(\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b)\u0010\u0007R\u0014\u0010*\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b+\u0010\u0007R\u0014\u0010,\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b-\u0010\u0007R\u0014\u0010.\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b/\u0010\u0007R\u000e\u00100\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u00101\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u00102\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u00103\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u00104\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u00105\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u00106\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u00107\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u00108\u001a\u000209X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010:\u001a\u00020;X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010<\u001a\u00020;X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010=\u001a\u00020;X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010>\u001a\u000209X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010?\u001a\u000209X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010@\u001a\u00020;X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010A\u001a\u00020;X\u0086T¢\u0006\u0002\n\u0000R\u001a\u0010B\u001a\u00020\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bC\u0010\u0007\"\u0004\bD\u0010\tR\u001a\u0010E\u001a\u00020\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bF\u0010\u0007\"\u0004\bG\u0010\t¨\u0006H"}, m491d2 = {"Lcom/uniden/rtach/helper/Constant;", "", "<init>", "()V", "LATEST_FIRMWARE_VERSION_CHECK_URL", "", "getLATEST_FIRMWARE_VERSION_CHECK_URL", "()Ljava/lang/String;", "setLATEST_FIRMWARE_VERSION_CHECK_URL", "(Ljava/lang/String;)V", "CLIENT_CHARACTERISTIC_CONFIG", "getCLIENT_CHARACTERISTIC_CONFIG", "UNIDEN_SERVICE_1_UUID", "getUNIDEN_SERVICE_1_UUID", "UNIDEN_SERVICE_2_UUID", "getUNIDEN_SERVICE_2_UUID", "UNIDEN_SERVICE_3_UUID", "getUNIDEN_SERVICE_3_UUID", "UNIDEN_SERVICE_4_UUID", "getUNIDEN_SERVICE_4_UUID", "UNIDEN_SERVICE_5_UUID", "getUNIDEN_SERVICE_5_UUID", "SETTINGS_CHARACTERISTIC_UUID_1", "getSETTINGS_CHARACTERISTIC_UUID_1", "SETTINGS_CHARACTERISTIC_UUID_2", "getSETTINGS_CHARACTERISTIC_UUID_2", "SETTINGS_CHARACTERISTIC_UUID_3", "getSETTINGS_CHARACTERISTIC_UUID_3", "ALERT_CHARACTERISTIC_UUID", "getALERT_CHARACTERISTIC_UUID", "ETC_DATA_CHARACTERISTIC_UUID", "getETC_DATA_CHARACTERISTIC_UUID", "WRITE_COMMAND_CHARACTERISTIC_UUID", "getWRITE_COMMAND_CHARACTERISTIC_UUID", "READ_COMMAND_CHARACTERISTIC_UUID", "getREAD_COMMAND_CHARACTERISTIC_UUID", "READ_FIRMWEAR_VERSION", "getREAD_FIRMWEAR_VERSION", "READ_SOFTWEAR_VERSION", "getREAD_SOFTWEAR_VERSION", "USERMARK", "getUSERMARK", "SPEEDCAM", "getSPEEDCAM", "REDLIGHT", "getREDLIGHT", "NONE", "getNONE", Constant.GPS_LOCATION_EXTRA, "DELETE_RED_LIGHT_CAMERA", "ADD_USER_MARK", "DELETE_USER_MARK", "ALERT_MUTE_CMD", "ALERT_UN_MUTE_CMD", "ALERT_ADD_MUTE_MEM_CMD", "ALERT_DELETE_MUTE_MEM_CMD", "KNOTS_TO_METERS_PER_SECOND", "", "METERSPERSEC2KPH", "", "KM2MI", "MPH4ROTATION", "TILTMAX", "TILTMAX_NORTHUP", "EARTHCIRCKM", "EARTHRADIUSKM", "updateMode", "getUpdateMode", "setUpdateMode", "updateType", "getUpdateType", "setUpdateType", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class Constant {
    public static final String ADD_USER_MARK = "BTreqUMRK:1";
    public static final String ALERT_ADD_MUTE_MEM_CMD = "BTreqMMEM:1";
    public static final String ALERT_DELETE_MUTE_MEM_CMD = "BTreqMMEM:0";
    public static final String ALERT_MUTE_CMD = "BTreqMUTE:1";
    public static final String ALERT_UN_MUTE_CMD = "BTreqMUTE:0";
    public static final String DELETE_RED_LIGHT_CAMERA = "BTreqRLCD:0";
    public static final String DELETE_USER_MARK = "BTreqUMRK:0";
    public static final double EARTHCIRCKM = 40075.017d;
    public static final double EARTHRADIUSKM = 6371.0d;
    public static final String GPS_LOCATION_EXTRA = "GPS_LOCATION_EXTRA";
    public static final double KM2MI = 0.621371192d;
    public static final float KNOTS_TO_METERS_PER_SECOND = 0.5144445f;
    public static final double METERSPERSEC2KPH = 3.6d;
    public static final double MPH4ROTATION = 1.5d;
    public static final float TILTMAX = 45.0f;
    public static final float TILTMAX_NORTHUP = 0.0f;
    public static final Constant INSTANCE = new Constant();
    private static String LATEST_FIRMWARE_VERSION_CHECK_URL = BuildConfig.LATEST_FIRMWARE_VERSION_CHECK_URL;
    private static final String CLIENT_CHARACTERISTIC_CONFIG = "00002902-0000-1000-8000-00805f9b34fb";
    private static final String UNIDEN_SERVICE_1_UUID = "00001800-0000-1000-8000-00805f9b34fb";
    private static final String UNIDEN_SERVICE_2_UUID = "00001801-0000-1000-8000-00805f9b34fb";
    private static final String UNIDEN_SERVICE_3_UUID = "0000180a-0000-1000-8000-00805f9b34fb";
    private static final String UNIDEN_SERVICE_4_UUID = "18424398-7cbc-11e9-8f9e-2a86e4085a59";
    private static final String UNIDEN_SERVICE_5_UUID = "1842467c-7cbc-11e9-8f9e-2a86e4085a59";
    private static final String SETTINGS_CHARACTERISTIC_UUID_1 = "2d86686a-53dc-25b3-0c4a-f0e10c8dee20";
    private static final String SETTINGS_CHARACTERISTIC_UUID_2 = "5a87b4ef-3bfa-76a8-e642-92933c31434f";
    private static final String SETTINGS_CHARACTERISTIC_UUID_3 = "15005991-b131-3396-014c-664c9867b917";
    private static final String ALERT_CHARACTERISTIC_UUID = "6eb675ab-8bd1-1b9a-7444-621e52ec6823";
    private static final String ETC_DATA_CHARACTERISTIC_UUID = "6c290d2e-1c03-aca1-ab48-a9b908bae79e";
    private static final String WRITE_COMMAND_CHARACTERISTIC_UUID = "2c86686a-53dc-25b3-0c4a-f0e10c8dee20";
    private static final String READ_COMMAND_CHARACTERISTIC_UUID = "5987b4ef-3bfa-76a8-e642-92933c31434f";
    private static final String READ_FIRMWEAR_VERSION = "00002a26-0000-1000-8000-00805f9b34fb";
    private static final String READ_SOFTWEAR_VERSION = "00002a28-0000-1000-8000-00805f9b34fb";
    private static final String USERMARK = "USERMARK";
    private static final String SPEEDCAM = "SPEEDCAM";
    private static final String REDLIGHT = "REDLIGHT";
    private static final String NONE = "NONE";
    private static String updateMode = "N";
    private static String updateType = "F";

    public final String getALERT_CHARACTERISTIC_UUID() {
        return ALERT_CHARACTERISTIC_UUID;
    }

    public final String getCLIENT_CHARACTERISTIC_CONFIG() {
        return CLIENT_CHARACTERISTIC_CONFIG;
    }

    public final String getETC_DATA_CHARACTERISTIC_UUID() {
        return ETC_DATA_CHARACTERISTIC_UUID;
    }

    public final String getLATEST_FIRMWARE_VERSION_CHECK_URL() {
        return LATEST_FIRMWARE_VERSION_CHECK_URL;
    }

    public final String getNONE() {
        return NONE;
    }

    public final String getREAD_COMMAND_CHARACTERISTIC_UUID() {
        return READ_COMMAND_CHARACTERISTIC_UUID;
    }

    public final String getREAD_FIRMWEAR_VERSION() {
        return READ_FIRMWEAR_VERSION;
    }

    public final String getREAD_SOFTWEAR_VERSION() {
        return READ_SOFTWEAR_VERSION;
    }

    public final String getREDLIGHT() {
        return REDLIGHT;
    }

    public final String getSETTINGS_CHARACTERISTIC_UUID_1() {
        return SETTINGS_CHARACTERISTIC_UUID_1;
    }

    public final String getSETTINGS_CHARACTERISTIC_UUID_2() {
        return SETTINGS_CHARACTERISTIC_UUID_2;
    }

    public final String getSETTINGS_CHARACTERISTIC_UUID_3() {
        return SETTINGS_CHARACTERISTIC_UUID_3;
    }

    public final String getSPEEDCAM() {
        return SPEEDCAM;
    }

    public final String getUNIDEN_SERVICE_1_UUID() {
        return UNIDEN_SERVICE_1_UUID;
    }

    public final String getUNIDEN_SERVICE_2_UUID() {
        return UNIDEN_SERVICE_2_UUID;
    }

    public final String getUNIDEN_SERVICE_3_UUID() {
        return UNIDEN_SERVICE_3_UUID;
    }

    public final String getUNIDEN_SERVICE_4_UUID() {
        return UNIDEN_SERVICE_4_UUID;
    }

    public final String getUNIDEN_SERVICE_5_UUID() {
        return UNIDEN_SERVICE_5_UUID;
    }

    public final String getUSERMARK() {
        return USERMARK;
    }

    public final String getUpdateMode() {
        return updateMode;
    }

    public final String getUpdateType() {
        return updateType;
    }

    public final String getWRITE_COMMAND_CHARACTERISTIC_UUID() {
        return WRITE_COMMAND_CHARACTERISTIC_UUID;
    }

    public final void setLATEST_FIRMWARE_VERSION_CHECK_URL(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        LATEST_FIRMWARE_VERSION_CHECK_URL = str;
    }

    public final void setUpdateMode(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        updateMode = str;
    }

    public final void setUpdateType(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        updateType = str;
    }

    private Constant() {
    }
}
