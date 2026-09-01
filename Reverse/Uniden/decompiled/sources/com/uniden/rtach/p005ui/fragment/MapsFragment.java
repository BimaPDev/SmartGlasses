package com.uniden.rtach.p005ui.fragment;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Application;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.IntentFilter;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.location.Location;
import android.location.LocationListener;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.os.SystemClock;
import android.util.Log;
import android.view.Display;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.WindowManager;
import androidx.activity.result.ActivityResultCallback;
import androidx.activity.result.ActivityResultLauncher;
import androidx.activity.result.contract.ActivityResultContracts;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.core.app.ActivityCompat;
import androidx.databinding.DataBindingUtil;
import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentActivity;
import androidx.lifecycle.ViewModelProvider;
import androidx.localbroadcastmanager.content.LocalBroadcastManager;
import com.google.android.gms.location.FusedLocationProviderClient;
import com.google.android.gms.location.LocationServices;
import com.google.android.gms.maps.CameraUpdateFactory;
import com.google.android.gms.maps.GoogleMap;
import com.google.android.gms.maps.OnMapReadyCallback;
import com.google.android.gms.maps.SupportMapFragment;
import com.google.android.gms.maps.model.BitmapDescriptor;
import com.google.android.gms.maps.model.BitmapDescriptorFactory;
import com.google.android.gms.maps.model.CameraPosition;
import com.google.android.gms.maps.model.LatLng;
import com.google.android.gms.maps.model.MapStyleOptions;
import com.google.android.gms.maps.model.Marker;
import com.google.android.gms.maps.model.MarkerOptions;
import com.google.android.gms.tasks.CancellationTokenSource;
import com.google.android.gms.tasks.OnSuccessListener;
import com.google.android.gms.tasks.Task;
import com.google.firebase.analytics.FirebaseAnalytics;
import com.uniden.rtach.C2074R;
import com.uniden.rtach.data.model.ETCDataModel;
import com.uniden.rtach.data.model.MarkerAndPoiDataModel;
import com.uniden.rtach.data.sharedpref.StoreUserData;
import com.uniden.rtach.databinding.FragmentMapsBinding;
import com.uniden.rtach.helper.BaseApplication;
import com.uniden.rtach.helper.BluetoothManager;
import com.uniden.rtach.helper.Constant;
import com.uniden.rtach.helper.Utils;
import com.uniden.rtach.helper.simulation.UnidenLocationManager;
import com.uniden.rtach.helper.simulation.Utility;
import com.uniden.rtach.viewmodel.DashboardViewModel;
import java.util.Date;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import kotlin.Metadata;
import kotlin.NotImplementedError;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: MapsFragment.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000Í\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\t\n\u0002\b\u0005\n\u0002\u0010\b\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0007\n\u0002\b\r\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0017\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0006\n\u0002\b\t*\u0001{\u0018\u0000 \u008b\u00012\u00020\u00012\u00020\u00022\u00020\u0003:\u0004\u008a\u0001\u008b\u0001B\u0007¢\u0006\u0004\b\u0004\u0010\u0005J\u0012\u0010R\u001a\u00020S2\b\u0010T\u001a\u0004\u0018\u00010UH\u0016J$\u0010V\u001a\u00020\u001b2\u0006\u0010W\u001a\u00020X2\b\u0010Y\u001a\u0004\u0018\u00010Z2\b\u0010T\u001a\u0004\u0018\u00010UH\u0016J\u001a\u0010[\u001a\u00020S2\u0006\u0010\\\u001a\u00020\u001b2\b\u0010T\u001a\u0004\u0018\u00010UH\u0016J\b\u0010]\u001a\u00020SH\u0002J\b\u0010`\u001a\u00020SH\u0002J6\u0010a\u001a\u00020S2\b\u0010b\u001a\u0004\u0018\u00010c2\u0006\u0010d\u001a\u00020-2\u0006\u0010e\u001a\u00020%2\b\u0010f\u001a\u0004\u0018\u00010%2\b\u0010g\u001a\u0004\u0018\u00010%H\u0002J\u0010\u0010h\u001a\u00020S2\u0006\u0010i\u001a\u00020\u001fH\u0002J\b\u0010j\u001a\u00020-H\u0002J\u0010\u0010k\u001a\u00020S2\u0006\u0010i\u001a\u00020\u001fH\u0002J\u000e\u0010l\u001a\u00020S2\u0006\u0010m\u001a\u00020\u001fJ\b\u0010n\u001a\u00020SH\u0002J\u0010\u0010o\u001a\u00020S2\u0006\u0010p\u001a\u00020\rH\u0003J\b\u0010q\u001a\u00020SH\u0003J\b\u0010r\u001a\u00020SH\u0016J\u000e\u0010s\u001a\u00020S2\u0006\u0010i\u001a\u00020\u001fJ\u000e\u0010t\u001a\u00020S2\u0006\u0010i\u001a\u00020\u001fJ\u0010\u0010u\u001a\u00020\r2\u0006\u0010v\u001a\u00020&H\u0016J\u0018\u0010w\u001a\u00020S2\u0006\u0010x\u001a\u00020%2\u0006\u0010y\u001a\u00020%H\u0002J\u0010\u0010}\u001a\u00020S2\u0006\u0010m\u001a\u00020\u001fH\u0002J\u0011\u0010~\u001a\u00020\u007f2\u0007\u0010\u0080\u0001\u001a\u00020\u001fH\u0002J\u0013\u0010\u0081\u0001\u001a\u00020C2\b\u0010\u0082\u0001\u001a\u00030\u0083\u0001H\u0002J\u001b\u0010\u0084\u0001\u001a\u00020C2\u0006\u0010i\u001a\u00020\u001f2\b\u0010\u0082\u0001\u001a\u00030\u0083\u0001H\u0002J\t\u0010\u0085\u0001\u001a\u00020CH\u0002J\u0010\u0010\u0086\u0001\u001a\u00020S2\u0007\u0010\u0080\u0001\u001a\u00020\u001fJ\u001b\u0010\u0087\u0001\u001a\u00020\r2\u0007\u0010\u0088\u0001\u001a\u00020C2\u0007\u0010\u0089\u0001\u001a\u000207H\u0002R\u001a\u0010\u0006\u001a\u00020\u0007X\u0086.¢\u0006\u000e\n\u0000\u001a\u0004\b\b\u0010\t\"\u0004\b\n\u0010\u000bR\u000e\u0010\f\u001a\u00020\rX\u0082\u000e¢\u0006\u0002\n\u0000R\u001a\u0010\u000e\u001a\u00020\u000fX\u0086.¢\u0006\u000e\n\u0000\u001a\u0004\b\u0010\u0010\u0011\"\u0004\b\u0012\u0010\u0013R\u001a\u0010\u0014\u001a\u00020\u0015X\u0086.¢\u0006\u000e\n\u0000\u001a\u0004\b\u0016\u0010\u0017\"\u0004\b\u0018\u0010\u0019R\u0010\u0010\u001a\u001a\u0004\u0018\u00010\u001bX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u001c\u001a\u0004\u0018\u00010\u001dX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u001e\u001a\u00020\u001fX\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010 \u001a\u00020\u001fX\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010!\u001a\u00020\"X\u0082.¢\u0006\u0002\n\u0000R\u001a\u0010#\u001a\u000e\u0012\u0004\u0012\u00020%\u0012\u0004\u0012\u00020&0$X\u0082\u0004¢\u0006\u0002\n\u0000R\u001c\u0010'\u001a\u0004\u0018\u00010&X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b(\u0010)\"\u0004\b*\u0010+R\u0010\u0010,\u001a\u0004\u0018\u00010-X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010.\u001a\u00020\rX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010/\u001a\u00020\rX\u0082\u000e¢\u0006\u0002\n\u0000R\u001a\u00100\u001a\u000201X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b2\u00103\"\u0004\b4\u00105R\u000e\u00106\u001a\u000207X\u0082\u000e¢\u0006\u0002\n\u0000R\u001a\u00108\u001a\u00020\rX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b8\u00109\"\u0004\b:\u0010;R\u001a\u0010<\u001a\u00020\rX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b<\u00109\"\u0004\b=\u0010;R\u001a\u0010>\u001a\u000e\u0012\u0004\u0012\u00020%\u0012\u0004\u0012\u00020?0$X\u0082\u000e¢\u0006\u0002\n\u0000R\u001a\u0010@\u001a\u00020\rX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b@\u00109\"\u0004\bA\u0010;R\u001a\u0010B\u001a\u00020CX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bD\u0010E\"\u0004\bF\u0010GR\u001a\u0010H\u001a\u00020\rX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bH\u00109\"\u0004\bI\u0010;R\u001a\u0010J\u001a\u00020\rX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bJ\u00109\"\u0004\bK\u0010;R\u001a\u0010L\u001a\u00020\rX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bL\u00109\"\u0004\bM\u0010;R\u001a\u0010N\u001a\u00020\rX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bN\u00109\"\u0004\bO\u0010;R\u000e\u0010P\u001a\u00020QX\u0082.¢\u0006\u0002\n\u0000R\u0010\u0010^\u001a\u00020_8\u0002X\u0083\u0004¢\u0006\u0002\n\u0000R\u0010\u0010z\u001a\u00020{X\u0082\u0004¢\u0006\u0004\n\u0002\u0010|¨\u0006\u008c\u0001"}, m491d2 = {"Lcom/uniden/rtach/ui/fragment/MapsFragment;", "Landroidx/fragment/app/Fragment;", "Lcom/google/android/gms/maps/GoogleMap$OnMarkerClickListener;", "Lcom/google/android/gms/maps/GoogleMap$OnMapLoadedCallback;", "<init>", "()V", "binding", "Lcom/uniden/rtach/databinding/FragmentMapsBinding;", "getBinding", "()Lcom/uniden/rtach/databinding/FragmentMapsBinding;", "setBinding", "(Lcom/uniden/rtach/databinding/FragmentMapsBinding;)V", "isMapLoaded", "", "viewModel", "Lcom/uniden/rtach/viewmodel/DashboardViewModel;", "getViewModel", "()Lcom/uniden/rtach/viewmodel/DashboardViewModel;", "setViewModel", "(Lcom/uniden/rtach/viewmodel/DashboardViewModel;)V", "map", "Lcom/google/android/gms/maps/GoogleMap;", "getMap", "()Lcom/google/android/gms/maps/GoogleMap;", "setMap", "(Lcom/google/android/gms/maps/GoogleMap;)V", "mapView", "Landroid/view/View;", "client", "Lcom/google/android/gms/location/FusedLocationProviderClient;", "currentLocation", "Landroid/location/Location;", "lastLocation", "myApp", "Lcom/uniden/rtach/helper/BaseApplication;", "displayMarkerMap", "Ljava/util/HashMap;", "", "Lcom/google/android/gms/maps/model/Marker;", "userMaker", "getUserMaker", "()Lcom/google/android/gms/maps/model/Marker;", "setUserMaker", "(Lcom/google/android/gms/maps/model/Marker;)V", "userMakerIcon", "Lcom/google/android/gms/maps/model/BitmapDescriptor;", "isScrollEnable", "isInitialZoomDone", "lastLocUpdateTime", "", "getLastLocUpdateTime", "()J", "setLastLocUpdateTime", "(J)V", "clickCount", "", "isSimulationRunning", "()Z", "setSimulationRunning", "(Z)V", "isResume", "setResume", "currentPoiData", "Lcom/uniden/rtach/data/model/MarkerAndPoiDataModel;", "isDeleteMarkClicked", "setDeleteMarkClicked", "mapCameraZoomLevel", "", "getMapCameraZoomLevel", "()F", "setMapCameraZoomLevel", "(F)V", "isHeadingUp", "setHeadingUp", "isGestureEnabled", "setGestureEnabled", "isLocationChanged", "setLocationChanged", "isZoomEnable", "setZoomEnable", "sharedPrefs", "Lcom/uniden/rtach/data/sharedpref/StoreUserData;", "onCreate", "", "savedInstanceState", "Landroid/os/Bundle;", "onCreateView", "inflater", "Landroid/view/LayoutInflater;", "container", "Landroid/view/ViewGroup;", "onViewCreated", "view", "initLocationManger", "callback", "Lcom/google/android/gms/maps/OnMapReadyCallback;", "observeDataChange", "displayMarker", "latLng", "Lcom/google/android/gms/maps/model/LatLng;", "bitmap", "key", "hexStringLat", "hexStringLng", "updateLocation", FirebaseAnalytics.Param.LOCATION, "initUserMaker", "addUserMaker", "updateUserMakerPosition", "loc", "initClient", "getLastKnownLocation", "isFirsTime", "getCurrentLocation", "onMapLoaded", "updateMapCamera", "updateFistTimeMapCamera", "onMarkerClick", "p0", "displayAlertDialogDeleteUserMark", "lat", "long", "localBluetoothReceiver", "com/uniden/rtach/ui/fragment/MapsFragment$localBluetoothReceiver$1", "Lcom/uniden/rtach/ui/fragment/MapsFragment$localBluetoothReceiver$1;", "locationHasChanged", "setMapCameraPosition", "Lcom/google/android/gms/maps/model/CameraPosition;", "destLoc", "getCustZoomLevel", "speed_mph", "", "getCustBearing", "getCustAngle", "moveCameraNDcarWithBearing", "isMinimumBearingDifferenceBearing", "bearingLoc", "bearing", "MyLocationListener", "Companion", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class MapsFragment extends Fragment implements GoogleMap.OnMarkerClickListener, GoogleMap.OnMapLoadedCallback {
    private static final boolean MOCKLOCATION_ON = false;
    private static double prvSpeedClamped;
    private static float prvZoom;
    private static Runnable runHndCameraNDcar;
    public FragmentMapsBinding binding;
    private int clickCount;
    private FusedLocationProviderClient client;
    private Location currentLocation;
    private boolean isDeleteMarkClicked;
    private boolean isGestureEnabled;
    private boolean isInitialZoomDone;
    private boolean isLocationChanged;
    private boolean isMapLoaded;
    private boolean isScrollEnable;
    private boolean isSimulationRunning;
    private boolean isZoomEnable;
    private long lastLocUpdateTime;
    private Location lastLocation;
    public GoogleMap map;
    private float mapCameraZoomLevel;
    private View mapView;
    private BaseApplication myApp;
    private StoreUserData sharedPrefs;
    private Marker userMaker;
    private BitmapDescriptor userMakerIcon;
    public DashboardViewModel viewModel;

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private static final Handler hndCameraNDcar = new Handler(Looper.getMainLooper());
    private static float DurationAnimationLength = 2100.0f;
    private static final int RotationFixAngleMinimum = 2;
    private static long DurationAnimationRepeatTime = 10;
    private static double CAR_REL_BOTTOM_PER = 1000.0d;
    private static double CAR_REL_CTR = 0.12d;
    private static double CAR_REL_BOTTOM_POWER = 1.8d;
    private static boolean isMapLight = true;
    private final HashMap<String, Marker> displayMarkerMap = new HashMap<>();
    private boolean isResume = true;
    private HashMap<String, MarkerAndPoiDataModel> currentPoiData = new HashMap<>();
    private boolean isHeadingUp = true;
    private final OnMapReadyCallback callback = new OnMapReadyCallback() { // from class: com.uniden.rtach.ui.fragment.MapsFragment$$ExternalSyntheticLambda1
        @Override // com.google.android.gms.maps.OnMapReadyCallback
        public final void onMapReady(GoogleMap googleMap) {
            MapsFragment.callback$lambda$4(this.f$0, googleMap);
        }
    };
    private final MapsFragment$localBluetoothReceiver$1 localBluetoothReceiver = new BroadcastReceiver() { // from class: com.uniden.rtach.ui.fragment.MapsFragment$localBluetoothReceiver$1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            Intrinsics.checkNotNullParameter(context, "context");
            Intrinsics.checkNotNullParameter(intent, "intent");
            try {
                if (Intrinsics.areEqual(intent.getAction(), "GPS_LOCATION_UPDATE")) {
                    Location location = (Location) intent.getParcelableExtra(Constant.GPS_LOCATION_EXTRA);
                    Log.d("GPS_Simulation_TAG", "GPS_LOCATION_UPDATE " + location);
                    if (location != null && this.this$0.getMap() != null && location.getLatitude() != 0.0d && location.getLongitude() != 0.0d) {
                        Date date = new Date();
                        if (date.getTime() - this.this$0.getLastLocUpdateTime() > 1000) {
                            this.this$0.locationHasChanged(location);
                            this.this$0.setLastLocUpdateTime(date.getTime());
                        }
                    }
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    };

    private final float getCustAngle() {
        return 45.0f;
    }

    public final long getLastLocUpdateTime() {
        return this.lastLocUpdateTime;
    }

    public final float getMapCameraZoomLevel() {
        return this.mapCameraZoomLevel;
    }

    public final Marker getUserMaker() {
        return this.userMaker;
    }

    /* JADX INFO: renamed from: isDeleteMarkClicked, reason: from getter */
    public final boolean getIsDeleteMarkClicked() {
        return this.isDeleteMarkClicked;
    }

    /* JADX INFO: renamed from: isGestureEnabled, reason: from getter */
    public final boolean getIsGestureEnabled() {
        return this.isGestureEnabled;
    }

    /* JADX INFO: renamed from: isHeadingUp, reason: from getter */
    public final boolean getIsHeadingUp() {
        return this.isHeadingUp;
    }

    /* JADX INFO: renamed from: isLocationChanged, reason: from getter */
    public final boolean getIsLocationChanged() {
        return this.isLocationChanged;
    }

    /* JADX INFO: renamed from: isResume, reason: from getter */
    public final boolean getIsResume() {
        return this.isResume;
    }

    /* JADX INFO: renamed from: isSimulationRunning, reason: from getter */
    public final boolean getIsSimulationRunning() {
        return this.isSimulationRunning;
    }

    /* JADX INFO: renamed from: isZoomEnable, reason: from getter */
    public final boolean getIsZoomEnable() {
        return this.isZoomEnable;
    }

    public final void setBinding(FragmentMapsBinding fragmentMapsBinding) {
        Intrinsics.checkNotNullParameter(fragmentMapsBinding, "<set-?>");
        this.binding = fragmentMapsBinding;
    }

    public final void setDeleteMarkClicked(boolean z) {
        this.isDeleteMarkClicked = z;
    }

    public final void setGestureEnabled(boolean z) {
        this.isGestureEnabled = z;
    }

    public final void setHeadingUp(boolean z) {
        this.isHeadingUp = z;
    }

    public final void setLastLocUpdateTime(long j) {
        this.lastLocUpdateTime = j;
    }

    public final void setLocationChanged(boolean z) {
        this.isLocationChanged = z;
    }

    public final void setMap(GoogleMap googleMap) {
        Intrinsics.checkNotNullParameter(googleMap, "<set-?>");
        this.map = googleMap;
    }

    public final void setMapCameraZoomLevel(float f) {
        this.mapCameraZoomLevel = f;
    }

    public final void setResume(boolean z) {
        this.isResume = z;
    }

    public final void setSimulationRunning(boolean z) {
        this.isSimulationRunning = z;
    }

    public final void setUserMaker(Marker marker) {
        this.userMaker = marker;
    }

    public final void setViewModel(DashboardViewModel dashboardViewModel) {
        Intrinsics.checkNotNullParameter(dashboardViewModel, "<set-?>");
        this.viewModel = dashboardViewModel;
    }

    public final void setZoomEnable(boolean z) {
        this.isZoomEnable = z;
    }

    public final FragmentMapsBinding getBinding() {
        FragmentMapsBinding fragmentMapsBinding = this.binding;
        if (fragmentMapsBinding != null) {
            return fragmentMapsBinding;
        }
        Intrinsics.throwUninitializedPropertyAccessException("binding");
        return null;
    }

    public final DashboardViewModel getViewModel() {
        DashboardViewModel dashboardViewModel = this.viewModel;
        if (dashboardViewModel != null) {
            return dashboardViewModel;
        }
        Intrinsics.throwUninitializedPropertyAccessException("viewModel");
        return null;
    }

    public final GoogleMap getMap() {
        GoogleMap googleMap = this.map;
        if (googleMap != null) {
            return googleMap;
        }
        Intrinsics.throwUninitializedPropertyAccessException("map");
        return null;
    }

    @Override // androidx.fragment.app.Fragment
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        FragmentActivity fragmentActivityRequireActivity = requireActivity();
        Intrinsics.checkNotNullExpressionValue(fragmentActivityRequireActivity, "requireActivity(...)");
        setViewModel((DashboardViewModel) new ViewModelProvider(fragmentActivityRequireActivity).get(DashboardViewModel.class));
        Context context = BaseApplication.INSTANCE.getContext();
        Intrinsics.checkNotNull(context);
        LocalBroadcastManager.getInstance(context).registerReceiver(BaseApplication.INSTANCE.getGpsLocationUpdateReceiver(), new IntentFilter("GPS_LOCATION_UPDATE"));
        Context context2 = BaseApplication.INSTANCE.getContext();
        Intrinsics.checkNotNull(context2);
        LocalBroadcastManager.getInstance(context2).registerReceiver(BaseApplication.INSTANCE.getGpsLocationUpdateReceiver(), new IntentFilter("GPS_LOCATION_UPDATE"));
        IntentFilter intentFilter = new IntentFilter("GPS_LOCATION_UPDATE");
        Context context3 = BaseApplication.INSTANCE.getContext();
        Intrinsics.checkNotNull(context3);
        LocalBroadcastManager.getInstance(context3).registerReceiver(this.localBluetoothReceiver, intentFilter);
        UnidenLocationManager.getInstance().setupLocationSource();
    }

    @Override // androidx.fragment.app.Fragment
    public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {
        Intrinsics.checkNotNullParameter(inflater, "inflater");
        setBinding((FragmentMapsBinding) DataBindingUtil.inflate(inflater, C2074R.layout.fragment_maps, container, false));
        getBinding().setLifecycleOwner(getViewLifecycleOwner());
        View root = getBinding().getRoot();
        Intrinsics.checkNotNullExpressionValue(root, "getRoot(...)");
        return root;
    }

    @Override // androidx.fragment.app.Fragment
    public void onViewCreated(View view, Bundle savedInstanceState) {
        Intrinsics.checkNotNullParameter(view, "view");
        super.onViewCreated(view, savedInstanceState);
        FragmentActivity activity = getActivity();
        Application application = activity != null ? activity.getApplication() : null;
        Intrinsics.checkNotNull(application, "null cannot be cast to non-null type com.uniden.rtach.helper.BaseApplication");
        BaseApplication baseApplication = (BaseApplication) application;
        this.myApp = baseApplication;
        if (baseApplication == null) {
            Intrinsics.throwUninitializedPropertyAccessException("myApp");
            baseApplication = null;
        }
        this.sharedPrefs = baseApplication.getSharedPrefs();
        this.userMakerIcon = initUserMaker();
        SupportMapFragment supportMapFragment = (SupportMapFragment) getChildFragmentManager().findFragmentById(C2074R.id.map);
        this.mapView = supportMapFragment != null ? supportMapFragment.getView() : null;
        if (supportMapFragment != null) {
            supportMapFragment.getMapAsync(this.callback);
        }
        ActivityResultLauncher activityResultLauncherRegisterForActivityResult = registerForActivityResult(new ActivityResultContracts.RequestPermission(), new ActivityResultCallback() { // from class: com.uniden.rtach.ui.fragment.MapsFragment$$ExternalSyntheticLambda10
            @Override // androidx.activity.result.ActivityResultCallback
            public final void onActivityResult(Object obj) {
                MapsFragment.onViewCreated$lambda$0(this.f$0, ((Boolean) obj).booleanValue());
            }
        });
        Intrinsics.checkNotNullExpressionValue(activityResultLauncherRegisterForActivityResult, "registerForActivityResult(...)");
        activityResultLauncherRegisterForActivityResult.launch("android.permission.ACCESS_FINE_LOCATION");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void onViewCreated$lambda$0(MapsFragment this$0, boolean z) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        if (z) {
            this$0.initClient();
            this$0.observeDataChange();
            this$0.initLocationManger();
        }
    }

    private final void initLocationManger() {
        new MyLocationListener();
        if (ActivityCompat.checkSelfPermission(requireActivity(), "android.permission.ACCESS_FINE_LOCATION") == 0 && ActivityCompat.checkSelfPermission(requireActivity(), "android.permission.ACCESS_COARSE_LOCATION") == 0) {
            getLastKnownLocation(true);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void callback$lambda$4(final MapsFragment this$0, final GoogleMap googleMap) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Intrinsics.checkNotNullParameter(googleMap, "googleMap");
        this$0.setMap(googleMap);
        this$0.isMapLoaded = true;
        googleMap.setIndoorEnabled(true);
        googleMap.getUiSettings().setCompassEnabled(false);
        googleMap.getUiSettings().setMapToolbarEnabled(false);
        googleMap.getUiSettings().setRotateGesturesEnabled(true);
        if (!this$0.isLocationChanged && this$0.mapCameraZoomLevel == 0.0f) {
            this$0.mapCameraZoomLevel = this$0.getMap().getCameraPosition().zoom;
            Log.e("CameraIDLE", this$0.mapCameraZoomLevel + "  " + this$0.getMap().getCameraPosition().zoom);
        }
        BaseApplication baseApplication = this$0.myApp;
        if (baseApplication == null) {
            Intrinsics.throwUninitializedPropertyAccessException("myApp");
            baseApplication = null;
        }
        baseApplication.getEtcDataChanged().observe(this$0.requireActivity(), new MapsFragment$sam$androidx_lifecycle_Observer$0(new Function1() { // from class: com.uniden.rtach.ui.fragment.MapsFragment$$ExternalSyntheticLambda7
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return MapsFragment.callback$lambda$4$lambda$1(googleMap, this$0, (ETCDataModel) obj);
            }
        }));
        this$0.getMap().setOnCameraMoveStartedListener(new GoogleMap.OnCameraMoveStartedListener() { // from class: com.uniden.rtach.ui.fragment.MapsFragment$$ExternalSyntheticLambda8
            @Override // com.google.android.gms.maps.GoogleMap.OnCameraMoveStartedListener
            public final void onCameraMoveStarted(int i) {
                MapsFragment.callback$lambda$4$lambda$2(this.f$0, i);
            }
        });
        if (UnidenLocationManager.getInstance().getCurrentLocation() != null) {
            Location currentLocation = UnidenLocationManager.getInstance().getCurrentLocation();
            Intrinsics.checkNotNullExpressionValue(currentLocation, "getCurrentLocation(...)");
            this$0.updateLocation(currentLocation);
        }
        this$0.getMap().setOnCameraIdleListener(new GoogleMap.OnCameraIdleListener() { // from class: com.uniden.rtach.ui.fragment.MapsFragment$$ExternalSyntheticLambda9
            @Override // com.google.android.gms.maps.GoogleMap.OnCameraIdleListener
            public final void onCameraIdle() {
                MapsFragment.callback$lambda$4$lambda$3(this.f$0);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit callback$lambda$4$lambda$1(GoogleMap googleMap, MapsFragment this$0, ETCDataModel eTCDataModel) {
        Intrinsics.checkNotNullParameter(googleMap, "$googleMap");
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        StoreUserData storeUserData = null;
        if (Intrinsics.areEqual(eTCDataModel.getAutoBrightnessStatus(), "D")) {
            googleMap.setMapStyle(MapStyleOptions.loadRawResourceStyle(this$0.requireContext(), C2074R.raw.style_json));
            isMapLight = false;
        } else {
            googleMap.setMapStyle(null);
            isMapLight = true;
        }
        StoreUserData storeUserData2 = this$0.sharedPrefs;
        if (storeUserData2 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("sharedPrefs");
        } else {
            storeUserData = storeUserData2;
        }
        storeUserData.setMapLight(isMapLight);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void callback$lambda$4$lambda$2(MapsFragment this$0, int i) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        if (i == 1) {
            this$0.isGestureEnabled = true;
            Log.e("CameraIDLE", "Gesture");
            Log.e("MAPMOVE_ZOOM", this$0.mapCameraZoomLevel + "  " + this$0.getMap().getCameraPosition().zoom);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void callback$lambda$4$lambda$3(MapsFragment this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        if (this$0.mapCameraZoomLevel == this$0.getMap().getCameraPosition().zoom && this$0.isGestureEnabled) {
            this$0.isScrollEnable = true;
            this$0.isHeadingUp = false;
            Log.e("CameraIDLE", "Scroll");
        } else if (this$0.mapCameraZoomLevel != this$0.getMap().getCameraPosition().zoom && this$0.isHeadingUp && this$0.isGestureEnabled) {
            this$0.isZoomEnable = true;
            this$0.isScrollEnable = false;
            this$0.mapCameraZoomLevel = this$0.getMap().getCameraPosition().zoom;
            Log.e("CameraIDLE", "Zoom");
        }
        this$0.isGestureEnabled = false;
        if (this$0.isLocationChanged) {
            return;
        }
        this$0.mapCameraZoomLevel = this$0.getMap().getCameraPosition().zoom;
        Log.e("CameraIDLE", this$0.mapCameraZoomLevel + "  " + this$0.getMap().getCameraPosition().zoom);
    }

    private final void observeDataChange() {
        if (!isAdded() || getActivity() == null) {
            return;
        }
        getViewModel().getOnGpsClick().observe(requireActivity(), new MapsFragment$sam$androidx_lifecycle_Observer$0(new Function1() { // from class: com.uniden.rtach.ui.fragment.MapsFragment$$ExternalSyntheticLambda11
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return MapsFragment.observeDataChange$lambda$5(this.f$0, (Boolean) obj);
            }
        }));
        BaseApplication baseApplication = this.myApp;
        if (baseApplication == null) {
            Intrinsics.throwUninitializedPropertyAccessException("myApp");
            baseApplication = null;
        }
        baseApplication.getPoiDataChanged().observe(requireActivity(), new MapsFragment$sam$androidx_lifecycle_Observer$0(new Function1() { // from class: com.uniden.rtach.ui.fragment.MapsFragment$$ExternalSyntheticLambda12
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return MapsFragment.observeDataChange$lambda$8(this.f$0, (HashMap) obj);
            }
        }));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit observeDataChange$lambda$5(MapsFragment this$0, Boolean bool) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        if (bool.booleanValue()) {
            this$0.isHeadingUp = true;
            this$0.isScrollEnable = false;
            this$0.isZoomEnable = false;
            this$0.getLastKnownLocation(false);
        }
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit observeDataChange$lambda$8(MapsFragment this$0, HashMap map) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        FragmentActivity fragmentActivityRequireActivity = this$0.requireActivity();
        Intrinsics.checkNotNullExpressionValue(fragmentActivityRequireActivity, "requireActivity(...)");
        Intrinsics.checkNotNull(map);
        for (Map.Entry entry : map.entrySet()) {
            String str = (String) entry.getKey();
            MarkerAndPoiDataModel markerAndPoiDataModel = (MarkerAndPoiDataModel) entry.getValue();
            BitmapDescriptor bitmapDescriptorConvertImageBitmapDescriptor = new Utils().convertImageBitmapDescriptor(fragmentActivityRequireActivity, markerAndPoiDataModel.getMarkerType());
            if (this$0.displayMarkerMap.containsKey(str)) {
                Marker marker = this$0.displayMarkerMap.get(str);
                if (marker != null) {
                    marker.setIcon(bitmapDescriptorConvertImageBitmapDescriptor);
                }
            } else if (bitmapDescriptorConvertImageBitmapDescriptor != null) {
                this$0.displayMarker(markerAndPoiDataModel.getLatLng(), bitmapDescriptorConvertImageBitmapDescriptor, str, markerAndPoiDataModel.getHexStringLat(), markerAndPoiDataModel.getHexStringLng());
            }
        }
        Iterator<Map.Entry<String, Marker>> it = this$0.displayMarkerMap.entrySet().iterator();
        while (it.hasNext()) {
            Map.Entry<String, Marker> next = it.next();
            Intrinsics.checkNotNullExpressionValue(next, "next(...)");
            Map.Entry<String, Marker> entry2 = next;
            String key = entry2.getKey();
            Intrinsics.checkNotNullExpressionValue(key, "<get-key>(...)");
            if (!map.containsKey(key)) {
                entry2.getValue().remove();
                it.remove();
            }
        }
        return Unit.INSTANCE;
    }

    private final void displayMarker(LatLng latLng, BitmapDescriptor bitmap, String key, String hexStringLat, String hexStringLng) {
        Log.e("POI_DATA_MARKER", latLng + " || " + key);
        LatLng latLngKeepFiveDigitsAfterPoint = latLng != null ? new Utils().keepFiveDigitsAfterPoint(latLng) : null;
        if (latLngKeepFiveDigitsAfterPoint != null) {
            MarkerOptions markerOptions = new MarkerOptions();
            markerOptions.position(latLngKeepFiveDigitsAfterPoint);
            markerOptions.icon(bitmap);
            getMap().setOnMarkerClickListener(this);
            Marker markerAddMarker = getMap().addMarker(markerOptions);
            if (markerAddMarker != null) {
                markerAddMarker.setTag(new Pair(hexStringLat, hexStringLng));
                markerAddMarker.setSnippet(key);
                this.displayMarkerMap.put(key, markerAddMarker);
            }
        }
    }

    private final void updateLocation(Location location) {
        if (this.map != null) {
            if (!this.isScrollEnable) {
                getMap().animateCamera(CameraUpdateFactory.newLatLngZoom(new LatLng(location.getLatitude(), location.getLongitude()), 18.0f), 1000, null);
            }
            if (ActivityCompat.checkSelfPermission(requireActivity(), "android.permission.ACCESS_FINE_LOCATION") == 0 && ActivityCompat.checkSelfPermission(requireActivity(), "android.permission.ACCESS_COARSE_LOCATION") == 0) {
                getMap().setMyLocationEnabled(false);
                getMap().setOnMarkerClickListener(this);
            }
        }
    }

    private final BitmapDescriptor initUserMaker() {
        Bitmap bitmapCreateScaledBitmap = Bitmap.createScaledBitmap(BitmapFactory.decodeResource(getResources(), C2074R.drawable.ic_usermarker), 150, 150, false);
        Intrinsics.checkNotNullExpressionValue(bitmapCreateScaledBitmap, "createScaledBitmap(...)");
        BitmapDescriptor bitmapDescriptorFromBitmap = BitmapDescriptorFactory.fromBitmap(bitmapCreateScaledBitmap);
        Intrinsics.checkNotNullExpressionValue(bitmapDescriptorFromBitmap, "fromBitmap(...)");
        return bitmapDescriptorFromBitmap;
    }

    private final void addUserMaker(Location location) {
        MarkerOptions markerOptions = new MarkerOptions();
        markerOptions.position(new LatLng(location.getLatitude(), location.getLongitude()));
        markerOptions.icon(this.userMakerIcon);
        markerOptions.flat(true);
        this.userMaker = getMap().addMarker(markerOptions);
    }

    public final void updateUserMakerPosition(Location loc) {
        Intrinsics.checkNotNullParameter(loc, "loc");
        Marker marker = this.userMaker;
        if (marker != null) {
            marker.setPosition(new LatLng(loc.getLatitude(), loc.getLongitude()));
            marker.setRotation(loc.getBearing());
        }
    }

    private final void initClient() {
        this.client = LocationServices.getFusedLocationProviderClient((Activity) requireActivity());
    }

    private final void getLastKnownLocation(final boolean isFirsTime) {
        Task<Location> lastLocation;
        FusedLocationProviderClient fusedLocationProviderClient = this.client;
        if (fusedLocationProviderClient == null || (lastLocation = fusedLocationProviderClient.getLastLocation()) == null) {
            return;
        }
        final Function1 function1 = new Function1() { // from class: com.uniden.rtach.ui.fragment.MapsFragment$$ExternalSyntheticLambda2
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return MapsFragment.getLastKnownLocation$lambda$13(this.f$0, isFirsTime, (Location) obj);
            }
        };
        lastLocation.addOnSuccessListener(new OnSuccessListener() { // from class: com.uniden.rtach.ui.fragment.MapsFragment$$ExternalSyntheticLambda3
            @Override // com.google.android.gms.tasks.OnSuccessListener
            public final void onSuccess(Object obj) {
                MapsFragment.getLastKnownLocation$lambda$14(function1, obj);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void getLastKnownLocation$lambda$14(Function1 tmp0, Object obj) {
        Intrinsics.checkNotNullParameter(tmp0, "$tmp0");
        tmp0.invoke(obj);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit getLastKnownLocation$lambda$13(MapsFragment this$0, boolean z, Location location) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        if (location != null) {
            this$0.lastLocation = location;
            this$0.updateLocation(location);
        } else {
            this$0.getCurrentLocation();
        }
        if (location != null) {
            this$0.currentLocation = location;
            if (this$0.userMaker == null) {
                this$0.addUserMaker(location);
            } else if (!z) {
                this$0.updateUserMakerPosition(location);
            }
        }
        return Unit.INSTANCE;
    }

    private final void getCurrentLocation() {
        FusedLocationProviderClient fusedLocationProviderClient = this.client;
        Intrinsics.checkNotNull(fusedLocationProviderClient);
        Task<Location> currentLocation = fusedLocationProviderClient.getCurrentLocation(100, new CancellationTokenSource().getToken());
        final Function1 function1 = new Function1() { // from class: com.uniden.rtach.ui.fragment.MapsFragment$$ExternalSyntheticLambda5
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return MapsFragment.getCurrentLocation$lambda$15(this.f$0, (Location) obj);
            }
        };
        currentLocation.addOnSuccessListener(new OnSuccessListener() { // from class: com.uniden.rtach.ui.fragment.MapsFragment$$ExternalSyntheticLambda6
            @Override // com.google.android.gms.tasks.OnSuccessListener
            public final void onSuccess(Object obj) {
                MapsFragment.getCurrentLocation$lambda$16(function1, obj);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void getCurrentLocation$lambda$16(Function1 tmp0, Object obj) {
        Intrinsics.checkNotNullParameter(tmp0, "$tmp0");
        tmp0.invoke(obj);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit getCurrentLocation$lambda$15(MapsFragment this$0, Location location) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        if (location != null) {
            this$0.updateLocation(location);
        }
        return Unit.INSTANCE;
    }

    @Override // com.google.android.gms.maps.GoogleMap.OnMapLoadedCallback
    public void onMapLoaded() {
        throw new NotImplementedError("An operation is not implemented: Not yet implemented");
    }

    /* JADX INFO: compiled from: MapsFragment.kt */
    @Metadata(m490d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0086\u0004\u0018\u00002\u00020\u0001B\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u0010\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007H\u0016¨\u0006\b"}, m491d2 = {"Lcom/uniden/rtach/ui/fragment/MapsFragment$MyLocationListener;", "Landroid/location/LocationListener;", "<init>", "(Lcom/uniden/rtach/ui/fragment/MapsFragment;)V", "onLocationChanged", "", "loc", "Landroid/location/Location;", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    public final class MyLocationListener implements LocationListener {
        public MyLocationListener() {
        }

        @Override // android.location.LocationListener
        public void onLocationChanged(Location loc) {
            Intrinsics.checkNotNullParameter(loc, "loc");
            if (MapsFragment.this.isInitialZoomDone) {
                MapsFragment.this.currentLocation = loc;
                MapsFragment mapsFragment = MapsFragment.this;
                Location location = mapsFragment.currentLocation;
                if (location == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("currentLocation");
                    location = null;
                }
                mapsFragment.updateMapCamera(location);
                MapsFragment.this.lastLocation = loc;
                return;
            }
            MapsFragment.this.updateFistTimeMapCamera(loc);
        }
    }

    public final void updateMapCamera(Location location) {
        Intrinsics.checkNotNullParameter(location, "location");
        this.isInitialZoomDone = true;
        if (this.isScrollEnable) {
            return;
        }
        CameraPosition.Builder builderTarget = new CameraPosition.Builder().target(new LatLng(location.getLatitude(), location.getLongitude()));
        Intrinsics.checkNotNullExpressionValue(builderTarget, "target(...)");
        builderTarget.zoom(18.0f);
        builderTarget.bearing(location.getBearing());
        builderTarget.tilt(0.0f);
    }

    public final void updateFistTimeMapCamera(Location location) {
        Intrinsics.checkNotNullParameter(location, "location");
        if (this.isScrollEnable) {
            return;
        }
        CameraPosition.Builder builderTarget = new CameraPosition.Builder().target(new LatLng(location.getLatitude(), location.getLongitude()));
        Intrinsics.checkNotNullExpressionValue(builderTarget, "target(...)");
        builderTarget.zoom(18.0f);
        builderTarget.bearing(location.getBearing());
        builderTarget.tilt(0.0f);
        this.isInitialZoomDone = true;
    }

    @Override // com.google.android.gms.maps.GoogleMap.OnMarkerClickListener
    public boolean onMarkerClick(Marker p0) {
        Intrinsics.checkNotNullParameter(p0, "p0");
        if (p0.getTag() == null) {
            return true;
        }
        Object tag = p0.getTag();
        Intrinsics.checkNotNull(tag, "null cannot be cast to non-null type kotlin.Pair<*, *>");
        Pair pair = (Pair) tag;
        String snippet = p0.getSnippet();
        if (snippet == null || !this.displayMarkerMap.containsKey(snippet) || snippet.charAt(0) != 'u') {
            return true;
        }
        displayAlertDialogDeleteUserMark(String.valueOf(pair.getFirst()), String.valueOf(pair.getSecond()));
        return true;
    }

    private final void displayAlertDialogDeleteUserMark(final String lat, final String str) {
        AlertDialog.Builder builder = new AlertDialog.Builder(requireActivity());
        builder.setMessage(getString(C2074R.string.message_delete_user_mark)).setTitle(getString(C2074R.string.message_delete_user_mark_title)).setPositiveButton(getString(C2074R.string.yes), new DialogInterface.OnClickListener() { // from class: com.uniden.rtach.ui.fragment.MapsFragment$$ExternalSyntheticLambda0
            @Override // android.content.DialogInterface.OnClickListener
            public final void onClick(DialogInterface dialogInterface, int i) {
                MapsFragment.displayAlertDialogDeleteUserMark$lambda$18(this.f$0, lat, str, dialogInterface, i);
            }
        }).setNegativeButton(getString(C2074R.string.f401no), new DialogInterface.OnClickListener() { // from class: com.uniden.rtach.ui.fragment.MapsFragment$$ExternalSyntheticLambda4
            @Override // android.content.DialogInterface.OnClickListener
            public final void onClick(DialogInterface dialogInterface, int i) {
                dialogInterface.dismiss();
            }
        });
        AlertDialog alertDialogCreate = builder.create();
        Intrinsics.checkNotNullExpressionValue(alertDialogCreate, "create(...)");
        alertDialogCreate.show();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void displayAlertDialogDeleteUserMark$lambda$18(MapsFragment this$0, String lat, String str, DialogInterface dialogInterface, int i) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Intrinsics.checkNotNullParameter(lat, "$lat");
        Intrinsics.checkNotNullParameter(str, "$long");
        BluetoothManager.Companion companion = BluetoothManager.INSTANCE;
        FragmentActivity fragmentActivityRequireActivity = this$0.requireActivity();
        Intrinsics.checkNotNullExpressionValue(fragmentActivityRequireActivity, "requireActivity(...)");
        companion.getInstance(fragmentActivityRequireActivity).writeCharacteristic("BTreqUMRK:0," + lat + ',' + str);
        dialogInterface.dismiss();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void locationHasChanged(Location loc) {
        Marker marker = this.userMaker;
        if (marker == null) {
            return;
        }
        this.isLocationChanged = true;
        float[] fArr = new float[1];
        if (marker != null) {
            Intrinsics.checkNotNull(marker);
            double d = marker.getPosition().latitude;
            Marker marker2 = this.userMaker;
            Intrinsics.checkNotNull(marker2);
            Location.distanceBetween(d, marker2.getPosition().longitude, loc.getLatitude(), loc.getLongitude(), fArr);
        }
        Marker marker3 = this.userMaker;
        if (marker3 != null && this.isResume) {
            Intrinsics.checkNotNull(marker3);
            marker3.setRotation(loc.getBearing());
            this.isResume = false;
        }
        if (fArr[0] > 500.0f) {
            Marker marker4 = this.userMaker;
            Intrinsics.checkNotNull(marker4);
            marker4.setPosition(new LatLng(loc.getLatitude(), loc.getLongitude()));
        }
        try {
            if (!this.isScrollEnable) {
                getMap().animateCamera(CameraUpdateFactory.newCameraPosition(setMapCameraPosition(loc)), 1000, null);
                moveCameraNDcarWithBearing(loc);
                return;
            }
            moveCameraNDcarWithBearing(loc);
        } catch (Exception e) {
            e.printStackTrace();
            Log.e("SET_SIMULATION_ERROR", Unit.INSTANCE.toString());
        }
    }

    private final CameraPosition setMapCameraPosition(Location destLoc) {
        double speed = ((double) destLoc.getSpeed()) * 3.6d * 0.621371192d;
        if (!this.isZoomEnable) {
            this.mapCameraZoomLevel = getCustZoomLevel(speed);
        }
        float custBearing = getCustBearing(destLoc, speed);
        new LatLng(destLoc.getLatitude(), destLoc.getLongitude());
        LatLng latLngDestination = new Utility().Destination(destLoc.getLatitude(), destLoc.getLongitude(), custBearing, (((CAR_REL_BOTTOM_PER * 40075.017d) * CAR_REL_BOTTOM_POWER) / Math.pow(2.0d, this.mapCameraZoomLevel)) * CAR_REL_CTR);
        CameraPosition.Builder builder = new CameraPosition.Builder();
        Intrinsics.checkNotNull(latLngDestination);
        CameraPosition cameraPositionBuild = builder.target(latLngDestination).zoom(this.mapCameraZoomLevel).bearing(custBearing).tilt(getCustAngle()).build();
        Intrinsics.checkNotNullExpressionValue(cameraPositionBuild, "build(...)");
        return cameraPositionBuild;
    }

    private final float getCustZoomLevel(double speed_mph) {
        double dClamp = new Utility().clamp(speed_mph, 25.0d, 120.0d);
        WindowManager windowManager = (WindowManager) requireActivity().getSystemService("window");
        Intrinsics.checkNotNull(windowManager);
        Display defaultDisplay = windowManager.getDefaultDisplay();
        Utility utility = new Utility();
        Intrinsics.checkNotNull(defaultDisplay);
        float fM488lg = (float) new Utility().m488lg((((double) (utility.getDisplaySize(defaultDisplay).y * 21)) * 40075.017d) / (((double) 640) * dClamp));
        double d = prvSpeedClamped;
        if (d - dClamp <= 5.0d && dClamp - d <= 5.0d) {
            return prvZoom;
        }
        prvZoom = fM488lg;
        prvSpeedClamped = dClamp;
        return fM488lg;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r5v10 */
    /* JADX WARN: Type inference failed for: r5v7, types: [float] */
    /* JADX WARN: Type inference failed for: r5v9 */
    private final float getCustBearing(Location location, double speed_mph) {
        try {
            if (location.getBearing() >= 0.0f && speed_mph > 1.5d) {
                location = location.getBearing();
            } else {
                location = getMap().getCameraPosition().bearing;
            }
            return location;
        } catch (Exception unused) {
            if (location.getBearing() >= 0.0f && speed_mph > 1.5d) {
                return location.getBearing();
            }
            return getMap().getCameraPosition().bearing;
        }
    }

    public final void moveCameraNDcarWithBearing(final Location destLoc) {
        Intrinsics.checkNotNullParameter(destLoc, "destLoc");
        Marker marker = this.userMaker;
        Intrinsics.checkNotNull(marker);
        final LatLng position = marker.getPosition();
        Intrinsics.checkNotNullExpressionValue(position, "getPosition(...)");
        final long jUptimeMillis = SystemClock.uptimeMillis();
        Runnable runnable = runHndCameraNDcar;
        if (runnable != null) {
            Handler handler = hndCameraNDcar;
            Intrinsics.checkNotNull(runnable);
            handler.removeCallbacks(runnable);
        }
        Runnable runnable2 = new Runnable() { // from class: com.uniden.rtach.ui.fragment.MapsFragment.moveCameraNDcarWithBearing.1
            private long elapsed;
            private float timeMove;

            public final long getElapsed() {
                return this.elapsed;
            }

            public final float getTimeMove() {
                return this.timeMove;
            }

            public final void setElapsed(long j) {
                this.elapsed = j;
            }

            public final void setTimeMove(float f) {
                this.timeMove = f;
            }

            @Override // java.lang.Runnable
            public void run() throws InterruptedException {
                long jUptimeMillis2 = SystemClock.uptimeMillis() - jUptimeMillis;
                this.elapsed = jUptimeMillis2;
                float durationAnimationLength = jUptimeMillis2 / MapsFragment.INSTANCE.getDurationAnimationLength();
                this.timeMove = durationAnimationLength;
                if (durationAnimationLength < 1.0f) {
                    float f = 1;
                    LatLng latLng = new LatLng((position.latitude * ((double) (f - this.timeMove))) + (destLoc.getLatitude() * ((double) this.timeMove)), (position.longitude * ((double) (f - this.timeMove))) + (destLoc.getLongitude() * ((double) this.timeMove)));
                    if (this.getMapCameraZoomLevel() > 19.0f) {
                        Thread.sleep(45L);
                    }
                    Marker userMaker = this.getUserMaker();
                    Intrinsics.checkNotNull(userMaker);
                    userMaker.setPosition(latLng);
                    if (this.getMapCameraZoomLevel() > 19.0f) {
                        Marker userMaker2 = this.getUserMaker();
                        Intrinsics.checkNotNull(userMaker2);
                        userMaker2.setRotation(destLoc.getBearing());
                    }
                    if (this.isScrollEnable) {
                        if (this.isMinimumBearingDifferenceBearing(destLoc.getBearing(), MapsFragment.INSTANCE.getRotationFixAngleMinimum())) {
                            Marker userMaker3 = this.getUserMaker();
                            Intrinsics.checkNotNull(userMaker3);
                            userMaker3.setPosition(latLng);
                            Marker userMaker4 = this.getUserMaker();
                            Intrinsics.checkNotNull(userMaker4);
                            userMaker4.setRotation(destLoc.getBearing());
                        }
                    } else {
                        MapsFragment mapsFragment = this;
                        if (mapsFragment.isMinimumBearingDifferenceBearing(mapsFragment.getMap().getCameraPosition().bearing, MapsFragment.INSTANCE.getRotationFixAngleMinimum())) {
                            Marker userMaker5 = this.getUserMaker();
                            Intrinsics.checkNotNull(userMaker5);
                            userMaker5.setRotation(this.getMap().getCameraPosition().bearing);
                        }
                    }
                }
                MapsFragment.INSTANCE.getHndCameraNDcar().postDelayed(this, MapsFragment.INSTANCE.getDurationAnimationRepeatTime());
            }
        };
        runHndCameraNDcar = runnable2;
        float f = this.mapCameraZoomLevel;
        if (f > 19.0f) {
            DurationAnimationLength = 1000.0f;
        } else if (f <= 16.0f || f >= 18.0f) {
            DurationAnimationLength = 2100.0f;
        } else {
            DurationAnimationLength = 1500.0f;
        }
        Handler handler2 = hndCameraNDcar;
        Intrinsics.checkNotNull(runnable2);
        handler2.post(runnable2);
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code duplicated, block: B:11:0x0031  */
    /* JADX WARN: Code duplicated, block: B:7:0x0021  */
    /* JADX WARN: Code duplicated, block: B:9:0x0025  */
    public final boolean isMinimumBearingDifferenceBearing(float bearingLoc, int bearing) {
        Marker marker;
        Marker marker2 = this.userMaker;
        float rotation = 0.0f;
        if (marker2 != null) {
            Intrinsics.checkNotNull(marker2);
            if (bearingLoc - marker2.getRotation() < 0.0f) {
                Marker marker3 = this.userMaker;
                Intrinsics.checkNotNull(marker3);
                rotation = (-1) * (bearingLoc - marker3.getRotation());
            } else {
                marker = this.userMaker;
                if (marker != null) {
                    Intrinsics.checkNotNull(marker);
                    if (marker.getRotation() - bearingLoc < 0.0f) {
                        Marker marker4 = this.userMaker;
                        Intrinsics.checkNotNull(marker4);
                        rotation = (-1) * (marker4.getRotation() - bearingLoc);
                    }
                }
            }
        } else {
            marker = this.userMaker;
            if (marker != null) {
                Intrinsics.checkNotNull(marker);
                if (marker.getRotation() - bearingLoc < 0.0f) {
                    Marker marker5 = this.userMaker;
                    Intrinsics.checkNotNull(marker5);
                    rotation = (-1) * (marker5.getRotation() - bearingLoc);
                }
            }
        }
        return rotation >= ((float) bearing);
    }

    /* JADX INFO: compiled from: MapsFragment.kt */
    @Metadata(m490d1 = {"\u0000D\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\u0006\n\u0002\b\u0005\n\u0002\u0010\u0007\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\t\n\u0002\b\u0011\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003R\u0014\u0010\u0004\u001a\u00020\u0005X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007R\u001a\u0010\b\u001a\u00020\tX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\n\u0010\u000b\"\u0004\b\f\u0010\rR\u001a\u0010\u000e\u001a\u00020\u000fX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0010\u0010\u0011\"\u0004\b\u0012\u0010\u0013R\u001c\u0010\u0014\u001a\u0004\u0018\u00010\u0015X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0016\u0010\u0017\"\u0004\b\u0018\u0010\u0019R\u0011\u0010\u001a\u001a\u00020\u001b¢\u0006\b\n\u0000\u001a\u0004\b\u001c\u0010\u001dR\u001a\u0010\u001e\u001a\u00020\u000fX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u001f\u0010\u0011\"\u0004\b \u0010\u0013R\u0014\u0010!\u001a\u00020\"X\u0086D¢\u0006\b\n\u0000\u001a\u0004\b#\u0010$R\u001a\u0010%\u001a\u00020&X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b'\u0010(\"\u0004\b)\u0010*R\u001a\u0010+\u001a\u00020\tX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b,\u0010\u000b\"\u0004\b-\u0010\rR\u001a\u0010.\u001a\u00020\tX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b/\u0010\u000b\"\u0004\b0\u0010\rR\u001a\u00101\u001a\u00020\tX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b2\u0010\u000b\"\u0004\b3\u0010\rR\u001a\u00104\u001a\u00020\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b4\u0010\u0007\"\u0004\b5\u00106¨\u00067"}, m491d2 = {"Lcom/uniden/rtach/ui/fragment/MapsFragment$Companion;", "", "<init>", "()V", "MOCKLOCATION_ON", "", "getMOCKLOCATION_ON", "()Z", "prvSpeedClamped", "", "getPrvSpeedClamped", "()D", "setPrvSpeedClamped", "(D)V", "prvZoom", "", "getPrvZoom", "()F", "setPrvZoom", "(F)V", "runHndCameraNDcar", "Ljava/lang/Runnable;", "getRunHndCameraNDcar", "()Ljava/lang/Runnable;", "setRunHndCameraNDcar", "(Ljava/lang/Runnable;)V", "hndCameraNDcar", "Landroid/os/Handler;", "getHndCameraNDcar", "()Landroid/os/Handler;", "DurationAnimationLength", "getDurationAnimationLength", "setDurationAnimationLength", "RotationFixAngleMinimum", "", "getRotationFixAngleMinimum", "()I", "DurationAnimationRepeatTime", "", "getDurationAnimationRepeatTime", "()J", "setDurationAnimationRepeatTime", "(J)V", "CAR_REL_BOTTOM_PER", "getCAR_REL_BOTTOM_PER", "setCAR_REL_BOTTOM_PER", "CAR_REL_CTR", "getCAR_REL_CTR", "setCAR_REL_CTR", "CAR_REL_BOTTOM_POWER", "getCAR_REL_BOTTOM_POWER", "setCAR_REL_BOTTOM_POWER", "isMapLight", "setMapLight", "(Z)V", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final boolean getMOCKLOCATION_ON() {
            return MapsFragment.MOCKLOCATION_ON;
        }

        public final double getPrvSpeedClamped() {
            return MapsFragment.prvSpeedClamped;
        }

        public final void setPrvSpeedClamped(double d) {
            MapsFragment.prvSpeedClamped = d;
        }

        public final float getPrvZoom() {
            return MapsFragment.prvZoom;
        }

        public final void setPrvZoom(float f) {
            MapsFragment.prvZoom = f;
        }

        public final Runnable getRunHndCameraNDcar() {
            return MapsFragment.runHndCameraNDcar;
        }

        public final void setRunHndCameraNDcar(Runnable runnable) {
            MapsFragment.runHndCameraNDcar = runnable;
        }

        public final Handler getHndCameraNDcar() {
            return MapsFragment.hndCameraNDcar;
        }

        public final float getDurationAnimationLength() {
            return MapsFragment.DurationAnimationLength;
        }

        public final void setDurationAnimationLength(float f) {
            MapsFragment.DurationAnimationLength = f;
        }

        public final int getRotationFixAngleMinimum() {
            return MapsFragment.RotationFixAngleMinimum;
        }

        public final long getDurationAnimationRepeatTime() {
            return MapsFragment.DurationAnimationRepeatTime;
        }

        public final void setDurationAnimationRepeatTime(long j) {
            MapsFragment.DurationAnimationRepeatTime = j;
        }

        public final double getCAR_REL_BOTTOM_PER() {
            return MapsFragment.CAR_REL_BOTTOM_PER;
        }

        public final void setCAR_REL_BOTTOM_PER(double d) {
            MapsFragment.CAR_REL_BOTTOM_PER = d;
        }

        public final double getCAR_REL_CTR() {
            return MapsFragment.CAR_REL_CTR;
        }

        public final void setCAR_REL_CTR(double d) {
            MapsFragment.CAR_REL_CTR = d;
        }

        public final double getCAR_REL_BOTTOM_POWER() {
            return MapsFragment.CAR_REL_BOTTOM_POWER;
        }

        public final void setCAR_REL_BOTTOM_POWER(double d) {
            MapsFragment.CAR_REL_BOTTOM_POWER = d;
        }

        public final boolean isMapLight() {
            return MapsFragment.isMapLight;
        }

        public final void setMapLight(boolean z) {
            MapsFragment.isMapLight = z;
        }
    }
}
