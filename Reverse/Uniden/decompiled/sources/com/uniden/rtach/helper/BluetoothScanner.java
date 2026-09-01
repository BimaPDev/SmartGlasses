package com.uniden.rtach.helper;

import android.bluetooth.BluetoothAdapter;
import android.bluetooth.BluetoothDevice;
import android.bluetooth.le.BluetoothLeScanner;
import android.bluetooth.le.ScanCallback;
import android.bluetooth.le.ScanFilter;
import android.bluetooth.le.ScanResult;
import android.bluetooth.le.ScanSettings;
import android.content.Context;
import android.content.SharedPreferences;
import android.util.Log;
import androidx.constraintlayout.widget.ConstraintLayout;
import com.uniden.rtach.data.model.BluetoothDeviceModel;
import com.uniden.rtach.data.sharedpref.StoreUserData;
import java.util.List;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: BluetoothScanner.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000F\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u001c\u0010\u0016\u001a\u00020\u00172\u0012\u0010\u0018\u001a\u000e\u0012\u0004\u0012\u00020\u001a\u0012\u0004\u0012\u00020\u00170\u0019H\u0007J\b\u0010\u001b\u001a\u00020\u0017H\u0007J\b\u0010\u001c\u001a\u00020\u0017H\u0007J\u0010\u0010\u001d\u001a\u00020\u001a2\u0006\u0010\u001e\u001a\u00020\u001fH\u0003R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u001b\u0010\u0006\u001a\n \b*\u0004\u0018\u00010\u00070\u0007¢\u0006\n\n\u0002\u0010\u000b\u001a\u0004\b\t\u0010\nR\u0010\u0010\f\u001a\u0004\u0018\u00010\rX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u000fX\u0082\u000e¢\u0006\u0002\n\u0000R\u001b\u0010\u0010\u001a\u00020\u00118FX\u0086\u0084\u0002¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0012\u0010\u0013¨\u0006 "}, m491d2 = {"Lcom/uniden/rtach/helper/BluetoothScanner;", "", "context", "Landroid/content/Context;", "<init>", "(Landroid/content/Context;)V", "bluetoothAdapter", "Landroid/bluetooth/BluetoothAdapter;", "kotlin.jvm.PlatformType", "getBluetoothAdapter", "()Landroid/bluetooth/BluetoothAdapter;", "Landroid/bluetooth/BluetoothAdapter;", "scanCallback", "Landroid/bluetooth/le/ScanCallback;", "isScanning", "", "sharedPrefs", "Lcom/uniden/rtach/data/sharedpref/StoreUserData;", "getSharedPrefs", "()Lcom/uniden/rtach/data/sharedpref/StoreUserData;", "sharedPrefs$delegate", "Lkotlin/Lazy;", "startScan", "", "callback", "Lkotlin/Function1;", "Lcom/uniden/rtach/data/model/BluetoothDeviceModel;", "stopScan", "flushPendingScanResults", "createDeviceModel", "device", "Landroid/bluetooth/BluetoothDevice;", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class BluetoothScanner {
    private final BluetoothAdapter bluetoothAdapter;
    private final Context context;
    private boolean isScanning;
    private ScanCallback scanCallback;

    /* JADX INFO: renamed from: sharedPrefs$delegate, reason: from kotlin metadata */
    private final Lazy sharedPrefs;

    public final BluetoothAdapter getBluetoothAdapter() {
        return this.bluetoothAdapter;
    }

    public BluetoothScanner(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        this.context = context;
        Object systemService = context.getSystemService("bluetooth");
        Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.bluetooth.BluetoothManager");
        this.bluetoothAdapter = ((android.bluetooth.BluetoothManager) systemService).getAdapter();
        this.sharedPrefs = LazyKt.lazy(new Function0() { // from class: com.uniden.rtach.helper.BluetoothScanner$$ExternalSyntheticLambda0
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return BluetoothScanner.sharedPrefs_delegate$lambda$0(this.f$0);
            }
        });
    }

    public final StoreUserData getSharedPrefs() {
        return (StoreUserData) this.sharedPrefs.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final StoreUserData sharedPrefs_delegate$lambda$0(BluetoothScanner this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        SharedPreferences sharedPreferences = this$0.context.getSharedPreferences(StoreUserData.INSTANCE.getPrefName(this$0.context), 0);
        Intrinsics.checkNotNullExpressionValue(sharedPreferences, "getSharedPreferences(...)");
        return new StoreUserData(sharedPreferences);
    }

    public final void startScan(final Function1<? super BluetoothDeviceModel, Unit> callback) {
        Intrinsics.checkNotNullParameter(callback, "callback");
        if (this.isScanning) {
            System.out.println((Object) "BluetoothScanner Scan already in progress.");
            return;
        }
        BluetoothAdapter bluetoothAdapter = this.bluetoothAdapter;
        if (bluetoothAdapter == null || (bluetoothAdapter != null && !bluetoothAdapter.isEnabled())) {
            System.out.println((Object) "bluetooth not enabled");
            return;
        }
        BluetoothLeScanner bluetoothLeScanner = this.bluetoothAdapter.getBluetoothLeScanner();
        if (bluetoothLeScanner == null) {
            Log.e("BluetoothScanner", "BluetoothLeScanner is null");
            return;
        }
        ScanSettings scanSettingsBuild = new ScanSettings.Builder().setScanMode(1).build();
        List<ScanFilter> listEmptyList = CollectionsKt.emptyList();
        ScanCallback scanCallback = new ScanCallback() { // from class: com.uniden.rtach.helper.BluetoothScanner.startScan.1
            @Override // android.bluetooth.le.ScanCallback
            public void onBatchScanResults(List<ScanResult> results) {
                Intrinsics.checkNotNullParameter(results, "results");
            }

            @Override // android.bluetooth.le.ScanCallback
            public void onScanResult(int callbackType, ScanResult result) {
                Intrinsics.checkNotNullParameter(result, "result");
                System.out.println((Object) ("scanCallback onScanResult " + result.getDevice()));
                Function1<BluetoothDeviceModel, Unit> function1 = callback;
                BluetoothScanner bluetoothScanner = this;
                BluetoothDevice device = result.getDevice();
                Intrinsics.checkNotNullExpressionValue(device, "getDevice(...)");
                function1.invoke(bluetoothScanner.createDeviceModel(device));
            }

            @Override // android.bluetooth.le.ScanCallback
            public void onScanFailed(int errorCode) {
                System.out.println((Object) ("BluetoothScanner Scan failed with error code: " + errorCode));
                Log.e("BluetoothScanner", "Scan failed with error code: " + errorCode);
                this.isScanning = false;
                this.getSharedPrefs().setScanRunning(false);
            }
        };
        this.scanCallback = scanCallback;
        if (this.isScanning) {
            return;
        }
        bluetoothLeScanner.startScan(listEmptyList, scanSettingsBuild, scanCallback);
        this.isScanning = true;
        getSharedPrefs().setScanRunning(true);
    }

    public final void stopScan() {
        BluetoothLeScanner bluetoothLeScanner;
        if (!this.isScanning || this.scanCallback == null) {
            return;
        }
        BluetoothAdapter bluetoothAdapter = this.bluetoothAdapter;
        if (bluetoothAdapter != null && (bluetoothLeScanner = bluetoothAdapter.getBluetoothLeScanner()) != null) {
            ScanCallback scanCallback = this.scanCallback;
            Intrinsics.checkNotNull(scanCallback);
            bluetoothLeScanner.stopScan(scanCallback);
        }
        Log.i("BluetoothScanner", "Scan stopped.");
        this.scanCallback = null;
        this.isScanning = false;
        getSharedPrefs().setScanRunning(false);
    }

    public final void flushPendingScanResults() {
        BluetoothAdapter bluetoothAdapter;
        BluetoothLeScanner bluetoothLeScanner;
        ScanCallback scanCallback = this.scanCallback;
        if (scanCallback == null || (bluetoothAdapter = this.bluetoothAdapter) == null || (bluetoothLeScanner = bluetoothAdapter.getBluetoothLeScanner()) == null) {
            return;
        }
        bluetoothLeScanner.flushPendingScanResults(scanCallback);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final BluetoothDeviceModel createDeviceModel(BluetoothDevice device) {
        String name = device.getName();
        if (name == null) {
            name = "Unknown Device";
        }
        String address = device.getAddress();
        Intrinsics.checkNotNullExpressionValue(address, "getAddress(...)");
        return new BluetoothDeviceModel(name, address, device, device.getBondState() == 12);
    }
}
