package androidx.startup;

import android.util.Log;

/* JADX INFO: loaded from: classes.dex */
public final class StartupLogger {
    static final boolean DEBUG = false;
    private static final String TAG = "StartupLogger";

    private StartupLogger() {
    }

    /* JADX INFO: renamed from: i */
    public static void m67i(String str) {
        Log.i(TAG, str);
    }

    /* JADX INFO: renamed from: w */
    public static void m68w(String str) {
        Log.w(TAG, str);
    }

    /* JADX INFO: renamed from: e */
    public static void m66e(String str, Throwable th) {
        Log.e(TAG, str, th);
    }
}
