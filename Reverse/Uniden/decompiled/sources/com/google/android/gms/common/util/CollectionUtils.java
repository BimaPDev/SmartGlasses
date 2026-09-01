package com.google.android.gms.common.util;

import androidx.collection.ArrayMap;
import androidx.collection.ArraySet;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;

/* JADX INFO: compiled from: com.google.android.gms:play-services-basement@@18.3.0 */
/* JADX INFO: loaded from: classes2.dex */
public final class CollectionUtils {
    private CollectionUtils() {
    }

    public static boolean isEmpty(Collection<?> collection) {
        if (collection == null) {
            return true;
        }
        return collection.isEmpty();
    }

    @Deprecated
    public static <T> List<T> listOf() {
        return Collections.emptyList();
    }

    public static <K, V> Map<K, V> mapOf(K k, V v, K k2, V v2, K k3, V v3) {
        Map mapZza = zza(3, false);
        mapZza.put(k, v);
        mapZza.put(k2, v2);
        mapZza.put(k3, v3);
        return Collections.unmodifiableMap(mapZza);
    }

    public static <K, V> Map<K, V> mapOfKeyValueArrays(K[] kArr, V[] vArr) {
        int length = kArr.length;
        int length2 = vArr.length;
        if (length != length2) {
            throw new IllegalArgumentException("Key and values array lengths not equal: " + length + " != " + length2);
        }
        if (length == 0) {
            return Collections.emptyMap();
        }
        if (length == 1) {
            return Collections.singletonMap(kArr[0], vArr[0]);
        }
        Map mapZza = zza(length, false);
        for (int i = 0; i < kArr.length; i++) {
            mapZza.put(kArr[i], vArr[i]);
        }
        return Collections.unmodifiableMap(mapZza);
    }

    public static <T> Set<T> mutableSetOfWithSize(int i) {
        return i == 0 ? new ArraySet() : zzb(i, true);
    }

    @Deprecated
    public static <T> Set<T> setOf(T t, T t2, T t3) {
        Set setZzb = zzb(3, false);
        setZzb.add(t);
        setZzb.add(t2);
        setZzb.add(t3);
        return Collections.unmodifiableSet(setZzb);
    }

    private static Map zza(int i, boolean z) {
        return i <= 256 ? new ArrayMap(i) : new HashMap(i, 1.0f);
    }

    @Deprecated
    public static <T> List<T> listOf(T t) {
        return Collections.singletonList(t);
    }

    private static Set zzb(int i, boolean z) {
        if (i <= (true != z ? 256 : 128)) {
            return new ArraySet(i);
        }
        return new HashSet(i, true != z ? 1.0f : 0.75f);
    }

    @Deprecated
    public static <T> List<T> listOf(T... tArr) {
        int length = tArr.length;
        if (length == 0) {
            return Collections.emptyList();
        }
        if (length == 1) {
            return Collections.singletonList(tArr[0]);
        }
        return Collections.unmodifiableList(Arrays.asList(tArr));
    }

    public static <K, V> Map<K, V> mapOf(K k, V v, K k2, V v2, K k3, V v3, K k4, V v4, K k5, V v5, K k6, V v6) {
        Map mapZza = zza(6, false);
        mapZza.put(k, v);
        mapZza.put(k2, v2);
        mapZza.put(k3, v3);
        mapZza.put(k4, v4);
        mapZza.put(k5, v5);
        mapZza.put(k6, v6);
        return Collections.unmodifiableMap(mapZza);
    }

    @Deprecated
    public static <T> Set<T> setOf(T... tArr) {
        int length = tArr.length;
        if (length == 0) {
            return Collections.emptySet();
        }
        if (length == 1) {
            return Collections.singleton(tArr[0]);
        }
        if (length == 2) {
            T t = tArr[0];
            T t2 = tArr[1];
            Set setZzb = zzb(2, false);
            setZzb.add(t);
            setZzb.add(t2);
            return Collections.unmodifiableSet(setZzb);
        }
        if (length == 3) {
            return setOf(tArr[0], tArr[1], tArr[2]);
        }
        if (length == 4) {
            T t3 = tArr[0];
            T t4 = tArr[1];
            T t5 = tArr[2];
            T t6 = tArr[3];
            Set setZzb2 = zzb(4, false);
            setZzb2.add(t3);
            setZzb2.add(t4);
            setZzb2.add(t5);
            setZzb2.add(t6);
            return Collections.unmodifiableSet(setZzb2);
        }
        Set setZzb3 = zzb(length, false);
        Collections.addAll(setZzb3, tArr);
        return Collections.unmodifiableSet(setZzb3);
    }
}
