package com.google.common.math;

import java.math.BigInteger;
import java.math.RoundingMode;

/* JADX INFO: loaded from: classes2.dex */
@ElementTypesAreNonnullByDefault
final class MathPreconditions {
    static int checkPositive(String str, int i) {
        if (i > 0) {
            return i;
        }
        throw new IllegalArgumentException(new StringBuilder(String.valueOf(str).length() + 26).append(str).append(" (").append(i).append(") must be > 0").toString());
    }

    static long checkPositive(String str, long j) {
        if (j > 0) {
            return j;
        }
        throw new IllegalArgumentException(new StringBuilder(String.valueOf(str).length() + 35).append(str).append(" (").append(j).append(") must be > 0").toString());
    }

    static BigInteger checkPositive(String str, BigInteger bigInteger) {
        if (bigInteger.signum() > 0) {
            return bigInteger;
        }
        String strValueOf = String.valueOf(bigInteger);
        throw new IllegalArgumentException(new StringBuilder(String.valueOf(str).length() + 15 + String.valueOf(strValueOf).length()).append(str).append(" (").append(strValueOf).append(") must be > 0").toString());
    }

    static int checkNonNegative(String str, int i) {
        if (i >= 0) {
            return i;
        }
        throw new IllegalArgumentException(new StringBuilder(String.valueOf(str).length() + 27).append(str).append(" (").append(i).append(") must be >= 0").toString());
    }

    static long checkNonNegative(String str, long j) {
        if (j >= 0) {
            return j;
        }
        throw new IllegalArgumentException(new StringBuilder(String.valueOf(str).length() + 36).append(str).append(" (").append(j).append(") must be >= 0").toString());
    }

    static BigInteger checkNonNegative(String str, BigInteger bigInteger) {
        if (bigInteger.signum() >= 0) {
            return bigInteger;
        }
        String strValueOf = String.valueOf(bigInteger);
        throw new IllegalArgumentException(new StringBuilder(String.valueOf(str).length() + 16 + String.valueOf(strValueOf).length()).append(str).append(" (").append(strValueOf).append(") must be >= 0").toString());
    }

    static double checkNonNegative(String str, double d) {
        if (d >= 0.0d) {
            return d;
        }
        throw new IllegalArgumentException(new StringBuilder(String.valueOf(str).length() + 40).append(str).append(" (").append(d).append(") must be >= 0").toString());
    }

    static void checkRoundingUnnecessary(boolean z) {
        if (!z) {
            throw new ArithmeticException("mode was UNNECESSARY, but rounding was necessary");
        }
    }

    static void checkInRangeForRoundingInputs(boolean z, double d, RoundingMode roundingMode) {
        if (z) {
            return;
        }
        String strValueOf = String.valueOf(roundingMode);
        throw new ArithmeticException(new StringBuilder(String.valueOf(strValueOf).length() + 83).append("rounded value is out of range for input ").append(d).append(" and rounding mode ").append(strValueOf).toString());
    }

    static void checkNoOverflow(boolean z, String str, int i, int i2) {
        if (!z) {
            throw new ArithmeticException(new StringBuilder(String.valueOf(str).length() + 36).append("overflow: ").append(str).append("(").append(i).append(", ").append(i2).append(")").toString());
        }
    }

    static void checkNoOverflow(boolean z, String str, long j, long j2) {
        if (!z) {
            throw new ArithmeticException(new StringBuilder(String.valueOf(str).length() + 54).append("overflow: ").append(str).append("(").append(j).append(", ").append(j2).append(")").toString());
        }
    }

    private MathPreconditions() {
    }
}
