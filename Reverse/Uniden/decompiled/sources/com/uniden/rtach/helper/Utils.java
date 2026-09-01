package com.uniden.rtach.helper;

import android.R;
import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.net.Uri;
import android.net.wifi.WifiManager;
import android.os.Handler;
import android.os.Looper;
import android.text.SpannableStringBuilder;
import android.text.Spanned;
import android.text.style.BulletSpan;
import android.text.style.ForegroundColorSpan;
import android.text.style.RelativeSizeSpan;
import android.text.style.TabStopSpan;
import android.text.style.TextAppearanceSpan;
import android.util.Log;
import android.widget.Toast;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.core.content.ContextCompat;
import androidx.core.content.FileProvider;
import androidx.exifinterface.media.ExifInterface;
import com.google.android.gms.maps.model.BitmapDescriptor;
import com.google.android.gms.maps.model.BitmapDescriptorFactory;
import com.google.android.gms.maps.model.LatLng;
import com.google.android.gms.measurement.api.AppMeasurementSdk;
import com.google.firebase.sessions.settings.RemoteSettings;
import com.uniden.rtach.data.model.RadarVersionModel;
import com.uniden.rtach.data.model.VersionUpdateModel;
import com.uniden.rtach.data.sharedpref.StoreUserData;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.StringCompanionObject;
import kotlin.text.CharsKt;
import kotlin.text.Charsets;
import kotlin.text.StringsKt;
import kotlinx.coroutines.BuildersKt;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.Dispatchers;

