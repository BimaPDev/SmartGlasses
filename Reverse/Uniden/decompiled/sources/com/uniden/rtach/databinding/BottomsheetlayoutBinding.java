package com.uniden.rtach.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.LinearLayout;
import android.widget.NumberPicker;
import android.widget.RelativeLayout;
import android.widget.TextView;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.viewbinding.ViewBinding;
import androidx.viewbinding.ViewBindings;
import com.uniden.rtach.C2074R;

/* JADX INFO: loaded from: classes2.dex */
public final class BottomsheetlayoutBinding implements ViewBinding {
    public final NumberPicker itemSettingPicker;
    public final RelativeLayout relativeLayout;
    public final ConstraintLayout rlPicker;
    private final LinearLayout rootView;
    public final TextView txtSetItem;

    @Override // androidx.viewbinding.ViewBinding
    public LinearLayout getRoot() {
        return this.rootView;
    }

    private BottomsheetlayoutBinding(LinearLayout linearLayout, NumberPicker numberPicker, RelativeLayout relativeLayout, ConstraintLayout constraintLayout, TextView textView) {
        this.rootView = linearLayout;
        this.itemSettingPicker = numberPicker;
        this.relativeLayout = relativeLayout;
        this.rlPicker = constraintLayout;
        this.txtSetItem = textView;
    }

    public static BottomsheetlayoutBinding inflate(LayoutInflater layoutInflater) {
        return inflate(layoutInflater, null, false);
    }

    public static BottomsheetlayoutBinding inflate(LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z) {
        View viewInflate = layoutInflater.inflate(C2074R.layout.bottomsheetlayout, viewGroup, false);
        if (z) {
            viewGroup.addView(viewInflate);
        }
        return bind(viewInflate);
    }

    public static BottomsheetlayoutBinding bind(View view) {
        int i = C2074R.id.itemSettingPicker;
        NumberPicker numberPicker = (NumberPicker) ViewBindings.findChildViewById(view, i);
        if (numberPicker != null) {
            i = C2074R.id.relativeLayout;
            RelativeLayout relativeLayout = (RelativeLayout) ViewBindings.findChildViewById(view, i);
            if (relativeLayout != null) {
                i = C2074R.id.rl_picker;
                ConstraintLayout constraintLayout = (ConstraintLayout) ViewBindings.findChildViewById(view, i);
                if (constraintLayout != null) {
                    i = C2074R.id.txtSetItem;
                    TextView textView = (TextView) ViewBindings.findChildViewById(view, i);
                    if (textView != null) {
                        return new BottomsheetlayoutBinding((LinearLayout) view, numberPicker, relativeLayout, constraintLayout, textView);
                    }
                }
            }
        }
        throw new NullPointerException("Missing required view with ID: ".concat(view.getResources().getResourceName(i)));
    }
}
