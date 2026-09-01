package androidx.constraintlayout.core.motion.key;

import androidx.constraintlayout.core.motion.CustomVariable;
import androidx.constraintlayout.core.motion.utils.KeyCycleOscillator;
import androidx.constraintlayout.core.motion.utils.SplineSet;
import androidx.constraintlayout.core.motion.utils.TypedValues;
import androidx.constraintlayout.core.motion.utils.Utils;
import com.google.common.base.Ascii;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;

/* JADX INFO: loaded from: classes.dex */
public class MotionKeyCycle extends MotionKey {
    public static final int KEY_TYPE = 4;
    static final String NAME = "KeyCycle";
    public static final int SHAPE_BOUNCE = 6;
    public static final int SHAPE_COS_WAVE = 5;
    public static final int SHAPE_REVERSE_SAW_WAVE = 4;
    public static final int SHAPE_SAW_WAVE = 3;
    public static final int SHAPE_SIN_WAVE = 0;
    public static final int SHAPE_SQUARE_WAVE = 1;
    public static final int SHAPE_TRIANGLE_WAVE = 2;
    private static final String TAG = "KeyCycle";
    public static final String WAVE_OFFSET = "waveOffset";
    public static final String WAVE_PERIOD = "wavePeriod";
    public static final String WAVE_PHASE = "wavePhase";
    public static final String WAVE_SHAPE = "waveShape";
    private String mTransitionEasing = null;
    private int mCurveFit = 0;
    private int mWaveShape = -1;
    private String mCustomWaveShape = null;
    private float mWavePeriod = Float.NaN;
    private float mWaveOffset = 0.0f;
    private float mWavePhase = 0.0f;
    private float mProgress = Float.NaN;
    private float mAlpha = Float.NaN;
    private float mElevation = Float.NaN;
    private float mRotation = Float.NaN;
    private float mTransitionPathRotate = Float.NaN;
    private float mRotationX = Float.NaN;
    private float mRotationY = Float.NaN;
    private float mScaleX = Float.NaN;
    private float mScaleY = Float.NaN;
    private float mTranslationX = Float.NaN;
    private float mTranslationY = Float.NaN;
    private float mTranslationZ = Float.NaN;

    @Override // androidx.constraintlayout.core.motion.key.MotionKey
    public void addValues(HashMap<String, SplineSet> map) {
    }

    @Override // androidx.constraintlayout.core.motion.key.MotionKey
    /* JADX INFO: renamed from: clone */
    public MotionKey mo544clone() {
        return null;
    }

    public MotionKeyCycle() {
        this.mType = 4;
        this.mCustom = new HashMap<>();
    }

    @Override // androidx.constraintlayout.core.motion.key.MotionKey
    public void getAttributeNames(HashSet<String> hashSet) {
        if (!Float.isNaN(this.mAlpha)) {
            hashSet.add("alpha");
        }
        if (!Float.isNaN(this.mElevation)) {
            hashSet.add("elevation");
        }
        if (!Float.isNaN(this.mRotation)) {
            hashSet.add("rotationZ");
        }
        if (!Float.isNaN(this.mRotationX)) {
            hashSet.add("rotationX");
        }
        if (!Float.isNaN(this.mRotationY)) {
            hashSet.add("rotationY");
        }
        if (!Float.isNaN(this.mScaleX)) {
            hashSet.add("scaleX");
        }
        if (!Float.isNaN(this.mScaleY)) {
            hashSet.add("scaleY");
        }
        if (!Float.isNaN(this.mTransitionPathRotate)) {
            hashSet.add("pathRotate");
        }
        if (!Float.isNaN(this.mTranslationX)) {
            hashSet.add("translationX");
        }
        if (!Float.isNaN(this.mTranslationY)) {
            hashSet.add("translationY");
        }
        if (!Float.isNaN(this.mTranslationZ)) {
            hashSet.add("translationZ");
        }
        if (this.mCustom.size() > 0) {
            Iterator<String> it = this.mCustom.keySet().iterator();
            while (it.hasNext()) {
                hashSet.add("CUSTOM," + it.next());
            }
        }
    }

    @Override // androidx.constraintlayout.core.motion.key.MotionKey, androidx.constraintlayout.core.motion.utils.TypedValues
    public boolean setValue(int i, int i2) {
        if (i == 401) {
            this.mCurveFit = i2;
            return true;
        }
        if (i == 421) {
            this.mWaveShape = i2;
            return true;
        }
        if (setValue(i, i2)) {
            return true;
        }
        return super.setValue(i, i2);
    }

    @Override // androidx.constraintlayout.core.motion.key.MotionKey, androidx.constraintlayout.core.motion.utils.TypedValues
    public boolean setValue(int i, String str) {
        if (i == 420) {
            this.mTransitionEasing = str;
            return true;
        }
        if (i != 422) {
            return super.setValue(i, str);
        }
        this.mCustomWaveShape = str;
        return true;
    }

