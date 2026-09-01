package io.woong.wheelpicker;

import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: CyclicPickerRepositionHelper.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0000\u0018\u00002\u00020\u0001B\u0005¢\u0006\u0002\u0010\u0002J\b\u0010\u0005\u001a\u00020\u0006H\u0002J\u0015\u0010\u0007\u001a\u00020\u00062\u0006\u0010\u0003\u001a\u00020\u0004H\u0000¢\u0006\u0002\b\bJ\u0015\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\nH\u0000¢\u0006\u0002\b\fJ\u0018\u0010\r\u001a\u00020\u00062\u0006\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\u0010\u001a\u00020\nH\u0016J\b\u0010\u0011\u001a\u00020\u0006H\u0002R\u0010\u0010\u0003\u001a\u0004\u0018\u00010\u0004X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u0012"}, m491d2 = {"Lio/woong/wheelpicker/CyclicPickerRepositionHelper;", "Landroidx/recyclerview/widget/RecyclerView$OnScrollListener;", "()V", "pickerView", "Lio/woong/wheelpicker/ValuePickerView;", "addListener", "", "attachToPickerView", "attachToPickerView$wheelpicker_release", "findApproximatelyCenterPosition", "", "currentPosition", "findApproximatelyCenterPosition$wheelpicker_release", "onScrollStateChanged", "recyclerView", "Landroidx/recyclerview/widget/RecyclerView;", "newState", "removeListener", "wheelpicker_release"}, m492k = 1, m493mv = {1, 7, 1}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class CyclicPickerRepositionHelper extends RecyclerView.OnScrollListener {
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
    public void onScrollStateChanged(RecyclerView recyclerView, int newState) {
        ValuePickerView valuePickerView;
        int iFindApproximatelyCenterPosition$wheelpicker_release;
        Intrinsics.checkNotNullParameter(recyclerView, "recyclerView");
        if (newState == 0 && (valuePickerView = this.pickerView) != null && valuePickerView.getIsCyclic()) {
            RecyclerView.LayoutManager layoutManager = recyclerView.getLayoutManager();
            Intrinsics.checkNotNull(layoutManager, "null cannot be cast to non-null type androidx.recyclerview.widget.LinearLayoutManager");
            int iFindFirstCompletelyVisibleItemPosition = ((LinearLayoutManager) layoutManager).findFirstCompletelyVisibleItemPosition();
            if (iFindFirstCompletelyVisibleItemPosition == -1 || (iFindApproximatelyCenterPosition$wheelpicker_release = findApproximatelyCenterPosition$wheelpicker_release(iFindFirstCompletelyVisibleItemPosition)) == -1) {
                return;
            }
            valuePickerView.scrollToPosition(iFindApproximatelyCenterPosition$wheelpicker_release);
        }
    }

    public final int findApproximatelyCenterPosition$wheelpicker_release(int currentPosition) {
        if (currentPosition == -1) {
            return -1;
        }
        ValuePickerView valuePickerView = this.pickerView;
        ValuePickerAdapter<?, ?> adapter = valuePickerView != null ? valuePickerView.getAdapter() : null;
        if (adapter == null) {
            return -1;
        }
        int itemCount = adapter.getItemCount();
        int size = adapter.getValues().size();
        return (size * ((itemCount / size) / 2)) + (currentPosition % size);
    }
}
