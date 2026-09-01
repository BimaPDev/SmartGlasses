package io.woong.wheelpicker;

import android.view.View;
import android.view.ViewGroup;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.exifinterface.media.ExifInterface;
import androidx.recyclerview.widget.RecyclerView;
import java.util.List;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: ValuePickerAdapter.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000@\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010 \n\u0002\b\u0005\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\n\b&\u0018\u0000*\u0004\b\u0000\u0010\u0001*\b\b\u0001\u0010\u0002*\u00020\u00032\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u0002H\u00020\u00050\u0004B\u0005¢\u0006\u0002\u0010\u0006J\u001d\u0010\u0013\u001a\u00020\u00142\u0006\u0010\u0015\u001a\u00028\u00012\u0006\u0010\u0016\u001a\u00020\u0017H&¢\u0006\u0002\u0010\u0018J\u0015\u0010\u0019\u001a\u00028\u00012\u0006\u0010\u001a\u001a\u00020\u001bH&¢\u0006\u0002\u0010\u001cJ\u0006\u0010\u001d\u001a\u00020\u0017J\u000e\u0010\u001e\u001a\u00020\u00172\u0006\u0010\u0016\u001a\u00020\u0017J\u0013\u0010\u001f\u001a\u00028\u00002\u0006\u0010\u0016\u001a\u00020\u0017¢\u0006\u0002\u0010 J\u001c\u0010!\u001a\u00020\u00142\f\u0010\"\u001a\b\u0012\u0004\u0012\u00028\u00010\u00052\u0006\u0010\u0016\u001a\u00020\u0017J\u001c\u0010#\u001a\b\u0012\u0004\u0012\u00028\u00010\u00052\u0006\u0010\u001a\u001a\u00020\u001b2\u0006\u0010$\u001a\u00020\u0017R\u001c\u0010\u0007\u001a\u0004\u0018\u00010\bX\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\t\u0010\n\"\u0004\b\u000b\u0010\fR \u0010\r\u001a\b\u0012\u0004\u0012\u00028\u00000\u000eX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u000f\u0010\u0010\"\u0004\b\u0011\u0010\u0012¨\u0006%"}, m491d2 = {"Lio/woong/wheelpicker/ValuePickerAdapter;", ExifInterface.GPS_DIRECTION_TRUE, ExifInterface.GPS_MEASUREMENT_INTERRUPTED, "Landroid/view/View;", "Landroidx/recyclerview/widget/RecyclerView$Adapter;", "Lio/woong/wheelpicker/ItemContainerViewHolder;", "()V", "pickerView", "Lio/woong/wheelpicker/ValuePickerView;", "getPickerView$wheelpicker_release", "()Lio/woong/wheelpicker/ValuePickerView;", "setPickerView$wheelpicker_release", "(Lio/woong/wheelpicker/ValuePickerView;)V", "values", "", "getValues", "()Ljava/util/List;", "setValues", "(Ljava/util/List;)V", "bindItemView", "", "itemView", "position", "", "(Landroid/view/View;I)V", "createItemView", "parent", "Landroid/view/ViewGroup;", "(Landroid/view/ViewGroup;)Landroid/view/View;", "getItemCount", "getItemViewType", "getValue", "(I)Ljava/lang/Object;", "onBindViewHolder", "holder", "onCreateViewHolder", "viewType", "wheelpicker_release"}, m492k = 1, m493mv = {1, 7, 1}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public abstract class ValuePickerAdapter<T, V extends View> extends RecyclerView.Adapter<ItemContainerViewHolder<V>> {
    private ValuePickerView pickerView;
    private List<? extends T> values = CollectionsKt.emptyList();

    public abstract void bindItemView(V itemView, int position);

    public abstract V createItemView(ViewGroup parent);

    /* JADX INFO: renamed from: getPickerView$wheelpicker_release, reason: from getter */
    public final ValuePickerView getPickerView() {
        return this.pickerView;
    }

    public final List<T> getValues() {
        return this.values;
    }

    public final void setPickerView$wheelpicker_release(ValuePickerView valuePickerView) {
        this.pickerView = valuePickerView;
    }

    public final void setValues(List<? extends T> list) {
        Intrinsics.checkNotNullParameter(list, "<set-?>");
        this.values = list;
    }

    public final T getValue(int position) {
        List<? extends T> list = this.values;
        return list.get(position % list.size());
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public final int getItemCount() {
        ValuePickerView valuePickerView = this.pickerView;
        if (valuePickerView == null) {
            return 0;
        }
        if (valuePickerView.getIsCyclic()) {
            return Integer.MAX_VALUE;
        }
        return this.values.size();
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public final int getItemViewType(int position) {
        return super.getItemViewType(position);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public final ItemContainerViewHolder<V> onCreateViewHolder(ViewGroup parent, int viewType) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        ValuePickerView valuePickerView = this.pickerView;
        if (valuePickerView == null) {
            throw new IllegalStateException("Impossible");
        }
        return ItemContainerViewHolder.INSTANCE.create$wheelpicker_release(parent, createItemView(parent), valuePickerView.getItemHeight());
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public final void onBindViewHolder(ItemContainerViewHolder<V> holder, int position) {
        Intrinsics.checkNotNullParameter(holder, "holder");
        if (position != -1) {
            bindItemView(holder.getItemView$wheelpicker_release(), position);
        }
    }
}
