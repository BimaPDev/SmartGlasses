package androidx.constraintlayout.motion.widget;

import android.content.Context;
import android.content.res.TypedArray;
import android.util.AttributeSet;
import android.util.Log;
import android.util.SparseIntArray;
import androidx.constraintlayout.motion.utils.ViewSpline;
import androidx.constraintlayout.widget.C0180R;
import androidx.constraintlayout.widget.ConstraintAttribute;
import com.google.common.base.Ascii;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;

/* JADX INFO: loaded from: classes.dex */
public class KeyAttributes extends Key {
    private static final boolean DEBUG = false;
    public static final int KEY_TYPE = 1;
    static final String NAME = "KeyAttribute";
    private static final String TAG = "KeyAttributes";
    private String mTransitionEasing;
    private int mCurveFit = -1;
    private boolean mVisibility = false;
    private float mAlpha = Float.NaN;
    private float mElevation = Float.NaN;
    private float mRotation = Float.NaN;
    private float mRotationX = Float.NaN;
    private float mRotationY = Float.NaN;
    private float mPivotX = Float.NaN;
    private float mPivotY = Float.NaN;
    private float mTransitionPathRotate = Float.NaN;
    private float mScaleX = Float.NaN;
    private float mScaleY = Float.NaN;
    private float mTranslationX = Float.NaN;
    private float mTranslationY = Float.NaN;
    private float mTranslationZ = Float.NaN;
    private float mProgress = Float.NaN;

    int getCurveFit() {
        return this.mCurveFit;
    }

    public KeyAttributes() {
        this.mType = 1;
        this.mCustomConstraints = new HashMap<>();
    }

    @Override // androidx.constraintlayout.motion.widget.Key
    public void load(Context context, AttributeSet attrs) {
        Loader.read(this, context.obtainStyledAttributes(attrs, C0180R.styleable.KeyAttribute));
    }

    @Override // androidx.constraintlayout.motion.widget.Key
    public void getAttributeNames(HashSet<String> attributes) {
        if (!Float.isNaN(this.mAlpha)) {
            attributes.add("alpha");
        }
        if (!Float.isNaN(this.mElevation)) {
            attributes.add("elevation");
        }
        if (!Float.isNaN(this.mRotation)) {
            attributes.add(Key.ROTATION);
        }
        if (!Float.isNaN(this.mRotationX)) {
            attributes.add("rotationX");
        }
        if (!Float.isNaN(this.mRotationY)) {
            attributes.add("rotationY");
        }
        if (!Float.isNaN(this.mPivotX)) {
            attributes.add(Key.PIVOT_X);
        }
        if (!Float.isNaN(this.mPivotY)) {
            attributes.add(Key.PIVOT_Y);
        }
        if (!Float.isNaN(this.mTranslationX)) {
            attributes.add("translationX");
        }
        if (!Float.isNaN(this.mTranslationY)) {
            attributes.add("translationY");
        }
        if (!Float.isNaN(this.mTranslationZ)) {
            attributes.add("translationZ");
        }
        if (!Float.isNaN(this.mTransitionPathRotate)) {
            attributes.add("transitionPathRotate");
        }
        if (!Float.isNaN(this.mScaleX)) {
            attributes.add("scaleX");
        }
        if (!Float.isNaN(this.mScaleY)) {
            attributes.add("scaleY");
        }
        if (!Float.isNaN(this.mProgress)) {
            attributes.add("progress");
        }
        if (this.mCustomConstraints.size() > 0) {
            Iterator<String> it = this.mCustomConstraints.keySet().iterator();
            while (it.hasNext()) {
                attributes.add("CUSTOM," + it.next());
            }
        }
    }

