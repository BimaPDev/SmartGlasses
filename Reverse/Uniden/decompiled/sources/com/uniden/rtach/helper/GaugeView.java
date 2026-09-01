package com.uniden.rtach.helper;

import android.content.Context;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.BitmapShader;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.ComposeShader;
import android.graphics.LinearGradient;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.PorterDuff;
import android.graphics.RadialGradient;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.Shader;
import android.graphics.SweepGradient;
import android.graphics.Typeface;
import android.os.Bundle;
import android.os.Parcelable;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.Log;
import android.view.View;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.core.content.res.ResourcesCompat;
import androidx.core.internal.view.SupportMenu;
import com.google.android.material.card.MaterialCardViewHelper;
import com.google.android.material.timepicker.TimeModel;
import com.uniden.rtach.C2074R;
import java.util.Arrays;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.StringCompanionObject;

/* JADX INFO: compiled from: GaugeView.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000\u0092\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\b\n\u0002\u0010\u0007\n\u0002\b\r\n\u0002\u0010\u0014\n\u0000\n\u0002\u0010\u0015\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\n\n\u0002\u0010\u0011\n\u0002\b\n\n\u0002\u0010\u000e\n\u0002\b\t\n\u0002\u0018\u0002\n\u0002\b\n\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b*\n\u0002\u0018\u0002\n\u0002\b\u0010\n\u0002\u0018\u0002\n\u0002\b\u001d\u0018\u0000 »\u00012\u00020\u0001:\u0002»\u0001B'\b\u0007\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\tJ\"\u0010_\u001a\u00020`2\u0006\u0010\u0002\u001a\u00020\u00032\b\u0010\u0004\u001a\u0004\u0018\u00010\u00052\u0006\u0010\u0006\u001a\u00020\u0007H\u0002J \u0010a\u001a\u00020`2\u0006\u0010b\u001a\u00020c2\u0006\u0010d\u001a\u00020\u00072\u0006\u0010e\u001a\u00020\u0007H\u0002J\b\u0010f\u001a\u00020`H\u0003J\u0006\u0010g\u001a\u00020`J\b\u0010h\u001a\u00020`H\u0002J\u0006\u0010~\u001a\u00020`J\u0007\u0010\u0083\u0001\u001a\u00020`J\u0013\u0010\u008c\u0001\u001a\u00020`2\b\u0010\u008d\u0001\u001a\u00030\u008e\u0001H\u0014J\t\u0010\u008f\u0001\u001a\u00020`H\u0002J\f\u0010\u0090\u0001\u001a\u0005\u0018\u00010\u008e\u0001H\u0014J\u001b\u0010\u0091\u0001\u001a\u00020`2\u0007\u0010\u0092\u0001\u001a\u00020\u00072\u0007\u0010\u0093\u0001\u001a\u00020\u0007H\u0014J\u001b\u0010\u0094\u0001\u001a\u00020\u00072\u0007\u0010\u0095\u0001\u001a\u00020\u00072\u0007\u0010\u0096\u0001\u001a\u00020\u0007H\u0002J-\u0010\u0097\u0001\u001a\u00020`2\u0007\u0010\u0098\u0001\u001a\u00020\u00072\u0007\u0010\u0099\u0001\u001a\u00020\u00072\u0007\u0010\u009a\u0001\u001a\u00020\u00072\u0007\u0010\u009b\u0001\u001a\u00020\u0007H\u0014J\t\u0010\u009c\u0001\u001a\u00020`H\u0002J\u0013\u0010\u009d\u0001\u001a\u00020`2\b\u0010\u009e\u0001\u001a\u00030\u009f\u0001H\u0014J\u0013\u0010 \u0001\u001a\u00020`2\b\u0010\u009e\u0001\u001a\u00030\u009f\u0001H\u0002J\u0013\u0010¡\u0001\u001a\u00020`2\b\u0010\u009e\u0001\u001a\u00030\u009f\u0001H\u0002J\u0013\u0010¢\u0001\u001a\u00020`2\b\u0010\u009e\u0001\u001a\u00030\u009f\u0001H\u0002J\u0013\u0010£\u0001\u001a\u00020`2\b\u0010\u009e\u0001\u001a\u00030\u009f\u0001H\u0002J\u0013\u0010¤\u0001\u001a\u00020`2\b\u0010\u009e\u0001\u001a\u00030\u009f\u0001H\u0002J\u0013\u0010¥\u0001\u001a\u00020`2\b\u0010\u009e\u0001\u001a\u00030\u009f\u0001H\u0002J\u0013\u0010¦\u0001\u001a\u00020`2\b\u0010\u009e\u0001\u001a\u00030\u009f\u0001H\u0002J\u0013\u0010§\u0001\u001a\u00020`2\b\u0010\u009e\u0001\u001a\u00030\u009f\u0001H\u0002J\u0013\u0010¨\u0001\u001a\u00020`2\b\u0010\u009e\u0001\u001a\u00030\u009f\u0001H\u0002J\u0013\u0010©\u0001\u001a\u00020`2\b\u0010\u009e\u0001\u001a\u00030\u009f\u0001H\u0002J\u0013\u0010ª\u0001\u001a\u00020`2\b\u0010\u009e\u0001\u001a\u00030\u009f\u0001H\u0002J;\u0010¦\u0001\u001a\u00020`2\b\u0010\u009e\u0001\u001a\u00030\u009f\u00012\t\u0010«\u0001\u001a\u0004\u0018\u00010H2\u0007\u0010¬\u0001\u001a\u00020\u00142\u0007\u0010\u00ad\u0001\u001a\u00020\u00142\t\u0010®\u0001\u001a\u0004\u0018\u000102H\u0002J;\u0010¯\u0001\u001a\u00020`2\b\u0010\u009e\u0001\u001a\u00030\u009f\u00012\t\u0010«\u0001\u001a\u0004\u0018\u00010H2\u0007\u0010¬\u0001\u001a\u00020\u00142\u0007\u0010\u00ad\u0001\u001a\u00020\u00142\t\u0010®\u0001\u001a\u0004\u0018\u000102H\u0002J\u0012\u0010°\u0001\u001a\u00020H2\u0007\u0010«\u0001\u001a\u00020\u0014H\u0002J\u0012\u0010±\u0001\u001a\u00020\u00142\u0007\u0010²\u0001\u001a\u00020\u0007H\u0002J\u0014\u0010³\u0001\u001a\u0004\u0018\u0001022\u0007\u0010«\u0001\u001a\u00020\u0014H\u0002J\u0013\u0010´\u0001\u001a\u00020`2\b\u0010\u009e\u0001\u001a\u00030\u009f\u0001H\u0002J\u0012\u0010µ\u0001\u001a\u00020`2\u0007\u0010¶\u0001\u001a\u00020\u0014H\u0002J\u0012\u0010·\u0001\u001a\u00020\u00142\u0007\u0010«\u0001\u001a\u00020\u0014H\u0002J\t\u0010¸\u0001\u001a\u00020`H\u0002J\u0010\u0010¹\u0001\u001a\u00020`2\u0007\u0010«\u0001\u001a\u00020\u0014J\u0010\u0010º\u0001\u001a\u00020`2\u0007\u0010«\u0001\u001a\u00020HR\u000e\u0010\n\u001a\u00020\u000bX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\u000bX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\r\u001a\u00020\u000bX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u000bX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u000f\u001a\u00020\u000bX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0010\u001a\u00020\u000bX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0011\u001a\u00020\u000bX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0012\u001a\u00020\u000bX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0013\u001a\u00020\u0014X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0015\u001a\u00020\u0014X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0016\u001a\u00020\u0014X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0017\u001a\u00020\u0014X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0018\u001a\u00020\u0014X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0019\u001a\u00020\u0014X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u001a\u001a\u00020\u0014X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u001b\u001a\u00020\u0007X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u001c\u001a\u00020\u0007X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u001d\u001a\u00020\u0014X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u001e\u001a\u00020\u0014X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u001f\u001a\u00020\u0014X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010 \u001a\u00020\u0014X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010!\u001a\u00020\"X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010#\u001a\u00020$X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010%\u001a\u00020\u0007X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010&\u001a\u00020\u0007X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010'\u001a\u0004\u0018\u00010(X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010)\u001a\u0004\u0018\u00010(X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010*\u001a\u0004\u0018\u00010(X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010+\u001a\u0004\u0018\u00010(X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010,\u001a\u0004\u0018\u00010(X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010-\u001a\u0004\u0018\u00010(X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010.\u001a\u0004\u0018\u00010(X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010/\u001a\u0004\u0018\u000100X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u00101\u001a\u0004\u0018\u000102X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u00103\u001a\u0004\u0018\u000102X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u00104\u001a\u0004\u0018\u000102X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u00105\u001a\u0004\u0018\u000102X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u00106\u001a\u0004\u0018\u000102X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u00107\u001a\u0004\u0018\u000102X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u00108\u001a\u0004\u0018\u000102X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u00109\u001a\u0004\u0018\u000102X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010:\u001a\u0004\u0018\u000102X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010;\u001a\u0004\u0018\u000102X\u0082\u000e¢\u0006\u0002\n\u0000R\u0018\u0010<\u001a\n\u0012\u0006\u0012\u0004\u0018\u0001020=X\u0082.¢\u0006\u0004\n\u0002\u0010>R\u0010\u0010?\u001a\u0004\u0018\u000102X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010@\u001a\u0004\u0018\u000102X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010A\u001a\u0004\u0018\u000102X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010B\u001a\u0004\u0018\u000102X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010C\u001a\u0004\u0018\u000102X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010D\u001a\u0004\u0018\u000102X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010E\u001a\u0004\u0018\u000102X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010F\u001a\u0004\u0018\u000102X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010G\u001a\u0004\u0018\u00010HX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010I\u001a\u0004\u0018\u00010HX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010J\u001a\u0004\u0018\u00010HX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010K\u001a\u00020\u0007X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010L\u001a\u00020\u0007X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010M\u001a\u00020\u0007X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010N\u001a\u00020\u0014X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010O\u001a\u00020\u0014X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010P\u001a\u00020\u0014X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010Q\u001a\u0004\u0018\u00010RX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010S\u001a\u0004\u0018\u00010RX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010T\u001a\u00020\u0014X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010U\u001a\u00020\u0014X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010V\u001a\u00020\u0014X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010W\u001a\u00020\u0014X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010X\u001a\u00020\u0014X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010Y\u001a\u00020\u0014X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010Z\u001a\u00020\u0014X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010[\u001a\u00020\u0014X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\\\u001a\u00020]X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010^\u001a\u00020\u000bX\u0082\u000e¢\u0006\u0002\n\u0000R\u0011\u0010i\u001a\u0002028F¢\u0006\u0006\u001a\u0004\bj\u0010kR\u0014\u0010l\u001a\u0002028BX\u0082\u0004¢\u0006\u0006\u001a\u0004\bm\u0010kR\u0014\u0010n\u001a\u0002028BX\u0082\u0004¢\u0006\u0006\u001a\u0004\bo\u0010kR\u0011\u0010p\u001a\u0002028F¢\u0006\u0006\u001a\u0004\bq\u0010kR\u0014\u0010r\u001a\u0002028BX\u0082\u0004¢\u0006\u0006\u001a\u0004\bs\u0010kR\u0014\u0010t\u001a\u0002028BX\u0082\u0004¢\u0006\u0006\u001a\u0004\bu\u0010kR\u0014\u0010v\u001a\u0002028BX\u0082\u0004¢\u0006\u0006\u001a\u0004\bw\u0010kR\u0011\u0010x\u001a\u0002028F¢\u0006\u0006\u001a\u0004\by\u0010kR\u0011\u0010z\u001a\u0002028F¢\u0006\u0006\u001a\u0004\b{\u0010kR\u0011\u0010|\u001a\u0002028F¢\u0006\u0006\u001a\u0004\b}\u0010kR\u0012\u0010\u007f\u001a\u0002028F¢\u0006\u0007\u001a\u0005\b\u0080\u0001\u0010kR\u0013\u0010\u0081\u0001\u001a\u0002028F¢\u0006\u0007\u001a\u0005\b\u0082\u0001\u0010kR\u0013\u0010\u0084\u0001\u001a\u0002028F¢\u0006\u0007\u001a\u0005\b\u0085\u0001\u0010kR\u0013\u0010\u0086\u0001\u001a\u0002028F¢\u0006\u0007\u001a\u0005\b\u0087\u0001\u0010kR\u0013\u0010\u0088\u0001\u001a\u0002028F¢\u0006\u0007\u001a\u0005\b\u0089\u0001\u0010kR\u0013\u0010\u008a\u0001\u001a\u0002028F¢\u0006\u0007\u001a\u0005\b\u008b\u0001\u0010k¨\u0006¼\u0001"}, m491d2 = {"Lcom/uniden/rtach/helper/GaugeView;", "Landroid/view/View;", "context", "Landroid/content/Context;", "attrs", "Landroid/util/AttributeSet;", "defStyle", "", "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V", "mShowOuterShadow", "", "mShowOuterBorder", "mShowOuterRim", "mShowInnerRim", "mShowScale", "mShowRanges", "mShowNeedle", "mShowText", "mOuterShadowWidth", "", "mOuterBorderWidth", "mOuterRimWidth", "mInnerRimWidth", "mInnerRimBorderWidth", "mNeedleWidth", "mNeedleHeight", "mInnerCircleColor", "mOuterCircleColor", "mScalePosition", "mScaleStartValue", "mScaleEndValue", "mScaleStartAngle", "mRangeValues", "", "mRangeColors", "", "mDivisions", "mSubdivisions", "mOuterShadowRect", "Landroid/graphics/RectF;", "mOuterBorderRect", "mOuterRimRect", "mInnerRimRect", "mInnerRimBorderRect", "mFaceRect", "mScaleRect", "mBackground", "Landroid/graphics/Bitmap;", "mBackgroundPaint", "Landroid/graphics/Paint;", "mOuterShadowPaint", "mOuterBorderPaint", "mOuterRimPaint", "mInnerRimPaint", "mInnerRimBorderLightPaint", "mInnerRimBorderDarkPaint", "mFacePaint", "mFaceBorderPaint", "mFaceShadowPaint", "mRangePaints", "", "[Landroid/graphics/Paint;", "mNeedleRightPaint", "mNeedleLeftPaint", "mNeedleScrewBorderPaint", "mTextValuePaint", "mTextValueSpeedUnitFontPaint", "mTextUnitPaint", "mTextSpeedUnitFontPaint", "mTextSpeedUnitPaint", "mTextValue", "", "mSpeedUnitTextTextValue", "mTextUnit", "mTextValueColor", "mTextUnitColor", "mTextShadowColor", "mTextValueSize", "mTextUnitSize", "mSpeedUnitSize", "mNeedleRightPath", "Landroid/graphics/Path;", "mNeedleLeftPath", "mScaleRotation", "mDivisionValue", "mSubdivisionValue", "mSubdivisionAngle", "mTargetValue", "mCurrentValue", "mNeedleVelocity", "mNeedleAcceleration", "mNeedleLastMoved", "", "mNeedleInitialized", "readAttrs", "", "readRanges", "res", "Landroid/content/res/Resources;", "rangesId", "colorsId", "init", "initDrawingRects", "initDrawingTools", "defaultOuterShadowPaint", "getDefaultOuterShadowPaint", "()Landroid/graphics/Paint;", "defaultOuterBorderPaint", "getDefaultOuterBorderPaint", "defaultOuterBorderPaintGradiant", "getDefaultOuterBorderPaintGradiant", "defaultOuterRimPaint", "getDefaultOuterRimPaint", "defaultInnerRimPaint", "getDefaultInnerRimPaint", "defaultInnerRimBorderLightPaint", "getDefaultInnerRimBorderLightPaint", "defaultInnerRimBorderDarkPaint", "getDefaultInnerRimBorderDarkPaint", "defaultFacePaint", "getDefaultFacePaint", "defaultFaceBorderPaint", "getDefaultFaceBorderPaint", "defaultFaceShadowPaint", "getDefaultFaceShadowPaint", "setDefaultNeedlePaths", "defaultNeedleLeftPaint", "getDefaultNeedleLeftPaint", "defaultNeedleRightPaint", "getDefaultNeedleRightPaint", "setDefaultScaleRangePaints", "defaultTextValuePaint", "getDefaultTextValuePaint", "defaultSpeedUnitFontPaint", "getDefaultSpeedUnitFontPaint", "defaultTextUnitPaint", "getDefaultTextUnitPaint", "defaultTextSpeedUnitPaint", "getDefaultTextSpeedUnitPaint", "onRestoreInstanceState", "state", "Landroid/os/Parcelable;", "initScale", "onSaveInstanceState", "onMeasure", "widthMeasureSpec", "heightMeasureSpec", "chooseDimension", "mode", "size", "onSizeChanged", "w", "h", "oldw", "oldh", "drawGauge", "onDraw", "canvas", "Landroid/graphics/Canvas;", "drawBackground", "drawRim", "drawRimOuterBorder", "drawRimInnerBorder", "drawFace", "drawSpeedUnitText", "drawText", "drawSpeedUnit", "needleIcon", "drawScale", "drawScaleSpeedUnit", "value", "x", "y", "paint", "drawText2", "valueString", "getValueForTick", "tick", "getRangePaint", "drawNeedle", "setNeedleShadowPosition", "angle", "getAngleForValue", "computeCurrentValue", "setTargetValue", "setTargetSpeedUnitValue", "Companion", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class GaugeView extends View {
    public static final float BOTTOM = 1.0f;
    public static final float CENTER = 0.5f;
    public static final float INNER_RIM_BORDER_WIDTH = 0.005f;
    public static final float INNER_RIM_WIDTH = 0.06f;
    public static final float LEFT = 0.0f;
    public static final float NEEDLE_HEIGHT = 0.32f;
    public static final float NEEDLE_WIDTH = 0.025f;
    public static final float OUTER_BORDER_WIDTH = 0.04f;
    public static final float OUTER_RIM_WIDTH = 0.05f;
    public static final float OUTER_SHADOW_WIDTH = 0.03f;
    public static final float RIGHT = 1.0f;
    public static final int SCALE_DIVISIONS = 11;
    public static final float SCALE_END_VALUE = 220.0f;
    public static final float SCALE_POSITION = 0.015f;
    public static final float SCALE_START_ANGLE = 60.0f;
    public static final float SCALE_START_VALUE = 0.0f;
    public static final int SCALE_SUBDIVISIONS = 2;
    public static final boolean SHOW_INNER_RIM = true;
    public static final boolean SHOW_NEEDLE = true;
    public static final boolean SHOW_OUTER_BORDER = true;
    public static final boolean SHOW_OUTER_RIM = true;
    public static final boolean SHOW_OUTER_SHADOW = true;
    public static final boolean SHOW_RANGES = true;
    public static final boolean SHOW_SCALE = false;
    public static final boolean SHOW_TEXT = false;
    public static final float TEXT_SPEED_UNIT_SIZE = 0.07f;
    public static final int TEXT_UNIT_COLOR = -1;
    public static final float TEXT_UNIT_SIZE = 0.1f;
    public static final int TEXT_VALUE_COLOR = -1;
    public static final float TEXT_VALUE_SIZE = 0.3f;
    public static final float TOP = 0.0f;
    private Bitmap mBackground;
    private Paint mBackgroundPaint;
    private float mCurrentValue;
    private float mDivisionValue;
    private int mDivisions;
    private Paint mFaceBorderPaint;
    private Paint mFacePaint;
    private RectF mFaceRect;
    private Paint mFaceShadowPaint;
    private int mInnerCircleColor;
    private Paint mInnerRimBorderDarkPaint;
    private Paint mInnerRimBorderLightPaint;
    private RectF mInnerRimBorderRect;
    private float mInnerRimBorderWidth;
    private Paint mInnerRimPaint;
    private RectF mInnerRimRect;
    private float mInnerRimWidth;
    private float mNeedleAcceleration;
    private float mNeedleHeight;
    private boolean mNeedleInitialized;
    private long mNeedleLastMoved;
    private Paint mNeedleLeftPaint;
    private Path mNeedleLeftPath;
    private Paint mNeedleRightPaint;
    private Path mNeedleRightPath;
    private Paint mNeedleScrewBorderPaint;
    private float mNeedleVelocity;
    private float mNeedleWidth;
    private Paint mOuterBorderPaint;
    private RectF mOuterBorderRect;
    private float mOuterBorderWidth;
    private int mOuterCircleColor;
    private Paint mOuterRimPaint;
    private RectF mOuterRimRect;
    private float mOuterRimWidth;
    private Paint mOuterShadowPaint;
    private RectF mOuterShadowRect;
    private float mOuterShadowWidth;
    private int[] mRangeColors;
    private Paint[] mRangePaints;
    private float[] mRangeValues;
    private float mScaleEndValue;
    private float mScalePosition;
    private RectF mScaleRect;
    private float mScaleRotation;
    private float mScaleStartAngle;
    private float mScaleStartValue;
    private boolean mShowInnerRim;
    private boolean mShowNeedle;
    private boolean mShowOuterBorder;
    private boolean mShowOuterRim;
    private boolean mShowOuterShadow;
    private boolean mShowRanges;
    private boolean mShowScale;
    private boolean mShowText;
    private float mSpeedUnitSize;
    private String mSpeedUnitTextTextValue;
    private float mSubdivisionAngle;
    private float mSubdivisionValue;
    private int mSubdivisions;
    private float mTargetValue;
    private int mTextShadowColor;
    private Paint mTextSpeedUnitFontPaint;
    private Paint mTextSpeedUnitPaint;
    private String mTextUnit;
    private int mTextUnitColor;
    private Paint mTextUnitPaint;
    private float mTextUnitSize;
    private String mTextValue;
    private int mTextValueColor;
    private Paint mTextValuePaint;
    private float mTextValueSize;
    private Paint mTextValueSpeedUnitFontPaint;

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private static final int defaultDimension = MaterialCardViewHelper.DEFAULT_FADE_ANIM_DURATION;
    private static final int INNER_CIRCLE_COLOR = Color.rgb(190, 215, 123);
    private static final int OUTER_CIRCLE_COLOR = Color.rgb(205, 231, 132);
    private static final int[] OUTER_SHADOW_COLORS = {Color.argb(0, 206, 197, 193), Color.argb(0, 239, 68, 55), Color.argb(0, 206, 197, 193)};
    private static final float[] OUTER_SHADOW_POS = {0.9f, 0.95f, 0.99f};
    private static final float[] RANGE_VALUES = {16.0f, 25.0f, 40.0f, 100.0f, 130.0f, 150.0f, 180.0f, 200.0f, 220.0f};
    private static final int[] RANGE_COLORS = {Color.rgb(0, 0, 0), Color.rgb(0, 0, 0), Color.rgb(0, 0, 0), Color.rgb(0, 0, 0), Color.rgb(0, 0, 0), Color.rgb(0, 0, 0), Color.rgb(0, 0, 0), Color.rgb(0, 0, 0), Color.rgb(0, 0, 0)};
    private static final int TEXT_SHADOW_COLOR = Color.argb(100, 0, 0, 0);

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public GaugeView(Context context) {
        this(context, null, 0, 6, null);
        Intrinsics.checkNotNullParameter(context, "context");
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public GaugeView(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0, 4, null);
        Intrinsics.checkNotNullParameter(context, "context");
    }

    private final int chooseDimension(int mode, int size) {
        if (mode != Integer.MIN_VALUE) {
            return (mode == 0 || mode != 1073741824) ? defaultDimension : size;
        }
        return size;
    }

    private final float getAngleForValue(float value) {
        return (this.mScaleRotation + ((value / this.mSubdivisionValue) * this.mSubdivisionAngle)) % 360;
    }

    private final float getValueForTick(int tick) {
        return tick * (this.mDivisionValue / this.mSubdivisions);
    }

    public /* synthetic */ GaugeView(Context context, AttributeSet attributeSet, int i, int i2, DefaultConstructorMarker defaultConstructorMarker) {
        this(context, (i2 & 2) != 0 ? null : attributeSet, (i2 & 4) != 0 ? 0 : i);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public GaugeView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        Intrinsics.checkNotNullParameter(context, "context");
        this.mTextValue = "--";
        this.mSpeedUnitTextTextValue = "--";
        this.mSpeedUnitSize = 0.3f;
        this.mNeedleLastMoved = -1L;
        readAttrs(context, attributeSet, i);
        init();
    }

    private final void readAttrs(Context context, AttributeSet attrs, int defStyle) {
        TypedArray typedArrayObtainStyledAttributes = context.obtainStyledAttributes(attrs, C2074R.styleable.GaugeView, defStyle, 0);
        Intrinsics.checkNotNullExpressionValue(typedArrayObtainStyledAttributes, "obtainStyledAttributes(...)");
        this.mShowOuterShadow = typedArrayObtainStyledAttributes.getBoolean(C2074R.styleable.GaugeView_showOuterShadow, true);
        this.mShowOuterBorder = typedArrayObtainStyledAttributes.getBoolean(C2074R.styleable.GaugeView_showOuterBorder, true);
        this.mShowOuterRim = typedArrayObtainStyledAttributes.getBoolean(C2074R.styleable.GaugeView_showOuterRim, true);
        this.mShowInnerRim = typedArrayObtainStyledAttributes.getBoolean(C2074R.styleable.GaugeView_showInnerRim, true);
        this.mShowNeedle = typedArrayObtainStyledAttributes.getBoolean(C2074R.styleable.GaugeView_showNeedle, true);
        this.mShowScale = typedArrayObtainStyledAttributes.getBoolean(C2074R.styleable.GaugeView_showScale, false);
        this.mShowRanges = typedArrayObtainStyledAttributes.getBoolean(C2074R.styleable.GaugeView_showRanges, true);
        this.mShowText = typedArrayObtainStyledAttributes.getBoolean(C2074R.styleable.GaugeView_showText, false);
        this.mOuterShadowWidth = this.mShowOuterShadow ? typedArrayObtainStyledAttributes.getFloat(C2074R.styleable.GaugeView_outerShadowWidth, 0.03f) : 0.0f;
        this.mOuterBorderWidth = this.mShowOuterBorder ? typedArrayObtainStyledAttributes.getFloat(C2074R.styleable.GaugeView_outerBorderWidth, 0.04f) : 0.0f;
        this.mOuterRimWidth = this.mShowOuterRim ? typedArrayObtainStyledAttributes.getFloat(C2074R.styleable.GaugeView_outerRimWidth, 0.05f) : 0.0f;
        this.mInnerRimWidth = this.mShowInnerRim ? typedArrayObtainStyledAttributes.getFloat(C2074R.styleable.GaugeView_innerRimWidth, 0.06f) : 0.0f;
        this.mInnerRimBorderWidth = this.mShowInnerRim ? typedArrayObtainStyledAttributes.getFloat(C2074R.styleable.GaugeView_innerRimBorderWidth, 0.005f) : 0.0f;
        this.mNeedleWidth = typedArrayObtainStyledAttributes.getFloat(C2074R.styleable.GaugeView_needleWidth, 0.025f);
        this.mNeedleHeight = typedArrayObtainStyledAttributes.getFloat(C2074R.styleable.GaugeView_needleHeight, 0.32f);
        this.mInnerCircleColor = typedArrayObtainStyledAttributes.getColor(C2074R.styleable.GaugeView_innerCircleColor, INNER_CIRCLE_COLOR);
        this.mScalePosition = (this.mShowScale || this.mShowRanges) ? typedArrayObtainStyledAttributes.getFloat(C2074R.styleable.GaugeView_scalePosition, 0.015f) : 0.0f;
        this.mScaleStartValue = typedArrayObtainStyledAttributes.getFloat(C2074R.styleable.GaugeView_scaleStartValue, 0.0f);
        this.mScaleEndValue = typedArrayObtainStyledAttributes.getFloat(C2074R.styleable.GaugeView_scaleEndValue, 220.0f);
        this.mScaleStartAngle = typedArrayObtainStyledAttributes.getFloat(C2074R.styleable.GaugeView_scaleStartAngle, 60.0f);
        this.mDivisions = typedArrayObtainStyledAttributes.getInteger(C2074R.styleable.GaugeView_divisions, 11);
        this.mSubdivisions = typedArrayObtainStyledAttributes.getInteger(C2074R.styleable.GaugeView_subdivisions, 2);
        if (this.mShowRanges) {
            this.mTextShadowColor = typedArrayObtainStyledAttributes.getColor(C2074R.styleable.GaugeView_textShadowColor, TEXT_SHADOW_COLOR);
            int resourceId = typedArrayObtainStyledAttributes.getResourceId(C2074R.styleable.GaugeView_rangeValues, 0);
            int resourceId2 = typedArrayObtainStyledAttributes.getResourceId(C2074R.styleable.GaugeView_rangeColors, 0);
            Resources resources = context.getResources();
            Intrinsics.checkNotNullExpressionValue(resources, "getResources(...)");
            readRanges(resources, resourceId, resourceId2);
        }
        if (this.mShowText) {
            int resourceId3 = typedArrayObtainStyledAttributes.getResourceId(C2074R.styleable.GaugeView_textValue, 0);
            String string = typedArrayObtainStyledAttributes.getString(C2074R.styleable.GaugeView_textValue);
            String string2 = "";
            if (resourceId3 > 0) {
                string = context.getString(resourceId3);
            } else if (string == null) {
                string = "";
            }
            this.mTextValue = string;
            int resourceId4 = typedArrayObtainStyledAttributes.getResourceId(C2074R.styleable.GaugeView_textUnit, 0);
            String string3 = typedArrayObtainStyledAttributes.getString(C2074R.styleable.GaugeView_textUnit);
            if (resourceId4 > 0) {
                string2 = context.getString(resourceId4);
            } else if (string3 != null) {
                string2 = string3;
            }
            this.mTextUnit = string2;
            this.mTextValueColor = typedArrayObtainStyledAttributes.getColor(C2074R.styleable.GaugeView_textValueColor, -1);
            this.mTextUnitColor = typedArrayObtainStyledAttributes.getColor(C2074R.styleable.GaugeView_textUnitColor, -1);
            this.mTextShadowColor = typedArrayObtainStyledAttributes.getColor(C2074R.styleable.GaugeView_textShadowColor, TEXT_SHADOW_COLOR);
            this.mTextValueSize = typedArrayObtainStyledAttributes.getFloat(C2074R.styleable.GaugeView_textValueSize, 0.3f);
            this.mTextUnitSize = typedArrayObtainStyledAttributes.getFloat(C2074R.styleable.GaugeView_textUnitSize, 0.1f);
            this.mSpeedUnitSize = typedArrayObtainStyledAttributes.getFloat(C2074R.styleable.GaugeView_textUnitSize, 0.07f);
        }
        typedArrayObtainStyledAttributes.recycle();
    }

    private final void readRanges(Resources res, int rangesId, int colorsId) {
        if (rangesId <= 0 || colorsId <= 0) {
            this.mRangeValues = RANGE_VALUES;
            this.mRangeColors = RANGE_COLORS;
            return;
        }
        String[] stringArray = res.getStringArray(C2074R.array.ranges);
        Intrinsics.checkNotNullExpressionValue(stringArray, "getStringArray(...)");
        String[] stringArray2 = res.getStringArray(C2074R.array.rangeColors);
        Intrinsics.checkNotNullExpressionValue(stringArray2, "getStringArray(...)");
        if (stringArray.length != stringArray2.length) {
            throw new IllegalArgumentException("The ranges and colors arrays must have the same length.".toString());
        }
        int length = stringArray.length;
        this.mRangeValues = new float[length];
        this.mRangeColors = new int[length];
        for (int i = 0; i < length; i++) {
            float[] fArr = this.mRangeValues;
            int[] iArr = null;
            if (fArr == null) {
                Intrinsics.throwUninitializedPropertyAccessException("mRangeValues");
                fArr = null;
            }
            String str = stringArray[i];
            Intrinsics.checkNotNullExpressionValue(str, "get(...)");
            fArr[i] = Float.parseFloat(str);
            int[] iArr2 = this.mRangeColors;
            if (iArr2 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("mRangeColors");
            } else {
                iArr = iArr2;
            }
            iArr[i] = Color.parseColor(stringArray2[i]);
        }
    }

    private final void init() {
        setLayerType(1, null);
        initDrawingRects();
        initDrawingTools();
        if (this.mShowRanges) {
            initScale();
        }
    }

    public final void initDrawingRects() {
        this.mOuterShadowRect = new RectF(0.0f, 0.0f, 1.0f, 1.0f);
        RectF rectF = this.mOuterShadowRect;
        Intrinsics.checkNotNull(rectF);
        float f = rectF.left + this.mOuterShadowWidth;
        RectF rectF2 = this.mOuterShadowRect;
        Intrinsics.checkNotNull(rectF2);
        float f2 = rectF2.top + this.mOuterShadowWidth;
        RectF rectF3 = this.mOuterShadowRect;
        Intrinsics.checkNotNull(rectF3);
        float f3 = rectF3.right - this.mOuterShadowWidth;
        RectF rectF4 = this.mOuterShadowRect;
        Intrinsics.checkNotNull(rectF4);
        this.mOuterBorderRect = new RectF(f, f2, f3, rectF4.bottom - this.mOuterShadowWidth);
        RectF rectF5 = this.mOuterBorderRect;
        Intrinsics.checkNotNull(rectF5);
        float f4 = rectF5.left + this.mOuterBorderWidth;
        RectF rectF6 = this.mOuterBorderRect;
        Intrinsics.checkNotNull(rectF6);
        float f5 = rectF6.top + this.mOuterBorderWidth;
        RectF rectF7 = this.mOuterBorderRect;
        Intrinsics.checkNotNull(rectF7);
        float f6 = rectF7.right - this.mOuterBorderWidth;
        RectF rectF8 = this.mOuterBorderRect;
        Intrinsics.checkNotNull(rectF8);
        this.mOuterRimRect = new RectF(f4, f5, f6, rectF8.bottom - this.mOuterBorderWidth);
        RectF rectF9 = this.mOuterRimRect;
        Intrinsics.checkNotNull(rectF9);
        float f7 = rectF9.left + this.mOuterRimWidth;
        RectF rectF10 = this.mOuterRimRect;
        Intrinsics.checkNotNull(rectF10);
        float f8 = rectF10.top + this.mOuterRimWidth;
        RectF rectF11 = this.mOuterRimRect;
        Intrinsics.checkNotNull(rectF11);
        float f9 = rectF11.right - this.mOuterRimWidth;
        RectF rectF12 = this.mOuterRimRect;
        Intrinsics.checkNotNull(rectF12);
        this.mInnerRimRect = new RectF(f7, f8, f9, rectF12.bottom - this.mOuterRimWidth);
        RectF rectF13 = this.mInnerRimRect;
        Intrinsics.checkNotNull(rectF13);
        float f10 = rectF13.left + this.mInnerRimBorderWidth;
        RectF rectF14 = this.mInnerRimRect;
        Intrinsics.checkNotNull(rectF14);
        float f11 = rectF14.top + this.mInnerRimBorderWidth;
        RectF rectF15 = this.mInnerRimRect;
        Intrinsics.checkNotNull(rectF15);
        float f12 = rectF15.right - this.mInnerRimBorderWidth;
        RectF rectF16 = this.mInnerRimRect;
        Intrinsics.checkNotNull(rectF16);
        this.mInnerRimBorderRect = new RectF(f10, f11, f12, rectF16.bottom - this.mInnerRimBorderWidth);
        RectF rectF17 = this.mInnerRimRect;
        Intrinsics.checkNotNull(rectF17);
        float f13 = rectF17.left + this.mInnerRimWidth;
        RectF rectF18 = this.mInnerRimRect;
        Intrinsics.checkNotNull(rectF18);
        float f14 = rectF18.top + this.mInnerRimWidth;
        RectF rectF19 = this.mInnerRimRect;
        Intrinsics.checkNotNull(rectF19);
        float f15 = rectF19.right - this.mInnerRimWidth;
        RectF rectF20 = this.mInnerRimRect;
        Intrinsics.checkNotNull(rectF20);
        this.mFaceRect = new RectF(f13, f14, f15, rectF20.bottom - this.mInnerRimWidth);
        RectF rectF21 = this.mFaceRect;
        Intrinsics.checkNotNull(rectF21);
        float f16 = rectF21.left + this.mScalePosition;
        RectF rectF22 = this.mFaceRect;
        Intrinsics.checkNotNull(rectF22);
        float f17 = rectF22.top + this.mScalePosition;
        RectF rectF23 = this.mFaceRect;
        Intrinsics.checkNotNull(rectF23);
        float f18 = rectF23.right - this.mScalePosition;
        RectF rectF24 = this.mFaceRect;
        Intrinsics.checkNotNull(rectF24);
        this.mScaleRect = new RectF(f16, f17, f18, rectF24.bottom - this.mScalePosition);
    }

    private final void initDrawingTools() {
        Paint paint = new Paint();
        this.mBackgroundPaint = paint;
        Intrinsics.checkNotNull(paint);
        paint.setFilterBitmap(true);
        if (this.mShowOuterShadow) {
            this.mOuterShadowPaint = getDefaultOuterShadowPaint();
        }
        if (this.mShowOuterBorder) {
            this.mOuterBorderPaint = getDefaultOuterBorderPaintGradiant();
        }
        if (this.mShowOuterRim) {
            this.mOuterRimPaint = getDefaultOuterRimPaint();
        }
        if (this.mShowInnerRim) {
            this.mInnerRimPaint = getDefaultInnerRimPaint();
            this.mInnerRimBorderLightPaint = getDefaultInnerRimBorderLightPaint();
            this.mInnerRimBorderDarkPaint = getDefaultInnerRimBorderDarkPaint();
        }
        if (this.mShowRanges) {
            setDefaultScaleRangePaints();
        }
        if (this.mShowNeedle) {
            setDefaultNeedlePaths();
            this.mNeedleLeftPaint = getDefaultNeedleLeftPaint();
            this.mNeedleRightPaint = getDefaultNeedleRightPaint();
        }
        if (this.mShowText) {
            this.mTextValuePaint = getDefaultTextValuePaint();
            this.mTextUnitPaint = getDefaultTextUnitPaint();
            this.mTextSpeedUnitFontPaint = getDefaultSpeedUnitFontPaint();
            this.mTextValueSpeedUnitFontPaint = getDefaultSpeedUnitFontPaint();
            this.mTextSpeedUnitPaint = getDefaultTextSpeedUnitPaint();
        }
        this.mFacePaint = getDefaultFacePaint();
        this.mFaceBorderPaint = getDefaultFaceBorderPaint();
        this.mFaceShadowPaint = getDefaultFaceShadowPaint();
    }

    public final Paint getDefaultOuterShadowPaint() {
        Paint paint = new Paint(1);
        paint.setStyle(Paint.Style.FILL);
        RectF rectF = this.mOuterShadowRect;
        Intrinsics.checkNotNull(rectF);
        paint.setShader(new RadialGradient(0.5f, 0.5f, rectF.width() / 2.0f, OUTER_SHADOW_COLORS, OUTER_SHADOW_POS, Shader.TileMode.MIRROR));
        return paint;
    }

    private final Paint getDefaultOuterBorderPaint() {
        Paint paint = new Paint(1);
        paint.setStyle(Paint.Style.FILL);
        paint.setColor(Color.argb(245, 0, 0, 0));
        return paint;
    }

    private final Paint getDefaultOuterBorderPaintGradiant() {
        Paint paint = new Paint(1);
        paint.setStyle(Paint.Style.FILL);
        paint.setShader(new SweepGradient(getWidth() / 2.0f, getHeight() / 2.0f, new int[]{-65281, -16776961}, new float[]{0.0f, 0.8611111f}));
        return paint;
    }

    public final Paint getDefaultOuterRimPaint() {
        RectF rectF = this.mOuterRimRect;
        Intrinsics.checkNotNull(rectF);
        float f = rectF.left;
        RectF rectF2 = this.mOuterRimRect;
        Intrinsics.checkNotNull(rectF2);
        float f2 = rectF2.top;
        RectF rectF3 = this.mOuterRimRect;
        Intrinsics.checkNotNull(rectF3);
        float f3 = rectF3.left;
        RectF rectF4 = this.mOuterRimRect;
        Intrinsics.checkNotNull(rectF4);
        LinearGradient linearGradient = new LinearGradient(f, f2, f3, rectF4.bottom, Color.rgb(33, 150, 243), Color.rgb(33, 150, 243), Shader.TileMode.REPEAT);
        BitmapShader bitmapShader = new BitmapShader(BitmapFactory.decodeResource(getResources(), C2074R.drawable.light_alu), Shader.TileMode.REPEAT, Shader.TileMode.REPEAT);
        bitmapShader.setLocalMatrix(new Matrix());
        Paint paint = new Paint(1);
        paint.setShader(new ComposeShader(linearGradient, bitmapShader, PorterDuff.Mode.MULTIPLY));
        paint.setFilterBitmap(true);
        return paint;
    }

    private final Paint getDefaultInnerRimPaint() {
        Paint paint = new Paint(1);
        RectF rectF = this.mInnerRimRect;
        Intrinsics.checkNotNull(rectF);
        float f = rectF.left;
        RectF rectF2 = this.mInnerRimRect;
        Intrinsics.checkNotNull(rectF2);
        float f2 = rectF2.top;
        RectF rectF3 = this.mInnerRimRect;
        Intrinsics.checkNotNull(rectF3);
        float f3 = rectF3.left;
        RectF rectF4 = this.mInnerRimRect;
        Intrinsics.checkNotNull(rectF4);
        paint.setShader(new LinearGradient(f, f2, f3, rectF4.bottom, new int[]{Color.argb(255, 68, 73, 80), Color.argb(255, 91, 97, 105), Color.argb(255, 178, 180, 183), Color.argb(255, 188, 188, 190), Color.argb(255, 84, 90, 100), Color.argb(255, 137, 137, 137)}, new float[]{0.0f, 0.1f, 0.2f, 0.4f, 0.8f, 1.0f}, Shader.TileMode.CLAMP));
        return paint;
    }

    private final Paint getDefaultInnerRimBorderLightPaint() {
        Paint paint = new Paint(1);
        paint.setStyle(Paint.Style.STROKE);
        paint.setColor(Color.argb(100, 255, 255, 255));
        paint.setStrokeWidth(0.005f);
        return paint;
    }

    private final Paint getDefaultInnerRimBorderDarkPaint() {
        Paint paint = new Paint(1);
        paint.setStyle(Paint.Style.STROKE);
        paint.setColor(Color.argb(100, 81, 84, 89));
        paint.setStrokeWidth(0.005f);
        return paint;
    }

    public final Paint getDefaultFacePaint() {
        Paint paint = new Paint(1);
        paint.setColor(Color.rgb(32, 24, 13));
        return paint;
    }

    public final Paint getDefaultFaceBorderPaint() {
        Paint paint = new Paint(1);
        paint.setStyle(Paint.Style.STROKE);
        paint.setColor(Color.rgb(255, 255, 255));
        paint.setStrokeWidth(0.0f);
        return paint;
    }

    public final Paint getDefaultFaceShadowPaint() {
        Paint paint = new Paint(1);
        RectF rectF = this.mFaceRect;
        Intrinsics.checkNotNull(rectF);
        paint.setShader(new RadialGradient(0.5f, 0.5f, rectF.width() / 2.0f, new int[]{Color.argb(60, 40, 96, 170), Color.argb(80, 15, 34, 98), Color.argb(120, 0, 0, 0), Color.argb(140, 0, 0, 0)}, new float[]{0.6f, 0.85f, 0.96f, 0.99f}, Shader.TileMode.MIRROR));
        return paint;
    }

    public final void setDefaultNeedlePaths() {
        Path path = new Path();
        this.mNeedleLeftPath = path;
        Intrinsics.checkNotNull(path);
        path.moveTo(0.5f, 0.65f);
        Path path2 = this.mNeedleLeftPath;
        Intrinsics.checkNotNull(path2);
        path2.lineTo(0.5f - this.mNeedleWidth, 0.65f);
        Path path3 = this.mNeedleLeftPath;
        Intrinsics.checkNotNull(path3);
        path3.lineTo(0.5f, 0.65f - this.mNeedleHeight);
        Path path4 = this.mNeedleLeftPath;
        Intrinsics.checkNotNull(path4);
        path4.lineTo(0.5f, 0.65f);
        Path path5 = this.mNeedleLeftPath;
        Intrinsics.checkNotNull(path5);
        path5.lineTo(0.5f - this.mNeedleWidth, 0.65f);
        Path path6 = new Path();
        this.mNeedleRightPath = path6;
        Intrinsics.checkNotNull(path6);
        path6.moveTo(0.5f, 0.65f);
        Path path7 = this.mNeedleRightPath;
        Intrinsics.checkNotNull(path7);
        path7.lineTo(this.mNeedleWidth + 0.5f, 0.65f);
        Path path8 = this.mNeedleRightPath;
        Intrinsics.checkNotNull(path8);
        path8.lineTo(0.5f, 0.65f - this.mNeedleHeight);
        Path path9 = this.mNeedleRightPath;
        Intrinsics.checkNotNull(path9);
        path9.lineTo(0.5f, 0.65f);
        Path path10 = this.mNeedleRightPath;
        Intrinsics.checkNotNull(path10);
        path10.lineTo(this.mNeedleWidth + 0.5f, 0.65f);
    }

    public final Paint getDefaultNeedleLeftPaint() {
        Paint paint = new Paint();
        paint.setColor(Color.rgb(255, 68, 63));
        return paint;
    }

    public final Paint getDefaultNeedleRightPaint() {
        Paint paint = new Paint();
        paint.setColor(Color.rgb(255, 68, 63));
        return paint;
    }

    public final void setDefaultScaleRangePaints() {
        float[] fArr = this.mRangeValues;
        if (fArr == null) {
            Intrinsics.throwUninitializedPropertyAccessException("mRangeValues");
            fArr = null;
        }
        int length = fArr.length;
        this.mRangePaints = new Paint[length];
        for (int i = 0; i < length; i++) {
            Paint[] paintArr = this.mRangePaints;
            if (paintArr == null) {
                Intrinsics.throwUninitializedPropertyAccessException("mRangePaints");
                paintArr = null;
            }
            paintArr[i] = new Paint(65);
            Paint[] paintArr2 = this.mRangePaints;
            if (paintArr2 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("mRangePaints");
                paintArr2 = null;
            }
            Paint paint = paintArr2[i];
            Intrinsics.checkNotNull(paint);
            int[] iArr = this.mRangeColors;
            if (iArr == null) {
                Intrinsics.throwUninitializedPropertyAccessException("mRangeColors");
                iArr = null;
            }
            paint.setColor(iArr[i]);
            Paint[] paintArr3 = this.mRangePaints;
            if (paintArr3 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("mRangePaints");
                paintArr3 = null;
            }
            Paint paint2 = paintArr3[i];
            Intrinsics.checkNotNull(paint2);
            paint2.setStyle(Paint.Style.STROKE);
            Paint[] paintArr4 = this.mRangePaints;
            if (paintArr4 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("mRangePaints");
                paintArr4 = null;
            }
            Paint paint3 = paintArr4[i];
            Intrinsics.checkNotNull(paint3);
            paint3.setStrokeWidth(0.005f);
            Paint[] paintArr5 = this.mRangePaints;
            if (paintArr5 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("mRangePaints");
                paintArr5 = null;
            }
            Paint paint4 = paintArr5[i];
            Intrinsics.checkNotNull(paint4);
            paint4.setTextSize(0.05f);
            Paint[] paintArr6 = this.mRangePaints;
            if (paintArr6 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("mRangePaints");
                paintArr6 = null;
            }
            Paint paint5 = paintArr6[i];
            Intrinsics.checkNotNull(paint5);
            paint5.setTypeface(Typeface.SANS_SERIF);
            Paint[] paintArr7 = this.mRangePaints;
            if (paintArr7 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("mRangePaints");
                paintArr7 = null;
            }
            Paint paint6 = paintArr7[i];
            Intrinsics.checkNotNull(paint6);
            paint6.setTextAlign(Paint.Align.CENTER);
            Paint[] paintArr8 = this.mRangePaints;
            if (paintArr8 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("mRangePaints");
                paintArr8 = null;
            }
            Paint paint7 = paintArr8[i];
            Intrinsics.checkNotNull(paint7);
            paint7.setShadowLayer(0.005f, 0.004f, 0.002f, this.mTextShadowColor);
        }
    }

    public final Paint getDefaultTextValuePaint() {
        Paint paint = new Paint(65);
        paint.setColor(this.mTextValueColor);
        paint.setStyle(Paint.Style.FILL_AND_STROKE);
        paint.setStrokeWidth(0.005f);
        paint.setTextSize(0.14f);
        paint.setTextAlign(Paint.Align.CENTER);
        paint.setTypeface(ResourcesCompat.getFont(getContext(), C2074R.font.digital_7));
        paint.setShadowLayer(0.01f, 0.002f, 0.002f, this.mTextShadowColor);
        return paint;
    }

    public final Paint getDefaultSpeedUnitFontPaint() {
        Paint paint = new Paint(65);
        paint.setColor(this.mTextValueColor);
        paint.setStyle(Paint.Style.FILL_AND_STROKE);
        paint.setStrokeWidth(0.005f);
        paint.setTextSize(0.08f);
        paint.setTextAlign(Paint.Align.CENTER);
        paint.setTypeface(ResourcesCompat.getFont(getContext(), C2074R.font.digital_7));
        paint.setShadowLayer(0.01f, 0.002f, 0.002f, this.mTextShadowColor);
        return paint;
    }

    public final Paint getDefaultTextUnitPaint() {
        Paint paint = new Paint(65);
        paint.setColor(this.mTextUnitColor);
        paint.setStyle(Paint.Style.FILL_AND_STROKE);
        paint.setStrokeWidth(0.005f);
        paint.setTextSize(this.mTextUnitSize);
        paint.setTextAlign(Paint.Align.CENTER);
        paint.setShadowLayer(0.01f, 0.002f, 0.002f, this.mTextShadowColor);
        return paint;
    }

    public final Paint getDefaultTextSpeedUnitPaint() {
        Paint paint = new Paint(65);
        paint.setColor(this.mTextUnitColor);
        paint.setStyle(Paint.Style.FILL_AND_STROKE);
        paint.setStrokeWidth(0.005f);
        paint.setTextSize(this.mSpeedUnitSize);
        paint.setTextAlign(Paint.Align.CENTER);
        paint.setShadowLayer(0.01f, 0.002f, 0.002f, this.mTextShadowColor);
        return paint;
    }

    @Override // android.view.View
    protected void onRestoreInstanceState(Parcelable state) {
        Intrinsics.checkNotNullParameter(state, "state");
        Bundle bundle = (Bundle) state;
        super.onRestoreInstanceState(bundle.getParcelable("superState"));
        this.mNeedleInitialized = bundle.getBoolean("needleInitialized");
        this.mNeedleVelocity = bundle.getFloat("needleVelocity");
        this.mNeedleAcceleration = bundle.getFloat("needleAcceleration");
        this.mNeedleLastMoved = bundle.getLong("needleLastMoved");
        this.mCurrentValue = bundle.getFloat("currentValue");
        this.mTargetValue = bundle.getFloat("targetValue");
    }

    private final void initScale() {
        float f = 360;
        this.mScaleRotation = (this.mScaleStartAngle + 180) % f;
        float f2 = (this.mScaleEndValue - this.mScaleStartValue) / this.mDivisions;
        this.mDivisionValue = f2;
        Log.i("mDivisionValue:", String.valueOf(f2));
        float f3 = this.mDivisionValue;
        int i = this.mSubdivisions;
        this.mSubdivisionValue = f3 / i;
        this.mSubdivisionAngle = (f - (2 * this.mScaleStartAngle)) / (this.mDivisions * i);
    }

    @Override // android.view.View
    protected Parcelable onSaveInstanceState() {
        Parcelable parcelableOnSaveInstanceState = super.onSaveInstanceState();
        Bundle bundle = new Bundle();
        bundle.putParcelable("superState", parcelableOnSaveInstanceState);
        bundle.putBoolean("needleInitialized", this.mNeedleInitialized);
        bundle.putFloat("needleVelocity", this.mNeedleVelocity);
        bundle.putFloat("needleAcceleration", this.mNeedleAcceleration);
        bundle.putLong("needleLastMoved", this.mNeedleLastMoved);
        bundle.putFloat("currentValue", this.mCurrentValue);
        bundle.putFloat("targetValue", this.mTargetValue);
        return bundle;
    }

    @Override // android.view.View
    protected void onMeasure(int widthMeasureSpec, int heightMeasureSpec) {
        int mode = View.MeasureSpec.getMode(widthMeasureSpec);
        int mode2 = View.MeasureSpec.getMode(heightMeasureSpec);
        setMeasuredDimension(chooseDimension(mode, View.MeasureSpec.getSize(widthMeasureSpec)), chooseDimension(mode2, View.MeasureSpec.getSize(heightMeasureSpec)));
    }

    @Override // android.view.View
    protected void onSizeChanged(int w, int h, int oldw, int oldh) {
        drawGauge();
    }

    private final void drawGauge() {
        Bitmap bitmap = this.mBackground;
        if (bitmap != null) {
            Intrinsics.checkNotNull(bitmap);
            bitmap.recycle();
        }
        this.mBackground = Bitmap.createBitmap(getWidth(), getHeight(), Bitmap.Config.ARGB_8888);
        Bitmap bitmap2 = this.mBackground;
        Intrinsics.checkNotNull(bitmap2);
        Canvas canvas = new Canvas(bitmap2);
        float fMin = Math.min(getWidth(), getHeight());
        canvas.scale(fMin, fMin);
        canvas.translate((fMin == ((float) getHeight()) ? Float.valueOf(((getWidth() - fMin) / 2) / fMin) : 0).floatValue(), (fMin == ((float) getWidth()) ? Float.valueOf(((getHeight() - fMin) / 2) / fMin) : 0).floatValue());
        drawRimOuterBorder(canvas);
        drawRim(canvas);
        drawRimInnerBorder(canvas);
        drawFace(canvas);
        if (this.mShowRanges) {
            drawScaleSpeedUnit(canvas);
            drawScale(canvas);
        }
    }

    @Override // android.view.View
    protected void onDraw(Canvas canvas) {
        Intrinsics.checkNotNullParameter(canvas, "canvas");
        drawBackground(canvas);
        float fMin = Math.min(getWidth(), getHeight());
        canvas.scale(fMin, fMin);
        Number number = 0;
        canvas.translate((fMin == ((float) getHeight()) ? Float.valueOf(((getWidth() - fMin) / 2) / fMin) : number).floatValue(), (fMin == ((float) getWidth()) ? Float.valueOf(((getHeight() - fMin) / 2) / fMin) : 0).floatValue());
        drawSpeedUnitText(canvas);
        if (this.mShowNeedle) {
            needleIcon(canvas);
            Paint paint = new Paint();
            paint.setShader(new SweepGradient(0.4f, 0.4f, new int[]{Color.parseColor("#231f20"), Color.parseColor("#231f20")}, (float[]) null));
            canvas.drawCircle(0.5f, 0.5f, 0.08f, paint);
            drawNeedle(canvas);
        }
        if (this.mShowText) {
            drawText(canvas);
            drawSpeedUnit(canvas);
        }
        computeCurrentValue();
    }

    private final void drawBackground(Canvas canvas) {
        Bitmap bitmap = this.mBackground;
        if (bitmap != null) {
            Intrinsics.checkNotNull(bitmap);
            canvas.drawBitmap(bitmap, 0.0f, 0.0f, this.mBackgroundPaint);
        }
    }

    private final void drawRim(Canvas canvas) {
        Paint paint = new Paint();
        paint.setAntiAlias(true);
        int[] iArr = {Color.parseColor("#ccc2be"), Color.parseColor("#9e7b7b"), Color.parseColor("#823031"), Color.parseColor("#f04234"), Color.parseColor("#64252a"), Color.parseColor("#221407")};
        RectF rectF = this.mOuterBorderRect;
        Intrinsics.checkNotNull(rectF);
        float fWidth = rectF.width();
        RectF rectF2 = this.mOuterBorderRect;
        Intrinsics.checkNotNull(rectF2);
        paint.setShader(new LinearGradient(1.0f, 0.0f, fWidth, rectF2.height(), iArr, (float[]) null, Shader.TileMode.MIRROR));
        canvas.drawCircle(0.5f, 0.5f, 0.49f, paint);
        Bitmap bitmapDecodeResource = BitmapFactory.decodeResource(getResources(), C2074R.drawable.light_alu);
        canvas.drawBitmap(bitmapDecodeResource, new Rect(0, 0, bitmapDecodeResource.getWidth(), bitmapDecodeResource.getHeight()), new Rect((int) (((double) (getWidth() / 2)) - 0.5d), (int) (((double) (getHeight() / 2)) - 0.5d), (int) ((getWidth() / 2) - 0.5f), (int) ((getHeight() / 2) - 0.5f)), (Paint) null);
    }

    private final void drawRimOuterBorder(Canvas canvas) {
        Paint paint = new Paint();
        paint.setAntiAlias(true);
        int[] iArr = {Color.parseColor("#98948f"), Color.parseColor("#8f8080"), Color.parseColor("#413832"), Color.parseColor("#D0DCD4D1")};
        RectF rectF = this.mOuterBorderRect;
        Intrinsics.checkNotNull(rectF);
        float fWidth = rectF.width();
        RectF rectF2 = this.mOuterBorderRect;
        Intrinsics.checkNotNull(rectF2);
        paint.setShader(new LinearGradient(1.0f, 0.0f, fWidth, rectF2.height(), iArr, (float[]) null, Shader.TileMode.MIRROR));
        canvas.drawCircle(0.5f, 0.5f, 0.495f, paint);
        Bitmap bitmapDecodeResource = BitmapFactory.decodeResource(getResources(), C2074R.drawable.light_alu);
        canvas.drawBitmap(bitmapDecodeResource, new Rect(0, 0, bitmapDecodeResource.getWidth(), bitmapDecodeResource.getHeight()), new Rect((int) (((double) (getWidth() / 2)) - 0.5d), (int) (((double) (getHeight() / 2)) - 0.5d), (int) ((getWidth() / 2) - 0.5f), (int) ((getHeight() / 2) - 0.5f)), (Paint) null);
    }

    private final void drawRimInnerBorder(Canvas canvas) {
        Paint paint = new Paint();
        paint.setAntiAlias(true);
        int[] iArr = {Color.parseColor("#98948f"), Color.parseColor("#8f8080"), Color.parseColor("#413832"), Color.parseColor("#98948f")};
        RectF rectF = this.mOuterBorderRect;
        Intrinsics.checkNotNull(rectF);
        float fWidth = rectF.width();
        RectF rectF2 = this.mOuterBorderRect;
        Intrinsics.checkNotNull(rectF2);
        paint.setShader(new LinearGradient(1.0f, 0.0f, fWidth, rectF2.height(), iArr, (float[]) null, Shader.TileMode.MIRROR));
        canvas.drawCircle(0.5f, 0.5f, 0.464f, paint);
        Bitmap bitmapDecodeResource = BitmapFactory.decodeResource(getResources(), C2074R.drawable.light_alu);
        canvas.drawBitmap(bitmapDecodeResource, new Rect(0, 0, bitmapDecodeResource.getWidth(), bitmapDecodeResource.getHeight()), new Rect((int) (((double) (getWidth() / 2)) - 0.5d), (int) (((double) (getHeight() / 2)) - 0.5d), (int) ((getWidth() / 2) - 0.5f), (int) ((getHeight() / 2) - 0.5f)), (Paint) null);
    }

    private final void drawFace(Canvas canvas) {
        RectF rectF = this.mFaceRect;
        Intrinsics.checkNotNull(rectF);
        Paint paint = this.mFacePaint;
        Intrinsics.checkNotNull(paint);
        canvas.drawOval(rectF, paint);
    }

    private final void drawSpeedUnitText(Canvas canvas) {
        String str = this.mSpeedUnitTextTextValue;
        Paint paint = this.mTextSpeedUnitPaint;
        Intrinsics.checkNotNull(paint);
        float fMeasureText = paint.measureText(str);
        if (!TextUtils.isEmpty(this.mTextUnit)) {
            Paint paint2 = this.mTextSpeedUnitPaint;
            Intrinsics.checkNotNull(paint2);
            paint2.measureText(this.mTextUnit);
        }
        drawText(canvas, str, 0.5f, 0.3f, this.mTextSpeedUnitPaint);
        if (TextUtils.isEmpty(this.mTextUnit)) {
            return;
        }
        String str2 = this.mTextUnit;
        Intrinsics.checkNotNull(str2);
        Paint paint3 = this.mTextUnitPaint;
        Intrinsics.checkNotNull(paint3);
        canvas.drawText(str2, (fMeasureText / 2) + 0.5f + 0.03f, 0.5f, paint3);
    }

    private final void drawText(Canvas canvas) {
        String strValueString = !TextUtils.isEmpty(this.mTextValue) ? this.mTextValue : valueString(this.mCurrentValue);
        Paint paint = this.mTextValuePaint;
        Intrinsics.checkNotNull(paint);
        float fMeasureText = paint.measureText(strValueString);
        if (!TextUtils.isEmpty(this.mTextUnit)) {
            Paint paint2 = this.mTextUnitPaint;
            Intrinsics.checkNotNull(paint2);
            paint2.measureText(this.mTextUnit);
        }
        drawText(canvas, strValueString, 0.41666666f, 0.9f, this.mTextValuePaint);
        if (TextUtils.isEmpty(this.mTextUnit)) {
            return;
        }
        String str = this.mTextUnit;
        Intrinsics.checkNotNull(str);
        Paint paint3 = this.mTextUnitPaint;
        Intrinsics.checkNotNull(paint3);
        canvas.drawText(str, (fMeasureText / 2) + 0.5f + 0.02f, 0.5f, paint3);
    }

    private final void drawSpeedUnit(Canvas canvas) {
        String str = this.mSpeedUnitTextTextValue;
        Paint paint = this.mTextSpeedUnitFontPaint;
        Intrinsics.checkNotNull(paint);
        float fMeasureText = paint.measureText(str);
        if (!TextUtils.isEmpty(this.mTextUnit)) {
            Paint paint2 = this.mTextSpeedUnitFontPaint;
            Intrinsics.checkNotNull(paint2);
            paint2.measureText(this.mTextUnit);
        }
        drawText(canvas, str, 0.5714286f, 0.9f, this.mTextSpeedUnitFontPaint);
        if (TextUtils.isEmpty(this.mTextUnit)) {
            return;
        }
        String str2 = this.mTextUnit;
        Intrinsics.checkNotNull(str2);
        Paint paint3 = this.mTextUnitPaint;
        Intrinsics.checkNotNull(paint3);
        canvas.drawText(str2, (fMeasureText / 2) + 0.5f + 0.03f, 0.5f, paint3);
    }

    private final void needleIcon(Canvas canvas) {
        Paint paint = new Paint();
        int[] iArr = {Color.parseColor("#797a7c"), Color.parseColor("#231f20")};
        RectF rectF = this.mOuterBorderRect;
        Intrinsics.checkNotNull(rectF);
        float fWidth = rectF.width();
        RectF rectF2 = this.mOuterBorderRect;
        Intrinsics.checkNotNull(rectF2);
        paint.setShader(new LinearGradient(1.0f, 0.0f, fWidth, rectF2.height(), iArr, (float[]) null, Shader.TileMode.MIRROR));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawCircle(0.5f, 0.5f, 0.082f, paint);
    }

    private final void drawScale(Canvas canvas) {
        int i;
        canvas.save();
        canvas.rotate(this.mScaleRotation, 0.5f, 0.5f);
        int i2 = (this.mDivisions * this.mSubdivisions) + 1;
        int i3 = 0;
        int i4 = 0;
        while (i4 < i2) {
            RectF rectF = this.mScaleRect;
            Intrinsics.checkNotNull(rectF);
            float f = rectF.top;
            float f2 = f + 0.045f;
            float f3 = 0.09f + f;
            float valueForTick = getValueForTick(i4);
            Paint rangePaint = getRangePaint(valueForTick);
            float f4 = this.mScaleEndValue / this.mDivisions;
            float f5 = valueForTick % f4;
            if (Math.abs(f5 - i3) >= 0.001d) {
                i = i4;
                if (Math.abs(f5 - f4) >= 0.001d) {
                    Intrinsics.checkNotNull(rangePaint);
                    rangePaint.setStrokeWidth(0.002f);
                    rangePaint.setColor(Color.rgb(209, 209, 209));
                    canvas.drawLine(0.5f, f, 0.5f, f2, rangePaint);
                }
                canvas.rotate(this.mSubdivisionAngle, 0.5f, 0.5f);
                i4 = i + 1;
                i3 = 0;
            } else {
                i = i4;
            }
            Intrinsics.checkNotNull(rangePaint);
            rangePaint.setStrokeWidth(0.01f);
            rangePaint.setColor(Color.rgb(209, 209, 209));
            canvas.drawLine(0.5f, f - 0.015f, 0.5f, f3 - 0.03f, rangePaint);
            rangePaint.setStyle(Paint.Style.FILL);
            canvas.rotate(this.mSubdivisionAngle, 0.5f, 0.5f);
            i4 = i + 1;
            i3 = 0;
        }
        canvas.restore();
    }

    private final void drawScaleSpeedUnit(Canvas canvas) {
        canvas.save();
        canvas.rotate(this.mScaleRotation, 0.5f, 0.5f);
        int i = (this.mDivisions * this.mSubdivisions) + 1;
        for (int i2 = 0; i2 < i; i2++) {
            RectF rectF = this.mScaleRect;
            Intrinsics.checkNotNull(rectF);
            float f = rectF.top + 0.09f;
            float valueForTick = getValueForTick(i2);
            Paint rangePaint = getRangePaint(valueForTick);
            float f2 = this.mScaleEndValue / this.mDivisions;
            float f3 = valueForTick % f2;
            if (Math.abs(f3 - 0) < 0.001d || Math.abs(f3 - f2) < 0.001d) {
                Intrinsics.checkNotNull(rangePaint);
                rangePaint.setStrokeWidth(0.01f);
                rangePaint.setColor(Color.rgb(209, 209, 209));
                rangePaint.setStyle(Paint.Style.FILL);
                String strValueString = valueString(valueForTick);
                drawText2(canvas, strValueString, Integer.parseInt(strValueString) < 120 ? 0.5f : 0.52f, f + 0.03f, rangePaint);
            }
            canvas.rotate(this.mSubdivisionAngle, 0.5f, 0.5f);
        }
        canvas.restore();
    }

    private final void drawText(Canvas canvas, String value, float x, float y, Paint paint) {
        Intrinsics.checkNotNull(paint);
        float textSize = paint.getTextSize();
        canvas.save();
        canvas.scale(0.01f, 0.01f);
        paint.setTextSize(textSize * 100.0f);
        Intrinsics.checkNotNull(value);
        canvas.drawText(value, x * 100.0f, y * 100.0f, paint);
        canvas.restore();
        paint.setTextSize(textSize);
    }

    private final void drawText2(Canvas canvas, String value, float x, float y, Paint paint) {
        float f;
        Intrinsics.checkNotNull(paint);
        float textSize = paint.getTextSize();
        canvas.save();
        canvas.scale(0.01f, 0.01f);
        if (value != null) {
            if (Integer.parseInt(value) < 140) {
                f = Float.parseFloat(value);
            } else {
                f = Float.parseFloat(value) + 10.0f;
            }
            canvas.rotate(115.0f - f, x * 100.0f, y * 100.0f);
        }
        paint.setTextSize(textSize * 100.0f);
        Intrinsics.checkNotNull(value);
        canvas.drawText(value, x * 100.0f, y * 100.0f, paint);
        canvas.restore();
        paint.setTextSize(textSize);
    }

    private final String valueString(float value) {
        StringCompanionObject stringCompanionObject = StringCompanionObject.INSTANCE;
        String str = String.format(TimeModel.NUMBER_FORMAT, Arrays.copyOf(new Object[]{Integer.valueOf((int) value)}, 1));
        Intrinsics.checkNotNullExpressionValue(str, "format(...)");
        return str;
    }

    private final Paint getRangePaint(float value) {
        float[] fArr = this.mRangeValues;
        Paint[] paintArr = null;
        if (fArr == null) {
            Intrinsics.throwUninitializedPropertyAccessException("mRangeValues");
            fArr = null;
        }
        int length = fArr.length - 1;
        for (int i = 0; i < length; i++) {
            float[] fArr2 = this.mRangeValues;
            if (fArr2 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("mRangeValues");
                fArr2 = null;
            }
            if (value < fArr2[i]) {
                Paint[] paintArr2 = this.mRangePaints;
                if (paintArr2 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("mRangePaints");
                } else {
                    paintArr = paintArr2;
                }
                return paintArr[i];
            }
        }
        float[] fArr3 = this.mRangeValues;
        if (fArr3 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("mRangeValues");
            fArr3 = null;
        }
        if (value > fArr3[length]) {
            throw new IllegalArgumentException("Value " + value + " out of range!");
        }
        Paint[] paintArr3 = this.mRangePaints;
        if (paintArr3 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("mRangePaints");
        } else {
            paintArr = paintArr3;
        }
        return paintArr[length];
    }

    private final void drawNeedle(Canvas canvas) {
        if (this.mNeedleInitialized) {
            float angleForValue = getAngleForValue(this.mCurrentValue);
            canvas.save();
            canvas.rotate(angleForValue, 0.5f, 0.5f);
            setNeedleShadowPosition(angleForValue);
            Path path = this.mNeedleLeftPath;
            Intrinsics.checkNotNull(path);
            Paint paint = this.mNeedleLeftPaint;
            Intrinsics.checkNotNull(paint);
            canvas.drawPath(path, paint);
            Path path2 = this.mNeedleRightPath;
            Intrinsics.checkNotNull(path2);
            Paint paint2 = this.mNeedleRightPaint;
            Intrinsics.checkNotNull(paint2);
            canvas.drawPath(path2, paint2);
            canvas.restore();
        }
    }

    private final void setNeedleShadowPosition(float angle) {
        if (angle > 180.0f && angle < 360.0f) {
            Paint paint = this.mNeedleRightPaint;
            Intrinsics.checkNotNull(paint);
            paint.setShadowLayer(0.0f, 0.0f, 0.0f, SupportMenu.CATEGORY_MASK);
            Paint paint2 = this.mNeedleLeftPaint;
            Intrinsics.checkNotNull(paint2);
            paint2.setShadowLayer(0.0f, 0.0f, 0.0f, Color.argb(127, 0, 0, 0));
            return;
        }
        Paint paint3 = this.mNeedleLeftPaint;
        Intrinsics.checkNotNull(paint3);
        paint3.setShadowLayer(0.0f, 0.0f, 0.0f, -16711936);
        Paint paint4 = this.mNeedleRightPaint;
        Intrinsics.checkNotNull(paint4);
        paint4.setShadowLayer(0.0f, 0.0f, 0.0f, Color.argb(127, 0, 0, 0));
    }

    private final void computeCurrentValue() {
        if (Math.abs(this.mCurrentValue - this.mTargetValue) <= 0.01f) {
            return;
        }
        if (-1 != this.mNeedleLastMoved) {
            float fCurrentTimeMillis = (System.currentTimeMillis() - this.mNeedleLastMoved) / 1000.0f;
            float fSignum = Math.signum(this.mNeedleVelocity);
            Math.abs(this.mNeedleVelocity);
            float f = this.mTargetValue;
            float f2 = this.mCurrentValue;
            float f3 = (f - f2) * 5.0f;
            this.mNeedleAcceleration = f3;
            float f4 = this.mNeedleVelocity;
            float f5 = f2 + (f4 * fCurrentTimeMillis);
            this.mCurrentValue = f5;
            this.mNeedleVelocity = f4 + (f3 * fCurrentTimeMillis);
            if ((f - f5) * fSignum < fSignum * 0.01f) {
                this.mCurrentValue = f;
                this.mNeedleVelocity = 0.0f;
                this.mNeedleAcceleration = 0.0f;
                this.mNeedleLastMoved = -1L;
            } else {
                this.mNeedleLastMoved = System.currentTimeMillis();
            }
            invalidate();
            return;
        }
        this.mNeedleLastMoved = System.currentTimeMillis();
        computeCurrentValue();
    }

    /* JADX WARN: Code duplicated, block: B:8:0x000e A[PHI: r0
      0x000e: PHI (r0v3 float) = (r0v1 float), (r0v2 float) binds: [B:7:0x000c, B:10:0x0014] A[DONT_GENERATE, DONT_INLINE]] */
    public final void setTargetValue(float value) {
        if (this.mShowScale || this.mShowRanges) {
            float f = this.mScaleStartValue;
            if (value < f) {
                value = f;
            } else {
                f = this.mScaleEndValue;
                if (value > f) {
                    value = f;
                }
            }
        }
        this.mTargetValue = value;
        this.mNeedleInitialized = true;
        invalidate();
    }

    public final void setTargetSpeedUnitValue(String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        this.mSpeedUnitTextTextValue = value;
        invalidate();
    }

    /* JADX INFO: compiled from: GaugeView.kt */
    @Metadata(m490d1 = {"\u0000N\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u0007\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0002\b\u001a\n\u0002\u0010\u0015\n\u0002\b\u0003\n\u0002\u0010\u0014\n\u0002\b\u000e\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J6\u0010:\u001a\u00020;2\u0006\u0010<\u001a\u00020=2\u0006\u0010>\u001a\u00020?2\u0006\u0010@\u001a\u00020\u00072\u0006\u0010A\u001a\u00020\u00072\u0006\u0010B\u001a\u00020C2\u0006\u0010D\u001a\u00020\u0007J\u001e\u0010E\u001a\u00020\u00072\u0006\u0010B\u001a\u00020C2\u0006\u0010>\u001a\u00020?2\u0006\u0010F\u001a\u00020\u0007R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082D¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0007X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\u0007X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u0007X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\u0007X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\rX\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\rX\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u000f\u001a\u00020\rX\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0010\u001a\u00020\rX\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0011\u001a\u00020\rX\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0012\u001a\u00020\rX\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0013\u001a\u00020\rX\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0014\u001a\u00020\rX\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0015\u001a\u00020\u0007X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0016\u001a\u00020\u0007X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0017\u001a\u00020\u0007X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0018\u001a\u00020\u0007X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0019\u001a\u00020\u0007X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u001a\u001a\u00020\u0007X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u001b\u001a\u00020\u0007X\u0086T¢\u0006\u0002\n\u0000R\u0011\u0010\u001c\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u001d\u0010\u001eR\u0011\u0010\u001f\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b \u0010\u001eR\u000e\u0010!\u001a\u00020\u0007X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\"\u001a\u00020\u0007X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010#\u001a\u00020\u0007X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010$\u001a\u00020\u0007X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010%\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010&\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u0011\u0010'\u001a\u00020(¢\u0006\b\n\u0000\u001a\u0004\b)\u0010*R\u0011\u0010+\u001a\u00020,¢\u0006\b\n\u0000\u001a\u0004\b-\u0010.R\u0011\u0010/\u001a\u00020,¢\u0006\b\n\u0000\u001a\u0004\b0\u0010.R\u0011\u00101\u001a\u00020(¢\u0006\b\n\u0000\u001a\u0004\b2\u0010*R\u0011\u00103\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b4\u0010\u001eR\u000e\u00105\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u00106\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u00107\u001a\u00020\u0007X\u0086T¢\u0006\u0002\n\u0000R\u000e\u00108\u001a\u00020\u0007X\u0086T¢\u0006\u0002\n\u0000R\u000e\u00109\u001a\u00020\u0007X\u0086T¢\u0006\u0002\n\u0000¨\u0006G"}, m491d2 = {"Lcom/uniden/rtach/helper/GaugeView$Companion;", "", "<init>", "()V", "defaultDimension", "", "TOP", "", "LEFT", "RIGHT", "BOTTOM", "CENTER", "SHOW_OUTER_SHADOW", "", "SHOW_OUTER_BORDER", "SHOW_OUTER_RIM", "SHOW_INNER_RIM", "SHOW_NEEDLE", "SHOW_SCALE", "SHOW_RANGES", "SHOW_TEXT", "OUTER_SHADOW_WIDTH", "OUTER_BORDER_WIDTH", "OUTER_RIM_WIDTH", "INNER_RIM_WIDTH", "INNER_RIM_BORDER_WIDTH", "NEEDLE_WIDTH", "NEEDLE_HEIGHT", "INNER_CIRCLE_COLOR", "getINNER_CIRCLE_COLOR", "()I", "OUTER_CIRCLE_COLOR", "getOUTER_CIRCLE_COLOR", "SCALE_POSITION", "SCALE_START_VALUE", "SCALE_END_VALUE", "SCALE_START_ANGLE", "SCALE_DIVISIONS", "SCALE_SUBDIVISIONS", "OUTER_SHADOW_COLORS", "", "getOUTER_SHADOW_COLORS", "()[I", "OUTER_SHADOW_POS", "", "getOUTER_SHADOW_POS", "()[F", "RANGE_VALUES", "getRANGE_VALUES", "RANGE_COLORS", "getRANGE_COLORS", "TEXT_SHADOW_COLOR", "getTEXT_SHADOW_COLOR", "TEXT_VALUE_COLOR", "TEXT_UNIT_COLOR", "TEXT_VALUE_SIZE", "TEXT_UNIT_SIZE", "TEXT_SPEED_UNIT_SIZE", "drawSpacedText", "", "canvas", "Landroid/graphics/Canvas;", "text", "", "left", "top", "paint", "Landroid/graphics/Paint;", "spacingPx", "getSpacedTextWidth", "spacingX", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final int getINNER_CIRCLE_COLOR() {
            return GaugeView.INNER_CIRCLE_COLOR;
        }

        public final int getOUTER_CIRCLE_COLOR() {
            return GaugeView.OUTER_CIRCLE_COLOR;
        }

        public final int[] getOUTER_SHADOW_COLORS() {
            return GaugeView.OUTER_SHADOW_COLORS;
        }

        public final float[] getOUTER_SHADOW_POS() {
            return GaugeView.OUTER_SHADOW_POS;
        }

        public final float[] getRANGE_VALUES() {
            return GaugeView.RANGE_VALUES;
        }

        public final int[] getRANGE_COLORS() {
            return GaugeView.RANGE_COLORS;
        }

        public final int getTEXT_SHADOW_COLOR() {
            return GaugeView.TEXT_SHADOW_COLOR;
        }

        public final void drawSpacedText(Canvas canvas, String text, float left, float top, Paint paint, float spacingPx) {
            Intrinsics.checkNotNullParameter(canvas, "canvas");
            Intrinsics.checkNotNullParameter(text, "text");
            Intrinsics.checkNotNullParameter(paint, "paint");
            int length = text.length();
            for (int i = 0; i < length; i++) {
                String str = text.charAt(i) + "";
                canvas.drawText(str, left, top, paint);
                left = left + spacingPx + paint.measureText(str);
            }
        }

        public final float getSpacedTextWidth(Paint paint, String text, float spacingX) {
            Intrinsics.checkNotNullParameter(paint, "paint");
            Intrinsics.checkNotNullParameter(text, "text");
            return paint.measureText(text) + (spacingX * (text.length() - 1));
        }
    }
}
