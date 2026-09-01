package com.uniden.rtach.helper;

import android.content.Context;
import android.content.SharedPreferences;
import android.util.Log;
import androidx.constraintlayout.core.motion.utils.TypedValues;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.exifinterface.media.ExifInterface;
import com.google.android.gms.maps.model.LatLng;
import com.uniden.rtach.C2074R;
import com.uniden.rtach.data.model.AlertBandDataModel;
import com.uniden.rtach.data.model.ETCDataModel;
import com.uniden.rtach.data.model.MarkerAndPoiDataModel;
import com.uniden.rtach.data.sharedpref.StoreUserData;
import java.math.BigInteger;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.CharsKt;
import kotlin.text.StringsKt;

/* JADX INFO: compiled from: AlertDataConverter.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000t\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0006\n\u0002\u0010\b\n\u0002\b\n\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\n\n\u0002\u0010\u0007\n\u0000\n\u0002\u0010\u0012\n\u0000\n\u0002\u0010\n\n\u0002\b\f\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J+\u0010\u0004\u001a\u0012\u0012\u0004\u0012\u00020\u00060\u0007j\b\u0012\u0004\u0012\u00020\u0006`\u00052\u0006\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000b¢\u0006\u0002\u0010\fJ\u000e\u0010\r\u001a\u00020\u000b2\u0006\u0010\u000e\u001a\u00020\tJ\u000e\u0010\u000f\u001a\u00020\t2\u0006\u0010\u0010\u001a\u00020\tJ\u001f\u0010\u0011\u001a\u0004\u0018\u00010\u00122\b\u0010\u0013\u001a\u0004\u0018\u00010\t2\u0006\u0010\u0014\u001a\u00020\u0012¢\u0006\u0002\u0010\u0015J\u0010\u0010\u0016\u001a\u00020\u00122\u0006\u0010\u0014\u001a\u00020\u0012H\u0002J\u0010\u0010\u0017\u001a\u00020\u00122\u0006\u0010\u0014\u001a\u00020\u0012H\u0002J\u0010\u0010\u0018\u001a\u00020\u00122\u0006\u0010\u0014\u001a\u00020\u0012H\u0002J-\u0010\u0019\u001a\u0004\u0018\u00010\u00122\u0006\u0010\u0013\u001a\u00020\t2\u0006\u0010\u001a\u001a\u00020\t2\u0006\u0010\u001b\u001a\u00020\u000b2\u0006\u0010\u001c\u001a\u00020\u001d¢\u0006\u0002\u0010\u001eJ%\u0010\u001f\u001a\u0004\u0018\u00010\u00122\u0006\u0010\u0013\u001a\u00020\t2\u0006\u0010\u001a\u001a\u00020\t2\u0006\u0010\u001b\u001a\u00020\u000b¢\u0006\u0002\u0010 J%\u0010!\u001a\u0004\u0018\u00010\u00122\u0006\u0010\u0013\u001a\u00020\t2\u0006\u0010\u001a\u001a\u00020\t2\u0006\u0010\u001b\u001a\u00020\u000b¢\u0006\u0002\u0010 J\u0016\u0010\"\u001a\u00020\t2\u0006\u0010\u001a\u001a\u00020\t2\u0006\u0010#\u001a\u00020\tJ\u001e\u0010$\u001a\u00020\u00122\u0006\u0010\u001a\u001a\u00020\t2\u0006\u0010%\u001a\u00020&2\u0006\u0010'\u001a\u00020\tJ\u0016\u0010(\u001a\u00020\u00122\u0006\u0010\u001a\u001a\u00020\t2\u0006\u0010%\u001a\u00020&J\u0010\u0010)\u001a\u00020\u00122\u0006\u0010*\u001a\u00020\tH\u0002J \u0010+\u001a\u00020\u00122\u0006\u0010,\u001a\u00020\t2\u0006\u0010\u0014\u001a\u00020\t2\u0006\u0010'\u001a\u00020\tH\u0002J\u0010\u0010-\u001a\u00020\u00122\u0006\u0010'\u001a\u00020\tH\u0002J\u000e\u0010.\u001a\u00020/2\u0006\u00100\u001a\u00020\tJ/\u00101\u001a\u001e\u0012\u0004\u0012\u00020\t\u0012\u0004\u0012\u00020304j\u000e\u0012\u0004\u0012\u00020\t\u0012\u0004\u0012\u000203`22\u0006\u00105\u001a\u00020\t¢\u0006\u0002\u00106J\u0010\u00107\u001a\u0002082\u0006\u00109\u001a\u00020\tH\u0002J\u0010\u0010:\u001a\u00020\u00122\u0006\u0010;\u001a\u000208H\u0002J9\u0010<\u001a\u001e\u0012\u0004\u0012\u00020\t\u0012\u0004\u0012\u00020304j\u000e\u0012\u0004\u0012\u00020\t\u0012\u0004\u0012\u000203`22\u0006\u0010=\u001a\u00020\t2\u0006\u0010;\u001a\u000208H\u0002¢\u0006\u0002\u0010>J9\u0010?\u001a\u001e\u0012\u0004\u0012\u00020\t\u0012\u0004\u0012\u00020304j\u000e\u0012\u0004\u0012\u00020\t\u0012\u0004\u0012\u000203`22\u0006\u00105\u001a\u00020\t2\u0006\u0010@\u001a\u000208H\u0002¢\u0006\u0002\u0010>J\u0010\u0010A\u001a\u00020\t2\u0006\u0010;\u001a\u000208H\u0002J\u0010\u0010B\u001a\u00020C2\u0006\u0010D\u001a\u00020EH\u0002J\u0010\u0010F\u001a\u00020G2\u0006\u0010D\u001a\u00020EH\u0002J\u0010\u0010H\u001a\u00020G2\u0006\u0010D\u001a\u00020EH\u0002J\u0010\u0010I\u001a\u00020E2\u0006\u00109\u001a\u00020\tH\u0002J\u0010\u0010J\u001a\u00020E2\u0006\u00109\u001a\u00020\tH\u0002J\u0010\u0010K\u001a\u00020E2\u0006\u00109\u001a\u00020\tH\u0002J\u0016\u0010\u0011\u001a\u00020\t2\u0006\u0010L\u001a\u00020\t2\u0006\u0010\u001c\u001a\u00020\u001dJ\u0016\u0010M\u001a\u00020\u00122\u0006\u0010\u001c\u001a\u00020\u001d2\u0006\u0010@\u001a\u000208J\u000e\u0010N\u001a\u00020\u00122\u0006\u0010@\u001a\u00020\tJ\u0010\u0010O\u001a\u00020\t2\b\u0010@\u001a\u0004\u0018\u00010\tJ\u000e\u0010P\u001a\u00020\u00122\u0006\u0010@\u001a\u00020\tJ\u000e\u0010Q\u001a\u00020\t2\u0006\u0010@\u001a\u00020\tJ-\u0010R\u001a\u0004\u0018\u00010\u00122\u0006\u0010\u0013\u001a\u00020\t2\u0006\u0010\u001a\u001a\u00020\t2\u0006\u0010\u001b\u001a\u00020\u000b2\u0006\u0010\u001c\u001a\u00020\u001d¢\u0006\u0002\u0010\u001e¨\u0006S"}, m491d2 = {"Lcom/uniden/rtach/helper/AlertDataConverter;", "", "<init>", "()V", "parseAlertBandData", "Lkotlin/collections/ArrayList;", "Lcom/uniden/rtach/data/model/AlertBandDataModel;", "Ljava/util/ArrayList;", "input", "", "isI9", "", "(Ljava/lang/String;Z)Ljava/util/ArrayList;", "getLaserTpJammingEnableStatus", "alertId", "getMuteStatus", "muteType", "getDirection", "", "dir", "arrowColor", "(Ljava/lang/String;I)Ljava/lang/Integer;", "getFrontArrow", "getSideArrow", "getRearArrow", "getRSSIArrow", "alertType", "isMute", "context", "Landroid/content/Context;", "(Ljava/lang/String;Ljava/lang/String;ZLandroid/content/Context;)Ljava/lang/Integer;", "getRSSIBarForR8", "(Ljava/lang/String;Ljava/lang/String;Z)Ljava/lang/Integer;", "getRSSIBar", "getBandFrequency", "bandFrequency", "getBandColor", "sharedPrefs", "Lcom/uniden/rtach/data/sharedpref/StoreUserData;", "rssiLevel", "getArrowColor", "getColor", TypedValues.Custom.S_COLOR, "getBColor", "bandColor", "getSignalColors", "parseETCData", "Lcom/uniden/rtach/data/model/ETCDataModel;", "characteristicData", "parsePoiData", "Lkotlin/collections/HashMap;", "Lcom/uniden/rtach/data/model/MarkerAndPoiDataModel;", "Ljava/util/HashMap;", "str", "(Ljava/lang/String;)Ljava/util/HashMap;", "findPoiType", "Lcom/uniden/rtach/helper/MarkerTypeEnum;", "hexString", "identifiedPacketDataLength", "type", "spitePoiData", "packet", "(Ljava/lang/String;Lcom/uniden/rtach/helper/MarkerTypeEnum;)Ljava/util/HashMap;", "parsingPacket", "markerType", "getTypeMarkerCh", "byteArrayToFloat", "", "byteArray", "", "byteArrayToShort", "", "byteSpeedLimitToShort", "hexStringToByteArray", "hexStringAngleToByteArray", "hexStringSpeedLimitToByteArray", "direction", "getMarkerIcon", "getPoiAlertIcon", "getPoiAlertType", "getPoiAlertTypeStr", "getPoiAlertTypeStrAuto", "getRSSIArrowforAuto", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class AlertDataConverter {
    public static final AlertDataConverter INSTANCE = new AlertDataConverter();

    /* JADX INFO: compiled from: AlertDataConverter.kt */
    @Metadata(m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;

        static {
            int[] iArr = new int[MarkerTypeEnum.values().length];
            try {
                iArr[MarkerTypeEnum.NONE.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[MarkerTypeEnum.SPEED_CAMERA.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                iArr[MarkerTypeEnum.RED_LIGHT_CAMERA.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                iArr[MarkerTypeEnum.USER_MARK.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            $EnumSwitchMapping$0 = iArr;
        }
    }

    private AlertDataConverter() {
    }

    /* JADX WARN: Code duplicated, block: B:12:0x004a  */
    /* JADX WARN: Code duplicated, block: B:31:0x00b2  */
    /* JADX WARN: Code duplicated, block: B:86:0x01c1  */
    /* JADX WARN: Code duplicated, block: B:88:0x01ca  */
    public final ArrayList<AlertBandDataModel> parseAlertBandData(String input, boolean isI9) {
        int i;
        String str;
        Intrinsics.checkNotNullParameter(input, "input");
        ArrayList<AlertBandDataModel> arrayList = new ArrayList<>();
        List listSplit$default = StringsKt.split$default((CharSequence) input, new String[]{"&"}, false, 0, 6, (Object) null);
        int i2 = 0;
        int i3 = 0;
        for (Object obj : listSplit$default) {
            int i4 = i3 + 1;
            if (i3 < 0) {
                CollectionsKt.throwIndexOverflow();
            }
            String str2 = (String) obj;
            if (i3 == 4 && Intrinsics.areEqual(listSplit$default.get(i2), listSplit$default.get(4))) {
                i = i2;
            } else {
                String str3 = str2;
                if (str3.length() <= 0) {
                    i = i2;
                } else if (isI9) {
                    List listSplit$default2 = StringsKt.split$default((CharSequence) str3, new String[]{","}, false, 0, 6, (Object) null);
                    String str4 = "F";
                    switch (i3) {
                        case 0:
                            if (listSplit$default2.size() > 6) {
                                str = (String) listSplit$default2.get(6);
                            } else {
                                str = "";
                            }
                            break;
                        case 1:
                        case 2:
                        case 3:
                            str = "F";
                            break;
                        case 4:
                            if (listSplit$default2.size() > 6) {
                                str = (String) listSplit$default2.get(6);
                            } else {
                                str = "";
                            }
                            break;
                        case 5:
                        case 6:
                        case 7:
                            str = "R";
                            break;
                        default:
                            if (listSplit$default2.size() > 6) {
                                str = (String) listSplit$default2.get(6);
                            } else {
                                str = "";
                            }
                            break;
                    }
                    if (Intrinsics.areEqual(listSplit$default2.get(0), "0")) {
                        i = 0;
                    } else {
                        AlertBandDataModel alertBandDataModel = new AlertBandDataModel(listSplit$default2.size() > 0 ? (String) listSplit$default2.get(0) : "", listSplit$default2.size() > 1 ? (String) listSplit$default2.get(1) : "", listSplit$default2.size() > 2 ? (String) listSplit$default2.get(2) : "", listSplit$default2.size() > 3 ? (String) listSplit$default2.get(3) : "", listSplit$default2.size() > 4 ? (String) listSplit$default2.get(4) : "", listSplit$default2.size() > 5 ? (String) listSplit$default2.get(5) : "", listSplit$default2.size() > 6 ? str : "", listSplit$default2.size() > 7 ? (String) listSplit$default2.get(7) : "", listSplit$default2.size() > 8 ? (String) listSplit$default2.get(8) : "");
                        if (i3 == 4) {
                            ArrayList<AlertBandDataModel> arrayList2 = arrayList;
                            if (!arrayList2.isEmpty()) {
                                if (Intrinsics.areEqual(((AlertBandDataModel) CollectionsKt.first((List) arrayList)).getDir_type(), "R")) {
                                    arrayList.add(0, alertBandDataModel);
                                    arrayList.get(1).setDir_type("F");
                                    i = 0;
                                } else {
                                    if (!(!arrayList2.isEmpty()) || !Intrinsics.areEqual(arrayList.get(0).getDir_type(), "R")) {
                                        if (true ^ arrayList2.isEmpty()) {
                                            String dir_type = arrayList.get(0).getDir_type();
                                            str4 = ExifInterface.LATITUDE_SOUTH;
                                            if (!Intrinsics.areEqual(dir_type, ExifInterface.LATITUDE_SOUTH)) {
                                                str4 = "R";
                                            }
                                        } else {
                                            str4 = "R";
                                        }
                                    }
                                    alertBandDataModel.setDir_type(str4);
                                    arrayList.add(alertBandDataModel);
                                }
                            } else {
                                arrayList.add(alertBandDataModel);
                            }
                            i = 0;
                        } else {
                            arrayList.add(alertBandDataModel);
                            i = 0;
                        }
                    }
                } else if (Intrinsics.areEqual(str2, "0")) {
                    i = 0;
                } else {
                    List listSplit$default3 = StringsKt.split$default((CharSequence) str3, new String[]{","}, false, 0, 6, (Object) null);
                    i = 0;
                    if (!Intrinsics.areEqual(listSplit$default3.get(0), "0")) {
                        arrayList.add(new AlertBandDataModel(listSplit$default3.size() > 0 ? (String) listSplit$default3.get(0) : "", listSplit$default3.size() > 1 ? (String) listSplit$default3.get(1) : "", listSplit$default3.size() > 2 ? (String) listSplit$default3.get(2) : "", listSplit$default3.size() > 3 ? (String) listSplit$default3.get(3) : "", listSplit$default3.size() > 4 ? (String) listSplit$default3.get(4) : "", listSplit$default3.size() > 5 ? (String) listSplit$default3.get(5) : "", listSplit$default3.size() > 6 ? (String) listSplit$default3.get(6) : "", listSplit$default3.size() > 7 ? (String) listSplit$default3.get(7) : "", listSplit$default3.size() > 8 ? (String) listSplit$default3.get(8) : ""));
                    }
                }
            }
            i3 = i4;
            i2 = i;
        }
        return arrayList;
    }

    public final boolean getLaserTpJammingEnableStatus(String alertId) {
        Intrinsics.checkNotNullParameter(alertId, "alertId");
        try {
            return Integer.parseInt(alertId, CharsKt.checkRadix(16)) == 2;
        } catch (Exception unused) {
            return false;
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:29:0x0055 A[ORIG_RETURN, RETURN] */
    public final String getMuteStatus(String muteType) {
        Intrinsics.checkNotNullParameter(muteType, "muteType");
        switch (muteType) {
            case "1":
                return "Not Muted";
            case "2":
                return "Muted";
            case "3":
                return "Mute Memory";
            case "4":
                return "Auto Mute Memory";
            case "5":
                return "Blocked Mute";
            case "6":
                return "Quiet Ride Mute";
            default:
                return "";
        }
    }

    public final Integer getDirection(String dir, int arrowColor) {
        if (dir == null) {
            return null;
        }
        int iHashCode = dir.hashCode();
        if (iHashCode == 48) {
            dir.equals("0");
            return null;
        }
        if (iHashCode == 70) {
            if (dir.equals("F")) {
                return Integer.valueOf(getFrontArrow(arrowColor));
            }
            return null;
        }
        if (iHashCode == 82) {
            if (dir.equals("R")) {
                return Integer.valueOf(getRearArrow(arrowColor));
            }
            return null;
        }
        if (iHashCode == 83 && dir.equals(ExifInterface.LATITUDE_SOUTH)) {
            return Integer.valueOf(getSideArrow(arrowColor));
        }
        return null;
    }

    private final int getFrontArrow(int arrowColor) {
        if (arrowColor == C2074R.color.red) {
            return C2074R.drawable.red_front_arrow;
        }
        if (arrowColor == C2074R.color.blue) {
            return C2074R.drawable.blue_front_arrow;
        }
        if (arrowColor == C2074R.color.green) {
            return C2074R.drawable.green_front_arrow;
        }
        if (arrowColor == C2074R.color.orange) {
            return C2074R.drawable.orange_front_arrow;
        }
        if (arrowColor == C2074R.color.yellow) {
            return C2074R.drawable.yellow_front_arrow;
        }
        if (arrowColor == C2074R.color.white) {
            return C2074R.drawable.white_front_arrow;
        }
        return arrowColor == C2074R.color.violet ? C2074R.drawable.violet_front_arrow : C2074R.drawable.red_front_arrow;
    }

    private final int getSideArrow(int arrowColor) {
        if (arrowColor == C2074R.color.red) {
            return C2074R.drawable.red_side_arrow;
        }
        if (arrowColor == C2074R.color.blue) {
            return C2074R.drawable.blue_side_arrow;
        }
        if (arrowColor == C2074R.color.green) {
            return C2074R.drawable.green_side_arrow;
        }
        if (arrowColor == C2074R.color.orange) {
            return C2074R.drawable.orange_side_arrow;
        }
        if (arrowColor == C2074R.color.yellow) {
            return C2074R.drawable.yellow_side_arrow;
        }
        if (arrowColor == C2074R.color.white) {
            return C2074R.drawable.white_side_arrow;
        }
        return arrowColor == C2074R.color.violet ? C2074R.drawable.violet_side_arrow : C2074R.drawable.red_side_arrow;
    }

    private final int getRearArrow(int arrowColor) {
        if (arrowColor == C2074R.color.red) {
            return C2074R.drawable.red_rear_arrow;
        }
        if (arrowColor == C2074R.color.blue) {
            return C2074R.drawable.blue_rear_arrow;
        }
        if (arrowColor == C2074R.color.green) {
            return C2074R.drawable.green_rear_arrow;
        }
        if (arrowColor == C2074R.color.orange) {
            return C2074R.drawable.orange_rear_arrow;
        }
        if (arrowColor == C2074R.color.yellow) {
            return C2074R.drawable.yellow_rear_arrow;
        }
        if (arrowColor == C2074R.color.white) {
            return C2074R.drawable.white_rear_arrow;
        }
        return arrowColor == C2074R.color.violet ? C2074R.drawable.violet_rear_arrow : C2074R.drawable.red_rear_arrow;
    }

    public final Integer getRSSIArrow(String dir, String alertType, boolean isMute, Context context) {
        int i;
        int i2;
        int i3;
        int i4;
        int i5;
        int i6;
        int i7;
        int i8;
        int i9;
        Intrinsics.checkNotNullParameter(dir, "dir");
        Intrinsics.checkNotNullParameter(alertType, "alertType");
        Intrinsics.checkNotNullParameter(context, "context");
        SharedPreferences sharedPreferences = context.getSharedPreferences(StoreUserData.INSTANCE.getPrefName(context), 0);
        Intrinsics.checkNotNullExpressionValue(sharedPreferences, "getSharedPreferences(...)");
        StoreUserData storeUserData = new StoreUserData(sharedPreferences);
        if (StringsKt.equals(alertType, "LASER", true)) {
            if (StringsKt.contains((CharSequence) StringsKt.substringBefore$default(storeUserData.getDeviceName(), "@", (String) null, 2, (Object) null), (CharSequence) "R8", true)) {
                if (isMute) {
                    i9 = C2074R.drawable.level8_arrow_mute;
                } else {
                    i9 = C2074R.drawable.level8_arrow;
                }
            } else if (isMute) {
                i9 = C2074R.drawable.level5_small_strength_arrow_gray;
            } else {
                i9 = C2074R.drawable.level5_small_strength_arrow;
            }
            return Integer.valueOf(i9);
        }
        if (dir.compareTo("1") <= 0) {
            if (StringsKt.contains((CharSequence) StringsKt.substringBefore$default(storeUserData.getDeviceName(), "@", (String) null, 2, (Object) null), (CharSequence) "R8", true)) {
                if (isMute) {
                    i8 = C2074R.drawable.level1_arrow_mute;
                } else {
                    i8 = C2074R.drawable.level1_arrow;
                }
            } else if (isMute) {
                i8 = C2074R.drawable.level1_small_strength_arrow_gray;
            } else {
                i8 = C2074R.drawable.level1_small_strength_arrow;
            }
            return Integer.valueOf(i8);
        }
        if (Intrinsics.areEqual(dir, ExifInterface.GPS_MEASUREMENT_2D)) {
            if (StringsKt.contains((CharSequence) StringsKt.substringBefore$default(storeUserData.getDeviceName(), "@", (String) null, 2, (Object) null), (CharSequence) "R8", true)) {
                if (isMute) {
                    i7 = C2074R.drawable.level2_arrow_mute;
                } else {
                    i7 = C2074R.drawable.level2_arrow;
                }
            } else if (isMute) {
                i7 = C2074R.drawable.level2_small_strength_arrow_gray;
            } else {
                i7 = C2074R.drawable.level2_small_strength_arrow;
            }
            return Integer.valueOf(i7);
        }
        if (Intrinsics.areEqual(dir, ExifInterface.GPS_MEASUREMENT_3D)) {
            if (StringsKt.contains((CharSequence) StringsKt.substringBefore$default(storeUserData.getDeviceName(), "@", (String) null, 2, (Object) null), (CharSequence) "R8", true)) {
                if (isMute) {
                    i6 = C2074R.drawable.level3_arrow_mute;
                } else {
                    i6 = C2074R.drawable.level3_arrow;
                }
            } else if (isMute) {
                i6 = C2074R.drawable.level3_small_strength_arrow_gray;
            } else {
                i6 = C2074R.drawable.level3_small_strength_arrow;
            }
            return Integer.valueOf(i6);
        }
        if (Intrinsics.areEqual(dir, "4")) {
            if (StringsKt.contains((CharSequence) StringsKt.substringBefore$default(storeUserData.getDeviceName(), "@", (String) null, 2, (Object) null), (CharSequence) "R8", true)) {
                if (isMute) {
                    i5 = C2074R.drawable.level4_arrow_mute;
                } else {
                    i5 = C2074R.drawable.level4_arrow;
                }
            } else if (isMute) {
                i5 = C2074R.drawable.level4_small_strength_arrow_gray;
            } else {
                i5 = C2074R.drawable.level4_small_strength_arrow;
            }
            return Integer.valueOf(i5);
        }
        if (Intrinsics.areEqual(dir, "5")) {
            if (StringsKt.contains((CharSequence) StringsKt.substringBefore$default(storeUserData.getDeviceName(), "@", (String) null, 2, (Object) null), (CharSequence) "R8", true)) {
                if (isMute) {
                    i4 = C2074R.drawable.level5_arrow_mute;
                } else {
                    i4 = C2074R.drawable.level5_arrow;
                }
            } else if (isMute) {
                i4 = C2074R.drawable.level5_small_strength_arrow_gray;
            } else {
                i4 = C2074R.drawable.level5_small_strength_arrow;
            }
            return Integer.valueOf(i4);
        }
        if (Intrinsics.areEqual(dir, "6")) {
            if (isMute) {
                i3 = C2074R.drawable.level6_arrow_mute;
            } else {
                i3 = C2074R.drawable.level6_arrow;
            }
            return Integer.valueOf(i3);
        }
        if (Intrinsics.areEqual(dir, "7")) {
            if (isMute) {
                i2 = C2074R.drawable.level7_arrow_mute;
            } else {
                i2 = C2074R.drawable.level7_arrow;
            }
            return Integer.valueOf(i2);
        }
        if (dir.compareTo("8") < 0) {
            return null;
        }
        if (isMute) {
            i = C2074R.drawable.level8_arrow_mute;
        } else {
            i = C2074R.drawable.level8_arrow;
        }
        return Integer.valueOf(i);
    }

    public final Integer getRSSIBarForR8(String dir, String alertType, boolean isMute) {
        int i;
        int i2;
        int i3;
        int i4;
        int i5;
        int i6;
        int i7;
        int i8;
        int i9;
        Intrinsics.checkNotNullParameter(dir, "dir");
        Intrinsics.checkNotNullParameter(alertType, "alertType");
        if (StringsKt.equals(alertType, "LASER", true)) {
            if (isMute) {
                i9 = C2074R.drawable.level5_bar_mute;
            } else {
                i9 = C2074R.drawable.level5_bar;
            }
            return Integer.valueOf(i9);
        }
        if (dir.compareTo("1") <= 0) {
            if (isMute) {
                i8 = C2074R.drawable.level1_bar_mute;
            } else {
                i8 = C2074R.drawable.level1_bar;
            }
            return Integer.valueOf(i8);
        }
        if (Intrinsics.areEqual(dir, ExifInterface.GPS_MEASUREMENT_2D)) {
            if (isMute) {
                i7 = C2074R.drawable.level1_bar_mute;
            } else {
                i7 = C2074R.drawable.level1_bar;
            }
            return Integer.valueOf(i7);
        }
        if (Intrinsics.areEqual(dir, ExifInterface.GPS_MEASUREMENT_3D)) {
            if (isMute) {
                i6 = C2074R.drawable.level2_bar_mute;
            } else {
                i6 = C2074R.drawable.level2_bar;
            }
            return Integer.valueOf(i6);
        }
        if (Intrinsics.areEqual(dir, "4")) {
            if (isMute) {
                i5 = C2074R.drawable.level2_bar_mute;
            } else {
                i5 = C2074R.drawable.level2_bar;
            }
            return Integer.valueOf(i5);
        }
        if (Intrinsics.areEqual(dir, "5")) {
            if (isMute) {
                i4 = C2074R.drawable.level3_bar_mute;
            } else {
                i4 = C2074R.drawable.level3_bar;
            }
            return Integer.valueOf(i4);
        }
        if (Intrinsics.areEqual(dir, "6")) {
            if (isMute) {
                i3 = C2074R.drawable.level3_bar_mute;
            } else {
                i3 = C2074R.drawable.level3_bar;
            }
            return Integer.valueOf(i3);
        }
        if (Intrinsics.areEqual(dir, "7")) {
            if (isMute) {
                i2 = C2074R.drawable.level4_bar_mute;
            } else {
                i2 = C2074R.drawable.level4_bar;
            }
            return Integer.valueOf(i2);
        }
        if (dir.compareTo("8") < 0) {
            return null;
        }
        if (isMute) {
            i = C2074R.drawable.level5_bar_mute;
        } else {
            i = C2074R.drawable.level5_bar;
        }
        return Integer.valueOf(i);
    }

    public final Integer getRSSIBar(String dir, String alertType, boolean isMute) {
        int i;
        int i2;
        int i3;
        int i4;
        int i5;
        int i6;
        int i7;
        Intrinsics.checkNotNullParameter(dir, "dir");
        Intrinsics.checkNotNullParameter(alertType, "alertType");
        if (StringsKt.equals(alertType, "LASER", true)) {
            if (isMute) {
                i7 = C2074R.drawable.level5_bar_mute;
            } else {
                i7 = C2074R.drawable.level5_bar;
            }
            return Integer.valueOf(i7);
        }
        if (dir.compareTo("1") <= 0) {
            if (isMute) {
                i6 = C2074R.drawable.level1_bar_mute;
            } else {
                i6 = C2074R.drawable.level1_bar;
            }
            return Integer.valueOf(i6);
        }
        if (Intrinsics.areEqual(dir, ExifInterface.GPS_MEASUREMENT_2D)) {
            if (isMute) {
                i5 = C2074R.drawable.level2_bar_mute;
            } else {
                i5 = C2074R.drawable.level2_bar;
            }
            return Integer.valueOf(i5);
        }
        if (Intrinsics.areEqual(dir, ExifInterface.GPS_MEASUREMENT_3D)) {
            if (isMute) {
                i4 = C2074R.drawable.level3_bar_mute;
            } else {
                i4 = C2074R.drawable.level3_bar;
            }
            return Integer.valueOf(i4);
        }
        if (Intrinsics.areEqual(dir, "4")) {
            if (isMute) {
                i3 = C2074R.drawable.level4_bar_mute;
            } else {
                i3 = C2074R.drawable.level4_bar;
            }
            return Integer.valueOf(i3);
        }
        if (Intrinsics.areEqual(dir, "5")) {
            if (isMute) {
                i2 = C2074R.drawable.level5_bar_mute;
            } else {
                i2 = C2074R.drawable.level5_bar;
            }
            return Integer.valueOf(i2);
        }
        if (isMute) {
            i = C2074R.drawable.level5_bar_mute;
        } else {
            i = C2074R.drawable.level5_bar;
        }
        return Integer.valueOf(i);
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:86:0x0125 A[RETURN, SYNTHETIC] */
    /* JADX WARN: Failed to clean up code after switch over string restore
    jadx.core.utils.exceptions.JadxRuntimeException: Can't remove SSA var: r3v4 int, still in use, count: 1, list:
      (r3v4 int) from 0x001a: SWITCH (r3v4 int)
     case 1567: goto B:44:0x009d
     case 1568: goto B:40:0x008f
     case 1569: goto B:36:0x0081
     case 1570: goto B:32:0x0073
     case 1571: goto B:28:0x0065
     case 1572: goto B:24:0x0057
     case 1573: goto B:20:0x0049
     case 1574: goto B:16:0x003b
     case 1575: goto B:12:0x002d
     case 1576: goto B:8:0x001f
     default: goto B:86:0x0125 A[RegionRef:SW:6]
    	at jadx.core.utils.InsnRemover.removeSsaVar(InsnRemover.java:164)
    	at jadx.core.utils.InsnRemover.unbindResult(InsnRemover.java:129)
    	at jadx.core.utils.InsnRemover.unbindInsn(InsnRemover.java:93)
    	at jadx.core.utils.InsnRemover.remove(InsnRemover.java:226)
    	at jadx.core.utils.InsnRemover.remove(InsnRemover.java:215)
    	at jadx.core.dex.visitors.regions.SwitchOverStringVisitor.replaceWithMergedSwitch(SwitchOverStringVisitor.java:355)
    	at jadx.core.dex.visitors.regions.SwitchOverStringVisitor.restoreSwitchOverString(SwitchOverStringVisitor.java:111)
    	at jadx.core.dex.visitors.regions.SwitchOverStringVisitor.visitRegion(SwitchOverStringVisitor.java:72)
    	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseIterativeStepInternal(DepthRegionTraversal.java:140)
    	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseIterative(DepthRegionTraversal.java:47)
    	at jadx.core.dex.visitors.regions.SwitchOverStringVisitor.visit(SwitchOverStringVisitor.java:66)
     */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    public final String getBandFrequency(String alertType, String bandFrequency) {
        Intrinsics.checkNotNullParameter(alertType, "alertType");
        Intrinsics.checkNotNullParameter(bandFrequency, "bandFrequency");
        if (!StringsKt.equals(alertType, "LASER", true)) {
            return (StringsKt.equals(alertType, "RT3", true) || StringsKt.equals(alertType, "RT4", true)) ? "Gatso" : AlertDataConverterKt.formatString(bandFrequency);
        }
        switch (bandFrequency) {
            case "0":
                return "Generic Laser";
            case "1":
                return "LTI20/20";
            case "2":
                return "Stalker";
            case "3":
                return "RIEGL";
            case "4":
                return "Laser Ally";
            case "5":
                return "Kustom";
            case "6":
                return "Atlanta";
            case "7":
                return "Laveg";
            case "8":
                return "SL700";
            case "9":
                return "SCS-102";
            default:
                switch (bandFrequency) {
                    case 1567:
                        if (bandFrequency.equals("10")) {
                            return "TraffiPat";
                        }
                        return "";
                    case 1568:
                        if (bandFrequency.equals("11")) {
                            return "Truspeed S";
                        }
                        return "";
                    case 1569:
                        if (bandFrequency.equals("12")) {
                            return "Stealth";
                        }
                        return "";
                    case 1570:
                        if (bandFrequency.equals("13")) {
                            return "TruCam";
                        }
                        return "";
                    case 1571:
                        if (bandFrequency.equals("14")) {
                            return "XLR";
                        }
                        return "";
                    case 1572:
                        if (bandFrequency.equals("15")) {
                            return "DragonEye Compact";
                        }
                        return "";
                    case 1573:
                        if (bandFrequency.equals("16")) {
                            return "DragonEye Full-Size";
                        }
                        return "";
                    case 1574:
                        if (bandFrequency.equals("17")) {
                            return "PoliScan";
                        }
                        return "";
                    case 1575:
                        if (bandFrequency.equals("18")) {
                            return "Traffistar s350";
                        }
                        return "";
                    case 1576:
                        if (bandFrequency.equals("19")) {
                            return "Vitronic Poliscan";
                        }
                        return "";
                    default:
                        return "";
                }
        }
    }

    public final int getBandColor(String alertType, StoreUserData sharedPrefs, String rssiLevel) {
        Intrinsics.checkNotNullParameter(alertType, "alertType");
        Intrinsics.checkNotNullParameter(sharedPrefs, "sharedPrefs");
        Intrinsics.checkNotNullParameter(rssiLevel, "rssiLevel");
        if (StringsKt.equals(alertType, "K", true)) {
            return getBColor(sharedPrefs.getKBandColor(), sharedPrefs.getKArrowColor(), rssiLevel);
        }
        if (StringsKt.equals(alertType, "KA", true)) {
            return getBColor(sharedPrefs.getKaBandColor(), sharedPrefs.getKaArrowColor(), rssiLevel);
        }
        if (StringsKt.equals(alertType, "X", true)) {
            return getBColor(sharedPrefs.getXBandColor(), sharedPrefs.getXArrowColor(), rssiLevel);
        }
        if (StringsKt.equals(alertType, "MRCD", true) || StringsKt.equals(alertType, "MRCT", true)) {
            return getBColor(sharedPrefs.getMrcdBandColor(), sharedPrefs.getMrcdArrowColor(), rssiLevel);
        }
        if (StringsKt.equals(alertType, "RT3", true) || StringsKt.equals(alertType, "RT4", true)) {
            return getBColor(sharedPrefs.getGatsoBandColor(), sharedPrefs.getGatsoArrowColor(), rssiLevel);
        }
        if (StringsKt.equals(alertType, "K POP", true)) {
            return getBColor(sharedPrefs.getKBandColor(), sharedPrefs.getKArrowColor(), rssiLevel);
        }
        if (StringsKt.equals(alertType, "Ka POP", true)) {
            return getBColor(sharedPrefs.getKaBandColor(), sharedPrefs.getKaArrowColor(), rssiLevel);
        }
        if (StringsKt.contains((CharSequence) alertType, (CharSequence) "POP", true)) {
            return getBColor(sharedPrefs.getKaBandColor(), sharedPrefs.getKArrowColor(), rssiLevel);
        }
        return C2074R.color.red;
    }

    public final int getArrowColor(String alertType, StoreUserData sharedPrefs) {
        Intrinsics.checkNotNullParameter(alertType, "alertType");
        Intrinsics.checkNotNullParameter(sharedPrefs, "sharedPrefs");
        if (StringsKt.equals(alertType, "K", true)) {
            return getColor(sharedPrefs.getKArrowColor());
        }
        if (StringsKt.equals(alertType, "KA", true)) {
            return getColor(sharedPrefs.getKaArrowColor());
        }
        if (StringsKt.equals(alertType, "X", true)) {
            return getColor(sharedPrefs.getXArrowColor());
        }
        if (StringsKt.equals(alertType, "MRCD", true) || StringsKt.equals(alertType, "MRCT", true)) {
            return getColor(sharedPrefs.getMrcdArrowColor());
        }
        if (StringsKt.equals(alertType, "RT3", true) || StringsKt.equals(alertType, "RT4", true)) {
            return getColor(sharedPrefs.getGatsoArrowColor());
        }
        if (StringsKt.equals(alertType, "K POP", true)) {
            return getColor(sharedPrefs.getKArrowColor());
        }
        if (StringsKt.equals(alertType, "Ka POP", true)) {
            return getColor(sharedPrefs.getKaArrowColor());
        }
        if (StringsKt.contains((CharSequence) alertType, (CharSequence) "POP", true)) {
            return getColor(sharedPrefs.getKaArrowColor());
        }
        return C2074R.color.red;
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    private final int getColor(String color) {
        switch (color.hashCode()) {
            case -1924984242:
                if (color.equals("Orange")) {
                    return C2074R.color.orange;
                }
                break;
            case -1732476769:
                if (color.equals("Violet")) {
                    return C2074R.color.violet;
                }
                break;
            case -1650372460:
                if (color.equals("Yellow")) {
                    return C2074R.color.yellow;
                }
                break;
            case 82033:
                if (color.equals("Red")) {
                    return C2074R.color.red;
                }
                break;
            case 2073722:
                if (color.equals("Blue")) {
                    return C2074R.color.blue;
                }
                break;
            case 69066467:
                if (color.equals("Green")) {
                    return C2074R.color.green;
                }
                break;
            case 83549193:
                if (color.equals("White")) {
                    return C2074R.color.white;
                }
                break;
        }
        return C2074R.color.red;
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    private final int getBColor(String bandColor, String arrowColor, String rssiLevel) {
        switch (bandColor.hashCode()) {
            case -1924984242:
                if (bandColor.equals("Orange")) {
                    return C2074R.color.orange;
                }
                break;
            case -1818600760:
                if (bandColor.equals("Signal")) {
                    return getSignalColors(rssiLevel);
                }
                break;
            case -1732476769:
                if (bandColor.equals("Violet")) {
                    return C2074R.color.violet;
                }
                break;
            case -1650372460:
                if (bandColor.equals("Yellow")) {
                    return C2074R.color.yellow;
                }
                break;
            case 82033:
                if (bandColor.equals("Red")) {
                    return C2074R.color.red;
                }
                break;
            case 2073722:
                if (bandColor.equals("Blue")) {
                    return C2074R.color.blue;
                }
                break;
            case 63538153:
                if (bandColor.equals("Arrow")) {
                    return getColor(arrowColor);
                }
                break;
            case 69066467:
                if (bandColor.equals("Green")) {
                    return C2074R.color.green;
                }
                break;
            case 83549193:
                if (bandColor.equals("White")) {
                    return C2074R.color.white;
                }
                break;
        }
        return C2074R.color.red;
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    private final int getSignalColors(String rssiLevel) {
        switch (rssiLevel.hashCode()) {
            case ConstraintLayout.LayoutParams.Table.LAYOUT_EDITOR_ABSOLUTEX /* 49 */:
                if (rssiLevel.equals("1")) {
                    return C2074R.color.rssi_1;
                }
                break;
            case 50:
                if (rssiLevel.equals(ExifInterface.GPS_MEASUREMENT_2D)) {
                    return C2074R.color.rssi_2;
                }
                break;
            case ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_TAG /* 51 */:
                if (rssiLevel.equals(ExifInterface.GPS_MEASUREMENT_3D)) {
                    return C2074R.color.rssi_3;
                }
                break;
            case ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_BASELINE_TO_TOP_OF /* 52 */:
                if (rssiLevel.equals("4")) {
                    return C2074R.color.rssi_4;
                }
                break;
            case ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_BASELINE_TO_BOTTOM_OF /* 53 */:
                if (rssiLevel.equals("5")) {
                    return C2074R.color.rssi_5;
                }
                break;
            case ConstraintLayout.LayoutParams.Table.LAYOUT_MARGIN_BASELINE /* 54 */:
                if (rssiLevel.equals("6")) {
                    return C2074R.color.rssi_6;
                }
                break;
            case ConstraintLayout.LayoutParams.Table.LAYOUT_GONE_MARGIN_BASELINE /* 55 */:
                if (rssiLevel.equals("7")) {
                    return C2074R.color.rssi_7;
                }
                break;
            case 56:
                if (rssiLevel.equals("8")) {
                    return C2074R.color.rssi_8;
                }
                break;
        }
        return C2074R.color.red;
    }

    public final ETCDataModel parseETCData(String characteristicData) {
        ETCDataModel eTCDataModel;
        Intrinsics.checkNotNullParameter(characteristicData, "characteristicData");
        List listSplit$default = StringsKt.split$default((CharSequence) characteristicData, new String[]{"&"}, false, 0, 6, (Object) null);
        ETCDataModel eTCDataModel2 = eTCDataModel;
        ETCDataModel eTCDataModel3 = new ETCDataModel(null, null, null, null, null, null, null, null, null, null, null, null, 4095, null);
        int i = 0;
        for (Object obj : listSplit$default) {
            int i2 = i + 1;
            if (i < 0) {
                CollectionsKt.throwIndexOverflow();
            }
            String str = (String) obj;
            switch (i) {
                case 0:
                    eTCDataModel = eTCDataModel2;
                    eTCDataModel.setVoltage(str);
                    break;
                case 1:
                    eTCDataModel = eTCDataModel2;
                    if (!Intrinsics.areEqual(str, "0")) {
                        List listSplit$default2 = StringsKt.split$default((CharSequence) str, new String[]{","}, false, 0, 6, (Object) null);
                        eTCDataModel.setPoiType((String) listSplit$default2.get(0));
                        eTCDataModel.setPoiDistance((String) listSplit$default2.get(1));
                        eTCDataModel.setPoiLimitSpeed((String) listSplit$default2.get(2));
                    }
                    break;
                case 2:
                    eTCDataModel = eTCDataModel2;
                    if (!Intrinsics.areEqual(str, "0")) {
                        List listSplit$default3 = StringsKt.split$default((CharSequence) str, new String[]{","}, false, 0, 6, (Object) null);
                        eTCDataModel.setGpsDirection((String) listSplit$default3.get(0));
                        eTCDataModel.setCurrentSpeed((String) listSplit$default3.get(1));
                        eTCDataModel.setAltitude((String) listSplit$default3.get(2));
                        eTCDataModel.setGpsStatus((String) listSplit$default3.get(3));
                    }
                    break;
                case 3:
                    eTCDataModel = eTCDataModel2;
                    eTCDataModel.setWarning(str);
                    break;
                case 4:
                    eTCDataModel = eTCDataModel2;
                    eTCDataModel.setScanDoneCount(str);
                    break;
                case 5:
                    eTCDataModel = eTCDataModel2;
                    eTCDataModel.setRadarWiFiStatus(str);
                    break;
                case 6:
                    eTCDataModel = eTCDataModel2;
                    eTCDataModel.setAutoBrightnessStatus(str);
                    break;
                default:
                    eTCDataModel = eTCDataModel2;
                    break;
            }
            eTCDataModel2 = eTCDataModel;
            i = i2;
        }
        return eTCDataModel2;
    }

    public final HashMap<String, MarkerAndPoiDataModel> parsePoiData(String str) {
        Intrinsics.checkNotNullParameter(str, "str");
        HashMap<String, MarkerAndPoiDataModel> map = new HashMap<>();
        if (!Intrinsics.areEqual(str, "0000")) {
            int iIdentifiedPacketDataLength = identifiedPacketDataLength(findPoiType(str));
            ArrayList<String> arrayList = new ArrayList();
            String str2 = str;
            int i = 0;
            int i2 = 0;
            String str3 = "";
            while (i < str2.length()) {
                char cCharAt = str2.charAt(i);
                int i3 = i2 + 1;
                if (i2 < iIdentifiedPacketDataLength) {
                    str3 = str3 + cCharAt;
                    if (i2 == StringsKt.getLastIndex(str2)) {
                        arrayList.add(str3);
                    }
                } else {
                    try {
                        String strSubstring = str.substring(i2, i2 + 2);
                        Intrinsics.checkNotNullExpressionValue(strSubstring, "substring(...)");
                        AlertDataConverter alertDataConverter = INSTANCE;
                        iIdentifiedPacketDataLength = alertDataConverter.identifiedPacketDataLength(alertDataConverter.findPoiType(strSubstring)) + i2;
                        arrayList.add(str3);
                        try {
                            str3 = "" + cCharAt;
                        } catch (Exception unused) {
                            str3 = "";
                        }
                    } catch (Exception unused2) {
                    }
                }
                i++;
                i2 = i3;
            }
            try {
                for (String str4 : arrayList) {
                    AlertDataConverter alertDataConverter2 = INSTANCE;
                    MarkerTypeEnum markerTypeEnumFindPoiType = alertDataConverter2.findPoiType(str4);
                    if (markerTypeEnumFindPoiType != MarkerTypeEnum.NONE) {
                        map.putAll(alertDataConverter2.spitePoiData(str4, markerTypeEnumFindPoiType));
                    }
                }
            } catch (Exception unused3) {
            }
        }
        return map;
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    private final MarkerTypeEnum findPoiType(String hexString) {
        String strSubstring = hexString.substring(0, 2);
        Intrinsics.checkNotNullExpressionValue(strSubstring, "substring(...)");
        switch (strSubstring.hashCode()) {
            case 1536:
                if (strSubstring.equals("00")) {
                    return MarkerTypeEnum.NONE;
                }
                break;
            case 1537:
                if (strSubstring.equals("01")) {
                    return MarkerTypeEnum.SPEED_CAMERA;
                }
                break;
            case 1538:
                if (strSubstring.equals("02")) {
                    return MarkerTypeEnum.RED_LIGHT_CAMERA;
                }
                break;
            case 1539:
                if (strSubstring.equals("03")) {
                    return MarkerTypeEnum.USER_MARK;
                }
                break;
        }
        return MarkerTypeEnum.NONE;
    }

    private final int identifiedPacketDataLength(MarkerTypeEnum type) {
        int i = WhenMappings.$EnumSwitchMapping$0[type.ordinal()];
        if (i == 1) {
            return 0;
        }
        if (i == 2) {
            return 26;
        }
        if (i == 3) {
            return 24;
        }
        if (i == 4) {
            return 20;
        }
        throw new NoWhenBranchMatchedException();
    }

    private final HashMap<String, MarkerAndPoiDataModel> spitePoiData(String packet, MarkerTypeEnum type) {
        int i = WhenMappings.$EnumSwitchMapping$0[type.ordinal()];
        if (i == 1) {
            return new HashMap<>();
        }
        if (i == 2) {
            return parsingPacket(packet, type);
        }
        if (i == 3) {
            return parsingPacket(packet, type);
        }
        if (i == 4) {
            return parsingPacket(packet, type);
        }
        return new HashMap<>();
    }

    private final HashMap<String, MarkerAndPoiDataModel> parsingPacket(String str, MarkerTypeEnum markerType) {
        MarkerAndPoiDataModel markerAndPoiDataModel = new MarkerAndPoiDataModel(null, 0, null, null, null, null, null, 127, null);
        markerAndPoiDataModel.setMarkerType(markerType);
        Intrinsics.checkNotNullExpressionValue(str.substring(2, 4), "substring(...)");
        String strSubstring = str.substring(4, 12);
        Intrinsics.checkNotNullExpressionValue(strSubstring, "substring(...)");
        String strSubstring2 = str.substring(12, 20);
        Intrinsics.checkNotNullExpressionValue(strSubstring2, "substring(...)");
        String strSubstring3 = str.substring(4, 12);
        Intrinsics.checkNotNullExpressionValue(strSubstring3, "substring(...)");
        float fByteArrayToFloat = byteArrayToFloat(hexStringToByteArray(strSubstring3));
        String strSubstring4 = str.substring(12, 20);
        Intrinsics.checkNotNullExpressionValue(strSubstring4, "substring(...)");
        float fByteArrayToFloat2 = byteArrayToFloat(hexStringToByteArray(strSubstring4));
        markerAndPoiDataModel.setHexStringLat(strSubstring);
        markerAndPoiDataModel.setHexStringLng(strSubstring2);
        double d = fByteArrayToFloat;
        double d2 = fByteArrayToFloat2;
        markerAndPoiDataModel.setLatLng(new LatLng(d, d2));
        if (markerType == MarkerTypeEnum.SPEED_CAMERA || markerType == MarkerTypeEnum.RED_LIGHT_CAMERA) {
            String strSubstring5 = str.substring(20, 24);
            Intrinsics.checkNotNullExpressionValue(strSubstring5, "substring(...)");
            markerAndPoiDataModel.setAngle(Integer.valueOf(byteArrayToShort(hexStringAngleToByteArray(strSubstring5))));
        }
        if (markerType == MarkerTypeEnum.SPEED_CAMERA) {
            String strSubstring6 = str.substring(24, 26);
            Intrinsics.checkNotNullExpressionValue(strSubstring6, "substring(...)");
            markerAndPoiDataModel.setSpeedLimit(Integer.valueOf(new BigInteger(hexStringSpeedLimitToByteArray(strSubstring6)).intValue()));
        }
        HashMap<String, MarkerAndPoiDataModel> map = new HashMap<>();
        StringBuilder sbAppend = new StringBuilder().append(getTypeMarkerCh(markerType)).append('_');
        String str2 = String.format("%.6f", Arrays.copyOf(new Object[]{Double.valueOf(d)}, 1));
        Intrinsics.checkNotNullExpressionValue(str2, "format(...)");
        StringBuilder sbAppend2 = sbAppend.append(str2).append(',');
        String str3 = String.format("%.6f", Arrays.copyOf(new Object[]{Double.valueOf(d2)}, 1));
        Intrinsics.checkNotNullExpressionValue(str3, "format(...)");
        map.put(sbAppend2.append(str3).toString(), markerAndPoiDataModel);
        return map;
    }

    private final String getTypeMarkerCh(MarkerTypeEnum type) {
        int i = WhenMappings.$EnumSwitchMapping$0[type.ordinal()];
        if (i == 1) {
            return "n";
        }
        if (i == 2) {
            return "s";
        }
        if (i != 3) {
            return i != 4 ? "n" : "u";
        }
        return "r";
    }

    private final float byteArrayToFloat(byte[] byteArray) {
        ByteBuffer byteBufferWrap = ByteBuffer.wrap(byteArray);
        byteBufferWrap.order(ByteOrder.BIG_ENDIAN);
        return byteBufferWrap.getFloat();
    }

    private final short byteArrayToShort(byte[] byteArray) {
        ByteBuffer byteBufferWrap = ByteBuffer.wrap(byteArray);
        byteBufferWrap.order(ByteOrder.BIG_ENDIAN);
        return byteBufferWrap.getShort();
    }

    private final short byteSpeedLimitToShort(byte[] byteArray) {
        ByteBuffer byteBufferWrap = ByteBuffer.wrap(byteArray);
        byteBufferWrap.order(ByteOrder.LITTLE_ENDIAN);
        return byteBufferWrap.getShort();
    }

    private final byte[] hexStringToByteArray(String hexString) {
        if (hexString.length() != 8) {
            throw new IllegalArgumentException("Hex string must be exactly 8 characters long");
        }
        byte[] bArr = new byte[4];
        for (int i = 0; i < 4; i++) {
            int i2 = i * 2;
            String strSubstring = hexString.substring(i2, i2 + 2);
            Intrinsics.checkNotNullExpressionValue(strSubstring, "substring(...)");
            bArr[i] = (byte) Integer.parseInt(strSubstring, CharsKt.checkRadix(16));
        }
        return bArr;
    }

    private final byte[] hexStringAngleToByteArray(String hexString) {
        if (hexString.length() != 4) {
            throw new IllegalArgumentException("Hex string must be exactly 4 characters long");
        }
        byte[] bArr = new byte[2];
        for (int i = 0; i < 2; i++) {
            int i2 = i * 2;
            String strSubstring = hexString.substring(i2, i2 + 2);
            Intrinsics.checkNotNullExpressionValue(strSubstring, "substring(...)");
            bArr[i] = (byte) Integer.parseInt(strSubstring, CharsKt.checkRadix(16));
        }
        return bArr;
    }

    private final byte[] hexStringSpeedLimitToByteArray(String hexString) {
        if (hexString.length() != 2) {
            throw new IllegalArgumentException("Hex string must be exactly 2 characters long");
        }
        String strSubstring = hexString.substring(0, 2);
        Intrinsics.checkNotNullExpressionValue(strSubstring, "substring(...)");
        return new byte[]{(byte) Integer.parseInt(strSubstring, CharsKt.checkRadix(16))};
    }

    public final String getDirection(String direction, Context context) {
        Intrinsics.checkNotNullParameter(direction, "direction");
        Intrinsics.checkNotNullParameter(context, "context");
        int iHashCode = direction.hashCode();
        if (iHashCode != 69) {
            if (iHashCode != 78) {
                if (iHashCode != 83) {
                    if (iHashCode != 87) {
                        if (iHashCode != 2487) {
                            if (iHashCode != 2505) {
                                if (iHashCode != 2642) {
                                    if (iHashCode == 2660 && direction.equals("SW")) {
                                        String string = context.getString(C2074R.string.f405sw);
                                        Intrinsics.checkNotNullExpressionValue(string, "getString(...)");
                                        return string;
                                    }
                                } else if (direction.equals("SE")) {
                                    String string2 = context.getString(C2074R.string.f404se);
                                    Intrinsics.checkNotNullExpressionValue(string2, "getString(...)");
                                    return string2;
                                }
                            } else if (direction.equals("NW")) {
                                String string3 = context.getString(C2074R.string.f402nw);
                                Intrinsics.checkNotNullExpressionValue(string3, "getString(...)");
                                return string3;
                            }
                        } else if (direction.equals("NE")) {
                            String string4 = context.getString(C2074R.string.f400ne);
                            Intrinsics.checkNotNullExpressionValue(string4, "getString(...)");
                            return string4;
                        }
                    } else if (direction.equals(ExifInterface.LONGITUDE_WEST)) {
                        String string5 = context.getString(C2074R.string.f406w);
                        Intrinsics.checkNotNullExpressionValue(string5, "getString(...)");
                        return string5;
                    }
                } else if (direction.equals(ExifInterface.LATITUDE_SOUTH)) {
                    String string6 = context.getString(C2074R.string.f403s);
                    Intrinsics.checkNotNullExpressionValue(string6, "getString(...)");
                    return string6;
                }
            } else if (direction.equals("N")) {
                String string7 = context.getString(C2074R.string.f399n);
                Intrinsics.checkNotNullExpressionValue(string7, "getString(...)");
                return string7;
            }
        } else if (direction.equals(ExifInterface.LONGITUDE_EAST)) {
            String string8 = context.getString(C2074R.string.f397e);
            Intrinsics.checkNotNullExpressionValue(string8, "getString(...)");
            return string8;
        }
        return "";
    }

    public final int getMarkerIcon(Context context, MarkerTypeEnum markerType) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(markerType, "markerType");
        SharedPreferences sharedPreferences = context.getSharedPreferences(StoreUserData.INSTANCE.getPrefName(context), 0);
        Intrinsics.checkNotNullExpressionValue(sharedPreferences, "getSharedPreferences(...)");
        StoreUserData storeUserData = new StoreUserData(sharedPreferences);
        boolean zIsMapLight = storeUserData.isMapLight();
        Log.e("Map ligt", String.valueOf(storeUserData.isMapLight()));
        int i = WhenMappings.$EnumSwitchMapping$0[markerType.ordinal()];
        if (i == 2) {
            return zIsMapLight ? C2074R.drawable.speed_camera_light : C2074R.drawable.speed_camera;
        }
        if (i == 3) {
            return zIsMapLight ? C2074R.drawable.redlight_camera_light : C2074R.drawable.redlight_camera;
        }
        if (i != 4) {
            return zIsMapLight ? C2074R.drawable.speed_camera_light : C2074R.drawable.speed_camera;
        }
        return zIsMapLight ? C2074R.drawable.user_marker_light : C2074R.drawable.user_marker;
    }

    public final int getPoiAlertIcon(String markerType) {
        Intrinsics.checkNotNullParameter(markerType, "markerType");
        if (Intrinsics.areEqual(markerType, Constant.INSTANCE.getSPEEDCAM())) {
            return C2074R.drawable.speed_camera;
        }
        if (Intrinsics.areEqual(markerType, Constant.INSTANCE.getREDLIGHT())) {
            return C2074R.drawable.redlight_camera;
        }
        return Intrinsics.areEqual(markerType, Constant.INSTANCE.getUSERMARK()) ? C2074R.drawable.user_marker : C2074R.drawable.user_marker;
    }

    public final String getPoiAlertType(String markerType) {
        if (Intrinsics.areEqual(markerType, Constant.INSTANCE.getSPEEDCAM())) {
            return Constant.INSTANCE.getSPEEDCAM();
        }
        if (Intrinsics.areEqual(markerType, Constant.INSTANCE.getREDLIGHT())) {
            return Constant.INSTANCE.getREDLIGHT();
        }
        return Intrinsics.areEqual(markerType, Constant.INSTANCE.getUSERMARK()) ? Constant.INSTANCE.getUSERMARK() : Constant.INSTANCE.getNONE();
    }

    public final int getPoiAlertTypeStr(String markerType) {
        Intrinsics.checkNotNullParameter(markerType, "markerType");
        if (Intrinsics.areEqual(markerType, Constant.INSTANCE.getSPEEDCAM())) {
            return C2074R.string.speed_camera;
        }
        if (Intrinsics.areEqual(markerType, Constant.INSTANCE.getREDLIGHT())) {
            return C2074R.string.red_light_camera;
        }
        return Intrinsics.areEqual(markerType, Constant.INSTANCE.getUSERMARK()) ? C2074R.string.user_marker : C2074R.string.speed_camera;
    }

    public final String getPoiAlertTypeStrAuto(String markerType) {
        Intrinsics.checkNotNullParameter(markerType, "markerType");
        if (Intrinsics.areEqual(markerType, Constant.INSTANCE.getSPEEDCAM())) {
            return "Speed Camera";
        }
        if (Intrinsics.areEqual(markerType, Constant.INSTANCE.getREDLIGHT())) {
            return "Redlight Camera";
        }
        return Intrinsics.areEqual(markerType, Constant.INSTANCE.getUSERMARK()) ? "User Mark" : "Speed Camera";
    }

    public final Integer getRSSIArrowforAuto(String dir, String alertType, boolean isMute, Context context) {
        int i;
        int i2;
        int i3;
        int i4;
        int i5;
        int i6;
        int i7;
        int i8;
        int i9;
        Intrinsics.checkNotNullParameter(dir, "dir");
        Intrinsics.checkNotNullParameter(alertType, "alertType");
        Intrinsics.checkNotNullParameter(context, "context");
        SharedPreferences sharedPreferences = context.getSharedPreferences(StoreUserData.INSTANCE.getPrefName(context), 0);
        Intrinsics.checkNotNullExpressionValue(sharedPreferences, "getSharedPreferences(...)");
        StoreUserData storeUserData = new StoreUserData(sharedPreferences);
        if (StringsKt.equals(alertType, "LASER", true)) {
            if (StringsKt.contains((CharSequence) StringsKt.substringBefore$default(storeUserData.getDeviceName(), "@", (String) null, 2, (Object) null), (CharSequence) "R8", true)) {
                if (isMute) {
                    i9 = C2074R.drawable.level8_arrow_mute;
                } else {
                    i9 = C2074R.drawable.level8_arrow_auto;
                }
            } else if (isMute) {
                i9 = C2074R.drawable.level5_small_strength_arrow_gray;
            } else {
                i9 = C2074R.drawable.level5_small_strength_arrow;
            }
            return Integer.valueOf(i9);
        }
        if (dir.compareTo("1") <= 0) {
            if (StringsKt.contains((CharSequence) StringsKt.substringBefore$default(storeUserData.getDeviceName(), "@", (String) null, 2, (Object) null), (CharSequence) "R8", true)) {
                if (isMute) {
                    i8 = C2074R.drawable.level1_arrow_mute;
                } else {
                    i8 = C2074R.drawable.level1_arrow_auto;
                }
            } else if (isMute) {
                i8 = C2074R.drawable.level1_small_strength_arrow_gray;
            } else {
                i8 = C2074R.drawable.level1_small_strength_arrow;
            }
            return Integer.valueOf(i8);
        }
        if (Intrinsics.areEqual(dir, ExifInterface.GPS_MEASUREMENT_2D)) {
            if (StringsKt.contains((CharSequence) StringsKt.substringBefore$default(storeUserData.getDeviceName(), "@", (String) null, 2, (Object) null), (CharSequence) "R8", true)) {
                if (isMute) {
                    i7 = C2074R.drawable.level2_arrow_mute;
                } else {
                    i7 = C2074R.drawable.level2_arrow_auto;
                }
            } else if (isMute) {
                i7 = C2074R.drawable.level2_small_strength_arrow_gray;
            } else {
                i7 = C2074R.drawable.level2_small_strength_arrow;
            }
            return Integer.valueOf(i7);
        }
        if (Intrinsics.areEqual(dir, ExifInterface.GPS_MEASUREMENT_3D)) {
            if (StringsKt.contains((CharSequence) StringsKt.substringBefore$default(storeUserData.getDeviceName(), "@", (String) null, 2, (Object) null), (CharSequence) "R8", true)) {
                if (isMute) {
                    i6 = C2074R.drawable.level3_arrow_mute;
                } else {
                    i6 = C2074R.drawable.level3_arrow_auto;
                }
            } else if (isMute) {
                i6 = C2074R.drawable.level3_small_strength_arrow_gray;
            } else {
                i6 = C2074R.drawable.level3_small_strength_arrow;
            }
            return Integer.valueOf(i6);
        }
        if (Intrinsics.areEqual(dir, "4")) {
            if (StringsKt.contains((CharSequence) StringsKt.substringBefore$default(storeUserData.getDeviceName(), "@", (String) null, 2, (Object) null), (CharSequence) "R8", true)) {
                if (isMute) {
                    i5 = C2074R.drawable.level4_arrow_mute;
                } else {
                    i5 = C2074R.drawable.level4_arrow_auto;
                }
            } else if (isMute) {
                i5 = C2074R.drawable.level4_small_strength_arrow_gray;
            } else {
                i5 = C2074R.drawable.level4_small_strength_arrow;
            }
            return Integer.valueOf(i5);
        }
        if (Intrinsics.areEqual(dir, "5")) {
            if (StringsKt.contains((CharSequence) StringsKt.substringBefore$default(storeUserData.getDeviceName(), "@", (String) null, 2, (Object) null), (CharSequence) "R8", true)) {
                if (isMute) {
                    i4 = C2074R.drawable.level5_arrow_mute;
                } else {
                    i4 = C2074R.drawable.level5_arrow_auto;
                }
            } else if (isMute) {
                i4 = C2074R.drawable.level5_small_strength_arrow_gray;
            } else {
                i4 = C2074R.drawable.level5_small_strength_arrow;
            }
            return Integer.valueOf(i4);
        }
        if (Intrinsics.areEqual(dir, "6")) {
            if (isMute) {
                i3 = C2074R.drawable.level6_arrow_mute;
            } else {
                i3 = C2074R.drawable.level6_arrow_auto;
            }
            return Integer.valueOf(i3);
        }
        if (Intrinsics.areEqual(dir, "7")) {
            if (isMute) {
                i2 = C2074R.drawable.level7_arrow_mute;
            } else {
                i2 = C2074R.drawable.level7_arrow;
            }
            return Integer.valueOf(i2);
        }
        if (dir.compareTo("8") < 0) {
            return null;
        }
        if (isMute) {
            i = C2074R.drawable.level8_arrow_mute;
        } else {
            i = C2074R.drawable.level8_arrow_auto;
        }
        return Integer.valueOf(i);
    }
}
