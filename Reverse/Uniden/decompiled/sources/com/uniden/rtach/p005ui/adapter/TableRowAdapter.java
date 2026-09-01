package com.uniden.rtach.p005ui.adapter;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.recyclerview.widget.RecyclerView;
import com.uniden.rtach.C2074R;
import com.uniden.rtach.data.model.RadarVersionModel;
import com.uniden.rtach.databinding.TableRowLayoutBinding;
import java.util.ArrayList;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: TableRowAdapter.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0004\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001:\u0001\u0013B\u001f\u0012\u0016\u0010\u0003\u001a\u0012\u0012\u0004\u0012\u00020\u00050\u0006j\b\u0012\u0004\u0012\u00020\u0005`\u0004¢\u0006\u0004\b\u0007\u0010\bJ\u0018\u0010\n\u001a\u00020\u00022\u0006\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u000eH\u0016J\u0018\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u00022\u0006\u0010\r\u001a\u00020\u000eH\u0016J\b\u0010\u0012\u001a\u00020\u000eH\u0016R \u0010\u0003\u001a\u0012\u0012\u0004\u0012\u00020\u00050\u0006j\b\u0012\u0004\u0012\u00020\u0005`\u0004X\u0082\u000e¢\u0006\u0004\n\u0002\u0010\t¨\u0006\u0014"}, m491d2 = {"Lcom/uniden/rtach/ui/adapter/TableRowAdapter;", "Landroidx/recyclerview/widget/RecyclerView$Adapter;", "Lcom/uniden/rtach/ui/adapter/TableRowAdapter$ViewHolder;", "userArrayList", "Lkotlin/collections/ArrayList;", "Lcom/uniden/rtach/data/model/RadarVersionModel;", "Ljava/util/ArrayList;", "<init>", "(Ljava/util/ArrayList;)V", "Ljava/util/ArrayList;", "onCreateViewHolder", "viewGroup", "Landroid/view/ViewGroup;", "i", "", "onBindViewHolder", "", "viewHolder", "getItemCount", "ViewHolder", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class TableRowAdapter extends RecyclerView.Adapter<ViewHolder> {
    private ArrayList<RadarVersionModel> userArrayList;

    public TableRowAdapter(ArrayList<RadarVersionModel> userArrayList) {
        Intrinsics.checkNotNullParameter(userArrayList, "userArrayList");
        this.userArrayList = userArrayList;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public ViewHolder onCreateViewHolder(ViewGroup viewGroup, int i) {
        Intrinsics.checkNotNullParameter(viewGroup, "viewGroup");
        View viewInflate = LayoutInflater.from(viewGroup.getContext()).inflate(C2074R.layout.table_row_layout, viewGroup, false);
        Intrinsics.checkNotNullExpressionValue(viewInflate, "inflate(...)");
        return new ViewHolder(viewInflate);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public void onBindViewHolder(ViewHolder viewHolder, int i) {
        Intrinsics.checkNotNullParameter(viewHolder, "viewHolder");
        viewHolder.getBinding().tvElement.setText(this.userArrayList.get(i).getElementName().toString());
        String strValueOf = String.valueOf(this.userArrayList.get(i).getCurrentVersion());
        String strValueOf2 = String.valueOf(this.userArrayList.get(i).getLatestVersion());
        TextView textView = viewHolder.getBinding().tvCurrentVersion;
        if (Intrinsics.areEqual(strValueOf, "0") || Intrinsics.areEqual(strValueOf, "999")) {
            strValueOf = "---";
        }
        textView.setText(strValueOf);
        TextView textView2 = viewHolder.getBinding().tvLatestVersion;
        if (Intrinsics.areEqual(strValueOf2, "0") || Intrinsics.areEqual(strValueOf2, "999")) {
            strValueOf2 = "---";
        }
        textView2.setText(strValueOf2);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public int getItemCount() {
        return this.userArrayList.size();
    }

    /* JADX INFO: compiled from: TableRowAdapter.kt */
    @Metadata(m490d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005R\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\t¨\u0006\n"}, m491d2 = {"Lcom/uniden/rtach/ui/adapter/TableRowAdapter$ViewHolder;", "Landroidx/recyclerview/widget/RecyclerView$ViewHolder;", "itemView", "Landroid/view/View;", "<init>", "(Landroid/view/View;)V", "binding", "Lcom/uniden/rtach/databinding/TableRowLayoutBinding;", "getBinding", "()Lcom/uniden/rtach/databinding/TableRowLayoutBinding;", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    public static final class ViewHolder extends RecyclerView.ViewHolder {
        private final TableRowLayoutBinding binding;

        public final TableRowLayoutBinding getBinding() {
            return this.binding;
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public ViewHolder(View itemView) {
            super(itemView);
            Intrinsics.checkNotNullParameter(itemView, "itemView");
            TableRowLayoutBinding tableRowLayoutBindingBind = TableRowLayoutBinding.bind(itemView);
            Intrinsics.checkNotNullExpressionValue(tableRowLayoutBindingBind, "bind(...)");
            this.binding = tableRowLayoutBindingBind;
        }
    }
}
