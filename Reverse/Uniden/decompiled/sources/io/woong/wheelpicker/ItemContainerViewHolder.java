package io.woong.wheelpicker;

import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.core.view.ViewCompat;
import androidx.exifinterface.media.ExifInterface;
import androidx.recyclerview.widget.RecyclerView;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: ItemContainerViewHolder.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0006\u0018\u0000 \u000b*\b\b\u0000\u0010\u0001*\u00020\u00022\u00020\u0003:\u0001\u000bB\u0017\b\u0002\u0012\u0006\u0010\u0004\u001a\u00020\u0002\u0012\u0006\u0010\u0005\u001a\u00020\u0006¢\u0006\u0002\u0010\u0007J\u000f\u0010\b\u001a\u00028\u0000H\u0000¢\u0006\u0004\b\t\u0010\nR\u000e\u0010\u0005\u001a\u00020\u0006X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\f"}, m491d2 = {"Lio/woong/wheelpicker/ItemContainerViewHolder;", ExifInterface.GPS_MEASUREMENT_INTERRUPTED, "Landroid/view/View;", "Landroidx/recyclerview/widget/RecyclerView$ViewHolder;", "containerView", "itemViewId", "", "(Landroid/view/View;I)V", "getItemView", "getItemView$wheelpicker_release", "()Landroid/view/View;", "Companion", "wheelpicker_release"}, m492k = 1, m493mv = {1, 7, 1}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class ItemContainerViewHolder<V extends View> extends RecyclerView.ViewHolder {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private final int itemViewId;

    public /* synthetic */ ItemContainerViewHolder(View view, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this(view, i);
    }

    private ItemContainerViewHolder(View view, int i) {
        super(view);
        this.itemViewId = i;
    }

    public final V getItemView$wheelpicker_release() {
        V v = (V) this.itemView.findViewById(this.itemViewId);
        Intrinsics.checkNotNullExpressionValue(v, "itemView.findViewById(itemViewId)");
        return v;
    }

    /* JADX INFO: compiled from: ItemContainerViewHolder.kt */
    @Metadata(m490d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J5\u0010\u0003\u001a\b\u0012\u0004\u0012\u0002H\u00050\u0004\"\b\b\u0001\u0010\u0005*\u00020\u00062\u0006\u0010\u0007\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\u00062\u0006\u0010\n\u001a\u00020\u000bH\u0000¢\u0006\u0002\b\f¨\u0006\r"}, m491d2 = {"Lio/woong/wheelpicker/ItemContainerViewHolder$Companion;", "", "()V", "create", "Lio/woong/wheelpicker/ItemContainerViewHolder;", ExifInterface.GPS_MEASUREMENT_INTERRUPTED, "Landroid/view/View;", "parent", "Landroid/view/ViewGroup;", "itemView", "itemHeight", "", "create$wheelpicker_release", "wheelpicker_release"}, m492k = 1, m493mv = {1, 7, 1}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final <V extends View> ItemContainerViewHolder<V> create$wheelpicker_release(ViewGroup parent, View itemView, int itemHeight) {
            Intrinsics.checkNotNullParameter(parent, "parent");
            Intrinsics.checkNotNullParameter(itemView, "itemView");
            FrameLayout frameLayout = new FrameLayout(parent.getContext());
            frameLayout.setLayoutParams(new FrameLayout.LayoutParams(-1, itemHeight));
            itemView.setId(ViewCompat.generateViewId());
            frameLayout.addView(itemView);
            return new ItemContainerViewHolder<>(frameLayout, itemView.getId(), null);
        }
    }
}
