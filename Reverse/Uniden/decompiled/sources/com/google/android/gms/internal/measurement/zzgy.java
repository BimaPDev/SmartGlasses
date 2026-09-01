package com.google.android.gms.internal.measurement;

import android.net.Uri;
import androidx.collection.SimpleArrayMap;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzgy implements zzhh {
    private final SimpleArrayMap<String, SimpleArrayMap<String, String>> zza;

    /* JADX WARN: Code duplicated, block: B:10:0x0016  */
    /* JADX WARN: Code duplicated, block: B:12:0x0019 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:13:0x001a A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:14:0x001c  */
    @Override // com.google.android.gms.internal.measurement.zzhh
    public final String zza(Uri uri, String str, String str2, String str3) {
        SimpleArrayMap<String, String> simpleArrayMap;
        if (uri == null) {
            if (str == null) {
                simpleArrayMap = null;
            }
            if (simpleArrayMap == null) {
                return null;
            }
            if (str2 != null) {
                str3 = str2 + str3;
            }
            return simpleArrayMap.get(str3);
        }
        str = uri.toString();
        SimpleArrayMap<String, SimpleArrayMap<String, String>> simpleArrayMap2 = this.zza;
        if (simpleArrayMap2 == null) {
            simpleArrayMap = null;
        } else {
            simpleArrayMap = simpleArrayMap2.get(str);
        }
        if (simpleArrayMap == null) {
            return null;
        }
        if (str2 != null) {
            str3 = str2 + str3;
        }
        return simpleArrayMap.get(str3);
    }

    zzgy(SimpleArrayMap<String, SimpleArrayMap<String, String>> simpleArrayMap) {
        this.zza = simpleArrayMap;
    }
}
