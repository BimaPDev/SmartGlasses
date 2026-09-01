package com.uniden.rtach.helper.simulation;

import android.app.IntentService;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.location.Location;
import android.location.LocationManager;
import android.os.Build;
import android.os.Environment;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.IBinder;
import android.os.SystemClock;
import android.preference.PreferenceManager;
import android.provider.Settings;
import android.util.Log;
import com.google.firebase.analytics.FirebaseAnalytics;
import com.uniden.rtach.C2074R;
import com.uniden.rtach.helper.BaseApplication;
import com.uniden.rtach.p005ui.fragment.MapsFragment;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStream;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.TimeZone;

/* JADX INFO: loaded from: classes2.dex */
public class LocationDriverService extends IntentService {
    static Handler NMEAhandler = null;
    static BufferedReader bufferedReader = null;
    static String eachline = "";
    private static LocationManager locationManager = null;
    public static LocationDriverService mLocationDriverService = null;
    private static SharedPreferences mSettings = null;
    static String prevline = "";
    static HandlerThread readThread = new HandlerThread("");
    public static boolean shutdown = true;

    public static LocationDriverService getLocationDriverService() {
        return mLocationDriverService;
    }

    @Override // android.app.IntentService, android.app.Service
    public IBinder onBind(Intent intent) {
        return null;
    }

    @Override // android.app.IntentService
    protected void onHandleIntent(Intent intent) {
    }

    public LocationDriverService() {
        super("LocationDriverService");
    }

