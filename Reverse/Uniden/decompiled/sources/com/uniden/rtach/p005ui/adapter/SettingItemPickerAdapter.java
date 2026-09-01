package com.uniden.rtach.p005ui.adapter;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;
import androidx.constraintlayout.widget.ConstraintLayout;
import com.uniden.rtach.C2074R;
import io.woong.wheelpicker.ValuePickerAdapter;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: SettingItemPickerAdapter.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\u0018\u00002\u000e\u0012\u0004\u0012\u00020\u0002\u0012\u0004\u0012\u00020\u00030\u0001B\u0007¢\u0006\u0004\b\u0004\u0010\u0005J\u0010\u0010\u0006\u001a\u00020\u00032\u0006\u0010\u0007\u001a\u00020\bH\u0016J\u0018\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\u00032\u0006\u0010\f\u001a\u00020\rH\u0016¨\u0006\u000e"}, m491d2 = {"Lcom/uniden/rtach/ui/adapter/SettingItemPickerAdapter;", "Lio/woong/wheelpicker/ValuePickerAdapter;", "", "Landroid/view/View;", "<init>", "()V", "createItemView", "parent", "Landroid/view/ViewGroup;", "bindItemView", "", "itemView", "position", "", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class SettingItemPickerAdapter extends ValuePickerAdapter<String, View> {
    @Override // io.woong.wheelpicker.ValuePickerAdapter
    public View createItemView(ViewGroup parent) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        View viewInflate = LayoutInflater.from(parent.getContext()).inflate(C2074R.layout.item_setting_menu_wheel, parent, false);
        Intrinsics.checkNotNullExpressionValue(viewInflate, "inflate(...)");
        return viewInflate;
    }

    @Override // io.woong.wheelpicker.ValuePickerAdapter
    public void bindItemView(View itemView, int position) {
        Intrinsics.checkNotNullParameter(itemView, "itemView");
        ((TextView) itemView.findViewById(C2074R.id.txtSettingName)).setText(getValue(position).toString());
    }
}
