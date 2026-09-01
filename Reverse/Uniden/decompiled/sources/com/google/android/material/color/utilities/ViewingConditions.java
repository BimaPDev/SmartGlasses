package com.google.android.material.color.utilities;

/* JADX INFO: loaded from: classes2.dex */
public final class ViewingConditions {
    public static final ViewingConditions DEFAULT = defaultWithBackgroundLstar(50.0d);

    /* JADX INFO: renamed from: aw */
    private final double f260aw;

    /* JADX INFO: renamed from: c */
    private final double f261c;

    /* JADX INFO: renamed from: fl */
    private final double f262fl;
    private final double flRoot;

    /* JADX INFO: renamed from: n */
    private final double f263n;
    private final double nbb;

    /* JADX INFO: renamed from: nc */
    private final double f264nc;
    private final double ncb;
    private final double[] rgbD;

    /* JADX INFO: renamed from: z */
    private final double f265z;

    public double getAw() {
        return this.f260aw;
    }

    double getC() {
        return this.f261c;
    }

    double getFl() {
        return this.f262fl;
    }

    public double getFlRoot() {
        return this.flRoot;
    }

    public double getN() {
        return this.f263n;
    }

    public double getNbb() {
        return this.nbb;
    }

    double getNc() {
        return this.f264nc;
    }

    double getNcb() {
        return this.ncb;
    }

    public double[] getRgbD() {
        return this.rgbD;
    }

    double getZ() {
        return this.f265z;
    }

    public static ViewingConditions make(double[] dArr, double d, double d2, double d3, boolean z) {
        double dLerp;
        double dMax = Math.max(0.1d, d2);
        double[][] dArr2 = Cam16.XYZ_TO_CAM16RGB;
        double d4 = dArr[0];
        double[] dArr3 = dArr2[0];
        double d5 = dArr3[0] * d4;
        double d6 = dArr[1];
        double d7 = d5 + (dArr3[1] * d6);
        double d8 = dArr[2];
        double d9 = d7 + (dArr3[2] * d8);
        double[] dArr4 = dArr2[1];
        double d10 = (dArr4[0] * d4) + (dArr4[1] * d6) + (dArr4[2] * d8);
        double[] dArr5 = dArr2[2];
        double d11 = (d4 * dArr5[0]) + (d6 * dArr5[1]) + (d8 * dArr5[2]);
        double d12 = (d3 / 10.0d) + 0.8d;
        if (d12 >= 0.9d) {
            dLerp = MathUtils.lerp(0.59d, 0.69d, (d12 - 0.9d) * 10.0d);
        } else {
            dLerp = MathUtils.lerp(0.525d, 0.59d, (d12 - 0.8d) * 10.0d);
        }
        double d13 = dLerp;
        double dClampDouble = MathUtils.clampDouble(0.0d, 1.0d, z ? 1.0d : (1.0d - (Math.exp(((-d) - 42.0d) / 92.0d) * 0.2777777777777778d)) * d12);
        double[] dArr6 = {(((100.0d / d9) * dClampDouble) + 1.0d) - dClampDouble, (((100.0d / d10) * dClampDouble) + 1.0d) - dClampDouble, (((100.0d / d11) * dClampDouble) + 1.0d) - dClampDouble};
        double d14 = 5.0d * d;
        double d15 = 1.0d / (d14 + 1.0d);
        double d16 = d15 * d15 * d15 * d15;
        double d17 = 1.0d - d16;
        double dCbrt = (d16 * d) + (0.1d * d17 * d17 * Math.cbrt(d14));
        double dYFromLstar = ColorUtils.yFromLstar(dMax) / dArr[1];
        double dSqrt = Math.sqrt(dYFromLstar) + 1.48d;
        double dPow = 0.725d / Math.pow(dYFromLstar, 0.2d);
        double dPow2 = Math.pow(((dArr6[2] * dCbrt) * d11) / 100.0d, 0.42d);
        double[] dArr7 = {Math.pow(((dArr6[0] * dCbrt) * d9) / 100.0d, 0.42d), Math.pow(((dArr6[1] * dCbrt) * d10) / 100.0d, 0.42d), dPow2};
        double d18 = dArr7[0];
        double d19 = (d18 * 400.0d) / (d18 + 27.13d);
        double d20 = dArr7[1];
        return new ViewingConditions(dYFromLstar, ((d19 * 2.0d) + ((d20 * 400.0d) / (d20 + 27.13d)) + (((400.0d * dPow2) / (dPow2 + 27.13d)) * 0.05d)) * dPow, dPow, dPow, d13, d12, dArr6, dCbrt, Math.pow(dCbrt, 0.25d), dSqrt);
    }

    public static ViewingConditions defaultWithBackgroundLstar(double d) {
        return make(ColorUtils.whitePointD65(), (ColorUtils.yFromLstar(50.0d) * 63.66197723675813d) / 100.0d, d, 2.0d, false);
    }

    private ViewingConditions(double d, double d2, double d3, double d4, double d5, double d6, double[] dArr, double d7, double d8, double d9) {
        this.f263n = d;
        this.f260aw = d2;
        this.nbb = d3;
        this.ncb = d4;
        this.f261c = d5;
        this.f264nc = d6;
        this.rgbD = dArr;
        this.f262fl = d7;
        this.flRoot = d8;
        this.f265z = d9;
    }
}
