package com.uniden.rtach.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.LinearLayout;
import android.widget.ProgressBar;
import android.widget.RelativeLayout;
import android.widget.TextView;
import androidx.viewbinding.ViewBinding;
import androidx.viewbinding.ViewBindings;
import com.uniden.rtach.C2074R;

/* JADX INFO: loaded from: classes2.dex */
public final class FirmwareUpdateDialogBinding implements ViewBinding {
    public final LinearLayout btnDone;
    public final TextView header;
    public final LinearLayout llProgress;
    public final ProgressBar progressBar;
    public final TextView progressText;
    private final RelativeLayout rootView;
    public final TextView title;

    @Override // androidx.viewbinding.ViewBinding
    public RelativeLayout getRoot() {
        return this.rootView;
    }

    private FirmwareUpdateDialogBinding(RelativeLayout relativeLayout, LinearLayout linearLayout, TextView textView, LinearLayout linearLayout2, ProgressBar progressBar, TextView textView2, TextView textView3) {
        this.rootView = relativeLayout;
        this.btnDone = linearLayout;
        this.header = textView;
        this.llProgress = linearLayout2;
        this.progressBar = progressBar;
        this.progressText = textView2;
        this.title = textView3;
    }

    public static FirmwareUpdateDialogBinding inflate(LayoutInflater layoutInflater) {
        return inflate(layoutInflater, null, false);
    }

    public static FirmwareUpdateDialogBinding inflate(LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z) {
        View viewInflate = layoutInflater.inflate(C2074R.layout.firmware_update_dialog, viewGroup, false);
        if (z) {
            viewGroup.addView(viewInflate);
        }
        return bind(viewInflate);
    }

    public static FirmwareUpdateDialogBinding bind(View view) {
        int i = C2074R.id.btn_done;
        LinearLayout linearLayout = (LinearLayout) ViewBindings.findChildViewById(view, i);
        if (linearLayout != null) {
            i = C2074R.id.header;
            TextView textView = (TextView) ViewBindings.findChildViewById(view, i);
            if (textView != null) {
                i = C2074R.id.ll_progress;
                LinearLayout linearLayout2 = (LinearLayout) ViewBindings.findChildViewById(view, i);
                if (linearLayout2 != null) {
                    i = C2074R.id.progressBar;
                    ProgressBar progressBar = (ProgressBar) ViewBindings.findChildViewById(view, i);
                    if (progressBar != null) {
                        i = C2074R.id.progressText;
                        TextView textView2 = (TextView) ViewBindings.findChildViewById(view, i);
                        if (textView2 != null) {
                            i = C2074R.id.title;
                            TextView textView3 = (TextView) ViewBindings.findChildViewById(view, i);
                            if (textView3 != null) {
                                return new FirmwareUpdateDialogBinding((RelativeLayout) view, linearLayout, textView, linearLayout2, progressBar, textView2, textView3);
                            }
                        }
                    }
                }
            }
        }
        throw new NullPointerException("Missing required view with ID: ".concat(view.getResources().getResourceName(i)));
    }
}
