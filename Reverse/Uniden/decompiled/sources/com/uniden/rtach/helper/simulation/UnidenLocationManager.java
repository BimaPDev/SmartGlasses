package com.uniden.rtach.helper.simulation;

import android.content.Intent;
import android.location.GnssStatus;
import android.location.GpsStatus;
import android.location.Location;
import android.location.LocationListener;
import android.location.LocationManager;
import android.os.Bundle;
import android.os.Environment;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;
import androidx.core.app.ActivityCompat;
import androidx.localbroadcastmanager.content.LocalBroadcastManager;
import com.google.android.gms.location.FusedLocationProviderClient;
import com.google.android.gms.location.LocationCallback;
import com.google.android.gms.location.LocationRequest;
import com.google.android.gms.location.LocationResult;
import com.google.android.gms.location.LocationServices;
import com.google.firebase.analytics.FirebaseAnalytics;
import com.google.firebase.sessions.settings.RemoteSettings;
import com.uniden.rtach.C2074R;
import com.uniden.rtach.helper.BaseApplication;
import com.uniden.rtach.helper.Constant;
import java.io.BufferedReader;
import java.io.FileReader;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.TimeZone;
import java.util.Timer;
import java.util.TimerTask;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes2.dex */
public class UnidenLocationManager {
    private static final int MIN_DIST_METERS = 5;
    private static final int MIN_TIME_MS = 800;
    private static final int MIN_TIME_MS_FASTEST_INTERVAL = 800;
    private static final int MIN_TIME_MS_INTERVAL = 1000;
    private static final String TAG = "CobraLocationManager";
    private static UnidenLocationManager _instance;
    public static Location currentLocation;
    public static LocationManager locationManager;
    private static MockLocationProvider mockLocationProvider;

    /* JADX INFO: renamed from: h */
    private Handler f433h;
    private FusedLocationProviderClient mFusedLocationClient;
    private LocationRequest mLocationRequest;
    private Timer speedTimer;
    public static Boolean SIMULATION_ON = false;
    public static long timeOflastLocationReceived = 0;
    private static double M_PI = 3.141592653589793d;
    private static BaseApplication mainApp = null;
    private static AtomicBoolean exceedingSpeed = new AtomicBoolean(false);
    private static boolean mockLocationProviderSingletonStarted = true;
    private static String mCurrentSpeedLimit = "--";
    private static String mCurrentStreet = null;
    private static LocationListener mLocationListener = null;
    int Delay = 1000;
    boolean isfusedsetup = false;
    private Timer conserveBatteryTimer = new Timer("Conserve Battery", false);
    private ArrayList<Location> lastknowLocationListForSimulation = new ArrayList<>();
    private float INVALIDACCURACY = 300.0f;
    LocationCallback locationCallback = new LocationCallback() { // from class: com.uniden.rtach.helper.simulation.UnidenLocationManager.1
        @Override // com.google.android.gms.location.LocationCallback
        public void onLocationResult(LocationResult locationResult) {
            if (locationResult == null) {
                return;
            }
            UnidenLocationManager.this.stopFusedLocationUpdates();
            Log.d(UnidenLocationManager.TAG, "Fused Location locationCallback " + locationResult.getLocations());
            for (Location location : locationResult.getLocations()) {
                if (UnidenLocationManager.mLocationListener != null) {
                    UnidenLocationManager.mLocationListener.onLocationChanged(location);
                }
            }
        }
    };
    private GpsStatus.Listener mGPSStatuslistener = new GpsStatus.Listener() { // from class: com.uniden.rtach.helper.simulation.UnidenLocationManager.2
        @Override // android.location.GpsStatus.Listener
        public void onGpsStatusChanged(int i) {
            if (i != 1) {
                if (i == 2) {
                    Log.i(UnidenLocationManager.TAG, "GPS status: stopped");
                    return;
                } else {
                    if (i != 3) {
                        return;
                    }
                    Log.i(UnidenLocationManager.TAG, "GPS status: Received first fix");
                    return;
                }
            }
            Log.i(UnidenLocationManager.TAG, "GPS status: started");
            if (UnidenLocationManager.locationManager == null || !BaseApplication.INSTANCE.isPermissionAvailable()) {
                return;
            }
            Log.d(UnidenLocationManager.TAG, "requestLocationUpdate");
            try {
                UnidenLocationManager.startGPSUpdate();
            } catch (SecurityException e) {
                e.printStackTrace();
            }
        }
    };
    private GnssStatus.Callback mGPSStatuslisteneraboveN = new GnssStatus.Callback() { // from class: com.uniden.rtach.helper.simulation.UnidenLocationManager.3
        @Override // android.location.GnssStatus.Callback
        public void onFirstFix(int i) {
        }

        @Override // android.location.GnssStatus.Callback
        public void onSatelliteStatusChanged(GnssStatus gnssStatus) {
        }

        @Override // android.location.GnssStatus.Callback
        public void onStopped() {
        }

        @Override // android.location.GnssStatus.Callback
        public void onStarted() {
            Log.i(UnidenLocationManager.TAG, "GPS status: started");
            if (UnidenLocationManager.locationManager == null || !BaseApplication.INSTANCE.isPermissionAvailable()) {
                return;
            }
            Log.d(UnidenLocationManager.TAG, "requestLocationUpdate");
            try {
                UnidenLocationManager.startGPSUpdate();
            } catch (SecurityException e) {
                e.printStackTrace();
            }
        }
    };