    @Override // androidx.constraintlayout.core.motion.key.MotionKey, androidx.constraintlayout.core.motion.utils.TypedValues
    public boolean setValue(int i, float f) {
        if (i == 315) {
            this.mProgress = f;
            return true;
        }
        if (i == 403) {
            this.mAlpha = f;
            return true;
        }
        if (i == 416) {
            this.mTransitionPathRotate = f;
            return true;
        }
        switch (i) {
            case 304:
                this.mTranslationX = f;
                return true;
            case 305:
                this.mTranslationY = f;
                return true;
            case 306:
                this.mTranslationZ = f;
                return true;
            case 307:
                this.mElevation = f;
                return true;
            case 308:
                this.mRotationX = f;
                return true;
            case 309:
                this.mRotationY = f;
                return true;
            case 310:
                this.mRotation = f;
                return true;
            case 311:
                this.mScaleX = f;
                return true;
            case 312:
                this.mScaleY = f;
                return true;
            default:
                switch (i) {
                    case TypedValues.CycleType.TYPE_WAVE_PERIOD /* 423 */:
                        this.mWavePeriod = f;
                        return true;
                    case TypedValues.CycleType.TYPE_WAVE_OFFSET /* 424 */:
                        this.mWaveOffset = f;
                        return true;
                    case TypedValues.CycleType.TYPE_WAVE_PHASE /* 425 */:
                        this.mWavePhase = f;
                        return true;
                    default:
                        return super.setValue(i, f);
                }
        }
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    public float getValue(String str) {
        str.hashCode();
        byte b = -1;
        switch (str.hashCode()) {
            case -1249320806:
                if (str.equals("rotationX")) {
                    b = 0;
                }
                break;
            case -1249320805:
                if (str.equals("rotationY")) {
                    b = 1;
                }
                break;
            case -1249320804:
                if (str.equals("rotationZ")) {
                    b = 2;
                }
                break;
            case -1225497657:
                if (str.equals("translationX")) {
                    b = 3;
                }
                break;
            case -1225497656:
                if (str.equals("translationY")) {
                    b = 4;
                }
                break;
            case -1225497655:
                if (str.equals("translationZ")) {
                    b = 5;
                }
                break;
            case -1019779949:
                if (str.equals(TypedValues.CycleType.S_WAVE_OFFSET)) {
                    b = 6;
                }
                break;
            case -1001078227:
                if (str.equals("progress")) {
                    b = 7;
                }
                break;
            case -908189618:
                if (str.equals("scaleX")) {
                    b = 8;
                }
                break;
            case -908189617:
                if (str.equals("scaleY")) {
                    b = 9;
                }
                break;
            case -4379043:
                if (str.equals("elevation")) {
                    b = 10;
                }
                break;
            case 92909918:
                if (str.equals("alpha")) {
                    b = Ascii.f294VT;
                }
                break;
            case 106629499:
                if (str.equals(TypedValues.CycleType.S_WAVE_PHASE)) {
                    b = Ascii.f283FF;
                }
                break;
            case 803192288:
                if (str.equals("pathRotate")) {
                    b = Ascii.f281CR;
                }
                break;
        }
        switch (b) {
            case 0:
                return this.mRotationX;
            case 1:
                return this.mRotationY;
            case 2:
                return this.mRotation;
            case 3:
                return this.mTranslationX;
            case 4:
                return this.mTranslationY;
            case 5:
                return this.mTranslationZ;
            case 6:
                return this.mWaveOffset;
            case 7:
                return this.mProgress;
            case 8:
                return this.mScaleX;
            case 9:
                return this.mScaleY;
            case 10:
                return this.mElevation;
            case 11:
                return this.mAlpha;
            case 12:
                return this.mWavePhase;
            case 13:
                return this.mTransitionPathRotate;
            default:
                return Float.NaN;
        }
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override // androidx.constraintlayout.core.motion.utils.TypedValues
    public int getId(String str) {
        byte b;
        str.hashCode();
        switch (str.hashCode()) {
            case -1581616630:
                b = !str.equals(TypedValues.CycleType.S_CUSTOM_WAVE_SHAPE) ? (byte) -1 : (byte) 0;
                break;
            case -1310311125:
                b = !str.equals("easing") ? (byte) -1 : (byte) 1;
                break;
            case -1249320806:
                b = !str.equals("rotationX") ? (byte) -1 : (byte) 2;
                break;
            case -1249320805:
                b = !str.equals("rotationY") ? (byte) -1 : (byte) 3;
                break;
            case -1249320804:
                b = !str.equals("rotationZ") ? (byte) -1 : (byte) 4;
                break;
            case -1225497657:
                b = !str.equals("translationX") ? (byte) -1 : (byte) 5;
                break;
            case -1225497656:
                b = !str.equals("translationY") ? (byte) -1 : (byte) 6;
                break;
            case -1225497655:
                b = !str.equals("translationZ") ? (byte) -1 : (byte) 7;
                break;
            case -1019779949:
                b = !str.equals(TypedValues.CycleType.S_WAVE_OFFSET) ? (byte) -1 : (byte) 8;
                break;
            case -1001078227:
                b = !str.equals("progress") ? (byte) -1 : (byte) 9;
                break;
            case -991726143:
                b = !str.equals(TypedValues.CycleType.S_WAVE_PERIOD) ? (byte) -1 : (byte) 10;
                break;
            case -987906986:
                b = !str.equals("pivotX") ? (byte) -1 : Ascii.f294VT;
                break;
            case -987906985:
                b = !str.equals("pivotY") ? (byte) -1 : Ascii.f283FF;
                break;
            case -908189618:
                b = !str.equals("scaleX") ? (byte) -1 : Ascii.f281CR;
                break;
            case -908189617:
                b = !str.equals("scaleY") ? (byte) -1 : Ascii.f291SO;
                break;
            case 92909918:
                b = !str.equals("alpha") ? (byte) -1 : Ascii.f290SI;
                break;
            case 106629499:
                b = !str.equals(TypedValues.CycleType.S_WAVE_PHASE) ? (byte) -1 : Ascii.DLE;
                break;
            case 579057826:
                b = !str.equals("curveFit") ? (byte) -1 : (byte) 17;
                break;
            case 803192288:
                b = !str.equals("pathRotate") ? (byte) -1 : Ascii.DC2;
                break;
            case 1532805160:
                b = !str.equals("waveShape") ? (byte) -1 : (byte) 19;
                break;
            case 1941332754:
                b = !str.equals("visibility") ? (byte) -1 : Ascii.DC4;
                break;
            default:
                b = -1;
                break;
        }
        switch (b) {
            case 0:
                return TypedValues.CycleType.TYPE_CUSTOM_WAVE_SHAPE;
            case 1:
                return TypedValues.CycleType.TYPE_EASING;
            case 2:
                return 308;
            case 3:
                return 309;
            case 4:
                return 310;
            case 5:
                return 304;
            case 6:
                return 305;
            case 7:
                return 306;
            case 8:
                return TypedValues.CycleType.TYPE_WAVE_OFFSET;
            case 9:
                return 315;
            case 10:
                return TypedValues.CycleType.TYPE_WAVE_PERIOD;
            case 11:
                return 313;
            case 12:
                return 314;
            case 13:
                return 311;
            case 14:
                return 312;
            case 15:
                return TypedValues.CycleType.TYPE_ALPHA;
            case 16:
                return TypedValues.CycleType.TYPE_WAVE_PHASE;
            case 17:
                return TypedValues.CycleType.TYPE_CURVE_FIT;
            case 18:
                return TypedValues.CycleType.TYPE_PATH_ROTATE;
            case 19:
                return 421;
            case 20:
                return TypedValues.CycleType.TYPE_VISIBILITY;
            default:
                return -1;
        }
    }

    public void addCycleValues(HashMap<String, KeyCycleOscillator> map) {
        KeyCycleOscillator keyCycleOscillator;
        KeyCycleOscillator keyCycleOscillator2;
        for (String str : map.keySet()) {
            if (str.startsWith("CUSTOM")) {
                CustomVariable customVariable = this.mCustom.get(str.substring(7));
                if (customVariable != null && customVariable.getType() == 901 && (keyCycleOscillator = map.get(str)) != null) {
                    keyCycleOscillator.setPoint(this.mFramePosition, this.mWaveShape, this.mCustomWaveShape, -1, this.mWavePeriod, this.mWaveOffset, this.mWavePhase, customVariable.getValueToInterpolate(), customVariable);
                }
            } else {
                float value = getValue(str);
                if (!Float.isNaN(value) && (keyCycleOscillator2 = map.get(str)) != null) {
                    keyCycleOscillator2.setPoint(this.mFramePosition, this.mWaveShape, this.mCustomWaveShape, -1, this.mWavePeriod, this.mWaveOffset, this.mWavePhase, value);
                }
            }
        }
    }

    public void dump() {
        System.out.println("MotionKeyCycle{mWaveShape=" + this.mWaveShape + ", mWavePeriod=" + this.mWavePeriod + ", mWaveOffset=" + this.mWaveOffset + ", mWavePhase=" + this.mWavePhase + ", mRotation=" + this.mRotation + '}');
    }

    public void printAttributes() {
        HashSet<String> hashSet = new HashSet<>();
        getAttributeNames(hashSet);
        Utils.log(" ------------- " + this.mFramePosition + " -------------");
        Utils.log("MotionKeyCycle{Shape=" + this.mWaveShape + ", Period=" + this.mWavePeriod + ", Offset=" + this.mWaveOffset + ", Phase=" + this.mWavePhase + '}');
        String[] strArr = (String[]) hashSet.toArray(new String[0]);
        for (int i = 0; i < strArr.length; i++) {
            TypedValues.AttributesType.getId(strArr[i]);
            Utils.log(strArr[i] + ":" + getValue(strArr[i]));
        }
    }
}
