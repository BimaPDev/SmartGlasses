package com.uniden.rtach.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.LinearLayout;
import android.widget.SeekBar;
import android.widget.TextView;
import androidx.viewbinding.ViewBinding;
import androidx.viewbinding.ViewBindings;
import com.uniden.rtach.C2074R;

/* JADX INFO: loaded from: classes2.dex */
public final class SeekbarDialogBinding implements ViewBinding {
    private final LinearLayout rootView;
    public final SeekBar seekBar;
    public final TextView tvCurrentValue;

    @Override // androidx.viewbinding.ViewBinding
    public LinearLayout getRoot() {
        return this.rootView;
    }

    private SeekbarDialogBinding(LinearLayout linearLayout, SeekBar seekBar, TextView textView) {
        this.rootView = linearLayout;
        this.seekBar = seekBar;
        this.tvCurrentValue = textView;
    }

    public static SeekbarDialogBinding inflate(LayoutInflater layoutInflater) {
        return inflate(layoutInflater, null, false);
    }

    public static SeekbarDialogBinding inflate(LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z) {
        View viewInflate = layoutInflater.inflate(C2074R.layout.seekbar_dialog, viewGroup, false);
        if (z) {
            viewGroup.addView(viewInflate);
        }
        return bind(viewInflate);
    }

    public static SeekbarDialogBinding bind(View view) {
        int i = C2074R.id.seekBar;
        SeekBar seekBar = (SeekBar) ViewBindings.findChildViewById(view, i);
        if (seekBar != null) {
            i = C2074R.id.tvCurrentValue;
            TextView textView = (TextView) ViewBindings.findChildViewById(view, i);
            if (textView != null) {
                return new SeekbarDialogBinding((LinearLayout) view, seekBar, textView);
            }
        }
        throw new NullPointerException("Missing required view with ID: ".concat(view.getResources().getResourceName(i)));
    }
}
