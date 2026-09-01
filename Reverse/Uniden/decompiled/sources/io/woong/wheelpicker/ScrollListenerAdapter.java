package io.woong.wheelpicker;

import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.recyclerview.widget.RecyclerView;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: ScrollListenerAdapter.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010!\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0007\b\u0000\u0018\u00002\u00020\u0001B\u0005¢\u0006\u0002\u0010\u0002J\b\u0010\b\u001a\u00020\tH\u0002J\u0015\u0010\n\u001a\u00020\t2\u0006\u0010\u000b\u001a\u00020\u0005H\u0000¢\u0006\u0002\b\fJ\u0015\u0010\r\u001a\u00020\t2\u0006\u0010\u0006\u001a\u00020\u0007H\u0000¢\u0006\u0002\b\u000eJ\u0018\u0010\u000f\u001a\u00020\t2\u0006\u0010\u0010\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u0013H\u0016J \u0010\u0014\u001a\u00020\t2\u0006\u0010\u0010\u001a\u00020\u00112\u0006\u0010\u0015\u001a\u00020\u00132\u0006\u0010\u0016\u001a\u00020\u0013H\u0016J\b\u0010\u0017\u001a\u00020\tH\u0002J\u0015\u0010\u0018\u001a\u00020\t2\u0006\u0010\u000b\u001a\u00020\u0005H\u0000¢\u0006\u0002\b\u0019R\u0014\u0010\u0003\u001a\b\u0012\u0004\u0012\u00020\u00050\u0004X\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u0006\u001a\u0004\u0018\u00010\u0007X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u001a"}, m491d2 = {"Lio/woong/wheelpicker/ScrollListenerAdapter;", "Landroidx/recyclerview/widget/RecyclerView$OnScrollListener;", "()V", "onScrollListeners", "", "Lio/woong/wheelpicker/ValuePickerView$OnScrollListener;", "pickerView", "Lio/woong/wheelpicker/ValuePickerView;", "addListener", "", "addOnScrollListener", "onScrollListener", "addOnScrollListener$wheelpicker_release", "attachToPickerView", "attachToPickerView$wheelpicker_release", "onScrollStateChanged", "recyclerView", "Landroidx/recyclerview/widget/RecyclerView;", "newState", "", "onScrolled", "dx", "dy", "removeListener", "removeOnScrollListener", "removeOnScrollListener$wheelpicker_release", "wheelpicker_release"}, m492k = 1, m493mv = {1, 7, 1}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class ScrollListenerAdapter extends RecyclerView.OnScrollListener {
    private final List<ValuePickerView.OnScrollListener> onScrollListeners = new ArrayList();
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

    public final void addOnScrollListener$wheelpicker_release(ValuePickerView.OnScrollListener onScrollListener) {
        Intrinsics.checkNotNullParameter(onScrollListener, "onScrollListener");
        this.onScrollListeners.add(onScrollListener);
    }

    public final void removeOnScrollListener$wheelpicker_release(ValuePickerView.OnScrollListener onScrollListener) {
        Intrinsics.checkNotNullParameter(onScrollListener, "onScrollListener");
        this.onScrollListeners.remove(onScrollListener);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.OnScrollListener
    public void onScrollStateChanged(RecyclerView recyclerView, int newState) {
        Intrinsics.checkNotNullParameter(recyclerView, "recyclerView");
        ValuePickerView valuePickerView = this.pickerView;
        if (valuePickerView != null) {
            Iterator<ValuePickerView.OnScrollListener> it = this.onScrollListeners.iterator();
            while (it.hasNext()) {
                it.next().onScrollStateChanged(valuePickerView, newState);
            }
        }
    }

    @Override // androidx.recyclerview.widget.RecyclerView.OnScrollListener
    public void onScrolled(RecyclerView recyclerView, int dx, int dy) {
        Intrinsics.checkNotNullParameter(recyclerView, "recyclerView");
        ValuePickerView valuePickerView = this.pickerView;
        if (valuePickerView != null) {
            Iterator<ValuePickerView.OnScrollListener> it = this.onScrollListeners.iterator();
            while (it.hasNext()) {
                it.next().onScrolled(valuePickerView, dx, dy);
            }
        }
    }
}