    @Override // androidx.constraintlayout.motion.widget.Key
    public void setInterpolation(HashMap<String, Integer> interpolation) {
        if (this.mCurveFit == -1) {
            return;
        }
        if (!Float.isNaN(this.mAlpha)) {
            interpolation.put("alpha", Integer.valueOf(this.mCurveFit));
        }
        if (!Float.isNaN(this.mElevation)) {
            interpolation.put("elevation", Integer.valueOf(this.mCurveFit));
        }
        if (!Float.isNaN(this.mRotation)) {
            interpolation.put(Key.ROTATION, Integer.valueOf(this.mCurveFit));
        }
        if (!Float.isNaN(this.mRotationX)) {
            interpolation.put("rotationX", Integer.valueOf(this.mCurveFit));
        }
        if (!Float.isNaN(this.mRotationY)) {
            interpolation.put("rotationY", Integer.valueOf(this.mCurveFit));
        }
        if (!Float.isNaN(this.mPivotX)) {
            interpolation.put(Key.PIVOT_X, Integer.valueOf(this.mCurveFit));
        }
        if (!Float.isNaN(this.mPivotY)) {
            interpolation.put(Key.PIVOT_Y, Integer.valueOf(this.mCurveFit));
        }
        if (!Float.isNaN(this.mTranslationX)) {
            interpolation.put("translationX", Integer.valueOf(this.mCurveFit));
        }
        if (!Float.isNaN(this.mTranslationY)) {
            interpolation.put("translationY", Integer.valueOf(this.mCurveFit));
        }
        if (!Float.isNaN(this.mTranslationZ)) {
            interpolation.put("translationZ", Integer.valueOf(this.mCurveFit));
        }
        if (!Float.isNaN(this.mTransitionPathRotate)) {
            interpolation.put("transitionPathRotate", Integer.valueOf(this.mCurveFit));
        }
        if (!Float.isNaN(this.mScaleX)) {
            interpolation.put("scaleX", Integer.valueOf(this.mCurveFit));
        }
        if (!Float.isNaN(this.mScaleY)) {
            interpolation.put("scaleY", Integer.valueOf(this.mCurveFit));
        }
        if (!Float.isNaN(this.mProgress)) {
            interpolation.put("progress", Integer.valueOf(this.mCurveFit));
        }
        if (this.mCustomConstraints.size() > 0) {
            Iterator<String> it = this.mCustomConstraints.keySet().iterator();
            while (it.hasNext()) {
                interpolation.put("CUSTOM," + it.next(), Integer.valueOf(this.mCurveFit));
            }
        }
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override // androidx.constraintlayout.motion.widget.Key
    public void addValues(HashMap<String, ViewSpline> splines) {
        for (String str : splines.keySet()) {
            ViewSpline viewSpline = splines.get(str);
            if (viewSpline != null) {
                byte b = 7;
                if (str.startsWith("CUSTOM")) {
                    ConstraintAttribute constraintAttribute = this.mCustomConstraints.get(str.substring(7));
                    if (constraintAttribute != null) {
                        ((ViewSpline.CustomSet) viewSpline).setPoint(this.mFramePosition, constraintAttribute);
                    }
                } else {
                    str.hashCode();
                    switch (str.hashCode()) {
                        case -1249320806:
                            b = str.equals("rotationX") ? (byte) 0 : (byte) -1;
                            break;
                        case -1249320805:
                            b = str.equals("rotationY") ? (byte) 1 : (byte) -1;
                            break;
                        case -1225497657:
                            b = str.equals("translationX") ? (byte) 2 : (byte) -1;
                            break;
                        case -1225497656:
                            b = str.equals("translationY") ? (byte) 3 : (byte) -1;
                            break;
                        case -1225497655:
                            b = str.equals("translationZ") ? (byte) 4 : (byte) -1;
                            break;
                        case -1001078227:
                            b = str.equals("progress") ? (byte) 5 : (byte) -1;
                            break;
                        case -908189618:
                            b = str.equals("scaleX") ? (byte) 6 : (byte) -1;
                            break;
                        case -908189617:
                            if (!str.equals("scaleY")) {
                                b = -1;
                            }
                            break;
                        case -760884510:
                            b = str.equals(Key.PIVOT_X) ? (byte) 8 : (byte) -1;
                            break;
                        case -760884509:
                            b = str.equals(Key.PIVOT_Y) ? (byte) 9 : (byte) -1;
                            break;
                        case -40300674:
                            b = str.equals(Key.ROTATION) ? (byte) 10 : (byte) -1;
                            break;
                        case -4379043:
                            b = str.equals("elevation") ? Ascii.f294VT : (byte) -1;
                            break;
                        case 37232917:
                            b = str.equals("transitionPathRotate") ? Ascii.f283FF : (byte) -1;
                            break;
                        case 92909918:
                            b = str.equals("alpha") ? Ascii.f281CR : (byte) -1;
                            break;
                        default:
                            b = -1;
                            break;
                    }
                    switch (b) {
                        case 0:
                            if (!Float.isNaN(this.mRotationX)) {
                                viewSpline.setPoint(this.mFramePosition, this.mRotationX);
                            }
                            break;
                        case 1:
                            if (!Float.isNaN(this.mRotationY)) {
                                viewSpline.setPoint(this.mFramePosition, this.mRotationY);
                            }
                            break;
                        case 2:
                            if (!Float.isNaN(this.mTranslationX)) {
                                viewSpline.setPoint(this.mFramePosition, this.mTranslationX);
                            }
                            break;
                        case 3:
                            if (!Float.isNaN(this.mTranslationY)) {
                                viewSpline.setPoint(this.mFramePosition, this.mTranslationY);
                            }
                            break;
                        case 4:
                            if (!Float.isNaN(this.mTranslationZ)) {
                                viewSpline.setPoint(this.mFramePosition, this.mTranslationZ);
                            }
                            break;
                        case 5:
                            if (!Float.isNaN(this.mProgress)) {
                                viewSpline.setPoint(this.mFramePosition, this.mProgress);
                            }
                            break;
                        case 6:
                            if (!Float.isNaN(this.mScaleX)) {
                                viewSpline.setPoint(this.mFramePosition, this.mScaleX);
                            }
                            break;
                        case 7:
                            if (!Float.isNaN(this.mScaleY)) {
                                viewSpline.setPoint(this.mFramePosition, this.mScaleY);
                            }
                            break;
                        case 8:
                            if (!Float.isNaN(this.mRotationX)) {
                                viewSpline.setPoint(this.mFramePosition, this.mPivotX);
                            }
                            break;
                        case 9:
                            if (!Float.isNaN(this.mRotationY)) {
                                viewSpline.setPoint(this.mFramePosition, this.mPivotY);
                            }
                            break;
                        case 10:
                            if (!Float.isNaN(this.mRotation)) {
                                viewSpline.setPoint(this.mFramePosition, this.mRotation);
                            }
                            break;
                        case 11:
                            if (!Float.isNaN(this.mElevation)) {
                                viewSpline.setPoint(this.mFramePosition, this.mElevation);
                            }
                            break;
                        case 12:
                            if (!Float.isNaN(this.mTransitionPathRotate)) {
                                viewSpline.setPoint(this.mFramePosition, this.mTransitionPathRotate);
                            }
                            break;
                        case 13:
                            if (!Float.isNaN(this.mAlpha)) {
                                viewSpline.setPoint(this.mFramePosition, this.mAlpha);
                            }
                            break;
                    }
                }
            }
        }
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override // androidx.constraintlayout.motion.widget.Key
    public void setValue(String tag, Object value) {
        tag.hashCode();
        byte b = -1;
        switch (tag.hashCode()) {
            case -1913008125:
                if (tag.equals(Key.MOTIONPROGRESS)) {
                    b = 0;
                }
                break;
            case -1812823328:
                if (tag.equals("transitionEasing")) {
                    b = 1;
                }
                break;
            case -1249320806:
                if (tag.equals("rotationX")) {
                    b = 2;
                }
                break;
            case -1249320805:
                if (tag.equals("rotationY")) {
                    b = 3;
                }
                break;
            case -1225497657:
                if (tag.equals("translationX")) {
                    b = 4;
                }
                break;
            case -1225497656:
                if (tag.equals("translationY")) {
                    b = 5;
                }
                break;
            case -1225497655:
                if (tag.equals("translationZ")) {
                    b = 6;
                }
                break;
            case -908189618:
                if (tag.equals("scaleX")) {
                    b = 7;
                }
                break;
            case -908189617:
                if (tag.equals("scaleY")) {
                    b = 8;
                }
                break;
            case -760884510:
                if (tag.equals(Key.PIVOT_X)) {
                    b = 9;
                }
                break;
            case -760884509:
                if (tag.equals(Key.PIVOT_Y)) {
                    b = 10;
                }
                break;
            case -40300674:
                if (tag.equals(Key.ROTATION)) {
                    b = Ascii.f294VT;
                }
                break;
            case -4379043:
                if (tag.equals("elevation")) {
                    b = Ascii.f283FF;
                }
                break;
            case 37232917:
                if (tag.equals("transitionPathRotate")) {
                    b = Ascii.f281CR;
                }
                break;
            case 92909918:
                if (tag.equals("alpha")) {
                    b = Ascii.f291SO;
                }
                break;
            case 579057826:
                if (tag.equals("curveFit")) {
                    b = Ascii.f290SI;
                }
                break;
            case 1941332754:
                if (tag.equals("visibility")) {
                    b = Ascii.DLE;
                }
                break;
        }
        switch (b) {
            case 0:
                this.mProgress = toFloat(value);
                break;
            case 1:
                this.mTransitionEasing = value.toString();
                break;
            case 2:
                this.mRotationX = toFloat(value);
                break;
            case 3:
                this.mRotationY = toFloat(value);
                break;
            case 4:
                this.mTranslationX = toFloat(value);
                break;
            case 5:
                this.mTranslationY = toFloat(value);
                break;
            case 6:
                this.mTranslationZ = toFloat(value);
                break;
            case 7:
                this.mScaleX = toFloat(value);
                break;
            case 8:
                this.mScaleY = toFloat(value);
                break;
            case 9:
                this.mPivotX = toFloat(value);
                break;
            case 10:
                this.mPivotY = toFloat(value);
                break;
            case 11:
                this.mRotation = toFloat(value);
                break;
            case 12:
                this.mElevation = toFloat(value);
                break;
            case 13:
                this.mTransitionPathRotate = toFloat(value);
                break;
            case 14:
                this.mAlpha = toFloat(value);
                break;
            case 15:
                this.mCurveFit = toInt(value);
                break;
            case 16:
                this.mVisibility = toBoolean(value);
                break;
        }
    }

    private static class Loader {
        private static final int ANDROID_ALPHA = 1;
        private static final int ANDROID_ELEVATION = 2;
        private static final int ANDROID_PIVOT_X = 19;
        private static final int ANDROID_PIVOT_Y = 20;
        private static final int ANDROID_ROTATION = 4;
        private static final int ANDROID_ROTATION_X = 5;
        private static final int ANDROID_ROTATION_Y = 6;
        private static final int ANDROID_SCALE_X = 7;
        private static final int ANDROID_SCALE_Y = 14;
        private static final int ANDROID_TRANSLATION_X = 15;
        private static final int ANDROID_TRANSLATION_Y = 16;
        private static final int ANDROID_TRANSLATION_Z = 17;
        private static final int CURVE_FIT = 13;
        private static final int FRAME_POSITION = 12;
        private static final int PROGRESS = 18;
        private static final int TARGET_ID = 10;
        private static final int TRANSITION_EASING = 9;
        private static final int TRANSITION_PATH_ROTATE = 8;
        private static SparseIntArray mAttrMap;

        private Loader() {
        }

        static {
            SparseIntArray sparseIntArray = new SparseIntArray();
            mAttrMap = sparseIntArray;
            sparseIntArray.append(C0180R.styleable.KeyAttribute_android_alpha, 1);
            mAttrMap.append(C0180R.styleable.KeyAttribute_android_elevation, 2);
            mAttrMap.append(C0180R.styleable.KeyAttribute_android_rotation, 4);
            mAttrMap.append(C0180R.styleable.KeyAttribute_android_rotationX, 5);
            mAttrMap.append(C0180R.styleable.KeyAttribute_android_rotationY, 6);
            mAttrMap.append(C0180R.styleable.KeyAttribute_android_transformPivotX, 19);
            mAttrMap.append(C0180R.styleable.KeyAttribute_android_transformPivotY, 20);
            mAttrMap.append(C0180R.styleable.KeyAttribute_android_scaleX, 7);
            mAttrMap.append(C0180R.styleable.KeyAttribute_transitionPathRotate, 8);
            mAttrMap.append(C0180R.styleable.KeyAttribute_transitionEasing, 9);
            mAttrMap.append(C0180R.styleable.KeyAttribute_motionTarget, 10);
            mAttrMap.append(C0180R.styleable.KeyAttribute_framePosition, 12);
            mAttrMap.append(C0180R.styleable.KeyAttribute_curveFit, 13);
            mAttrMap.append(C0180R.styleable.KeyAttribute_android_scaleY, 14);
            mAttrMap.append(C0180R.styleable.KeyAttribute_android_translationX, 15);
            mAttrMap.append(C0180R.styleable.KeyAttribute_android_translationY, 16);
            mAttrMap.append(C0180R.styleable.KeyAttribute_android_translationZ, 17);
            mAttrMap.append(C0180R.styleable.KeyAttribute_motionProgress, 18);
        }

        public static void read(KeyAttributes c, TypedArray a) {
            int indexCount = a.getIndexCount();
            for (int i = 0; i < indexCount; i++) {
                int index = a.getIndex(i);
                switch (mAttrMap.get(index)) {
                    case 1:
                        c.mAlpha = a.getFloat(index, c.mAlpha);
                        break;
                    case 2:
                        c.mElevation = a.getDimension(index, c.mElevation);
                        break;
                    case 3:
                    case 11:
                    default:
                        Log.e(KeyAttributes.NAME, "unused attribute 0x" + Integer.toHexString(index) + "   " + mAttrMap.get(index));
                        break;
                    case 4:
                        c.mRotation = a.getFloat(index, c.mRotation);
                        break;
                    case 5:
                        c.mRotationX = a.getFloat(index, c.mRotationX);
                        break;
                    case 6:
                        c.mRotationY = a.getFloat(index, c.mRotationY);
                        break;
                    case 7:
                        c.mScaleX = a.getFloat(index, c.mScaleX);
                        break;
                    case 8:
                        c.mTransitionPathRotate = a.getFloat(index, c.mTransitionPathRotate);
                        break;
                    case 9:
                        c.mTransitionEasing = a.getString(index);
                        break;
                    case 10:
                        if (MotionLayout.IS_IN_EDIT_MODE) {
                            c.mTargetId = a.getResourceId(index, c.mTargetId);
                            if (c.mTargetId == -1) {
                                c.mTargetString = a.getString(index);
                            }
                        } else if (a.peekValue(index).type == 3) {
                            c.mTargetString = a.getString(index);
                        } else {
                            c.mTargetId = a.getResourceId(index, c.mTargetId);
                        }
                        break;
                    case 12:
                        c.mFramePosition = a.getInt(index, c.mFramePosition);
                        break;
                    case 13:
                        c.mCurveFit = a.getInteger(index, c.mCurveFit);
                        break;
                    case 14:
                        c.mScaleY = a.getFloat(index, c.mScaleY);
                        break;
                    case 15:
                        c.mTranslationX = a.getDimension(index, c.mTranslationX);
                        break;
                    case 16:
                        c.mTranslationY = a.getDimension(index, c.mTranslationY);
                        break;
                    case 17:
                        c.mTranslationZ = a.getDimension(index, c.mTranslationZ);
                        break;
                    case 18:
                        c.mProgress = a.getFloat(index, c.mProgress);
                        break;
                    case 19:
                        c.mPivotX = a.getDimension(index, c.mPivotX);
                        break;
                    case 20:
                        c.mPivotY = a.getDimension(index, c.mPivotY);
                        break;
                }
            }
        }
    }

    @Override // androidx.constraintlayout.motion.widget.Key
    public Key copy(Key src) {
        super.copy(src);
        KeyAttributes keyAttributes = (KeyAttributes) src;
        this.mCurveFit = keyAttributes.mCurveFit;
        this.mVisibility = keyAttributes.mVisibility;
        this.mAlpha = keyAttributes.mAlpha;
        this.mElevation = keyAttributes.mElevation;
        this.mRotation = keyAttributes.mRotation;
        this.mRotationX = keyAttributes.mRotationX;
        this.mRotationY = keyAttributes.mRotationY;
        this.mPivotX = keyAttributes.mPivotX;
        this.mPivotY = keyAttributes.mPivotY;
        this.mTransitionPathRotate = keyAttributes.mTransitionPathRotate;
        this.mScaleX = keyAttributes.mScaleX;
        this.mScaleY = keyAttributes.mScaleY;
        this.mTranslationX = keyAttributes.mTranslationX;
        this.mTranslationY = keyAttributes.mTranslationY;
        this.mTranslationZ = keyAttributes.mTranslationZ;
        this.mProgress = keyAttributes.mProgress;
        return this;
    }

    @Override // androidx.constraintlayout.motion.widget.Key
    /* JADX INFO: renamed from: clone */
    public Key mo545clone() {
        return new KeyAttributes().copy(this);
    }
}
