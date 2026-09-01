package com.uniden.rtach.helper;

import androidx.constraintlayout.widget.ConstraintLayout;
import kotlin.Metadata;

/* JADX INFO: compiled from: BluetoothUtils.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\bI\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003R\u0014\u0010\u0004\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007R\u0014\u0010\b\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\u0007R\u0014\u0010\n\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\u0007R\u0014\u0010\f\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u0007R\u0014\u0010\u000e\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u0007R\u0014\u0010\u0010\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0007R\u0014\u0010\u0012\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0007R\u0014\u0010\u0014\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0007R\u0014\u0010\u0016\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u0007R\u0014\u0010\u0018\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b\u0019\u0010\u0007R\u0014\u0010\u001a\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b\u001b\u0010\u0007R\u0014\u0010\u001c\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b\u001d\u0010\u0007R\u0014\u0010\u001e\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b\u001f\u0010\u0007R\u0014\u0010 \u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b!\u0010\u0007R\u0014\u0010\"\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b#\u0010\u0007R\u0014\u0010$\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b%\u0010\u0007R\u0014\u0010&\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b'\u0010\u0007R\u0014\u0010(\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b)\u0010\u0007R\u0014\u0010*\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b+\u0010\u0007R\u0014\u0010,\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b-\u0010\u0007R\u0014\u0010.\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b/\u0010\u0007R\u0014\u00100\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b1\u0010\u0007R\u0014\u00102\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b3\u0010\u0007R\u0014\u00104\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b5\u0010\u0007R\u0014\u00106\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b7\u0010\u0007R\u0014\u00108\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b9\u0010\u0007R\u0014\u0010:\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b;\u0010\u0007R\u0014\u0010<\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b=\u0010\u0007R\u0014\u0010>\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b?\u0010\u0007R\u0014\u0010@\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\bA\u0010\u0007R\u0014\u0010B\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\bC\u0010\u0007R\u0014\u0010D\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\bE\u0010\u0007R\u0014\u0010F\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\bG\u0010\u0007R\u0014\u0010H\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\bI\u0010\u0007R\u0014\u0010J\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\bK\u0010\u0007R\u0014\u0010L\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\bM\u0010\u0007¨\u0006N"}, m491d2 = {"Lcom/uniden/rtach/helper/BluetoothUtils;", "", "<init>", "()V", "FD_START_COM", "", "getFD_START_COM", "()Ljava/lang/String;", "FD_UI_START", "getFD_UI_START", "FD_UI_END", "getFD_UI_END", "FD_DSP_START", "getFD_DSP_START", "FD_DSP_END", "getFD_DSP_END", "FD_GPS_START", "getFD_GPS_START", "FD_GPS_END", "getFD_GPS_END", "FD_SOUND_DB_START", "getFD_SOUND_DB_START", "FD_SOUND_DB_END", "getFD_SOUND_DB_END", "FD_GPS_DB_START", "getFD_GPS_DB_START", "FD_GPS_DB_END", "getFD_GPS_DB_END", "FD_BLE_START", "getFD_BLE_START", "FD_BLE_END", "getFD_BLE_END", "FD_INTERFACE1_START", "getFD_INTERFACE1_START", "FD_INTERFACE1_END", "getFD_INTERFACE1_END", "FD_INTERFACE2_START", "getFD_INTERFACE2_START", "FD_INTERFACE2_END", "getFD_INTERFACE2_END", "FD_INTERFACE3_START", "getFD_INTERFACE3_START", "FD_INTERFACE3_END", "getFD_INTERFACE3_END", "FD_END_COM", "getFD_END_COM", "FD_UPDATE_START_COM", "getFD_UPDATE_START_COM", "FD_WRITE1024_COM", "getFD_WRITE1024_COM", "RESPONSE_ACK", "getRESPONSE_ACK", "RESPONSE_NAK", "getRESPONSE_NAK", "REPORT_SETTING_CHANGE", "getREPORT_SETTING_CHANGE", "REPORT_MUTE_MEMORY_RUN", "getREPORT_MUTE_MEMORY_RUN", "REPORT_USER_MARK_RUN", "getREPORT_USER_MARK_RUN", "REPORT_MUTE_ON_OFF", "getREPORT_MUTE_ON_OFF", "REPORT_RLC_DELETE", "getREPORT_RLC_DELETE", "REPORT_SPD_DELETE", "getREPORT_SPD_DELETE", "REPORT_RLC_SPD_DELETE", "getREPORT_RLC_SPD_DELETE", "REPORT_NOTIFY_MESSAGE", "getREPORT_NOTIFY_MESSAGE", "REPORT_UPDATE_PERCENT", "getREPORT_UPDATE_PERCENT", "REPORT_FLASH_WRITE_END", "getREPORT_FLASH_WRITE_END", "REPORT_WIFI_AP_INFO", "getREPORT_WIFI_AP_INFO", "REPORT_DOWNLOAD_URL", "getREPORT_DOWNLOAD_URL", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class BluetoothUtils {
    public static final BluetoothUtils INSTANCE = new BluetoothUtils();
    private static final String FD_START_COM = "BTdnSTART";
    private static final String FD_UI_START = "BTdnUISTR";
    private static final String FD_UI_END = "BTdnUIEND";
    private static final String FD_DSP_START = "BTdnDSSTR";
    private static final String FD_DSP_END = "BTdnDSEND";
    private static final String FD_GPS_START = "BTdnGPSTR";
    private static final String FD_GPS_END = "BTdnGPEND";
    private static final String FD_SOUND_DB_START = "BTdnSDSTR";
    private static final String FD_SOUND_DB_END = "BTdnSDEND";
    private static final String FD_GPS_DB_START = "BTdnGDSTR";
    private static final String FD_GPS_DB_END = "BTdnGDEND";
    private static final String FD_BLE_START = "BTdnBTSTR";
    private static final String FD_BLE_END = "BTdnBTEND";
    private static final String FD_INTERFACE1_START = "BTdnI1STR";
    private static final String FD_INTERFACE1_END = "BTdnI1END";
    private static final String FD_INTERFACE2_START = "BTdnI2STR";
    private static final String FD_INTERFACE2_END = "BTdnI2END";
    private static final String FD_INTERFACE3_START = "BTdnI3STR";
    private static final String FD_INTERFACE3_END = "BTdnI3END";
    private static final String FD_END_COM = "BTdnFINIS";
    private static final String FD_UPDATE_START_COM = "BTdnFLSWR";
    private static final String FD_WRITE1024_COM = "BTdnWRDON";
    private static final String RESPONSE_ACK = "RDrespACK";
    private static final String RESPONSE_NAK = "RDrespNAK";
    private static final String REPORT_SETTING_CHANGE = "RDrptSETC";
    private static final String REPORT_MUTE_MEMORY_RUN = "RDrptMMEM";
    private static final String REPORT_USER_MARK_RUN = "RDrptUMRK";
    private static final String REPORT_MUTE_ON_OFF = "RDrptMUTE";
    private static final String REPORT_RLC_DELETE = "RDrptRLCD";
    private static final String REPORT_SPD_DELETE = "RDrptSPDD";
    private static final String REPORT_RLC_SPD_DELETE = "RDrptRNSD";
    private static final String REPORT_NOTIFY_MESSAGE = "RDrptNMSG";
    private static final String REPORT_UPDATE_PERCENT = "RDrptWSTS";
    private static final String REPORT_FLASH_WRITE_END = "RDrptWEND";
    private static final String REPORT_WIFI_AP_INFO = "RDrptWIAP";
    private static final String REPORT_DOWNLOAD_URL = "RDrptDURL";

    public final String getFD_BLE_END() {
        return FD_BLE_END;
    }

    public final String getFD_BLE_START() {
        return FD_BLE_START;
    }

    public final String getFD_DSP_END() {
        return FD_DSP_END;
    }

    public final String getFD_DSP_START() {
        return FD_DSP_START;
    }

    public final String getFD_END_COM() {
        return FD_END_COM;
    }

    public final String getFD_GPS_DB_END() {
        return FD_GPS_DB_END;
    }

    public final String getFD_GPS_DB_START() {
        return FD_GPS_DB_START;
    }

    public final String getFD_GPS_END() {
        return FD_GPS_END;
    }

    public final String getFD_GPS_START() {
        return FD_GPS_START;
    }

    public final String getFD_INTERFACE1_END() {
        return FD_INTERFACE1_END;
    }

    public final String getFD_INTERFACE1_START() {
        return FD_INTERFACE1_START;
    }

    public final String getFD_INTERFACE2_END() {
        return FD_INTERFACE2_END;
    }

    public final String getFD_INTERFACE2_START() {
        return FD_INTERFACE2_START;
    }

    public final String getFD_INTERFACE3_END() {
        return FD_INTERFACE3_END;
    }

    public final String getFD_INTERFACE3_START() {
        return FD_INTERFACE3_START;
    }

    public final String getFD_SOUND_DB_END() {
        return FD_SOUND_DB_END;
    }

    public final String getFD_SOUND_DB_START() {
        return FD_SOUND_DB_START;
    }

    public final String getFD_START_COM() {
        return FD_START_COM;
    }

    public final String getFD_UI_END() {
        return FD_UI_END;
    }

    public final String getFD_UI_START() {
        return FD_UI_START;
    }

    public final String getFD_UPDATE_START_COM() {
        return FD_UPDATE_START_COM;
    }

    public final String getFD_WRITE1024_COM() {
        return FD_WRITE1024_COM;
    }

    public final String getREPORT_DOWNLOAD_URL() {
        return REPORT_DOWNLOAD_URL;
    }

    public final String getREPORT_FLASH_WRITE_END() {
        return REPORT_FLASH_WRITE_END;
    }

    public final String getREPORT_MUTE_MEMORY_RUN() {
        return REPORT_MUTE_MEMORY_RUN;
    }

    public final String getREPORT_MUTE_ON_OFF() {
        return REPORT_MUTE_ON_OFF;
    }

    public final String getREPORT_NOTIFY_MESSAGE() {
        return REPORT_NOTIFY_MESSAGE;
    }

    public final String getREPORT_RLC_DELETE() {
        return REPORT_RLC_DELETE;
    }

    public final String getREPORT_RLC_SPD_DELETE() {
        return REPORT_RLC_SPD_DELETE;
    }

    public final String getREPORT_SETTING_CHANGE() {
        return REPORT_SETTING_CHANGE;
    }

    public final String getREPORT_SPD_DELETE() {
        return REPORT_SPD_DELETE;
    }

    public final String getREPORT_UPDATE_PERCENT() {
        return REPORT_UPDATE_PERCENT;
    }

    public final String getREPORT_USER_MARK_RUN() {
        return REPORT_USER_MARK_RUN;
    }

    public final String getREPORT_WIFI_AP_INFO() {
        return REPORT_WIFI_AP_INFO;
    }

    public final String getRESPONSE_ACK() {
        return RESPONSE_ACK;
    }

    public final String getRESPONSE_NAK() {
        return RESPONSE_NAK;
    }

    private BluetoothUtils() {
    }
}
