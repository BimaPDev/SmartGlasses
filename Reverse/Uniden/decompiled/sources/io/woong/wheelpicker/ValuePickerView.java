package io.woong.wheelpicker;

import android.content.Context;
import android.content.res.TypedArray;
import android.util.AttributeSet;
import android.util.DisplayMetrics;
import android.util.TypedValue;
import android.view.View;
import android.widget.FrameLayout;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.core.view.ViewCompat;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.LinearSnapHelper;
import androidx.recyclerview.widget.RecyclerView;
import com.google.firebase.analytics.FirebaseAnalytics;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.math.MathKt;

/* JADX INFO: compiled from: ValuePickerView.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000l\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u000b\n\u0002\b\n\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\r\n\u0002\u0018\u0002\n\u0002\b\u0004\u0018\u0000 ?2\u00020\u0001:\u0003?@AB\u000f\b\u0016\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004B\u0019\b\u0016\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0006¢\u0006\u0002\u0010\u0007B#\b\u0016\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0006\u0012\b\b\u0001\u0010\b\u001a\u00020\t¢\u0006\u0002\u0010\nB-\b\u0016\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0006\u0012\b\b\u0001\u0010\b\u001a\u00020\t\u0012\b\b\u0001\u0010\u000b\u001a\u00020\t¢\u0006\u0002\u0010\fJ\u000e\u0010-\u001a\u00020.2\u0006\u0010/\u001a\u000200J0\u00101\u001a\u00020.2\u0006\u00102\u001a\u00020\u00182\u0006\u00103\u001a\u00020\t2\u0006\u00104\u001a\u00020\t2\u0006\u00105\u001a\u00020\t2\u0006\u00106\u001a\u00020\tH\u0014J\u000e\u00107\u001a\u00020.2\u0006\u0010/\u001a\u000200J\u000e\u00108\u001a\u00020.2\u0006\u00109\u001a\u00020\tJ\u000e\u0010:\u001a\u00020.2\u0006\u0010;\u001a\u00020\tJ\u0010\u0010<\u001a\u00020.2\b\u0010=\u001a\u0004\u0018\u00010>R8\u0010\u000f\u001a\f\u0012\u0002\b\u0003\u0012\u0002\b\u0003\u0018\u00010\u000e2\u0010\u0010\r\u001a\f\u0012\u0002\b\u0003\u0012\u0002\b\u0003\u0018\u00010\u000e@FX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0010\u0010\u0011\"\u0004\b\u0012\u0010\u0013R\u000e\u0010\u0014\u001a\u00020\u0015X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0016\u001a\u00020\u0017X\u0082\u0004¢\u0006\u0002\n\u0000R$\u0010\u0019\u001a\u00020\u00182\u0006\u0010\r\u001a\u00020\u0018@FX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0019\u0010\u001a\"\u0004\b\u001b\u0010\u001cR$\u0010\u001d\u001a\u00020\t2\u0006\u0010\r\u001a\u00020\t@FX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u001e\u0010\u001f\"\u0004\b \u0010!R\u0014\u0010\"\u001a\u00020#X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b$\u0010%R\u000e\u0010&\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010'\u001a\u00020(X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010)\u001a\u00020*X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010+\u001a\u00020,X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006B"}, m491d2 = {"Lio/woong/wheelpicker/ValuePickerView;", "Landroid/widget/FrameLayout;", "context", "Landroid/content/Context;", "(Landroid/content/Context;)V", "attrs", "Landroid/util/AttributeSet;", "(Landroid/content/Context;Landroid/util/AttributeSet;)V", "defStyleAttr", "", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V", "defStyleRes", "(Landroid/content/Context;Landroid/util/AttributeSet;II)V", "value", "Lio/woong/wheelpicker/ValuePickerAdapter;", "adapter", "getAdapter", "()Lio/woong/wheelpicker/ValuePickerAdapter;", "setAdapter", "(Lio/woong/wheelpicker/ValuePickerAdapter;)V", "alphaEffector", "Lio/woong/wheelpicker/AlphaEffector;", "cyclicPickerRepositionHelper", "Lio/woong/wheelpicker/CyclicPickerRepositionHelper;", "", "isCyclic", "()Z", "setCyclic", "(Z)V", "itemHeight", "getItemHeight", "()I", "setItemHeight", "(I)V", "recyclerView", "Landroidx/recyclerview/widget/RecyclerView;", "getRecyclerView$wheelpicker_release", "()Landroidx/recyclerview/widget/RecyclerView;", "recyclerViewId", "scrollListenerAdapter", "Lio/woong/wheelpicker/ScrollListenerAdapter;", "snapHelper", "Landroidx/recyclerview/widget/LinearSnapHelper;", "valueSelectedListenerAdapter", "Lio/woong/wheelpicker/ValueSelectedListenerAdapter;", "addOnScrollListener", "", "onScrollListener", "Lio/woong/wheelpicker/ValuePickerView$OnScrollListener;", "onLayout", "changed", "left", "top", "right", "bottom", "removeOnScrollListener", "scrollToIndex", FirebaseAnalytics.Param.INDEX, "scrollToPosition", "position", "setOnValueSelectedListener", "onValueSelectedListener", "Lio/woong/wheelpicker/ValuePickerView$OnValueSelectedListener;", "Companion", "OnScrollListener", "OnValueSelectedListener", "wheelpicker_release"}, m492k = 1, m493mv = {1, 7, 1}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class ValuePickerView extends FrameLayout {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    public static final boolean DEFAULT_CYCLIC_ENABLED = false;
    public static final int SCROLL_STATE_DRAGGING = 1;
    public static final int SCROLL_STATE_IDLE = 0;
    public static final int SCROLL_STATE_SETTLING = 2;
    private ValuePickerAdapter<?, ?> adapter;
    private final AlphaEffector alphaEffector;
    private final CyclicPickerRepositionHelper cyclicPickerRepositionHelper;
    private boolean isCyclic;
    private int itemHeight;
    private final RecyclerView recyclerView;
    private final int recyclerViewId;
    private final ScrollListenerAdapter scrollListenerAdapter;
    private final LinearSnapHelper snapHelper;
    private final ValueSelectedListenerAdapter valueSelectedListenerAdapter;

    /* JADX INFO: compiled from: ValuePickerView.kt */
    @Metadata(m490d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0004\b\u0016\u0018\u00002\u00020\u0001B\u0005¢\u0006\u0002\u0010\u0002J\u0018\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u0007\u001a\u00020\bH\u0016J \u0010\t\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u0010\n\u001a\u00020\b2\u0006\u0010\u000b\u001a\u00020\bH\u0016¨\u0006\f"}, m491d2 = {"Lio/woong/wheelpicker/ValuePickerView$OnScrollListener;", "", "()V", "onScrollStateChanged", "", "pickerView", "Lio/woong/wheelpicker/ValuePickerView;", "newState", "", "onScrolled", "dx", "dy", "wheelpicker_release"}, m492k = 1, m493mv = {1, 7, 1}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    public static class OnScrollListener {
        public void onScrollStateChanged(ValuePickerView pickerView, int newState) {
            Intrinsics.checkNotNullParameter(pickerView, "pickerView");
        }

        public void onScrolled(ValuePickerView pickerView, int dx, int dy) {
            Intrinsics.checkNotNullParameter(pickerView, "pickerView");
        }
    }

    /* JADX INFO: compiled from: ValuePickerView.kt */
    @Metadata(m490d1 = {"\u0000\u001c\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\bæ\u0080\u0001\u0018\u00002\u00020\u0001J\u0018\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007H&¨\u0006\b"}, m491d2 = {"Lio/woong/wheelpicker/ValuePickerView$OnValueSelectedListener;", "", "onValueSelected", "", "pickerView", "Lio/woong/wheelpicker/ValuePickerView;", FirebaseAnalytics.Param.INDEX, "", "wheelpicker_release"}, m492k = 1, m493mv = {1, 7, 1}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    public interface OnValueSelectedListener {
        void onValueSelected(ValuePickerView pickerView, int index);
    }

    public final ValuePickerAdapter<?, ?> getAdapter() {
        return this.adapter;
    }

    public final int getItemHeight() {
        return this.itemHeight;
    }

    /* JADX INFO: renamed from: getRecyclerView$wheelpicker_release, reason: from getter */
    public final RecyclerView getRecyclerView() {
        return this.recyclerView;
    }

    /* JADX INFO: renamed from: isCyclic, reason: from getter */
    public final boolean getIsCyclic() {
        return this.isCyclic;
    }

    public final void setAdapter(ValuePickerAdapter<?, ?> valuePickerAdapter) {
        ValuePickerAdapter<?, ?> valuePickerAdapter2 = this.adapter;
        if (valuePickerAdapter2 != null) {
            valuePickerAdapter2.setPickerView$wheelpicker_release(null);
        }
        if (valuePickerAdapter != null) {
            valuePickerAdapter.setPickerView$wheelpicker_release(this);
        }
        this.recyclerView.setAdapter(valuePickerAdapter);
        this.adapter = valuePickerAdapter;
        requestLayout();
    }

    public final void setItemHeight(int i) {
        this.itemHeight = i;
        requestLayout();
    }

    public final void setCyclic(boolean z) {
        this.isCyclic = z;
        requestLayout();
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public ValuePickerView(Context context) {
        this(context, null);
        Intrinsics.checkNotNullParameter(context, "context");
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public ValuePickerView(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
        Intrinsics.checkNotNullParameter(context, "context");
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public ValuePickerView(Context context, AttributeSet attributeSet, int i) {
        this(context, attributeSet, i, 0);
        Intrinsics.checkNotNullParameter(context, "context");
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ValuePickerView(Context context, AttributeSet attributeSet, int i, int i2) {
        super(context, attributeSet, i, i2);
        Intrinsics.checkNotNullParameter(context, "context");
        Companion companion = INSTANCE;
        DisplayMetrics displayMetrics = getResources().getDisplayMetrics();
        Intrinsics.checkNotNullExpressionValue(displayMetrics, "resources.displayMetrics");
        this.itemHeight = companion.getDefaultItemSize$wheelpicker_release(displayMetrics);
        TypedArray typedArrayObtainStyledAttributes = context.obtainStyledAttributes(attributeSet, C2179R.styleable.ValuePickerView, i, i2);
        Intrinsics.checkNotNullExpressionValue(typedArrayObtainStyledAttributes, "context.obtainStyledAttr…efStyleAttr, defStyleRes)");
        int i3 = C2179R.styleable.ValuePickerView_itemHeight;
        DisplayMetrics displayMetrics2 = getResources().getDisplayMetrics();
        Intrinsics.checkNotNullExpressionValue(displayMetrics2, "resources.displayMetrics");
        setItemHeight(typedArrayObtainStyledAttributes.getDimensionPixelSize(i3, companion.getDefaultItemSize$wheelpicker_release(displayMetrics2)));
        setCyclic(typedArrayObtainStyledAttributes.getBoolean(C2179R.styleable.ValuePickerView_isCyclic, false));
        int i4 = typedArrayObtainStyledAttributes.getInt(C2179R.styleable.ValuePickerView_initialIndex, 0);
        typedArrayObtainStyledAttributes.recycle();
        RecyclerView recyclerView = new RecyclerView(context);
        this.recyclerView = recyclerView;
        int iGenerateViewId = ViewCompat.generateViewId();
        this.recyclerViewId = iGenerateViewId;
        recyclerView.setId(iGenerateViewId);
        recyclerView.setLayoutManager(new LinearLayoutManager(context, 1, false));
        LinearSnapHelper linearSnapHelper = new LinearSnapHelper();
        this.snapHelper = linearSnapHelper;
        ScrollListenerAdapter scrollListenerAdapter = new ScrollListenerAdapter();
        this.scrollListenerAdapter = scrollListenerAdapter;
        ValueSelectedListenerAdapter valueSelectedListenerAdapter = new ValueSelectedListenerAdapter();
        this.valueSelectedListenerAdapter = valueSelectedListenerAdapter;
        CyclicPickerRepositionHelper cyclicPickerRepositionHelper = new CyclicPickerRepositionHelper();
        this.cyclicPickerRepositionHelper = cyclicPickerRepositionHelper;
        AlphaEffector alphaEffector = new AlphaEffector();
        this.alphaEffector = alphaEffector;
        linearSnapHelper.attachToRecyclerView(recyclerView);
        scrollListenerAdapter.attachToPickerView$wheelpicker_release(this);
        valueSelectedListenerAdapter.attachToPickerView$wheelpicker_release(this);
        cyclicPickerRepositionHelper.attachToPickerView$wheelpicker_release(this);
        alphaEffector.attachToPickerView$wheelpicker_release(this);
        addView(recyclerView);
        scrollToIndex(i4);
    }

    @Override // android.widget.FrameLayout, android.view.ViewGroup, android.view.View
    protected void onLayout(boolean changed, int left, int top, int right, int bottom) {
        super.onLayout(changed, left, top, right, bottom);
        if (getChildCount() > 1) {
            View childAt = getChildAt(0);
            if (childAt.getId() == this.recyclerViewId) {
                removeViewAt(0);
                addView(childAt);
            }
        }
        if (this.adapter != null) {
            int measuredHeight = (getMeasuredHeight() / 2) - (this.itemHeight / 2);
            this.recyclerView.setPadding(0, measuredHeight, 0, measuredHeight);
            if (this.recyclerView.getClipToPadding()) {
                this.recyclerView.setClipToPadding(false);
            }
        }
    }

    public final void scrollToPosition(int position) {
        RecyclerView.LayoutManager layoutManager = this.recyclerView.getLayoutManager();
        Intrinsics.checkNotNull(layoutManager, "null cannot be cast to non-null type androidx.recyclerview.widget.LinearLayoutManager");
        ((LinearLayoutManager) layoutManager).scrollToPosition(position);
    }

    public final void scrollToIndex(final int index) {
        post(new Runnable() { // from class: io.woong.wheelpicker.ValuePickerView$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                ValuePickerView.scrollToIndex$lambda$0(this.f$0, index);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void scrollToIndex$lambda$0(ValuePickerView this$0, int i) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        if (this$0.isCyclic) {
            this$0.scrollToPosition(this$0.cyclicPickerRepositionHelper.findApproximatelyCenterPosition$wheelpicker_release(i));
        } else {
            this$0.scrollToPosition(i);
        }
    }

    public final void addOnScrollListener(OnScrollListener onScrollListener) {
        Intrinsics.checkNotNullParameter(onScrollListener, "onScrollListener");
        this.scrollListenerAdapter.addOnScrollListener$wheelpicker_release(onScrollListener);
    }

    public final void removeOnScrollListener(OnScrollListener onScrollListener) {
        Intrinsics.checkNotNullParameter(onScrollListener, "onScrollListener");
        this.scrollListenerAdapter.removeOnScrollListener$wheelpicker_release(onScrollListener);
    }

    public final void setOnValueSelectedListener(OnValueSelectedListener onValueSelectedListener) {
        this.valueSelectedListenerAdapter.setOnValueSelectedListener$wheelpicker_release(onValueSelectedListener);
    }

    /* JADX INFO: compiled from: ValuePickerView.kt */
    @Metadata(m490d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\b\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u0015\u0010\t\u001a\u00020\u00062\u0006\u0010\n\u001a\u00020\u000bH\u0000¢\u0006\u0002\b\fR\u000e\u0010\u0003\u001a\u00020\u0004X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0005\u001a\u00020\u0006X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0006X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0006X\u0086T¢\u0006\u0002\n\u0000¨\u0006\r"}, m491d2 = {"Lio/woong/wheelpicker/ValuePickerView$Companion;", "", "()V", "DEFAULT_CYCLIC_ENABLED", "", "SCROLL_STATE_DRAGGING", "", "SCROLL_STATE_IDLE", "SCROLL_STATE_SETTLING", "getDefaultItemSize", "displayMetrics", "Landroid/util/DisplayMetrics;", "getDefaultItemSize$wheelpicker_release", "wheelpicker_release"}, m492k = 1, m493mv = {1, 7, 1}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final int getDefaultItemSize$wheelpicker_release(DisplayMetrics displayMetrics) {
            Intrinsics.checkNotNullParameter(displayMetrics, "displayMetrics");
            return MathKt.roundToInt(TypedValue.applyDimension(1, 48.0f, displayMetrics));
        }
    }
}
