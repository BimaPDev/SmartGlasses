package com.uniden.rtach.helper.simulation;

import android.location.Location;
import android.location.LocationManager;
import android.util.Log;
import androidx.exifinterface.media.ExifInterface;
import java.lang.reflect.Method;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class MockLocationProvider extends Thread {
    private static String TAG = "MockLocationProvider";
    private List<String> data;
    private Location location;
    private LocationManager locationManager;
    private String mocLocationProvider;
    private boolean runInfintely;

    public MockLocationProvider(LocationManager locationManager, String str, List<String> list, boolean z) {
        this.locationManager = locationManager;
        this.mocLocationProvider = str;
        this.data = list;
        this.runInfintely = z;
    }

    private static Float parseDegrees(String str) {
        String str2;
        Float fValueOf = Float.valueOf(0.0f);
        try {
            int iIndexOf = str.indexOf(".");
            if (iIndexOf == -1) {
                return fValueOf;
            }
            String strSubstring = str.substring(0, iIndexOf);
            String strSubstring2 = str.substring(iIndexOf + 1);
            if (strSubstring.length() > 4 && strSubstring.startsWith("0")) {
                strSubstring = strSubstring.substring(1, strSubstring.length());
            }
            if (strSubstring.length() > 3) {
                str2 = (strSubstring.substring(0, 2) + ".") + strSubstring.substring(2, strSubstring.length());
            } else if (strSubstring.length() == 3) {
                str2 = (("0" + strSubstring.substring(0, 1)) + ".") + strSubstring.substring(1);
            } else if (strSubstring.length() == 2) {
                str2 = "00." + strSubstring;
            } else {
                str2 = strSubstring.length() == 1 ? "00.0" + strSubstring : "00.00";
            }
            String str3 = str2 + strSubstring2;
            Log.i(TAG, "INITIAL:" + str3);
            int i = Integer.parseInt(str3.substring(0, 2));
            float f = Integer.parseInt(str3.substring(3, 9)) / 600000.0f;
            fValueOf = Float.valueOf(i + f);
            Log.i(TAG, "D:" + Integer.toString(i) + " M:" + Float.toString(f));
            Log.i(TAG, "FINAL:" + Float.toString(fValueOf.floatValue()));
            return fValueOf;
        } catch (Exception unused) {
            return fValueOf;
        }
    }

    @Override // java.lang.Thread, java.lang.Runnable
    public void run() {
        do {
            parseLines();
        } while (this.runInfintely);
    }

    public void parseLines() {
        while (true) {
            Boolean boolValueOf = false;
            for (String str : this.data) {
                if (str.startsWith("$GPRMC")) {
                    boolValueOf = Boolean.valueOf(parseGPRMC(str));
                }
                if (boolValueOf.booleanValue()) {
                    this.location.setTime(System.currentTimeMillis());
                    try {
                        Method method = Location.class.getMethod("makeComplete", new Class[0]);
                        if (method != null) {
                            method.invoke(this.location, new Object[0]);
                        }
                    } catch (Exception e) {
                        Log.e(TAG, e.toString());
                    }
                    this.locationManager.setTestProviderLocation(this.mocLocationProvider, this.location);
                    try {
                        Thread.sleep(200L);
                    } catch (InterruptedException e2) {
                        e2.printStackTrace();
                    }
                }
            }
            return;
        }
    }

    public void removeMockLocationProvider() {
        this.locationManager.removeTestProvider(this.mocLocationProvider);
    }

    private boolean parseGPRMC(String str) {
        String[] strArrSplit = str.split(",");
        if (strArrSplit.length <= 9) {
            return false;
        }
        try {
            Float degrees = parseDegrees(strArrSplit[3]);
            if (strArrSplit[4].equals(ExifInterface.LATITUDE_SOUTH)) {
                degrees = Float.valueOf(0.0f - degrees.floatValue());
            }
            Float degrees2 = parseDegrees(strArrSplit[5]);
            if (strArrSplit[6].equals(ExifInterface.LONGITUDE_WEST)) {
                degrees2 = Float.valueOf(0.0f - degrees2.floatValue());
            }
            Float fValueOf = Float.valueOf(Float.parseFloat(strArrSplit[7]) * 0.5144445f);
            Float fValueOf2 = Float.valueOf(Float.parseFloat(strArrSplit[8]));
            Log.i(TAG, "LAT : " + Float.toString(degrees.floatValue()) + "\nLONG: " + Float.toString(degrees2.floatValue()) + "\nSPEED : " + Float.toString(fValueOf.floatValue()) + "\nBEARING : " + Float.toString(fValueOf2.floatValue()) + "\n");
            Location location = new Location(this.mocLocationProvider);
            this.location = location;
            location.setLatitude(degrees.floatValue());
            this.location.setLongitude(degrees2.floatValue());
            this.location.setAltitude(0.0d);
            if (fValueOf.floatValue() == 0.0f) {
                Log.i(TAG, "Programatically set unavailable speed to 1 meters/second!!!!");
                fValueOf = Float.valueOf(1.0f);
            }
            this.location.setSpeed(fValueOf.floatValue());
            this.location.setBearing(fValueOf2.floatValue());
            this.location.setAccuracy(1.0f);
            this.location.setTime(System.currentTimeMillis());
            try {
                Method method = Location.class.getMethod("makeComplete", new Class[0]);
                if (method != null) {
                    method.invoke(this.location, new Object[0]);
                }
            } catch (Exception e) {
                Log.e(TAG, e.toString());
            }
            this.locationManager.setTestProviderLocation(this.mocLocationProvider, this.location);
            return true;
        } catch (Exception e2) {
            Log.e(TAG, e2.toString());
            return false;
        }
    }

    private void parseGPGGA(String str) {
        String[] strArrSplit = str.split(",");
        if (strArrSplit.length > 9) {
            try {
                Float degrees = parseDegrees(strArrSplit[2]);
                if (strArrSplit[3].equals(ExifInterface.LATITUDE_SOUTH)) {
                    degrees = Float.valueOf(0.0f - degrees.floatValue());
                }
                Float degrees2 = parseDegrees(strArrSplit[4]);
                if (strArrSplit[5].equals(ExifInterface.LONGITUDE_WEST)) {
                    degrees2 = Float.valueOf(0.0f - degrees2.floatValue());
                }
                Float fValueOf = Float.valueOf(Float.parseFloat(strArrSplit[9]));
                Log.i(TAG, "LAT : " + Float.toString(degrees.floatValue()) + "\nLONG: " + Float.toString(degrees2.floatValue()) + "\nALT : " + Float.toString(fValueOf.floatValue()) + "\n");
                Location location = new Location(this.mocLocationProvider);
                location.setLatitude(degrees.floatValue());
                location.setLongitude(degrees2.floatValue());
                location.setAltitude(fValueOf.floatValue());
                location.setAccuracy(1.0f);
            } catch (Exception e) {
                Log.d(TAG, "Exception caught " + e.getCause());
            }
        }
    }
}
