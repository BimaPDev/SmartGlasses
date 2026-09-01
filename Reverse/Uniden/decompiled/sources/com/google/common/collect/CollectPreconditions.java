package com.google.common.collect;

import com.google.common.base.Preconditions;

/* JADX INFO: loaded from: classes2.dex */
@ElementTypesAreNonnullByDefault
final class CollectPreconditions {
    CollectPreconditions() {
    }

    static void checkEntryNotNull(Object obj, Object obj2) {
        if (obj == null) {
            String strValueOf = String.valueOf(obj2);
            throw new NullPointerException(new StringBuilder(String.valueOf(strValueOf).length() + 24).append("null key in entry: null=").append(strValueOf).toString());
        }
        if (obj2 != null) {
            return;
        }
        String strValueOf2 = String.valueOf(obj);
        throw new NullPointerException(new StringBuilder(String.valueOf(strValueOf2).length() + 26).append("null value in entry: ").append(strValueOf2).append("=null").toString());
    }

    static int checkNonnegative(int i, String str) {
        if (i >= 0) {
            return i;
        }
        throw new IllegalArgumentException(new StringBuilder(String.valueOf(str).length() + 40).append(str).append(" cannot be negative but was: ").append(i).toString());
    }

    static long checkNonnegative(long j, String str) {
        if (j >= 0) {
            return j;
        }
        throw new IllegalArgumentException(new StringBuilder(String.valueOf(str).length() + 49).append(str).append(" cannot be negative but was: ").append(j).toString());
    }

    static void checkPositive(int i, String str) {
        if (i <= 0) {
            throw new IllegalArgumentException(new StringBuilder(String.valueOf(str).length() + 38).append(str).append(" must be positive but was: ").append(i).toString());
        }
    }

    static void checkRemove(boolean z) {
        Preconditions.checkState(z, "no calls to next() since the last call to remove()");
    }
}