    private UnidenLocationManager() {
        mainApp = (BaseApplication) BaseApplication.INSTANCE.getContext();
        this.f433h = new Handler(Looper.getMainLooper());
        locationManager = (LocationManager) mainApp.getSystemService(FirebaseAnalytics.Param.LOCATION);
        retrieveLastKnownLocation();
    }

    public static UnidenLocationManager getInstance() {
        if (_instance == null) {
            _instance = new UnidenLocationManager();
        }
        return _instance;
    }

    public static void mockSimulatedLocation(Location location) {
        try {
            mLocationListener.onLocationChanged(location);
        } catch (NullPointerException e) {
            e.printStackTrace();
        }
    }

    public void setfusedClient() {
        Log.d(TAG, "setfusedClient()");
        if (this.mFusedLocationClient == null) {
            this.mFusedLocationClient = LocationServices.getFusedLocationProviderClient(BaseApplication.INSTANCE.getContext());
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void startFusedLocationUpdates() {
        if (ActivityCompat.checkSelfPermission(BaseApplication.INSTANCE.getContext(), "android.permission.ACCESS_FINE_LOCATION") == 0 || ActivityCompat.checkSelfPermission(BaseApplication.INSTANCE.getContext(), "android.permission.ACCESS_COARSE_LOCATION") == 0) {
            Log.d(TAG, "startFusedLocationUpdates()");
            LocationRequest fastestInterval = LocationRequest.create().setPriority(100).setInterval(1000L).setFastestInterval(800L);
            this.mLocationRequest = fastestInterval;
            this.mFusedLocationClient.requestLocationUpdates(fastestInterval, this.locationCallback, Looper.getMainLooper());
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void stopFusedLocationUpdates() {
        try {
            Log.d(TAG, "stopFusedLocationUpdates()");
            this.mFusedLocationClient.removeLocationUpdates(this.locationCallback);
        } catch (Exception unused) {
        }
    }

    private Location retrieveLastKnownLocation() {
        Log.d(TAG, "retrieveLastKnownLocation()");
        if (BaseApplication.INSTANCE.isPermissionAvailable()) {
            try {
                if (SIMULATION_ON.booleanValue()) {
                    currentLocation = BaseApplication.INSTANCE.getLastKnownLocation(locationManager);
                    Log.d(TAG, "getCurrentLocation: 1171 : " + currentLocation);
                }
            } catch (SecurityException e) {
                e.printStackTrace();
            }
            if (currentLocation == null) {
                currentLocation = new Location(TAG);
                Log.e(TAG, "getCurrentLocation: 1177 : " + currentLocation);
                currentLocation.setLatitude(37.5326d);
                currentLocation.setLongitude(127.024612d);
            }
        }
        return currentLocation;
    }

    public Location getCurrentLocation() {
        try {
            if (SIMULATION_ON.booleanValue()) {
                try {
                    Location lastKnownLocation = BaseApplication.INSTANCE.getLastKnownLocation(locationManager);
                    if (lastKnownLocation != null && !this.lastknowLocationListForSimulation.contains(lastKnownLocation)) {
                        this.lastknowLocationListForSimulation.add(lastKnownLocation);
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                }
            } else {
                this.lastknowLocationListForSimulation.clear();
            }
        } catch (Exception unused) {
        }
        if (currentLocation == null) {
            retrieveLastKnownLocation();
        }
        Log.d("SpeedIndicator", "getCurrentLocation() " + currentLocation);
        return currentLocation;
    }

    public void setupLocationSource() {
        Log.d(TAG, "setupLocationSource()");
        if (mLocationListener == null) {
            initLocationListener();
        }
        if (locationManager == null) {
            locationManager = (LocationManager) mainApp.getSystemService(FirebaseAnalytics.Param.LOCATION);
            retrieveLastKnownLocation();
        }
        if (!this.isfusedsetup) {
            this.isfusedsetup = true;
            setfusedClient();
        }
        SimpleDateFormat simpleDateFormat = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss z");
        simpleDateFormat.setTimeZone(TimeZone.getTimeZone("UTC"));
        Log.d(TAG, "CLTIME: UTC time   " + simpleDateFormat.format(new Date()));
        TimeZone timeZone = TimeZone.getDefault();
        Log.d(TAG, "CLTIME:TimeZone   " + timeZone.getID());
        Log.d(TAG, "CLTIME:useDaylightTime   " + timeZone.useDaylightTime());
        Log.d(TAG, "CL offset =   " + (timeZone.getRawOffset() / 1000));
        if (BaseApplication.INSTANCE.isPermissionAvailable()) {
            if (mockLocationProviderSingletonStarted) {
                try {
                    locationManager.registerGnssStatusCallback(this.mGPSStatuslisteneraboveN);
                    if (mLocationListener != null) {
                        Log.d(TAG, "requestLocationUpdates");
                        startGPSUpdate();
                        return;
                    }
                    return;
                } catch (SecurityException e) {
                    e.printStackTrace();
                    return;
                }
            }
            mockLocationProviderSingletonStarted = true;
            locationManager.addTestProvider("gps", false, false, false, false, true, true, true, 1, 1);
            locationManager.setTestProviderEnabled("gps", true);
            Log.d(TAG, "requestLocatinoUpdates minimum distance (m) 5");
            try {
                if (ActivityCompat.checkSelfPermission(BaseApplication.INSTANCE.getContext(), "android.permission.ACCESS_FINE_LOCATION") == 0 || ActivityCompat.checkSelfPermission(BaseApplication.INSTANCE.getContext(), "android.permission.ACCESS_COARSE_LOCATION") == 0) {
                    locationManager.requestLocationUpdates("gps", 800L, 5.0f, mLocationListener);
                    ArrayList arrayList = new ArrayList();
                    String str = Environment.getExternalStorageDirectory().getPath() + RemoteSettings.FORWARD_SLASH_STRING + BaseApplication.INSTANCE.getContext().getString(C2074R.string.app_name) + RemoteSettings.FORWARD_SLASH_STRING;
                    Log.i(TAG, "Root: " + Environment.getRootDirectory().toString());
                    Log.i(TAG, "FilePath: " + str);
                    BufferedReader bufferedReader = new BufferedReader(new FileReader(str + "data.txt"));
                    while (true) {
                        String line = bufferedReader.readLine();
                        if (line == null) {
                            break;
                        } else {
                            arrayList.add(line);
                        }
                    }
                    bufferedReader.close();
                    Log.i(TAG, arrayList.size() + " lines");
                    MockLocationProvider mockLocationProvider2 = mockLocationProvider;
                    if (mockLocationProvider2 != null) {
                        mockLocationProvider2.removeMockLocationProvider();
                        mockLocationProvider.stop();
                        mockLocationProvider = null;
                    }
                    new MockLocationProvider(locationManager, "gps", arrayList, true).start();
                }
            } catch (Exception e2) {
                e2.printStackTrace();
            }
        }
    }

    private void initLocationListener() {
        Log.d(TAG, "initLocationListener");
        try {
            mLocationListener = new LocationListener() { // from class: com.uniden.rtach.helper.simulation.UnidenLocationManager.4
                @Override // android.location.LocationListener
                public void onLocationChanged(Location location) {
                    Log.d(UnidenLocationManager.TAG, "Location changed" + location);
                    float accuracy = location.getAccuracy();
                    if (location != null) {
                        if (location == null || accuracy <= UnidenLocationManager.this.INVALIDACCURACY) {
                            setSpeedToZeroIfStationary(location);
                            if ((!location.hasSpeed() || location.getSpeed() == 0.0f) && UnidenLocationManager.currentLocation != null) {
                                location.setBearing(UnidenLocationManager.currentLocation.getBearing());
                            }
                            UnidenLocationManager.currentLocation = new Location(location);
                            Log.d(UnidenLocationManager.TAG, "getCurrentLocation: 1348 : " + UnidenLocationManager.currentLocation);
                            UnidenLocationManager.timeOflastLocationReceived = System.currentTimeMillis();
                            Intent intent = new Intent(GPSStatusUpdate.GPS_LOCATION_UPDATE.name());
                            intent.putExtra(Constant.GPS_LOCATION_EXTRA, location);
                            LocalBroadcastManager.getInstance(BaseApplication.INSTANCE.getContext()).sendBroadcast(intent);
                        }
                    }
                }

                @Override // android.location.LocationListener
                public void onProviderDisabled(String str) {
                    Log.d(UnidenLocationManager.TAG, "onProviderDisabled " + str);
                }

                @Override // android.location.LocationListener
                public void onProviderEnabled(String str) {
                    Log.d(UnidenLocationManager.TAG, "onProviderEnabled " + str);
                }

                @Override // android.location.LocationListener
                public void onStatusChanged(String str, int i, Bundle bundle) {
                    Log.d(UnidenLocationManager.TAG, "onStatusChanged to " + i);
                }

                private void setSpeedToZeroIfStationary(final Location location) {
                    Log.d(UnidenLocationManager.TAG, "setSpeedToZeroIfStationary");
                    try {
                        if (UnidenLocationManager.this.speedTimer != null) {
                            UnidenLocationManager.this.speedTimer.cancel();
                        }
                        UnidenLocationManager.this.speedTimer = new Timer("SpeedTimer", false);
                        UnidenLocationManager.this.speedTimer.schedule(new TimerTask() { // from class: com.uniden.rtach.helper.simulation.UnidenLocationManager.4.1
                            @Override // java.util.TimerTask, java.lang.Runnable
                            public void run() {
                                try {
                                    UnidenLocationManager.this.stopFusedLocationUpdates();
                                    UnidenLocationManager.this.startFusedLocationUpdates();
                                    UnidenLocationManager.currentLocation = new Location(location);
                                } catch (IllegalArgumentException | IllegalStateException unused) {
                                }
                            }
                        }, 3000L);
                    } catch (Exception e) {
                        e.printStackTrace();
                    }
                }
            };
        } catch (Exception unused) {
        }
    }

    public boolean isGpsProviderEnabled() {
        Log.d(TAG, "isGpsProviderEnabled");
        try {
            return locationManager.isProviderEnabled("gps");
        } catch (IllegalArgumentException e) {
            Log.d(TAG, "Illegal argument: " + e.getLocalizedMessage());
            return false;
        } catch (SecurityException e2) {
            Log.d(TAG, "Security exception: " + e2.getLocalizedMessage());
            return false;
        } catch (Exception e3) {
            Log.d(TAG, "Exception thrown: " + e3.getLocalizedMessage());
            return false;
        }
    }

    public void stopLocationUpdates() {
        if (locationManager != null) {
            if (mLocationListener != null) {
                Log.i(TAG, "removeLocationListener going through");
                locationManager.removeUpdates(mLocationListener);
                mLocationListener = null;
            }
            locationManager = null;
        }
        Timer timer = this.speedTimer;
        if (timer != null) {
            timer.cancel();
            this.speedTimer.purge();
        }
        Timer timer2 = this.conserveBatteryTimer;
        if (timer2 != null) {
            timer2.cancel();
            this.conserveBatteryTimer.purge();
        }
    }

    public static void startGPSUpdate() {
        try {
            Log.d(TAG, "Start GPS Update");
            locationManager.requestLocationUpdates("gps", 800L, 5.0f, mLocationListener);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void startGPSSingleUpdate() {
        try {
            LocationManager locationManager2 = (LocationManager) mainApp.getSystemService(FirebaseAnalytics.Param.LOCATION);
            Log.d(TAG, "Start GPS Update");
            try {
                locationManager2.requestSingleUpdate("gps", mLocationListener, (Looper) null);
            } catch (SecurityException e) {
                e.printStackTrace();
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    public void stopGPSUpdate() {
        try {
            Log.d(TAG, "Stop GPS Update");
            locationManager.removeUpdates(mLocationListener);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    double getHeadingDifference(double d, double d2) {
        double d3 = d2 - d;
        if (Math.abs(d3) > 180.0d) {
            if (d2 > 180.0d) {
                d2 = 360.0d - d2;
            }
            if (d > 180.0d) {
                d = 360.0d - d;
            }
            d3 = d2 + d;
        }
        return Math.abs(d3);
    }
}