    public static void removetestprovider() {
        UnidenLocationManager.getInstance();
        LocationManager locationManager2 = UnidenLocationManager.locationManager;
        locationManager = locationManager2;
        try {
            locationManager2.removeTestProvider("gps");
        } catch (Exception unused) {
        }
        try {
            locationManager.setTestProviderEnabled("gps", false);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static Boolean isLocationEnabled(Context context) {
        if (Build.VERSION.SDK_INT >= 28) {
            return Boolean.valueOf(((LocationManager) context.getSystemService(FirebaseAnalytics.Param.LOCATION)).isLocationEnabled());
        }
        return Boolean.valueOf(Settings.Secure.getInt(context.getContentResolver(), "location_mode", 0) != 0);
    }

    public void startSimulation() {
        try {
            getlocationmanager();
            File file = new File(Environment.getExternalStoragePublicDirectory(Environment.DIRECTORY_DOCUMENTS) + "/UNIDEN/");
            if (!file.exists()) {
                file.mkdir();
                createDefaultFile(file.getAbsolutePath());
            }
            File[] fileArrListFiles = file.listFiles();
            if (fileArrListFiles.length == 0 || fileArrListFiles == null) {
                createDefaultFile(file.getAbsolutePath());
                fileArrListFiles = file.listFiles();
            }
            bufferedReader = new BufferedReader(new FileReader(fileArrListFiles[0]));
            HandlerThread handlerThread = new HandlerThread("");
            readThread = handlerThread;
            handlerThread.start();
            Handler handler = new Handler(readThread.getLooper());
            NMEAhandler = handler;
            handler.removeCallbacksAndMessages(null);
            try {
                shutdown = false;
                NMEAhandler.post(new Runnable() { // from class: com.uniden.rtach.helper.simulation.LocationDriverService.1
                    @Override // java.lang.Runnable
                    public void run() {
                        try {
                            LocationDriverService.eachline = LocationDriverService.bufferedReader.readLine();
                            Log.e("readNMEAFile", "readNMEAFile1st: " + LocationDriverService.eachline);
                        } catch (IOException e) {
                            e.printStackTrace();
                            Log.e("readNMEAFile", "readNMEAFile: " + e.getMessage());
                        }
                        while (LocationDriverService.eachline != null && !LocationDriverService.shutdown) {
                            if (!LocationDriverService.prevline.equalsIgnoreCase(LocationDriverService.eachline) && (LocationDriverService.eachline.startsWith("$GPRMC") || LocationDriverService.eachline.startsWith("$GNGGA") || LocationDriverService.eachline.startsWith("$GNRMC"))) {
                                Log.e("readNMEAFile", "readNMEAFile2nd: " + LocationDriverService.eachline);
                                Location locationFromString = LocationDriverService.parseLocationFromString(LocationDriverService.eachline);
                                if (MapsFragment.INSTANCE.getMOCKLOCATION_ON()) {
                                    LocationDriverService.this.setMockLocation(locationFromString);
                                } else {
                                    LocationDriverService.removetestprovider();
                                    UnidenLocationManager.mockSimulatedLocation(locationFromString);
                                }
                                Log.e("readNMEAFile", "readNMEAFile: Update");
                                try {
                                    if (LocationDriverService.eachline != null) {
                                        LocationDriverService.prevline = LocationDriverService.eachline;
                                    }
                                    LocationDriverService.eachline = LocationDriverService.bufferedReader.readLine();
                                    if (LocationDriverService.eachline == null) {
                                        LocationDriverService.this.startSimulation();
                                        UnidenLocationManager.SIMULATION_ON = false;
                                    }
                                } catch (IOException e2) {
                                    e2.printStackTrace();
                                    Log.e("readNMEAFile", "readNMEAFile: " + e2.getMessage());
                                }
                                if (LocationDriverService.eachline != null) {
                                    try {
                                        Thread.sleep(500L);
                                    } catch (InterruptedException e3) {
                                        e3.printStackTrace();
                                    }
                                }
                            } else {
                                try {
                                    if (LocationDriverService.eachline != null) {
                                        LocationDriverService.prevline = LocationDriverService.eachline;
                                    }
                                    LocationDriverService.eachline = LocationDriverService.bufferedReader.readLine();
                                    if (LocationDriverService.eachline == null) {
                                        LocationDriverService.this.stopSimulation();
                                        UnidenLocationManager.SIMULATION_ON = false;
                                    }
                                } catch (IOException e4) {
                                    e4.printStackTrace();
                                    Log.e("readNMEAFile", "readNMEAFile: " + e4.getMessage());
                                } catch (NullPointerException e5) {
                                    e5.printStackTrace();
                                    LocationDriverService.this.stopSimulation();
                                    try {
                                        UnidenLocationManager.SIMULATION_ON = false;
                                    } catch (Exception e6) {
                                        e6.printStackTrace();
                                    }
                                }
                            }
                        }
                    }
                });
            } catch (Exception e) {
                e.printStackTrace();
                Log.e("readNMEAFile", "readNMEAFile: " + e.getMessage());
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    void setMockLocation(Location location) {
        try {
            if (isLocationEnabled(BaseApplication.INSTANCE.getContext()).booleanValue()) {
                locationManager.setTestProviderLocation("gps", location);
            }
        } catch (Exception unused) {
        }
    }

    public void getlocationmanager() {
        UnidenLocationManager.getInstance();
        LocationManager locationManager2 = UnidenLocationManager.locationManager;
        locationManager = locationManager2;
        locationManager2.getAllProviders();
        try {
            locationManager.removeTestProvider("gps");
        } catch (Exception e) {
            e.printStackTrace();
        }
        try {
            locationManager.addTestProvider("gps", false, false, false, false, true, true, true, 1, 1);
        } catch (Exception e2) {
            e2.printStackTrace();
        }
        try {
            locationManager.setTestProviderEnabled("gps", true);
        } catch (Exception e3) {
            e3.printStackTrace();
        }
    }

    private void createDefaultFile(String str) throws IOException {
        InputStream inputStreamOpenRawResource = getResources().openRawResource(C2074R.raw.gps1);
        FileOutputStream fileOutputStream = new FileOutputStream(str + "/gps1.txt");
        byte[] bArr = new byte[1024];
        while (true) {
            try {
                int i = inputStreamOpenRawResource.read(bArr);
                if (i > 0) {
                    fileOutputStream.write(bArr, 0, i);
                } else {
                    inputStreamOpenRawResource.close();
                    fileOutputStream.close();
                    return;
                }
            } catch (Throwable th) {
                inputStreamOpenRawResource.close();
                fileOutputStream.close();
                throw th;
            }
        }
    }

    public void stopSimulation() {
        shutdown = true;
        try {
            removetestprovider();
            UnidenLocationManager.startGPSUpdate();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static Location parseLocationFromString(String str) {
        Location location = new Location("gps");
        if (str != null && (str.startsWith("$GPRMC") || str.startsWith("$GNGGA") || str.startsWith("$GNRMC"))) {
            String[] strArrSplit = str.split(",");
            Log.d("NMEALOG", "speed " + ((float) (((double) Float.parseFloat(strArrSplit[7])) * 0.514444d)) + " bearing " + strArrSplit[8] + " accuracy " + strArrSplit[10]);
            SimpleDateFormat simpleDateFormat = new SimpleDateFormat("ddMMyyhhmmss.ss");
            simpleDateFormat.setTimeZone(TimeZone.getTimeZone("UTC"));
            try {
                location.setTime(simpleDateFormat.parse(strArrSplit[9] + strArrSplit[1]).getTime());
                double dCountDegreeForSimulation = countDegreeForSimulation(Double.valueOf(Double.parseDouble(strArrSplit[3])));
                if (strArrSplit[4].charAt(0) == 'S') {
                    dCountDegreeForSimulation = -dCountDegreeForSimulation;
                }
                double dCountDegreeForSimulation2 = countDegreeForSimulation(Double.valueOf(Double.parseDouble(strArrSplit[5])));
                if (strArrSplit[6].charAt(0) == 'W') {
                    dCountDegreeForSimulation2 = -dCountDegreeForSimulation2;
                }
                location.setLatitude(dCountDegreeForSimulation);
                location.setLongitude(dCountDegreeForSimulation2);
                location.setSpeed((float) (((double) Float.parseFloat(strArrSplit[7])) * 0.514444d));
                if (!strArrSplit[8].equals("")) {
                    location.setBearing(Float.parseFloat(strArrSplit[8]));
                }
                location.setTime(System.currentTimeMillis());
                location.setElapsedRealtimeNanos(SystemClock.elapsedRealtimeNanos());
                location.setAltitude(0.0d);
                try {
                    location.setAccuracy(Float.parseFloat(strArrSplit[10]));
                } catch (Exception unused) {
                    location.setAccuracy(5.0f);
                }
                Log.d("NMEADetails ", "accuracy " + strArrSplit[10] + " speed " + strArrSplit[7] + " bearing " + strArrSplit[8]);
            } catch (ParseException unused2) {
                return null;
            }
        }
        return location;
    }

    public static double countDegreeForSimulation(Double d) {
        double dFloor = Math.floor(d.doubleValue() / 100.0d);
        return dFloor + ((d.doubleValue() - (100.0d * dFloor)) / 60.0d);
    }

    @Override // android.app.IntentService, android.app.Service
    public void onCreate() {
        super.onCreate();
    }

    @Override // android.app.IntentService, android.app.Service
    public int onStartCommand(Intent intent, int i, int i2) {
        mLocationDriverService = this;
        mSettings = PreferenceManager.getDefaultSharedPreferences(this);
        return super.onStartCommand(intent, i, i2);
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public boolean stopService(Intent intent) {
        return super.stopService(intent);
    }
}
