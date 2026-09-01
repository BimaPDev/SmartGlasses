package com.google.android.gms.dynamite;

import android.content.Context;
import android.content.pm.ProviderInfo;
import android.database.Cursor;
import android.net.Uri;
import android.os.Build;
import android.os.IBinder;
import android.os.IInterface;
import android.os.RemoteException;
import android.os.SystemClock;
import android.util.Log;
import com.google.android.gms.common.GoogleApiAvailabilityLight;
import com.google.android.gms.common.internal.Objects;
import com.google.android.gms.common.internal.Preconditions;
import com.google.android.gms.common.util.CrashUtils;
import com.google.android.gms.dynamic.IObjectWrapper;
import com.google.android.gms.dynamic.ObjectWrapper;
import com.google.errorprone.annotations.ResultIgnorabilityUnspecified;
import com.google.firebase.analytics.FirebaseAnalytics;
import dalvik.system.DelegateLastClassLoader;
import java.lang.reflect.Field;
import java.lang.reflect.InvocationTargetException;

/* JADX INFO: compiled from: com.google.android.gms:play-services-basement@@18.3.0 */
/* JADX INFO: loaded from: classes2.dex */
public final class DynamiteModule {
    public static final int LOCAL = -1;
    public static final int NONE = 0;
    public static final int NO_SELECTION = 0;
    public static final int REMOTE = 1;
    private static Boolean zzb = null;
    private static String zzc = null;
    private static boolean zzd = false;
    private static int zze = -1;
    private static Boolean zzf;
    private static zzq zzk;
    private static zzr zzl;
    private final Context zzj;
    private static final ThreadLocal zzg = new ThreadLocal();
    private static final ThreadLocal zzh = new zzd();
    private static final VersionPolicy.IVersions zzi = new zze();
    public static final VersionPolicy PREFER_REMOTE = new zzf();
    public static final VersionPolicy PREFER_LOCAL = new zzg();
    public static final VersionPolicy PREFER_REMOTE_VERSION_NO_FORCE_STAGING = new zzh();
    public static final VersionPolicy PREFER_HIGHEST_OR_LOCAL_VERSION = new zzi();
    public static final VersionPolicy PREFER_HIGHEST_OR_LOCAL_VERSION_NO_FORCE_STAGING = new zzj();
    public static final VersionPolicy PREFER_HIGHEST_OR_REMOTE_VERSION = new zzk();
    public static final VersionPolicy zza = new zzl();

    /* JADX INFO: compiled from: com.google.android.gms:play-services-basement@@18.3.0 */
    public static class DynamiteLoaderClassLoader {
        public static ClassLoader sClassLoader;
    }

    /* JADX INFO: compiled from: com.google.android.gms:play-services-basement@@18.3.0 */
    public static class LoadingException extends Exception {
        /* synthetic */ LoadingException(String str, zzp zzpVar) {
            super(str);
        }

        /* synthetic */ LoadingException(String str, Throwable th, zzp zzpVar) {
            super(str, th);
        }
    }

    /* JADX INFO: compiled from: com.google.android.gms:play-services-basement@@18.3.0 */
    public interface VersionPolicy {

        /* JADX INFO: compiled from: com.google.android.gms:play-services-basement@@18.3.0 */
        public interface IVersions {
            int zza(Context context, String str);

            int zzb(Context context, String str, boolean z) throws LoadingException;
        }

        /* JADX INFO: compiled from: com.google.android.gms:play-services-basement@@18.3.0 */
        public static class SelectionResult {
            public int localVersion = 0;
            public int remoteVersion = 0;
            public int selection = 0;
        }

        SelectionResult selectModule(Context context, String str, IVersions iVersions) throws LoadingException;
    }

    private DynamiteModule(Context context) {
        Preconditions.checkNotNull(context);
        this.zzj = context;
    }

    public static int getLocalVersion(Context context, String str) {
        try {
            Class<?> clsLoadClass = context.getApplicationContext().getClassLoader().loadClass("com.google.android.gms.dynamite.descriptors." + str + ".ModuleDescriptor");
            Field declaredField = clsLoadClass.getDeclaredField("MODULE_ID");
            Field declaredField2 = clsLoadClass.getDeclaredField("MODULE_VERSION");
            if (Objects.equal(declaredField.get(null), str)) {
                return declaredField2.getInt(null);
            }
            Log.e("DynamiteModule", "Module descriptor id '" + String.valueOf(declaredField.get(null)) + "' didn't match expected id '" + str + "'");
            return 0;
        } catch (ClassNotFoundException unused) {
            Log.w("DynamiteModule", "Local module descriptor class for " + str + " not found.");
            return 0;
        } catch (Exception e) {
            Log.e("DynamiteModule", "Failed to load module descriptor class: ".concat(String.valueOf(e.getMessage())));
            return 0;
        }
    }

    public static int getRemoteVersion(Context context, String str) {
        return zza(context, str, false);
    }

