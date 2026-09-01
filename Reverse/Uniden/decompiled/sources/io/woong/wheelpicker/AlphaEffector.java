package io.woong.wheelpicker;

import android.graphics.Rect;
import android.view.View;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.ranges.IntRange;

/* JADX INFO: compiled from: AlphaEffector.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000D\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0007\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010 \n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\b\u0000\u0018\u00002\u00020\u0001B\u0005¢\u0006\u0002\u0010\u0002J\b\u0010\u0005\u001a\u00020\u0006H\u0002J\u0015\u0010\u0007\u001a\u00020\u00062\u0006\u0010\u0003\u001a\u00020\u0004H\u0000¢\u0006\u0002\b\bJ\u0010\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\fH\u0002J\u001f\u0010\r\u001a\u0004\u0018\u00010\u000e2\u0006\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u000b\u001a\u00020\fH\u0002¢\u0006\u0002\u0010\u0011J\u0010\u0010\u0012\u001a\u00020\u000e2\u0006\u0010\u000b\u001a\u00020\fH\u0002J \u0010\u0013\u001a\n\u0012\u0004\u0012\u00020\u0010\u0018\u00010\u00142\u0006\u0010\u000b\u001a\u00020\f2\u0006\u0010\u0015\u001a\u00020\nH\u0002J\u0012\u0010\u0016\u001a\u0004\u0018\u00010\u00172\u0006\u0010\u000f\u001a\u00020\u0010H\u0002J \u0010\u0018\u001a\u00020\u00062\u0006\u0010\u000b\u001a\u00020\f2\u0006\u0010\u0019\u001a\u00020\n2\u0006\u0010\u001a\u001a\u00020\nH\u0016J\b\u0010\u001b\u001a\u00020\u0006H\u0002R\u0010\u0010\u0003\u001a\u0004\u0018\u00010\u0004X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u001c"}, m491d2 = {"Lio/woong/wheelpicker/AlphaEffector;", "Landroidx/recyclerview/widget/RecyclerView$OnScrollListener;", "()V", "pickerView", "Lio/woong/wheelpicker/ValuePickerView;", "addListener", "", "attachToPickerView", "attachToPickerView$wheelpicker_release", "computeActuallyVisibleItemCount", "", "recyclerView", "Landroidx/recyclerview/widget/RecyclerView;", "computeDistanceToCenter", "", "view", "Landroid/view/View;", "(Landroid/view/View;Landroidx/recyclerview/widget/RecyclerView;)Ljava/lang/Float;", "computeItemViewSize", "findActuallyVisibleItemViews", "", "itemCount", "getViewBounds", "Landroid/graphics/Rect;", "onScrolled", "dx", "dy", "removeListener", "wheelpicker_release"}, m492k = 1, m493mv = {1, 7, 1}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class AlphaEffector extends RecyclerView.OnScrollListener {
    private ValuePickerView pickerView;

    public final void attachToPickerView$wheelpicker_release(ValuePickerView pickerView) {
        Intrinsics.checkNotNullParameter(pickerView, "pickerView");
        if (Intrinsics.areEqual(this.pickerView, pickerView)) {
            return;
        }
        if (this.pickerView != null) {
            removeListener();
        }
        this.pickerView = pickerView;
        addListener();
    }

    private final void addListener() {
        RecyclerView recyclerView;
        ValuePickerView valuePickerView = this.pickerView;
        if (valuePickerView == null || (recyclerView = valuePickerView.getRecyclerView()) == null) {
            return;
        }
        recyclerView.addOnScrollListener(this);
    }

    private final void removeListener() {
        RecyclerView recyclerView;
        ValuePickerView valuePickerView = this.pickerView;
        if (valuePickerView == null || (recyclerView = valuePickerView.getRecyclerView()) == null) {
            return;
        }
        recyclerView.removeOnScrollListener(this);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.OnScrollListener
    public void onScrolled(RecyclerView recyclerView, int dx, int dy) {
        List<View> listFindActuallyVisibleItemViews;
        View next;
        Float fComputeDistanceToCenter;
        Intrinsics.checkNotNullParameter(recyclerView, "recyclerView");
        if (this.pickerView == null || (listFindActuallyVisibleItemViews = findActuallyVisibleItemViews(recyclerView, computeActuallyVisibleItemCount(recyclerView))) == null) {
            return;
        }
        float fComputeItemViewSize = computeItemViewSize(recyclerView);
        Iterator<View> it = listFindActuallyVisibleItemViews.iterator();
        while (it.hasNext() && (fComputeDistanceToCenter = computeDistanceToCenter((next = it.next()), recyclerView)) != null) {
            float fAbs = Math.abs(fComputeDistanceToCenter.floatValue());
            float f = 0.25f;
            if (fAbs < fComputeItemViewSize) {
                f = 0.25f + (1.0f - (fAbs / fComputeItemViewSize));
            }
            next.setAlpha(f);
        }
    }

    private final int computeActuallyVisibleItemCount(RecyclerView recyclerView) {
        return (int) Math.ceil(recyclerView.getMeasuredHeight() / recyclerView.computeVerticalScrollExtent());
    }

    private final List<View> findActuallyVisibleItemViews(RecyclerView recyclerView, int itemCount) {
        RecyclerView.LayoutManager layoutManager = recyclerView.getLayoutManager();
        Intrinsics.checkNotNull(layoutManager, "null cannot be cast to non-null type androidx.recyclerview.widget.LinearLayoutManager");
        LinearLayoutManager linearLayoutManager = (LinearLayoutManager) layoutManager;
        int iFindFirstVisibleItemPosition = linearLayoutManager.findFirstVisibleItemPosition();
        View viewFindViewByPosition = linearLayoutManager.findViewByPosition(iFindFirstVisibleItemPosition);
        int iFindLastVisibleItemPosition = linearLayoutManager.findLastVisibleItemPosition();
        View viewFindViewByPosition2 = linearLayoutManager.findViewByPosition(iFindLastVisibleItemPosition);
        if (viewFindViewByPosition != null && viewFindViewByPosition2 != null) {
            Rect viewBounds = getViewBounds(viewFindViewByPosition);
            Rect viewBounds2 = getViewBounds(recyclerView);
            if (viewBounds != null && viewBounds2 != null) {
                if (viewBounds2.centerY() >= viewBounds.bottom) {
                    iFindFirstVisibleItemPosition = iFindLastVisibleItemPosition;
                    viewFindViewByPosition = viewFindViewByPosition2;
                }
                int i = (itemCount - 1) / 2;
                IntRange intRange = new IntRange(iFindFirstVisibleItemPosition - i, i + iFindFirstVisibleItemPosition);
                ArrayList arrayList = new ArrayList();
                int first = intRange.getFirst();
                int last = intRange.getLast();
                if (first <= last) {
                    while (true) {
                        if (first == iFindFirstVisibleItemPosition) {
                            arrayList.add(viewFindViewByPosition);
                        } else {
                            View viewFindViewByPosition3 = linearLayoutManager.findViewByPosition(first);
                            if (viewFindViewByPosition3 == null) {
                                return null;
                            }
                            arrayList.add(viewFindViewByPosition3);
                        }
                        if (first != last) {
                            first++;
                        }
                    }
                }
                return arrayList;
            }
        }
        return null;
    }

    private final float computeItemViewSize(RecyclerView recyclerView) {
        return recyclerView.computeVerticalScrollExtent();
    }

    private final Float computeDistanceToCenter(View view, RecyclerView recyclerView) {
        Rect viewBounds = getViewBounds(view);
        Rect viewBounds2 = getViewBounds(recyclerView);
        if (viewBounds == null || viewBounds2 == null) {
            return null;
        }
        return Float.valueOf(viewBounds2.exactCenterY() - viewBounds.exactCenterY());
    }

    private final Rect getViewBounds(View view) {
        Rect rect = new Rect();
        if (view.getGlobalVisibleRect(rect)) {
            return rect;
        }
        return null;
    }
}