/* JADX INFO: compiled from: Utils.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000~\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0010\u0006\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\u0018\u00002\u00020\u0001B\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007J\u000e\u0010\b\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007J\u000e\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\fJ\u000e\u0010\r\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\fJ\u0010\u0010\u000e\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007H\u0002J\u0010\u0010\u000f\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007H\u0002J\u000e\u0010\u0010\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007J\u000e\u0010\u0011\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007J\u0016\u0010\u0012\u001a\u00020\u00052\u0006\u0010\u0013\u001a\u00020\u00142\u0006\u0010\u0015\u001a\u00020\u0014J\u0016\u0010\u0016\u001a\u00020\u00052\u0006\u0010\u0013\u001a\u00020\u00142\u0006\u0010\u0015\u001a\u00020\u0014J\u000e\u0010\u0017\u001a\u00020\u00182\u0006\u0010\u0019\u001a\u00020\u0018J\u000e\u0010\u001a\u001a\u00020\u001b2\u0006\u0010\u0006\u001a\u00020\u0007J\u001a\u0010\u001c\u001a\u0004\u0018\u00010\u001d2\u0006\u0010\u0006\u001a\u00020\u00072\b\u0010\u001e\u001a\u0004\u0018\u00010\u001fJ\u000e\u0010 \u001a\u00020!2\u0006\u0010\u0006\u001a\u00020\u0007J\u000e\u0010\"\u001a\u00020\u00052\u0006\u0010#\u001a\u00020\u0005J\u000e\u0010$\u001a\u00020\u00052\u0006\u0010%\u001a\u00020\u0005J\u000e\u0010&\u001a\u00020\u00052\u0006\u0010'\u001a\u00020(J&\u0010)\u001a\u0012\u0012\u0004\u0012\u00020+0,j\b\u0012\u0004\u0012\u00020+`*2\u0006\u0010\u0006\u001a\u00020\u0007H\u0086@¢\u0006\u0002\u0010-J\u000e\u0010.\u001a\u00020\u00052\u0006\u0010/\u001a\u00020\u0005J\u000e\u00100\u001a\u00020\u00052\u0006\u00101\u001a\u00020\u0005J\u001c\u00102\u001a\u0002032\f\u00104\u001a\b\u0012\u0004\u0012\u00020\u0005052\u0006\u0010\u0006\u001a\u00020\u0007J\u000e\u00106\u001a\u00020\u001b2\u0006\u0010\u0006\u001a\u00020\u0007J\u000e\u00107\u001a\u00020\u001b2\u0006\u0010\u0006\u001a\u00020\u0007J\u000e\u00108\u001a\u00020\n2\u0006\u00109\u001a\u00020:J\u000e\u0010;\u001a\u00020\u00052\u0006\u0010\u000b\u001a\u00020\u0007¨\u0006<"}, m491d2 = {"Lcom/uniden/rtach/helper/Utils;", "", "<init>", "()V", "assetJSONFile", "", "context", "Landroid/content/Context;", "assetCategoryTableJonFile", "isNetworkAvailable", "", "activity", "Landroid/app/Activity;", "isWiFiOn", "getFileName", "getCategoryFileName", "getFirmwareFilePath", "getTestFirmwareFilePath", "convertTo4ByteString", "latitude", "", "longitude", "convertToHexString", "keepFiveDigitsAfterPoint", "Lcom/google/android/gms/maps/model/LatLng;", "latLng", "getFirmwareUrlAndAP", "", "convertImageBitmapDescriptor", "Lcom/google/android/gms/maps/model/BitmapDescriptor;", "markerTypeEnum", "Lcom/uniden/rtach/helper/MarkerTypeEnum;", "checkIfUpdateAvailable", "Lcom/uniden/rtach/data/model/VersionUpdateModel;", "getFirmwareVersionFormat", "deviceName", "getFirmwareURL", AppMeasurementSdk.ConditionalUserProperty.NAME, "convertToDecimal", "frequency", "", "getFirmwareVersions", "Lkotlin/collections/ArrayList;", "Lcom/uniden/rtach/data/model/RadarVersionModel;", "Ljava/util/ArrayList;", "(Landroid/content/Context;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "getUpdatingFileName", "updatingFileName", "getErrorMessageWiFiUpdate", "code", "bulletPointList", "Landroid/text/Spanned;", "strings", "", "shareLogFile", "clearLogFile", "isFileLargerThan1MB", "file", "Ljava/io/File;", "getFirmwareUpdateURL", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class Utils {
    private final String getCategoryFileName(Context context) {
        return "Category.json";
    }

    private final String getFileName(Context context) {
        return "R.json";
    }

    public final String assetJSONFile(Context context) throws IOException {
        Intrinsics.checkNotNullParameter(context, "context");
        InputStream inputStreamOpen = context.getAssets().open(getFileName(context));
        Intrinsics.checkNotNullExpressionValue(inputStreamOpen, "open(...)");
        byte[] bArr = new byte[inputStreamOpen.available()];
        inputStreamOpen.read(bArr);
        inputStreamOpen.close();
        return new String(bArr, Charsets.UTF_8);
    }

    public final String assetCategoryTableJonFile(Context context) throws IOException {
        Intrinsics.checkNotNullParameter(context, "context");
        InputStream inputStreamOpen = context.getAssets().open(getCategoryFileName(context));
        Intrinsics.checkNotNullExpressionValue(inputStreamOpen, "open(...)");
        byte[] bArr = new byte[inputStreamOpen.available()];
        inputStreamOpen.read(bArr);
        inputStreamOpen.close();
        return new String(bArr, Charsets.UTF_8);
    }

    public final boolean isNetworkAvailable(Activity activity) {
        Intrinsics.checkNotNullParameter(activity, "activity");
        Object systemService = activity.getSystemService("connectivity");
        Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.net.ConnectivityManager");
        NetworkInfo activeNetworkInfo = ((ConnectivityManager) systemService).getActiveNetworkInfo();
        return activeNetworkInfo != null && activeNetworkInfo.isConnected();
    }

    public final boolean isWiFiOn(Activity activity) {
        Intrinsics.checkNotNullParameter(activity, "activity");
        WifiManager wifiManager = (WifiManager) activity.getSystemService("wifi");
        return wifiManager != null && wifiManager.isWifiEnabled();
    }

    public final String getFirmwareFilePath(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        return context.getFilesDir().getAbsolutePath() + "/Uniden/Firmware/uniden_firmware_file.bin";
    }

    public final String getTestFirmwareFilePath(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        return context.getFilesDir().getAbsolutePath() + "/Uniden/Firmware/uniden_firmware_file.bin";
    }

    public final String convertTo4ByteString(double latitude, double longitude) {
        String string = Integer.toString((int) (latitude * 1.0E7d), CharsKt.checkRadix(2));
        Intrinsics.checkNotNullExpressionValue(string, "toString(...)");
        String strPadStart = StringsKt.padStart(string, 32, '0');
        String string2 = Integer.toString((int) (longitude * 1.0E7d), CharsKt.checkRadix(2));
        Intrinsics.checkNotNullExpressionValue(string2, "toString(...)");
        List<String> listChunked = StringsKt.chunked(strPadStart + StringsKt.padStart(string2, 32, '0'), 8);
        int size = listChunked.size();
        byte[] bArr = new byte[size];
        for (int i = 0; i < size; i++) {
            bArr[i] = (byte) Integer.parseInt(listChunked.get(i), CharsKt.checkRadix(2));
        }
        return new String(bArr, Charsets.UTF_8);
    }

    public final String convertToHexString(double latitude, double longitude) {
        String string = Integer.toString((int) (latitude * 1.0E7d), CharsKt.checkRadix(16));
        Intrinsics.checkNotNullExpressionValue(string, "toString(...)");
        String upperCase = string.toUpperCase();
        Intrinsics.checkNotNullExpressionValue(upperCase, "toUpperCase(...)");
        String string2 = Integer.toString((int) (longitude * 1.0E7d), CharsKt.checkRadix(16));
        Intrinsics.checkNotNullExpressionValue(string2, "toString(...)");
        String upperCase2 = string2.toUpperCase();
        Intrinsics.checkNotNullExpressionValue(upperCase2, "toUpperCase(...)");
        return upperCase + upperCase2;
    }

    public final LatLng keepFiveDigitsAfterPoint(LatLng latLng) {
        LatLng latLng2;
        Intrinsics.checkNotNullParameter(latLng, "latLng");
        try {
            StringCompanionObject stringCompanionObject = StringCompanionObject.INSTANCE;
            String str = String.format("%.6f", Arrays.copyOf(new Object[]{Double.valueOf(latLng.latitude)}, 1));
            Intrinsics.checkNotNullExpressionValue(str, "format(...)");
            double d = Double.parseDouble(str);
            StringCompanionObject stringCompanionObject2 = StringCompanionObject.INSTANCE;
            String str2 = String.format("%.6f", Arrays.copyOf(new Object[]{Double.valueOf(latLng.longitude)}, 1));
            Intrinsics.checkNotNullExpressionValue(str2, "format(...)");
            double d2 = Double.parseDouble(str2);
            if (!Double.isInfinite(d) && !Double.isNaN(d) && !Double.isInfinite(d2) && !Double.isNaN(d2)) {
                latLng2 = new LatLng(d, d2);
            } else {
                latLng2 = new LatLng(0.0d, 0.0d);
            }
            return latLng2;
        } catch (Exception unused) {
            return new LatLng(0.0d, 0.0d);
        }
    }

    public final void getFirmwareUrlAndAP(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        final BluetoothManager companion = BluetoothManager.INSTANCE.getInstance(context);
        companion.writeCharacteristic("BTreqGURL:");
        new Handler(Looper.getMainLooper()).postDelayed(new Runnable() { // from class: com.uniden.rtach.helper.Utils$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                Utils.getFirmwareUrlAndAP$lambda$0(companion);
            }
        }, 1000L);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void getFirmwareUrlAndAP$lambda$0(BluetoothManager btManager) {
        Intrinsics.checkNotNullParameter(btManager, "$btManager");
        btManager.writeCharacteristic("BTreqGWAP:");
    }

    public final BitmapDescriptor convertImageBitmapDescriptor(Context context, MarkerTypeEnum markerTypeEnum) {
        Intrinsics.checkNotNullParameter(context, "context");
        if (markerTypeEnum == null) {
            return null;
        }
        Bitmap bitmapCreateScaledBitmap = Bitmap.createScaledBitmap(BitmapFactory.decodeResource(context.getResources(), AlertDataConverter.INSTANCE.getMarkerIcon(context, markerTypeEnum)), 80, 80, false);
        Intrinsics.checkNotNullExpressionValue(bitmapCreateScaledBitmap, "createScaledBitmap(...)");
        return BitmapDescriptorFactory.fromBitmap(bitmapCreateScaledBitmap);
    }

    public final VersionUpdateModel checkIfUpdateAvailable(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        SharedPreferences sharedPreferences = context.getSharedPreferences(StoreUserData.INSTANCE.getPrefName(context), 0);
        Intrinsics.checkNotNullExpressionValue(sharedPreferences, "getSharedPreferences(...)");
        StoreUserData storeUserData = new StoreUserData(sharedPreferences);
        VersionUpdateModel versionUpdateModel = new VersionUpdateModel(null, false, false, false, false, false, false, false, false, false, false, false, 4095, null);
        List listSplit$default = StringsKt.split$default((CharSequence) storeUserData.getCurrentFirmwareVersion(), new String[]{RemoteSettings.FORWARD_SLASH_STRING}, false, 0, 6, (Object) null);
        if (storeUserData.getLatestFirmwareVersion().length() == 0) {
            storeUserData.setUpdateAvailable(false);
            return new VersionUpdateModel(null, false, false, false, false, false, false, false, false, false, false, false, 4095, null);
        }
        Log.e("TAG_LATEST_VER", storeUserData.getLatestFirmwareVersion());
        Log.d("TAG_Current_Version", "currentVersion:" + listSplit$default + ' ');
        List listSplit$default2 = StringsKt.split$default((CharSequence) storeUserData.getLatestFirmwareVersion(), new String[]{RemoteSettings.FORWARD_SLASH_STRING}, false, 0, 6, (Object) null);
        storeUserData.setUpdateAvailable(false);
        versionUpdateModel.setRadarModelName((String) listSplit$default2.get(0));
        int size = listSplit$default.size();
        for (int i = 1; i < size; i++) {
            Integer intOrNull = StringsKt.toIntOrNull((String) listSplit$default.get(i));
            int iIntValue = intOrNull != null ? intOrNull.intValue() : 0;
            Integer intOrNull2 = StringsKt.toIntOrNull((String) listSplit$default2.get(i));
            int iIntValue2 = intOrNull2 != null ? intOrNull2.intValue() : 0;
            if (StringsKt.contains$default((CharSequence) storeUserData.getDeviceName(), (CharSequence) "R9", false, 2, (Object) null) || StringsKt.contains$default((CharSequence) storeUserData.getDeviceName(), (CharSequence) "AE903i", false, 2, (Object) null)) {
                switch (i) {
                    case 1:
                        versionUpdateModel.setUiUpdateAvailable(iIntValue2 > iIntValue);
                        break;
                    case 2:
                        versionUpdateModel.setDspUpdateAvailable(iIntValue2 > iIntValue);
                        break;
                    case 3:
                        versionUpdateModel.setDspUpdateAvailable(iIntValue2 > iIntValue);
                        break;
                    case 4:
                        versionUpdateModel.setGpsUpdateAvailable(iIntValue2 > iIntValue);
                        break;
                    case 5:
                        versionUpdateModel.setSoundDbUpdateAvailable(iIntValue2 > iIntValue);
                        break;
                    case 6:
                        versionUpdateModel.setGpsDbUpdateAvailable(iIntValue2 > iIntValue);
                        break;
                    case 7:
                        versionUpdateModel.setInterface1UpdateAvailable(iIntValue2 > iIntValue);
                        break;
                    case 8:
                        versionUpdateModel.setInterface2UpdateAvailable(iIntValue2 > iIntValue);
                        break;
                    case 9:
                        versionUpdateModel.setInterface3UpdateAvailable(iIntValue2 > iIntValue);
                        break;
                    case 10:
                        versionUpdateModel.setBtWiFiUpdateAvailable(iIntValue2 > iIntValue);
                        break;
                }
            } else {
                switch (i) {
                    case 1:
                        versionUpdateModel.setUiUpdateAvailable(iIntValue2 > iIntValue);
                        break;
                    case 2:
                        versionUpdateModel.setDspUpdateAvailable(iIntValue2 > iIntValue);
                        break;
                    case 3:
                        versionUpdateModel.setGpsUpdateAvailable(iIntValue2 > iIntValue);
                        break;
                    case 4:
                        versionUpdateModel.setSoundDbUpdateAvailable(iIntValue2 > iIntValue);
                        break;
                    case 5:
                        versionUpdateModel.setGpsDbUpdateAvailable(iIntValue2 > iIntValue);
                        break;
                    case 6:
                        versionUpdateModel.setInterface1UpdateAvailable(iIntValue2 > iIntValue);
                        break;
                    case 7:
                        versionUpdateModel.setInterface2UpdateAvailable(iIntValue2 > iIntValue);
                        break;
                    case 8:
                        versionUpdateModel.setBtWiFiUpdateAvailable(iIntValue2 > iIntValue);
                        break;
                }
            }
        }
        storeUserData.setUpdateAvailable(versionUpdateModel.isUiUpdateAvailable() || versionUpdateModel.isDspUpdateAvailable() || versionUpdateModel.isGpsUpdateAvailable() || versionUpdateModel.isSoundDbUpdateAvailable() || versionUpdateModel.isGpsDbUpdateAvailable() || versionUpdateModel.isInterface1UpdateAvailable() || versionUpdateModel.isInterface2UpdateAvailable() || versionUpdateModel.isInterface3UpdateAvailable() || versionUpdateModel.isBtWiFiUpdateAvailable());
        Log.d("TAG_Latest_Version", "isUpdateAvailable:" + storeUserData.isUpdateAvailable() + ' ');
        return versionUpdateModel;
    }

    public final String getFirmwareVersionFormat(String deviceName) {
        Intrinsics.checkNotNullParameter(deviceName, "deviceName");
        String str = deviceName;
        if (StringsKt.contains((CharSequence) str, (CharSequence) ExifInterface.LONGITUDE_WEST, true)) {
            return StringsKt.contains((CharSequence) str, (CharSequence) "R9", true) ? "(UI/FrontRD/RearRD/GPS/SoundDb/GPSDb/interface1/interface2/interface3/BT,Wi-Fi)\n\n" : "(UI/DSP/GPS/SoundDb/GPSDb/Interface1/Interface2/BT,Wi-Fi)\n\n";
        }
        if (StringsKt.contains((CharSequence) str, (CharSequence) "AE903i", true)) {
            return "(UI/FrontRD/RearRD/GPS/SoundDb/GPSDb/interface1/interface2/interface3/BT,Wi-Fi)\n\n";
        }
        return StringsKt.contains((CharSequence) str, (CharSequence) "R9", true) ? "(UI/FrontRD/RearRD/GPS/SoundDb/GPSDb/Interface1/Interface2/Interface3/BT)\n\n" : "(UI/DSP/GPS/SoundDb/GPSDb/Interface1/Interface2/BT)\n\n";
    }

    public final String getFirmwareURL(String name) {
        Intrinsics.checkNotNullParameter(name, "name");
        String string = StringsKt.trim((CharSequence) StringsKt.substringBefore$default(name, "@", (String) null, 2, (Object) null)).toString();
        if (StringsKt.equals(string, "R4W", true)) {
            return "https://www.unidenup.com/R4W/R4W_latest.bin";
        }
        if (StringsKt.equals(string, "R4", true)) {
            return "https://www.unidenup.com/R4/R4_latest.bin";
        }
        if (StringsKt.equals(string, "R8W", true)) {
            return "https://www.unidenup.com/R8W/R8W_latest.bin";
        }
        if (StringsKt.equals(string, "R8", true)) {
            return "https://www.unidenup.com/R8/R8_latest.bin";
        }
        if (StringsKt.equals(string, "R9W", true)) {
            return "https://www.unidenup.com/R9W/R9W_latest.bin";
        }
        if (StringsKt.equals(string, "R9", true)) {
            return "https://www.unidenup.com/R9/R9_latest.bin";
        }
        return StringsKt.equals(string, "AE903i", true) ? "https://www.unidenup.com/AE903i/AE903i_latest.bin" : "";
    }

    public final String convertToDecimal(int frequency) {
        double d = ((double) frequency) / 1000.0d;
        StringCompanionObject stringCompanionObject = StringCompanionObject.INSTANCE;
        String str = String.format("%.3f", Arrays.copyOf(new Object[]{Double.valueOf(d)}, 1));
        Intrinsics.checkNotNullExpressionValue(str, "format(...)");
        return str + " Ghz";
    }

    /* JADX INFO: renamed from: com.uniden.rtach.helper.Utils$getFirmwareVersions$2 */
    /* JADX INFO: compiled from: Utils.kt */
    @Metadata(m490d1 = {"\u0000\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\b\u0012\u0004\u0012\u00020\u00020\u0001*\u00020\u0003H\n"}, m491d2 = {"<anonymous>", "Ljava/util/ArrayList;", "Lcom/uniden/rtach/data/model/RadarVersionModel;", "Lkotlinx/coroutines/CoroutineScope;"}, m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    @DebugMetadata(m503c = "com.uniden.rtach.helper.Utils$getFirmwareVersions$2", m504f = "Utils.kt", m505i = {}, m506l = {}, m507m = "invokeSuspend", m508n = {}, m509s = {})
    static final class C20822 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super ArrayList<RadarVersionModel>>, Object> {
        final /* synthetic */ Context $context;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C20822(Context context, Continuation<? super C20822> continuation) {
            super(2, continuation);
            this.$context = context;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new C20822(this.$context, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super ArrayList<RadarVersionModel>> continuation) {
            return ((C20822) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        /* JADX WARN: Multi-variable type inference failed */
        /* JADX WARN: Type inference failed for: r10v4 */
        /* JADX WARN: Type inference failed for: r10v5, types: [int] */
        /* JADX WARN: Type inference failed for: r10v8 */
        /* JADX WARN: Type inference failed for: r9v4 */
        /* JADX WARN: Type inference failed for: r9v5, types: [int] */
        /* JADX WARN: Type inference failed for: r9v8 */
        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            ?? r10;
            boolean z;
            List list;
            int i;
            String str;
            String str2;
            boolean z2;
            Integer intOrNull;
            int iIntValue;
            Integer intOrNull2;
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label == 0) {
                ResultKt.throwOnFailure(obj);
                boolean z3 = false;
                SharedPreferences sharedPreferences = this.$context.getSharedPreferences(StoreUserData.INSTANCE.getPrefName(this.$context), 0);
                Intrinsics.checkNotNullExpressionValue(sharedPreferences, "getSharedPreferences(...)");
                StoreUserData storeUserData = new StoreUserData(sharedPreferences);
                List listSplit$default = StringsKt.split$default((CharSequence) storeUserData.getCurrentFirmwareVersion(), new String[]{RemoteSettings.FORWARD_SLASH_STRING}, false, 0, 6, (Object) null);
                List listSplit$default2 = StringsKt.split$default((CharSequence) storeUserData.getLatestFirmwareVersion(), new String[]{RemoteSettings.FORWARD_SLASH_STRING}, false, 0, 6, (Object) null);
                ArrayList arrayList = new ArrayList();
                storeUserData.setUpdateAvailable(false);
                boolean z4 = true;
                if ((!listSplit$default2.isEmpty()) && (!listSplit$default.isEmpty())) {
                    int iMax = Math.max(listSplit$default.size(), listSplit$default2.size());
                    int i2 = 1;
                    while (i2 < iMax) {
                        String str3 = (String) CollectionsKt.getOrNull(listSplit$default, i2);
                        ?? IntValue = (str3 == null || (intOrNull2 = StringsKt.toIntOrNull(str3)) == null) ? z3 : intOrNull2.intValue();
                        String str4 = (String) CollectionsKt.getOrNull(listSplit$default2, i2);
                        if (str4 == null || (intOrNull = StringsKt.toIntOrNull(str4)) == null) {
                            r10 = z3;
                        } else {
                            iIntValue = intOrNull.intValue();
                        }
                        if (r10 > IntValue) {
                            r10 = iIntValue;
                            z = z4;
                        } else {
                            r10 = iIntValue;
                            z = z3;
                        }
                        List list2 = listSplit$default2;
                        if (StringsKt.contains$default(storeUserData.getDeviceName(), "R9", z3, 2, (Object) null)) {
                            list = listSplit$default;
                            i = iMax;
                            str = "BT/Wi-Fi";
                            str2 = "UI";
                            z2 = false;
                        } else {
                            list = listSplit$default;
                            i = iMax;
                            str = "BT/Wi-Fi";
                            z2 = false;
                            if (!StringsKt.contains$default((CharSequence) storeUserData.getDeviceName(), (CharSequence) "AE903i", false, 2, (Object) null)) {
                                switch (i2) {
                                    case 1:
                                        arrayList.add(new RadarVersionModel("UI", IntValue, r10, z));
                                        break;
                                    case 2:
                                        arrayList.add(new RadarVersionModel("DSP", IntValue, r10, z));
                                        break;
                                    case 3:
                                        arrayList.add(new RadarVersionModel("GPS", IntValue, r10, z));
                                        break;
                                    case 4:
                                        arrayList.add(new RadarVersionModel("SoundDb", IntValue, r10, z));
                                        break;
                                    case 5:
                                        arrayList.add(new RadarVersionModel("GPSDb", IntValue, r10, z));
                                        break;
                                    case 6:
                                        arrayList.add(new RadarVersionModel("Keypad", IntValue, r10, z));
                                        break;
                                    case 7:
                                        arrayList.add(new RadarVersionModel("Laser TP", IntValue, r10, z));
                                        break;
                                    case 8:
                                        arrayList.add(new RadarVersionModel(storeUserData.isWiFiModel() ? str : "BT", IntValue, r10, z));
                                        break;
                                }
                            } else {
                                str2 = "UI";
                            }
                            i2++;
                            z3 = z2;
                            listSplit$default2 = list2;
                            iMax = i;
                            listSplit$default = list;
                            z4 = true;
                        }
                        switch (i2) {
                            case 1:
                                arrayList.add(new RadarVersionModel(str2, IntValue, r10, z));
                                break;
                            case 2:
                                arrayList.add(new RadarVersionModel("FrontRD", IntValue, r10, z));
                                break;
                            case 3:
                                arrayList.add(new RadarVersionModel("RearRD", IntValue, r10, z));
                                break;
                            case 4:
                                arrayList.add(new RadarVersionModel("GPS", IntValue, r10, z));
                                break;
                            case 5:
                                arrayList.add(new RadarVersionModel("SoundDb", IntValue, r10, z));
                                break;
                            case 6:
                                arrayList.add(new RadarVersionModel("GPSDb", IntValue, r10, z));
                                break;
                            case 7:
                                arrayList.add(new RadarVersionModel("Keypad", IntValue, r10, z));
                                break;
                            case 8:
                                arrayList.add(new RadarVersionModel("Laser TP", IntValue, r10, z));
                                break;
                            case 9:
                                arrayList.add(new RadarVersionModel("Display", IntValue, r10, z));
                                break;
                            case 10:
                                arrayList.add(new RadarVersionModel(storeUserData.isWiFiModel() ? str : "BT", IntValue, r10, z));
                                break;
                        }
                        i2++;
                        z3 = z2;
                        listSplit$default2 = list2;
                        iMax = i;
                        listSplit$default = list;
                        z4 = true;
                    }
                }
                return arrayList;
            }
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
    }

    public final Object getFirmwareVersions(Context context, Continuation<? super ArrayList<RadarVersionModel>> continuation) {
        return BuildersKt.withContext(Dispatchers.getIO(), new C20822(context, null), continuation);
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    public final String getUpdatingFileName(String updatingFileName) {
        Intrinsics.checkNotNullParameter(updatingFileName, "updatingFileName");
        int iHashCode = updatingFileName.hashCode();
        if (iHashCode != 2191) {
            if (iHashCode != 2252) {
                if (iHashCode != 2269) {
                    if (iHashCode != 2281) {
                        if (iHashCode != 2624) {
                            if (iHashCode != 2641) {
                                if (iHashCode != 2708) {
                                    switch (iHashCode) {
                                        case 2312:
                                            if (updatingFileName.equals("I1")) {
                                                return "Interface1";
                                            }
                                            break;
                                        case 2313:
                                            if (updatingFileName.equals("I2")) {
                                                return "Interface2";
                                            }
                                            break;
                                        case 2314:
                                            if (updatingFileName.equals("I3")) {
                                                return "Interface3";
                                            }
                                            break;
                                    }
                                } else if (updatingFileName.equals("UI")) {
                                    return "UI";
                                }
                            } else if (updatingFileName.equals("SD")) {
                                return "Sound dB";
                            }
                        } else if (updatingFileName.equals("RR")) {
                            return "Rear RD";
                        }
                    } else if (updatingFileName.equals("GP")) {
                        return "GPS";
                    }
                } else if (updatingFileName.equals("GD")) {
                    return "GPS dB";
                }
            } else if (updatingFileName.equals("FR")) {
                return "Front RD";
            }
        } else if (updatingFileName.equals("DS")) {
            return "DSP";
        }
        return "";
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:25:0x0049 A[ORIG_RETURN, RETURN] */
    public final String getErrorMessageWiFiUpdate(String code) {
        Intrinsics.checkNotNullParameter(code, "code");
        switch (code) {
            case "0":
                return "Unknown";
            case "1":
                return "Param not available";
            case "2":
                return "Wi-Fi disconnection";
            case "3":
                return "Radar Detector is busy";
            case "4":
                return "Request timeout";
            default:
                return "";
        }
    }

    public final Spanned bulletPointList(List<String> strings, Context context) {
        Intrinsics.checkNotNullParameter(strings, "strings");
        Intrinsics.checkNotNullParameter(context, "context");
        SpannableStringBuilder spannableStringBuilder = new SpannableStringBuilder();
        Iterator<T> it = strings.iterator();
        while (it.hasNext()) {
            spannableStringBuilder.append((CharSequence) ("•\t" + ((String) it.next()) + '\n'));
        }
        BulletSpan bulletSpan = new BulletSpan(15);
        int color = ContextCompat.getColor(context, R.color.black);
        int color2 = ContextCompat.getColor(context, R.color.black);
        spannableStringBuilder.setSpan(bulletSpan, 0, spannableStringBuilder.length(), 33);
        spannableStringBuilder.setSpan(new ForegroundColorSpan(color), 0, spannableStringBuilder.length(), 33);
        spannableStringBuilder.setSpan(new RelativeSizeSpan(1.0f), 0, spannableStringBuilder.length(), 33);
        spannableStringBuilder.setSpan(new TextAppearanceSpan(null, 0, 15, null, null), 0, spannableStringBuilder.length(), 33);
        spannableStringBuilder.setSpan(new ForegroundColorSpan(color2), 0, spannableStringBuilder.length(), 33);
        spannableStringBuilder.setSpan(new TabStopSpan.Standard(15), 0, spannableStringBuilder.length(), 33);
        return spannableStringBuilder;
    }

    public final void shareLogFile(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        try {
            File file = new File(context.getFilesDir(), "Uniden");
            if (!file.exists()) {
                file.mkdir();
            }
            File file2 = new File(file, "uniden_logs.txt");
            if (!file2.exists()) {
                Toast.makeText(context, "Log file not exist!", 0).show();
                return;
            }
            Uri uriForFile = FileProvider.getUriForFile(context, context.getPackageName() + ".provider", file2);
            Intrinsics.checkNotNullExpressionValue(uriForFile, "getUriForFile(...)");
            Intent intent = new Intent();
            intent.setAction("android.intent.action.SEND");
            intent.setType("text/plain");
            intent.putExtra("android.intent.extra.STREAM", uriForFile);
            intent.addFlags(1);
            context.startActivity(Intent.createChooser(intent, "Share File via"));
            Log.d("TAG_F", "Sharing file: " + file2.getAbsolutePath());
        } catch (Exception e) {
            Log.e("TAG_F", "Error sharing file: " + e.getLocalizedMessage());
            e.printStackTrace();
        }
    }

    public final void clearLogFile(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        try {
            File file = new File(context.getFilesDir(), "Uniden/uniden_logs.txt");
            if (file.exists()) {
                FileOutputStream fileOutputStream = new FileOutputStream(file, false);
                byte[] bytes = "".getBytes(Charsets.UTF_8);
                Intrinsics.checkNotNullExpressionValue(bytes, "getBytes(...)");
                fileOutputStream.write(bytes);
                fileOutputStream.close();
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public final boolean isFileLargerThan1MB(File file) {
        Intrinsics.checkNotNullParameter(file, "file");
        return file.length() > ((long) 1048576);
    }

    public final String getFirmwareUpdateURL(Context activity) {
        Intrinsics.checkNotNullParameter(activity, "activity");
        SharedPreferences sharedPreferences = activity.getSharedPreferences(StoreUserData.INSTANCE.getPrefName(activity), 0);
        Intrinsics.checkNotNullExpressionValue(sharedPreferences, "getSharedPreferences(...)");
        StoreUserData storeUserData = new StoreUserData(sharedPreferences);
        if (storeUserData.getIsfileExist()) {
            return storeUserData.getTestjsonFirmwareURL();
        }
        return Constant.INSTANCE.getLATEST_FIRMWARE_VERSION_CHECK_URL();
    }
}
