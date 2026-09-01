package com.airbnb.lottie.model.content;

import com.airbnb.lottie.utils.GammaEvaluator;
import com.airbnb.lottie.utils.MiscUtils;
import java.util.Arrays;

/* JADX INFO: loaded from: classes.dex */
public class GradientColor {
    private final int[] colors;
    private final float[] positions;

    public int[] getColors() {
        return this.colors;
    }

    public float[] getPositions() {
        return this.positions;
    }

    public GradientColor(float[] fArr, int[] iArr) {
        this.positions = fArr;
        this.colors = iArr;
    }

    public int getSize() {
        return this.colors.length;
    }

    public void lerp(GradientColor gradientColor, GradientColor gradientColor2, float f) {
        if (gradientColor.colors.length != gradientColor2.colors.length) {
            throw new IllegalArgumentException("Cannot interpolate between gradients. Lengths vary (" + gradientColor.colors.length + " vs " + gradientColor2.colors.length + ")");
        }
        for (int i = 0; i < gradientColor.colors.length; i++) {
            this.positions[i] = MiscUtils.lerp(gradientColor.positions[i], gradientColor2.positions[i], f);
            this.colors[i] = GammaEvaluator.evaluate(f, gradientColor.colors[i], gradientColor2.colors[i]);
        }
    }

    public GradientColor copyWithPositions(float[] fArr) {
        int[] iArr = new int[fArr.length];
        for (int i = 0; i < fArr.length; i++) {
            iArr[i] = getColorForPosition(fArr[i]);
        }
        return new GradientColor(fArr, iArr);
    }

    private int getColorForPosition(float f) {
        int iBinarySearch = Arrays.binarySearch(this.positions, f);
        if (iBinarySearch >= 0) {
            return this.colors[iBinarySearch];
        }
        int i = -(iBinarySearch + 1);
        if (i == 0) {
            return this.colors[0];
        }
        int[] iArr = this.colors;
        if (i == iArr.length - 1) {
            return iArr[iArr.length - 1];
        }
        float[] fArr = this.positions;
        int i2 = i - 1;
        float f2 = fArr[i2];
        return GammaEvaluator.evaluate((f - f2) / (fArr[i] - f2), iArr[i2], iArr[i]);
    }
}
