package com.uniden.rtach.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;
import androidx.viewbinding.ViewBinding;
import com.uniden.rtach.C2074R;

/* JADX INFO: loaded from: classes2.dex */
public final class DropdownMenuBinding implements ViewBinding {
    private final TextView rootView;
    public final TextView textView;

    @Override // androidx.viewbinding.ViewBinding
    public TextView getRoot() {
        return this.rootView;
    }

    private DropdownMenuBinding(TextView textView, TextView textView2) {
        this.rootView = textView;
        this.textView = textView2;
    }

    public static DropdownMenuBinding inflate(LayoutInflater layoutInflater) {
        return inflate(layoutInflater, null, false);
    }

    public static DropdownMenuBinding inflate(LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z) {
        View viewInflate = layoutInflater.inflate(C2074R.layout.dropdown_menu, viewGroup, false);
        if (z) {
            viewGroup.addView(viewInflate);
        }
        return bind(viewInflate);
    }

    public static DropdownMenuBinding bind(View view) {
        if (view == null) {
            throw new NullPointerException("rootView");
        }
        TextView textView = (TextView) view;
        return new DropdownMenuBinding(textView, textView);
    }
}