    /* JADX WARN: Code duplicated, block: B:112:0x023c  */
    /* JADX WARN: Code duplicated, block: B:113:0x0242  */
    /* JADX WARN: Code duplicated, block: B:116:0x024f  */
    /* JADX WARN: Code duplicated, block: B:122:0x0265 A[Catch: all -> 0x02b0, TryCatch #0 {all -> 0x02b0, blocks: (B:5:0x0035, B:120:0x025c, B:121:0x0264, B:122:0x0265, B:123:0x027b, B:124:0x027c, B:125:0x02ab, B:23:0x0097, B:97:0x01ef, B:98:0x01fa, B:100:0x01fc, B:102:0x01fe, B:103:0x0206), top: B:140:0x0035, inners: #8 }] */
    /* JADX WARN: Code duplicated, block: B:131:0x02b5  */
    /* JADX WARN: Code duplicated, block: B:132:0x02bb  */
    /* JADX WARN: Code duplicated, block: B:135:0x02c8  */
    /* JADX WARN: Code duplicated, block: B:143:0x009c A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:145:0x00ca A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:19:0x008e A[Catch: all -> 0x02ac, TRY_LEAVE, TryCatch #5 {all -> 0x02ac, blocks: (B:7:0x0052, B:11:0x0080, B:16:0x0088, B:19:0x008e, B:23:0x0097, B:97:0x01ef, B:98:0x01fa, B:100:0x01fc, B:102:0x01fe, B:103:0x0206, B:105:0x0208, B:107:0x0226, B:109:0x0234), top: B:144:0x0052 }] */
    /* JADX WARN: Code duplicated, block: B:21:0x0094 A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:22:0x0096  */
    /* JADX WARN: Code duplicated, block: B:28:0x00a2 A[Catch: all -> 0x01eb, TryCatch #4 {, blocks: (B:26:0x009c, B:28:0x00a2, B:29:0x00a4, B:91:0x01e2, B:92:0x01ea), top: B:143:0x009c, outer: #8 }] */
    /* JADX WARN: Code duplicated, block: B:31:0x00a7 A[Catch: all -> 0x01ee, LoadingException -> 0x01fb, RemoteException -> 0x01fd, TRY_ENTER, TryCatch #8 {RemoteException -> 0x01fd, LoadingException -> 0x01fb, all -> 0x01ee, blocks: (B:25:0x009b, B:31:0x00a7, B:33:0x00ae, B:34:0x00c9, B:38:0x00cf, B:40:0x00d7, B:42:0x00db, B:43:0x00e7, B:50:0x00f4, B:52:0x00fa, B:54:0x0121, B:56:0x0129, B:57:0x0130, B:58:0x0138, B:53:0x010e, B:61:0x013b, B:62:0x013c, B:63:0x0144, B:64:0x0145, B:65:0x014d, B:68:0x0150, B:69:0x0151, B:71:0x0170, B:73:0x0177, B:75:0x017f, B:81:0x01b8, B:83:0x01be, B:85:0x01c7, B:86:0x01cf, B:76:0x018e, B:77:0x0196, B:79:0x0199, B:80:0x01a9, B:87:0x01d0, B:88:0x01d8, B:89:0x01d9, B:90:0x01e1, B:95:0x01ed, B:44:0x00e8, B:48:0x00ef, B:49:0x00f3, B:26:0x009c, B:28:0x00a2, B:29:0x00a4, B:91:0x01e2, B:92:0x01ea, B:35:0x00ca, B:36:0x00cc), top: B:148:0x009b, inners: #3, #4, #6 }] */
    /* JADX WARN: Code duplicated, block: B:33:0x00ae A[Catch: all -> 0x01ee, LoadingException -> 0x01fb, RemoteException -> 0x01fd, TryCatch #8 {RemoteException -> 0x01fd, LoadingException -> 0x01fb, all -> 0x01ee, blocks: (B:25:0x009b, B:31:0x00a7, B:33:0x00ae, B:34:0x00c9, B:38:0x00cf, B:40:0x00d7, B:42:0x00db, B:43:0x00e7, B:50:0x00f4, B:52:0x00fa, B:54:0x0121, B:56:0x0129, B:57:0x0130, B:58:0x0138, B:53:0x010e, B:61:0x013b, B:62:0x013c, B:63:0x0144, B:64:0x0145, B:65:0x014d, B:68:0x0150, B:69:0x0151, B:71:0x0170, B:73:0x0177, B:75:0x017f, B:81:0x01b8, B:83:0x01be, B:85:0x01c7, B:86:0x01cf, B:76:0x018e, B:77:0x0196, B:79:0x0199, B:80:0x01a9, B:87:0x01d0, B:88:0x01d8, B:89:0x01d9, B:90:0x01e1, B:95:0x01ed, B:44:0x00e8, B:48:0x00ef, B:49:0x00f3, B:26:0x009c, B:28:0x00a2, B:29:0x00a4, B:91:0x01e2, B:92:0x01ea, B:35:0x00ca, B:36:0x00cc), top: B:148:0x009b, inners: #3, #4, #6 }] */
    /* JADX WARN: Code duplicated, block: B:38:0x00cf A[Catch: all -> 0x01ee, LoadingException -> 0x01fb, RemoteException -> 0x01fd, TRY_ENTER, TryCatch #8 {RemoteException -> 0x01fd, LoadingException -> 0x01fb, all -> 0x01ee, blocks: (B:25:0x009b, B:31:0x00a7, B:33:0x00ae, B:34:0x00c9, B:38:0x00cf, B:40:0x00d7, B:42:0x00db, B:43:0x00e7, B:50:0x00f4, B:52:0x00fa, B:54:0x0121, B:56:0x0129, B:57:0x0130, B:58:0x0138, B:53:0x010e, B:61:0x013b, B:62:0x013c, B:63:0x0144, B:64:0x0145, B:65:0x014d, B:68:0x0150, B:69:0x0151, B:71:0x0170, B:73:0x0177, B:75:0x017f, B:81:0x01b8, B:83:0x01be, B:85:0x01c7, B:86:0x01cf, B:76:0x018e, B:77:0x0196, B:79:0x0199, B:80:0x01a9, B:87:0x01d0, B:88:0x01d8, B:89:0x01d9, B:90:0x01e1, B:95:0x01ed, B:44:0x00e8, B:48:0x00ef, B:49:0x00f3, B:26:0x009c, B:28:0x00a2, B:29:0x00a4, B:91:0x01e2, B:92:0x01ea, B:35:0x00ca, B:36:0x00cc), top: B:148:0x009b, inners: #3, #4, #6 }] */
    /* JADX WARN: Code duplicated, block: B:64:0x0145 A[Catch: all -> 0x01ee, LoadingException -> 0x01fb, RemoteException -> 0x01fd, TryCatch #8 {RemoteException -> 0x01fd, LoadingException -> 0x01fb, all -> 0x01ee, blocks: (B:25:0x009b, B:31:0x00a7, B:33:0x00ae, B:34:0x00c9, B:38:0x00cf, B:40:0x00d7, B:42:0x00db, B:43:0x00e7, B:50:0x00f4, B:52:0x00fa, B:54:0x0121, B:56:0x0129, B:57:0x0130, B:58:0x0138, B:53:0x010e, B:61:0x013b, B:62:0x013c, B:63:0x0144, B:64:0x0145, B:65:0x014d, B:68:0x0150, B:69:0x0151, B:71:0x0170, B:73:0x0177, B:75:0x017f, B:81:0x01b8, B:83:0x01be, B:85:0x01c7, B:86:0x01cf, B:76:0x018e, B:77:0x0196, B:79:0x0199, B:80:0x01a9, B:87:0x01d0, B:88:0x01d8, B:89:0x01d9, B:90:0x01e1, B:95:0x01ed, B:44:0x00e8, B:48:0x00ef, B:49:0x00f3, B:26:0x009c, B:28:0x00a2, B:29:0x00a4, B:91:0x01e2, B:92:0x01ea, B:35:0x00ca, B:36:0x00cc), top: B:148:0x009b, inners: #3, #4, #6 }] */
    /* JADX WARN: Code duplicated, block: B:69:0x0151 A[Catch: all -> 0x01ee, LoadingException -> 0x01fb, RemoteException -> 0x01fd, TryCatch #8 {RemoteException -> 0x01fd, LoadingException -> 0x01fb, all -> 0x01ee, blocks: (B:25:0x009b, B:31:0x00a7, B:33:0x00ae, B:34:0x00c9, B:38:0x00cf, B:40:0x00d7, B:42:0x00db, B:43:0x00e7, B:50:0x00f4, B:52:0x00fa, B:54:0x0121, B:56:0x0129, B:57:0x0130, B:58:0x0138, B:53:0x010e, B:61:0x013b, B:62:0x013c, B:63:0x0144, B:64:0x0145, B:65:0x014d, B:68:0x0150, B:69:0x0151, B:71:0x0170, B:73:0x0177, B:75:0x017f, B:81:0x01b8, B:83:0x01be, B:85:0x01c7, B:86:0x01cf, B:76:0x018e, B:77:0x0196, B:79:0x0199, B:80:0x01a9, B:87:0x01d0, B:88:0x01d8, B:89:0x01d9, B:90:0x01e1, B:95:0x01ed, B:44:0x00e8, B:48:0x00ef, B:49:0x00f3, B:26:0x009c, B:28:0x00a2, B:29:0x00a4, B:91:0x01e2, B:92:0x01ea, B:35:0x00ca, B:36:0x00cc), top: B:148:0x009b, inners: #3, #4, #6 }] */
    /* JADX WARN: Code duplicated, block: B:71:0x0170 A[Catch: all -> 0x01ee, LoadingException -> 0x01fb, RemoteException -> 0x01fd, TryCatch #8 {RemoteException -> 0x01fd, LoadingException -> 0x01fb, all -> 0x01ee, blocks: (B:25:0x009b, B:31:0x00a7, B:33:0x00ae, B:34:0x00c9, B:38:0x00cf, B:40:0x00d7, B:42:0x00db, B:43:0x00e7, B:50:0x00f4, B:52:0x00fa, B:54:0x0121, B:56:0x0129, B:57:0x0130, B:58:0x0138, B:53:0x010e, B:61:0x013b, B:62:0x013c, B:63:0x0144, B:64:0x0145, B:65:0x014d, B:68:0x0150, B:69:0x0151, B:71:0x0170, B:73:0x0177, B:75:0x017f, B:81:0x01b8, B:83:0x01be, B:85:0x01c7, B:86:0x01cf, B:76:0x018e, B:77:0x0196, B:79:0x0199, B:80:0x01a9, B:87:0x01d0, B:88:0x01d8, B:89:0x01d9, B:90:0x01e1, B:95:0x01ed, B:44:0x00e8, B:48:0x00ef, B:49:0x00f3, B:26:0x009c, B:28:0x00a2, B:29:0x00a4, B:91:0x01e2, B:92:0x01ea, B:35:0x00ca, B:36:0x00cc), top: B:148:0x009b, inners: #3, #4, #6 }] */
    /* JADX WARN: Code duplicated, block: B:73:0x0177 A[Catch: all -> 0x01ee, LoadingException -> 0x01fb, RemoteException -> 0x01fd, TryCatch #8 {RemoteException -> 0x01fd, LoadingException -> 0x01fb, all -> 0x01ee, blocks: (B:25:0x009b, B:31:0x00a7, B:33:0x00ae, B:34:0x00c9, B:38:0x00cf, B:40:0x00d7, B:42:0x00db, B:43:0x00e7, B:50:0x00f4, B:52:0x00fa, B:54:0x0121, B:56:0x0129, B:57:0x0130, B:58:0x0138, B:53:0x010e, B:61:0x013b, B:62:0x013c, B:63:0x0144, B:64:0x0145, B:65:0x014d, B:68:0x0150, B:69:0x0151, B:71:0x0170, B:73:0x0177, B:75:0x017f, B:81:0x01b8, B:83:0x01be, B:85:0x01c7, B:86:0x01cf, B:76:0x018e, B:77:0x0196, B:79:0x0199, B:80:0x01a9, B:87:0x01d0, B:88:0x01d8, B:89:0x01d9, B:90:0x01e1, B:95:0x01ed, B:44:0x00e8, B:48:0x00ef, B:49:0x00f3, B:26:0x009c, B:28:0x00a2, B:29:0x00a4, B:91:0x01e2, B:92:0x01ea, B:35:0x00ca, B:36:0x00cc), top: B:148:0x009b, inners: #3, #4, #6 }] */
    /* JADX WARN: Code duplicated, block: B:75:0x017f A[Catch: all -> 0x01ee, LoadingException -> 0x01fb, RemoteException -> 0x01fd, TryCatch #8 {RemoteException -> 0x01fd, LoadingException -> 0x01fb, all -> 0x01ee, blocks: (B:25:0x009b, B:31:0x00a7, B:33:0x00ae, B:34:0x00c9, B:38:0x00cf, B:40:0x00d7, B:42:0x00db, B:43:0x00e7, B:50:0x00f4, B:52:0x00fa, B:54:0x0121, B:56:0x0129, B:57:0x0130, B:58:0x0138, B:53:0x010e, B:61:0x013b, B:62:0x013c, B:63:0x0144, B:64:0x0145, B:65:0x014d, B:68:0x0150, B:69:0x0151, B:71:0x0170, B:73:0x0177, B:75:0x017f, B:81:0x01b8, B:83:0x01be, B:85:0x01c7, B:86:0x01cf, B:76:0x018e, B:77:0x0196, B:79:0x0199, B:80:0x01a9, B:87:0x01d0, B:88:0x01d8, B:89:0x01d9, B:90:0x01e1, B:95:0x01ed, B:44:0x00e8, B:48:0x00ef, B:49:0x00f3, B:26:0x009c, B:28:0x00a2, B:29:0x00a4, B:91:0x01e2, B:92:0x01ea, B:35:0x00ca, B:36:0x00cc), top: B:148:0x009b, inners: #3, #4, #6 }] */
    /* JADX WARN: Code duplicated, block: B:76:0x018e A[Catch: all -> 0x01ee, LoadingException -> 0x01fb, RemoteException -> 0x01fd, TryCatch #8 {RemoteException -> 0x01fd, LoadingException -> 0x01fb, all -> 0x01ee, blocks: (B:25:0x009b, B:31:0x00a7, B:33:0x00ae, B:34:0x00c9, B:38:0x00cf, B:40:0x00d7, B:42:0x00db, B:43:0x00e7, B:50:0x00f4, B:52:0x00fa, B:54:0x0121, B:56:0x0129, B:57:0x0130, B:58:0x0138, B:53:0x010e, B:61:0x013b, B:62:0x013c, B:63:0x0144, B:64:0x0145, B:65:0x014d, B:68:0x0150, B:69:0x0151, B:71:0x0170, B:73:0x0177, B:75:0x017f, B:81:0x01b8, B:83:0x01be, B:85:0x01c7, B:86:0x01cf, B:76:0x018e, B:77:0x0196, B:79:0x0199, B:80:0x01a9, B:87:0x01d0, B:88:0x01d8, B:89:0x01d9, B:90:0x01e1, B:95:0x01ed, B:44:0x00e8, B:48:0x00ef, B:49:0x00f3, B:26:0x009c, B:28:0x00a2, B:29:0x00a4, B:91:0x01e2, B:92:0x01ea, B:35:0x00ca, B:36:0x00cc), top: B:148:0x009b, inners: #3, #4, #6 }] */
    /* JADX WARN: Code duplicated, block: B:78:0x0197 A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:79:0x0199 A[Catch: all -> 0x01ee, LoadingException -> 0x01fb, RemoteException -> 0x01fd, TryCatch #8 {RemoteException -> 0x01fd, LoadingException -> 0x01fb, all -> 0x01ee, blocks: (B:25:0x009b, B:31:0x00a7, B:33:0x00ae, B:34:0x00c9, B:38:0x00cf, B:40:0x00d7, B:42:0x00db, B:43:0x00e7, B:50:0x00f4, B:52:0x00fa, B:54:0x0121, B:56:0x0129, B:57:0x0130, B:58:0x0138, B:53:0x010e, B:61:0x013b, B:62:0x013c, B:63:0x0144, B:64:0x0145, B:65:0x014d, B:68:0x0150, B:69:0x0151, B:71:0x0170, B:73:0x0177, B:75:0x017f, B:81:0x01b8, B:83:0x01be, B:85:0x01c7, B:86:0x01cf, B:76:0x018e, B:77:0x0196, B:79:0x0199, B:80:0x01a9, B:87:0x01d0, B:88:0x01d8, B:89:0x01d9, B:90:0x01e1, B:95:0x01ed, B:44:0x00e8, B:48:0x00ef, B:49:0x00f3, B:26:0x009c, B:28:0x00a2, B:29:0x00a4, B:91:0x01e2, B:92:0x01ea, B:35:0x00ca, B:36:0x00cc), top: B:148:0x009b, inners: #3, #4, #6 }] */
    /* JADX WARN: Code duplicated, block: B:80:0x01a9 A[Catch: all -> 0x01ee, LoadingException -> 0x01fb, RemoteException -> 0x01fd, TryCatch #8 {RemoteException -> 0x01fd, LoadingException -> 0x01fb, all -> 0x01ee, blocks: (B:25:0x009b, B:31:0x00a7, B:33:0x00ae, B:34:0x00c9, B:38:0x00cf, B:40:0x00d7, B:42:0x00db, B:43:0x00e7, B:50:0x00f4, B:52:0x00fa, B:54:0x0121, B:56:0x0129, B:57:0x0130, B:58:0x0138, B:53:0x010e, B:61:0x013b, B:62:0x013c, B:63:0x0144, B:64:0x0145, B:65:0x014d, B:68:0x0150, B:69:0x0151, B:71:0x0170, B:73:0x0177, B:75:0x017f, B:81:0x01b8, B:83:0x01be, B:85:0x01c7, B:86:0x01cf, B:76:0x018e, B:77:0x0196, B:79:0x0199, B:80:0x01a9, B:87:0x01d0, B:88:0x01d8, B:89:0x01d9, B:90:0x01e1, B:95:0x01ed, B:44:0x00e8, B:48:0x00ef, B:49:0x00f3, B:26:0x009c, B:28:0x00a2, B:29:0x00a4, B:91:0x01e2, B:92:0x01ea, B:35:0x00ca, B:36:0x00cc), top: B:148:0x009b, inners: #3, #4, #6 }] */
    /* JADX WARN: Code duplicated, block: B:83:0x01be A[Catch: all -> 0x01ee, LoadingException -> 0x01fb, RemoteException -> 0x01fd, TryCatch #8 {RemoteException -> 0x01fd, LoadingException -> 0x01fb, all -> 0x01ee, blocks: (B:25:0x009b, B:31:0x00a7, B:33:0x00ae, B:34:0x00c9, B:38:0x00cf, B:40:0x00d7, B:42:0x00db, B:43:0x00e7, B:50:0x00f4, B:52:0x00fa, B:54:0x0121, B:56:0x0129, B:57:0x0130, B:58:0x0138, B:53:0x010e, B:61:0x013b, B:62:0x013c, B:63:0x0144, B:64:0x0145, B:65:0x014d, B:68:0x0150, B:69:0x0151, B:71:0x0170, B:73:0x0177, B:75:0x017f, B:81:0x01b8, B:83:0x01be, B:85:0x01c7, B:86:0x01cf, B:76:0x018e, B:77:0x0196, B:79:0x0199, B:80:0x01a9, B:87:0x01d0, B:88:0x01d8, B:89:0x01d9, B:90:0x01e1, B:95:0x01ed, B:44:0x00e8, B:48:0x00ef, B:49:0x00f3, B:26:0x009c, B:28:0x00a2, B:29:0x00a4, B:91:0x01e2, B:92:0x01ea, B:35:0x00ca, B:36:0x00cc), top: B:148:0x009b, inners: #3, #4, #6 }] */
    /* JADX WARN: Code duplicated, block: B:85:0x01c7 A[Catch: all -> 0x01ee, LoadingException -> 0x01fb, RemoteException -> 0x01fd, TryCatch #8 {RemoteException -> 0x01fd, LoadingException -> 0x01fb, all -> 0x01ee, blocks: (B:25:0x009b, B:31:0x00a7, B:33:0x00ae, B:34:0x00c9, B:38:0x00cf, B:40:0x00d7, B:42:0x00db, B:43:0x00e7, B:50:0x00f4, B:52:0x00fa, B:54:0x0121, B:56:0x0129, B:57:0x0130, B:58:0x0138, B:53:0x010e, B:61:0x013b, B:62:0x013c, B:63:0x0144, B:64:0x0145, B:65:0x014d, B:68:0x0150, B:69:0x0151, B:71:0x0170, B:73:0x0177, B:75:0x017f, B:81:0x01b8, B:83:0x01be, B:85:0x01c7, B:86:0x01cf, B:76:0x018e, B:77:0x0196, B:79:0x0199, B:80:0x01a9, B:87:0x01d0, B:88:0x01d8, B:89:0x01d9, B:90:0x01e1, B:95:0x01ed, B:44:0x00e8, B:48:0x00ef, B:49:0x00f3, B:26:0x009c, B:28:0x00a2, B:29:0x00a4, B:91:0x01e2, B:92:0x01ea, B:35:0x00ca, B:36:0x00cc), top: B:148:0x009b, inners: #3, #4, #6 }] */
    /* JADX WARN: Code duplicated, block: B:87:0x01d0 A[Catch: all -> 0x01ee, LoadingException -> 0x01fb, RemoteException -> 0x01fd, TryCatch #8 {RemoteException -> 0x01fd, LoadingException -> 0x01fb, all -> 0x01ee, blocks: (B:25:0x009b, B:31:0x00a7, B:33:0x00ae, B:34:0x00c9, B:38:0x00cf, B:40:0x00d7, B:42:0x00db, B:43:0x00e7, B:50:0x00f4, B:52:0x00fa, B:54:0x0121, B:56:0x0129, B:57:0x0130, B:58:0x0138, B:53:0x010e, B:61:0x013b, B:62:0x013c, B:63:0x0144, B:64:0x0145, B:65:0x014d, B:68:0x0150, B:69:0x0151, B:71:0x0170, B:73:0x0177, B:75:0x017f, B:81:0x01b8, B:83:0x01be, B:85:0x01c7, B:86:0x01cf, B:76:0x018e, B:77:0x0196, B:79:0x0199, B:80:0x01a9, B:87:0x01d0, B:88:0x01d8, B:89:0x01d9, B:90:0x01e1, B:95:0x01ed, B:44:0x00e8, B:48:0x00ef, B:49:0x00f3, B:26:0x009c, B:28:0x00a2, B:29:0x00a4, B:91:0x01e2, B:92:0x01ea, B:35:0x00ca, B:36:0x00cc), top: B:148:0x009b, inners: #3, #4, #6 }] */
    /* JADX WARN: Code duplicated, block: B:89:0x01d9 A[Catch: all -> 0x01ee, LoadingException -> 0x01fb, RemoteException -> 0x01fd, TryCatch #8 {RemoteException -> 0x01fd, LoadingException -> 0x01fb, all -> 0x01ee, blocks: (B:25:0x009b, B:31:0x00a7, B:33:0x00ae, B:34:0x00c9, B:38:0x00cf, B:40:0x00d7, B:42:0x00db, B:43:0x00e7, B:50:0x00f4, B:52:0x00fa, B:54:0x0121, B:56:0x0129, B:57:0x0130, B:58:0x0138, B:53:0x010e, B:61:0x013b, B:62:0x013c, B:63:0x0144, B:64:0x0145, B:65:0x014d, B:68:0x0150, B:69:0x0151, B:71:0x0170, B:73:0x0177, B:75:0x017f, B:81:0x01b8, B:83:0x01be, B:85:0x01c7, B:86:0x01cf, B:76:0x018e, B:77:0x0196, B:79:0x0199, B:80:0x01a9, B:87:0x01d0, B:88:0x01d8, B:89:0x01d9, B:90:0x01e1, B:95:0x01ed, B:44:0x00e8, B:48:0x00ef, B:49:0x00f3, B:26:0x009c, B:28:0x00a2, B:29:0x00a4, B:91:0x01e2, B:92:0x01ea, B:35:0x00ca, B:36:0x00cc), top: B:148:0x009b, inners: #3, #4, #6 }] */
    /* JADX WARN: Code duplicated, block: B:91:0x01e2 A[Catch: all -> 0x01eb, TRY_ENTER, TryCatch #4 {, blocks: (B:26:0x009c, B:28:0x00a2, B:29:0x00a4, B:91:0x01e2, B:92:0x01ea), top: B:143:0x009c, outer: #8 }] */
    /* JADX WARN: Instruction removed from duplicated block: B:122:0x0265, please report this as an issue */
    /* JADX WARN: Instruction removed from duplicated block: B:33:0x00ae, please report this as an issue */
    /* JADX WARN: Instruction removed from duplicated block: B:69:0x0151, please report this as an issue */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r11v1, types: [com.google.android.gms.dynamite.zzn, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r11v13 */
    /* JADX WARN: Type inference failed for: r11v14 */
    /* JADX WARN: Type inference failed for: r11v2 */
    /* JADX WARN: Type inference failed for: r11v3, types: [java.lang.Object] */
    /* JADX WARN: Type inference failed for: r11v4 */
    /* JADX WARN: Type inference failed for: r11v7 */
    @ResultIgnorabilityUnspecified
    public static DynamiteModule load(Context context, VersionPolicy versionPolicy, String str) throws Throwable {
        Cursor cursor;
        DynamiteModule dynamiteModuleZzc;
        int i;
        Boolean bool;
        zzq zzqVarZzg;
        int iZze;
        IObjectWrapper iObjectWrapperZzh;
        Object objUnwrap;
        DynamiteModule dynamiteModule;
        zzn zznVar;
        zzr zzrVar;
        zzn zznVar2;
        Boolean boolValueOf;
        IObjectWrapper iObjectWrapperZze;
        Cursor cursor2;
        int i2;
        Context applicationContext = context.getApplicationContext();
        if (applicationContext == null) {
            throw new LoadingException("null application Context", null);
        }
        ThreadLocal threadLocal = zzg;
        ?? r11 = (zzn) threadLocal.get();
        zzn zznVar3 = new zzn(null);
        threadLocal.set(zznVar3);
        ThreadLocal threadLocal2 = zzh;
        long jLongValue = ((Long) threadLocal2.get()).longValue();
        try {
            threadLocal2.set(Long.valueOf(SystemClock.elapsedRealtime()));
            VersionPolicy.SelectionResult selectionResultSelectModule = versionPolicy.selectModule(context, str, zzi);
            int i3 = selectionResultSelectModule.localVersion;
            int i4 = selectionResultSelectModule.remoteVersion;
            try {
                StringBuilder sb = new StringBuilder("Considering local module ");
                sb.append(str);
                sb.append(":");
                sb.append(i3);
                sb.append(" and remote module ");
                sb.append(str);
                sb.append(":");
                sb.append(i4);
                Log.i("DynamiteModule", sb.toString());
                int i5 = selectionResultSelectModule.selection;
                if (i5 != 0) {
                    if (i5 != -1) {
                        r11 = sb;
                        if (i5 == 1 || (i2 = selectionResultSelectModule.remoteVersion) != 0) {
                            if (i5 == -1) {
                                if (i5 == 1) {
                                    throw new LoadingException("VersionPolicy returned invalid code:" + i5, null);
                                }
                                try {
                                    i = selectionResultSelectModule.remoteVersion;
                                    try {
                                        synchronized (DynamiteModule.class) {
                                            if (zzf(context)) {
                                                throw new LoadingException("Remote loading disabled", null);
                                            }
                                            bool = zzb;
                                        }
                                        if (bool != null) {
                                            throw new LoadingException("Failed to determine which loading route to use.", null);
                                        }
                                        if (bool.booleanValue()) {
                                            Log.i("DynamiteModule", "Selected remote version of " + str + ", version >= " + i);
                                            synchronized (DynamiteModule.class) {
                                                zzrVar = zzl;
                                            }
                                            if (zzrVar != null) {
                                                throw new LoadingException("DynamiteLoaderV2 was not cached.", null);
                                            }
                                            zznVar2 = (zzn) threadLocal.get();
                                            if (zznVar2 != null || zznVar2.zza == null) {
                                                throw new LoadingException("No result cursor", null);
                                            }
                                            Context applicationContext2 = context.getApplicationContext();
                                            Cursor cursor3 = zznVar2.zza;
                                            ObjectWrapper.wrap(null);
                                            synchronized (DynamiteModule.class) {
                                                boolValueOf = Boolean.valueOf(zze >= 2);
                                            }
                                            if (boolValueOf.booleanValue()) {
                                                Log.v("DynamiteModule", "Dynamite loader version >= 2, using loadModule2NoCrashUtils");
                                                iObjectWrapperZze = zzrVar.zzf(ObjectWrapper.wrap(applicationContext2), str, i, ObjectWrapper.wrap(cursor3));
                                            } else {
                                                Log.w("DynamiteModule", "Dynamite loader version < 2, falling back to loadModule2");
                                                iObjectWrapperZze = zzrVar.zze(ObjectWrapper.wrap(applicationContext2), str, i, ObjectWrapper.wrap(cursor3));
                                            }
                                            Context context2 = (Context) ObjectWrapper.unwrap(iObjectWrapperZze);
                                            if (context2 == null) {
                                                throw new LoadingException("Failed to get module context", null);
                                            }
                                            dynamiteModule = new DynamiteModule(context2);
                                        } else {
                                            Log.i("DynamiteModule", "Selected remote version of " + str + ", version >= " + i);
                                            zzqVarZzg = zzg(context);
                                            if (zzqVarZzg != null) {
                                                throw new LoadingException("Failed to create IDynamiteLoader.", null);
                                            }
                                            iZze = zzqVarZzg.zze();
                                            if (iZze >= 3) {
                                                zznVar = (zzn) threadLocal.get();
                                                if (zznVar != null) {
                                                    throw new LoadingException("No cached result cursor holder", null);
                                                }
                                                iObjectWrapperZzh = zzqVarZzg.zzi(ObjectWrapper.wrap(context), str, i, ObjectWrapper.wrap(zznVar.zza));
                                            } else if (iZze == 2) {
                                                Log.w("DynamiteModule", "IDynamite loader version = 2");
                                                iObjectWrapperZzh = zzqVarZzg.zzj(ObjectWrapper.wrap(context), str, i);
                                            } else {
                                                Log.w("DynamiteModule", "Dynamite loader version < 2, falling back to createModuleContext");
                                                iObjectWrapperZzh = zzqVarZzg.zzh(ObjectWrapper.wrap(context), str, i);
                                            }
                                            objUnwrap = ObjectWrapper.unwrap(iObjectWrapperZzh);
                                            if (objUnwrap != null) {
                                                throw new LoadingException("Failed to load remote module.", null);
                                            }
                                            dynamiteModule = new DynamiteModule((Context) objUnwrap);
                                        }
                                        dynamiteModuleZzc = dynamiteModule;
                                    } catch (RemoteException e) {
                                        throw new LoadingException("Failed to load remote module.", e, null);
                                    } catch (LoadingException e2) {
                                        throw e2;
                                    } catch (Throwable th) {
                                        CrashUtils.addDynamiteErrorToDropBox(context, th);
                                        throw new LoadingException("Failed to load remote module.", th, null);
                                    }
                                } catch (LoadingException e3) {
                                    Log.w("DynamiteModule", "Failed to load remote module: " + e3.getMessage());
                                    int i6 = selectionResultSelectModule.localVersion;
                                    if (i6 == 0 || versionPolicy.selectModule(context, str, new zzo(i6, 0)).selection != -1) {
                                        throw new LoadingException("Remote load failed. No local fallback found.", e3, null);
                                    }
                                    dynamiteModuleZzc = zzc(applicationContext, str);
                                }
                                if (jLongValue == 0) {
                                    zzh.remove();
                                } else {
                                    zzh.set(Long.valueOf(jLongValue));
                                }
                                cursor = zznVar3.zza;
                                if (cursor != null) {
                                    cursor.close();
                                }
                                zzg.set(r11);
                                throw th;
                            }
                            dynamiteModuleZzc = zzc(applicationContext, str);
                            if (jLongValue == 0) {
                                zzh.remove();
                            } else {
                                zzh.set(Long.valueOf(jLongValue));
                            }
                            cursor2 = zznVar3.zza;
                            if (cursor2 != null) {
                                cursor2.close();
                            }
                            zzg.set(r11);
                            return dynamiteModuleZzc;
                        }
                    } else if (selectionResultSelectModule.localVersion != 0) {
                        i5 = -1;
                        r11 = sb;
                        if (i5 == 1) {
                        }
                        if (i5 == -1) {
                            if (i5 == 1) {
                                throw new LoadingException("VersionPolicy returned invalid code:" + i5, null);
                            }
                            i = selectionResultSelectModule.remoteVersion;
                            synchronized (DynamiteModule.class) {
                                if (zzf(context)) {
                                    throw new LoadingException("Remote loading disabled", null);
                                }
                                bool = zzb;
                                if (bool != null) {
                                    throw new LoadingException("Failed to determine which loading route to use.", null);
                                }
                                if (bool.booleanValue()) {
                                    Log.i("DynamiteModule", "Selected remote version of " + str + ", version >= " + i);
                                    synchronized (DynamiteModule.class) {
                                        zzrVar = zzl;
                                        if (zzrVar != null) {
                                            throw new LoadingException("DynamiteLoaderV2 was not cached.", null);
                                        }
                                        zznVar2 = (zzn) threadLocal.get();
                                        if (zznVar2 != null) {
                                        }
                                        throw new LoadingException("No result cursor", null);
                                    }
                                }
                                Log.i("DynamiteModule", "Selected remote version of " + str + ", version >= " + i);
                                zzqVarZzg = zzg(context);
                                if (zzqVarZzg != null) {
                                    throw new LoadingException("Failed to create IDynamiteLoader.", null);
                                }
                                iZze = zzqVarZzg.zze();
                                if (iZze >= 3) {
                                    zznVar = (zzn) threadLocal.get();
                                    if (zznVar != null) {
                                        throw new LoadingException("No cached result cursor holder", null);
                                    }
                                    iObjectWrapperZzh = zzqVarZzg.zzi(ObjectWrapper.wrap(context), str, i, ObjectWrapper.wrap(zznVar.zza));
                                } else if (iZze == 2) {
                                    Log.w("DynamiteModule", "IDynamite loader version = 2");
                                    iObjectWrapperZzh = zzqVarZzg.zzj(ObjectWrapper.wrap(context), str, i);
                                } else {
                                    Log.w("DynamiteModule", "Dynamite loader version < 2, falling back to createModuleContext");
                                    iObjectWrapperZzh = zzqVarZzg.zzh(ObjectWrapper.wrap(context), str, i);
                                }
                                objUnwrap = ObjectWrapper.unwrap(iObjectWrapperZzh);
                                if (objUnwrap != null) {
                                    throw new LoadingException("Failed to load remote module.", null);
                                }
                                dynamiteModule = new DynamiteModule((Context) objUnwrap);
                                dynamiteModuleZzc = dynamiteModule;
                            }
                            if (jLongValue == 0) {
                                zzh.remove();
                            } else {
                                zzh.set(Long.valueOf(jLongValue));
                            }
                            cursor = zznVar3.zza;
                            if (cursor != null) {
                                cursor.close();
                            }
                            zzg.set(r11);
                            throw th;
                        }
                        dynamiteModuleZzc = zzc(applicationContext, str);
                        if (jLongValue == 0) {
                            zzh.remove();
                        } else {
                            zzh.set(Long.valueOf(jLongValue));
                        }
                        cursor2 = zznVar3.zza;
                        if (cursor2 != null) {
                            cursor2.close();
                        }
                        zzg.set(r11);
                        return dynamiteModuleZzc;
                    }
                }
                r11 = i2;
                throw new LoadingException("No acceptable module " + str + " found. Local version is " + selectionResultSelectModule.localVersion + " and remote version is " + selectionResultSelectModule.remoteVersion + ".", null);
            } catch (Throwable th2) {
                th = th2;
                r11 = r11;
            }
        } catch (Throwable th3) {
            th = th3;
        }
    }

    /* JADX INFO: Removed unreachable split cross block B:136:0x01b8 */
    /* JADX WARN: Code duplicated, block: B:94:0x0168 A[Catch: all -> 0x01c4, TRY_ENTER, TRY_LEAVE, TryCatch #2 {all -> 0x01c4, blocks: (B:3:0x0002, B:61:0x00db, B:63:0x00e1, B:68:0x0102, B:90:0x015a, B:94:0x0168, B:115:0x01bd, B:116:0x01c0, B:110:0x01b5, B:66:0x00e7, B:119:0x01c3, B:4:0x0003, B:7:0x0009, B:8:0x0025, B:59:0x00d8, B:19:0x0046, B:41:0x009a, B:44:0x009d, B:52:0x00b6, B:60:0x00da, B:58:0x00bc), top: B:127:0x0002, inners: #0, #11 }] */
    public static int zza(Context context, String str, boolean z) {
        Throwable th;
        RemoteException e;
        Cursor cursor;
        try {
            synchronized (DynamiteModule.class) {
                Boolean bool = zzb;
                Cursor cursor2 = null;
                int iZzf = 0;
                if (bool == null) {
                    try {
                        Field declaredField = context.getApplicationContext().getClassLoader().loadClass(DynamiteLoaderClassLoader.class.getName()).getDeclaredField("sClassLoader");
                        synchronized (declaredField.getDeclaringClass()) {
                            ClassLoader classLoader = (ClassLoader) declaredField.get(null);
                            if (classLoader == ClassLoader.getSystemClassLoader()) {
                                bool = Boolean.FALSE;
                            } else if (classLoader != null) {
                                try {
                                    zzd(classLoader);
                                } catch (LoadingException unused) {
                                }
                                bool = Boolean.TRUE;
                            } else {
                                if (!zzf(context)) {
                                    return 0;
                                }
                                if (zzd || Boolean.TRUE.equals(null)) {
                                    declaredField.set(null, ClassLoader.getSystemClassLoader());
                                    bool = Boolean.FALSE;
                                } else {
                                    try {
                                        int iZzb = zzb(context, str, z, true);
                                        String str2 = zzc;
                                        if (str2 != null && !str2.isEmpty()) {
                                            ClassLoader classLoaderZza = zzb.zza();
                                            if (classLoaderZza == null) {
                                                if (Build.VERSION.SDK_INT >= 29) {
                                                    String str3 = zzc;
                                                    Preconditions.checkNotNull(str3);
                                                    classLoaderZza = new DelegateLastClassLoader(str3, ClassLoader.getSystemClassLoader());
                                                } else {
                                                    String str4 = zzc;
                                                    Preconditions.checkNotNull(str4);
                                                    classLoaderZza = new zzc(str4, ClassLoader.getSystemClassLoader());
                                                }
                                            }
                                            zzd(classLoaderZza);
                                            declaredField.set(null, classLoaderZza);
                                            zzb = Boolean.TRUE;
                                            return iZzb;
                                        }
                                        return iZzb;
                                    } catch (LoadingException unused2) {
                                        declaredField.set(null, ClassLoader.getSystemClassLoader());
                                        bool = Boolean.FALSE;
                                    }
                                }
                            }
                            zzb = bool;
                        }
                    } catch (ClassNotFoundException | IllegalAccessException | NoSuchFieldException e2) {
                        Log.w("DynamiteModule", "Failed to load module via V2: " + e2.toString());
                        bool = Boolean.FALSE;
                    }
                }
                if (bool.booleanValue()) {
                    try {
                        return zzb(context, str, z, false);
                    } catch (LoadingException e3) {
                        Log.w("DynamiteModule", "Failed to retrieve remote module version: " + e3.getMessage());
                        return 0;
                    }
                }
                zzq zzqVarZzg = zzg(context);
                try {
                    if (zzqVarZzg != null) {
                        try {
                            int iZze = zzqVarZzg.zze();
                            if (iZze >= 3) {
                                zzn zznVar = (zzn) zzg.get();
                                if (zznVar == null || (cursor = zznVar.zza) == null) {
                                    Cursor cursor3 = (Cursor) ObjectWrapper.unwrap(zzqVarZzg.zzk(ObjectWrapper.wrap(context), str, z, ((Long) zzh.get()).longValue()));
                                    if (cursor3 != null) {
                                        try {
                                            if (cursor3.moveToFirst()) {
                                                int i = cursor3.getInt(0);
                                                cursor2 = (i <= 0 || !zze(cursor3)) ? cursor3 : null;
                                                if (cursor2 != null) {
                                                    cursor2.close();
                                                }
                                                iZzf = i;
                                            } else {
                                                Log.w("DynamiteModule", "Failed to retrieve remote module version.");
                                                if (cursor3 != null) {
                                                    cursor3.close();
                                                }
                                            }
                                        } catch (RemoteException e4) {
                                            e = e4;
                                            cursor2 = cursor3;
                                            Log.w("DynamiteModule", "Failed to retrieve remote module version: " + e.getMessage());
                                            if (cursor2 != null) {
                                                cursor2.close();
                                            }
                                        } catch (Throwable th2) {
                                            th = th2;
                                            cursor2 = cursor3;
                                            if (cursor2 != null) {
                                                cursor2.close();
                                            }
                                            throw th;
                                        }
                                    } else {
                                        Log.w("DynamiteModule", "Failed to retrieve remote module version.");
                                        if (cursor3 != null) {
                                            cursor3.close();
                                        }
                                    }
                                } else {
                                    iZzf = cursor.getInt(0);
                                }
                            } else if (iZze == 2) {
                                Log.w("DynamiteModule", "IDynamite loader version = 2, no high precision latency measurement.");
                                iZzf = zzqVarZzg.zzg(ObjectWrapper.wrap(context), str, z);
                            } else {
                                Log.w("DynamiteModule", "IDynamite loader version < 2, falling back to getModuleVersion2");
                                iZzf = zzqVarZzg.zzf(ObjectWrapper.wrap(context), str, z);
                            }
                        } catch (RemoteException e5) {
                            e = e5;
                        }
                    }
                    return iZzf;
                } catch (Throwable th3) {
                    th = th3;
                }
            }
        } catch (Throwable th4) {
            CrashUtils.addDynamiteErrorToDropBox(context, th4);
            throw th4;
        }
    }

    /* JADX WARN: Code duplicated, block: B:56:0x00dc  */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v0 */
    /* JADX WARN: Type inference failed for: r0v1, types: [android.database.Cursor] */
    /* JADX WARN: Type inference failed for: r0v2 */
    /* JADX WARN: Type inference failed for: r0v3 */
    /* JADX WARN: Type inference failed for: r0v4 */
    /* JADX WARN: Type inference failed for: r0v5 */
    /* JADX WARN: Type inference failed for: r0v6 */
    /* JADX WARN: Type inference failed for: r0v7 */
    /* JADX WARN: Type inference failed for: r0v8 */
    private static int zzb(Context context, String str, boolean z, boolean z2) throws Throwable {
        Throwable th;
        Exception e;
        ?? r0 = 0;
        ?? r1 = 0;
        ?? r2 = 0;
        ?? r3 = 0;
        try {
            try {
                boolean z3 = true;
                Cursor cursorQuery = context.getContentResolver().query(new Uri.Builder().scheme(FirebaseAnalytics.Param.CONTENT).authority("com.google.android.gms.chimera").path(true != z ? "api" : "api_force_staging").appendPath(str).appendQueryParameter("requestStartTime", String.valueOf(((Long) zzh.get()).longValue())).build(), null, null, null, null);
                if (cursorQuery != null) {
                    try {
                        if (cursorQuery.moveToFirst()) {
                            boolean z4 = false;
                            int i = cursorQuery.getInt(0);
                            if (i > 0) {
                                synchronized (DynamiteModule.class) {
                                    zzc = cursorQuery.getString(2);
                                    int columnIndex = cursorQuery.getColumnIndex("loaderVersion");
                                    if (columnIndex >= 0) {
                                        zze = cursorQuery.getInt(columnIndex);
                                    }
                                    int columnIndex2 = cursorQuery.getColumnIndex("disableStandaloneDynamiteLoader2");
                                    if (columnIndex2 >= 0) {
                                        if (cursorQuery.getInt(columnIndex2) == 0) {
                                            z3 = false;
                                        }
                                        zzd = z3;
                                        z4 = z3;
                                    }
                                }
                                if (zze(cursorQuery)) {
                                    cursorQuery = null;
                                }
                            }
                            if (z2 && z4) {
                                throw new LoadingException("forcing fallback to container DynamiteLoader impl", r2 == true ? 1 : 0);
                            }
                            if (cursorQuery != null) {
                                cursorQuery.close();
                            }
                            return i;
                        }
                    } catch (Exception e2) {
                        e = e2;
                        if (e instanceof LoadingException) {
                            throw e;
                        }
                        throw new LoadingException("V2 version check failed: " + e.getMessage(), e, r1 == true ? 1 : 0);
                    }
                }
                Log.w("DynamiteModule", "Failed to retrieve remote module version.");
                throw new LoadingException("Failed to connect to dynamite module ContentResolver.", r3 == true ? 1 : 0);
            } catch (Throwable th2) {
                th = th2;
                r0 = context;
                if (r0 != 0) {
                    r0.close();
                }
                throw th;
            }
        } catch (Exception e3) {
            e = e3;
        } catch (Throwable th3) {
            th = th3;
            if (r0 != 0) {
                r0.close();
            }
            throw th;
        }
    }

    private static DynamiteModule zzc(Context context, String str) {
        Log.i("DynamiteModule", "Selected local version of ".concat(String.valueOf(str)));
        return new DynamiteModule(context);
    }

    private static void zzd(ClassLoader classLoader) throws LoadingException {
        zzr zzrVar;
        zzp zzpVar = null;
        try {
            IBinder iBinder = (IBinder) classLoader.loadClass("com.google.android.gms.dynamiteloader.DynamiteLoaderV2").getConstructor(new Class[0]).newInstance(new Object[0]);
            if (iBinder == null) {
                zzrVar = null;
            } else {
                IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface("com.google.android.gms.dynamite.IDynamiteLoaderV2");
                zzrVar = iInterfaceQueryLocalInterface instanceof zzr ? (zzr) iInterfaceQueryLocalInterface : new zzr(iBinder);
            }
            zzl = zzrVar;
        } catch (ClassNotFoundException | IllegalAccessException | InstantiationException | NoSuchMethodException | InvocationTargetException e) {
            throw new LoadingException("Failed to instantiate dynamite loader", e, zzpVar);
        }
    }

    private static boolean zze(Cursor cursor) {
        zzn zznVar = (zzn) zzg.get();
        if (zznVar == null || zznVar.zza != null) {
            return false;
        }
        zznVar.zza = cursor;
        return true;
    }

    private static boolean zzf(Context context) {
        if (Boolean.TRUE.equals(null) || Boolean.TRUE.equals(zzf)) {
            return true;
        }
        boolean zBooleanValue = false;
        if (zzf == null) {
            ProviderInfo providerInfoResolveContentProvider = context.getPackageManager().resolveContentProvider("com.google.android.gms.chimera", 0);
            if (GoogleApiAvailabilityLight.getInstance().isGooglePlayServicesAvailable(context, 10000000) == 0 && providerInfoResolveContentProvider != null && "com.google.android.gms".equals(providerInfoResolveContentProvider.packageName)) {
                zBooleanValue = true;
            }
            Boolean boolValueOf = Boolean.valueOf(zBooleanValue);
            zzf = boolValueOf;
            zBooleanValue = boolValueOf.booleanValue();
            if (zBooleanValue && providerInfoResolveContentProvider.applicationInfo != null && (providerInfoResolveContentProvider.applicationInfo.flags & 129) == 0) {
                Log.i("DynamiteModule", "Non-system-image GmsCore APK, forcing V1");
                zzd = true;
            }
        }
        if (!zBooleanValue) {
            Log.e("DynamiteModule", "Invalid GmsCore APK, remote loading disabled.");
        }
        return zBooleanValue;
    }

    private static zzq zzg(Context context) {
        zzq zzqVar;
        synchronized (DynamiteModule.class) {
            zzq zzqVar2 = zzk;
            if (zzqVar2 != null) {
                return zzqVar2;
            }
            try {
                IBinder iBinder = (IBinder) context.createPackageContext("com.google.android.gms", 3).getClassLoader().loadClass("com.google.android.gms.chimera.container.DynamiteLoaderImpl").newInstance();
                if (iBinder == null) {
                    zzqVar = null;
                } else {
                    IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface("com.google.android.gms.dynamite.IDynamiteLoader");
                    zzqVar = iInterfaceQueryLocalInterface instanceof zzq ? (zzq) iInterfaceQueryLocalInterface : new zzq(iBinder);
                }
                if (zzqVar != null) {
                    zzk = zzqVar;
                    return zzqVar;
                }
            } catch (Exception e) {
                Log.e("DynamiteModule", "Failed to load IDynamiteLoader from GmsCore: " + e.getMessage());
            }
            return null;
        }
    }

    @ResultIgnorabilityUnspecified
    public Context getModuleContext() {
        return this.zzj;
    }

    public IBinder instantiate(String str) throws LoadingException {
        try {
            return (IBinder) this.zzj.getClassLoader().loadClass(str).newInstance();
        } catch (ClassNotFoundException | IllegalAccessException | InstantiationException e) {
            throw new LoadingException("Failed to instantiate module class: ".concat(String.valueOf(str)), e, null);
        }
    }
}
