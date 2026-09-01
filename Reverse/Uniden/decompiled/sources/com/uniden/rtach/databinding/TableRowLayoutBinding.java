package com.uniden.rtach.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.LinearLayout;
import android.widget.TableLayout;
import android.widget.TextView;
import androidx.viewbinding.ViewBinding;
import androidx.viewbinding.ViewBindings;
import com.uniden.rtach.C2074R;

/* JADX INFO: loaded from: classes2.dex */
public final class TableRowLayoutBinding implements ViewBinding {
    private final LinearLayout rootView;
    public final TableLayout tableHeadingLayout;
    public final TextView tvCurrentVersion;
    public final TextView tvElement;
    public final TextView tvLatestVersion;

    @Override // androidx.viewbinding.ViewBinding
    public LinearLayout getRoot() {
        return this.rootView;
    }

    private TableRowLayoutBinding(LinearLayout linearLayout, TableLayout tableLayout, TextView textView, TextView textView2, TextView textView3) {
        this.rootView = linearLayout;
        this.tableHeadingLayout = tableLayout;
        this.tvCurrentVersion = textView;
        this.tvElement = textView2;
        this.tvLatestVersion = textView3;
    }

    public static TableRowLayoutBinding inflate(LayoutInflater layoutInflater) {
        return inflate(layoutInflater, null, false);
    }

    public static TableRowLayoutBinding inflate(LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z) {
        View viewInflate = layoutInflater.inflate(C2074R.layout.table_row_layout, viewGroup, false);
        if (z) {
            viewGroup.addView(viewInflate);
        }
        return bind(viewInflate);
    }

    public static TableRowLayoutBinding bind(View view) {
        int i = C2074R.id.table_heading_layout;
        TableLayout tableLayout = (TableLayout) ViewBindings.findChildViewById(view, i);
        if (tableLayout != null) {
            i = C2074R.id.tvCurrentVersion;
            TextView textView = (TextView) ViewBindings.findChildViewById(view, i);
            if (textView != null) {
                i = C2074R.id.tvElement;
                TextView textView2 = (TextView) ViewBindings.findChildViewById(view, i);
                if (textView2 != null) {
                    i = C2074R.id.tvLatestVersion;
                    TextView textView3 = (TextView) ViewBindings.findChildViewById(view, i);
                    if (textView3 != null) {
                        return new TableRowLayoutBinding((LinearLayout) view, tableLayout, textView, textView2, textView3);
                    }
                }
            }
        }
        throw new NullPointerException("Missing required view with ID: ".concat(view.getResources().getResourceName(i)));
    }
}
