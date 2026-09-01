package io.woong.wheelpicker;

import android.graphics.Point;
import android.graphics.Rect;
import android.view.View;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: ValueSelectedListenerAdapter.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0007\b\u0000\u0018\u00002\u00020\u0001B\u0005¢\u0006\u0002\u0010\u0002J\b\u0010\t\u001a\u00020\nH\u0002J\u0015\u0010\u000b\u001a\u00020\n2\u0006\u0010\u0005\u001a\u00020\u0006H\u0000¢\u0006\u0002\b\fJ\u0010\u0010\r\u001a\u00020\b2\u0006\u0010\u000e\u001a\u00020\u000fH\u0002J \u0010\u0010\u001a\u00020\n2\u0006\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\u0011\u001a\u00020\b2\u0006\u0010\u0012\u001a\u00020\bH\u0016J\b\u0010\u0013\u001a\u00020\nH\u0002J\u0017\u0010\u0014\u001a\u00020\n2\b\u0010\u0003\u001a\u0004\u0018\u00010\u0004H\u0000¢\u0006\u0002\b\u0015R\u0010\u0010\u0003\u001a\u0004\u0018\u00010\u0004X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u0005\u001a\u0004\u0018\u00010\u0006X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\bX\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u0016"}, m491d2 = {"Lio/woong/wheelpicker/ValueSelectedListenerAdapter;", "Landroidx/recyclerview/widget/RecyclerView$OnScrollListener;", "()V", "onValueSelectedListener", "Lio/woong/wheelpicker/ValuePickerView$OnValueSelectedListener;", "pickerView", "Lio/woong/wheelpicker/ValuePickerView;", "prevSelectedIndex", "", "addListener", "", "attachToPickerView", "attachToPickerView$wheelpicker_release", "findCenterVisibleItemPosition", "recyclerView", "Landroidx/recyclerview/widget/RecyclerView;", "onScrolled", "dx", "dy", "removeListener", "setOnValueSelectedListener", "setOnValueSelectedListener$wheelpicker_release", "wheelpicker_release"}, m492k = 1, m493mv = {1, 7, 1}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class ValueSelectedListenerAdapter extends RecyclerView.OnScrollListener {
    private ValuePickerView.OnValueSelectedListener onValueSelectedListener;
    private ValuePickerView pickerView;
    private int prevSelectedIndex = -1;

    public final void setOnValueSelectedListener$wheelpicker_release(ValuePickerView.OnValueSelectedListener onValueSelectedListener) {
        this.onValueSelectedListener = onValueSelectedListener;
    }

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
        int iFindCenterVisibleItemPosition;
        int size;
        Intrinsics.checkNotNullParameter(recyclerView, "recyclerView");
        ValuePickerView valuePickerView = this.pickerView;
        ValuePickerAdapter<?, ?> adapter = valuePickerView != null ? valuePickerView.getAdapter() : null;
        if (valuePickerView == null || adapter == null || (iFindCenterVisibleItemPosition = findCenterVisibleItemPosition(recyclerView)) == -1 || (size = iFindCenterVisibleItemPosition % adapter.getValues().size()) == this.prevSelectedIndex) {
            return;
        }
        this.prevSelectedIndex = size;
        ValuePickerView.OnValueSelectedListener onValueSelectedListener = this.onValueSelectedListener;
        if (onValueSelectedListener != null) {
            onValueSelectedListener.onValueSelected(valuePickerView, size);
        }
    }

    private final int findCenterVisibleItemPosition(RecyclerView recyclerView) {
        int iFindLastVisibleItemPosition;
        View viewFindViewByPosition;
        RecyclerView.LayoutManager layoutManager = recyclerView.getLayoutManager();
        Intrinsics.checkNotNull(layoutManager, "null cannot be cast to non-null type androidx.recyclerview.widget.LinearLayoutManager");
        LinearLayoutManager linearLayoutManager = (LinearLayoutManager) layoutManager;
        int iFindFirstVisibleItemPosition = linearLayoutManager.findFirstVisibleItemPosition();
        View viewFindViewByPosition2 = linearLayoutManager.findViewByPosition(iFindFirstVisibleItemPosition);
        if (viewFindViewByPosition2 == null || (viewFindViewByPosition = linearLayoutManager.findViewByPosition((iFindLastVisibleItemPosition = linearLayoutManager.findLastVisibleItemPosition()))) == null) {
            return -1;
        }
        Rect rect = new Rect();
        if (!viewFindViewByPosition2.getGlobalVisibleRect(rect) || !viewFindViewByPosition.getGlobalVisibleRect(new Rect())) {
            return -1;
        }
        Rect rect2 = new Rect();
        if (!recyclerView.getGlobalVisibleRect(rect2)) {
            return -1;
        }
        Point point = new Point(rect2.centerX(), rect2.centerY());
        return rect.contains(point.x, point.y) ? iFindFirstVisibleItemPosition : iFindLastVisibleItemPosition;
    }
}
