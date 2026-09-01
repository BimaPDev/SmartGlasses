package com.uniden.rtach.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ProgressBar;
import android.widget.RelativeLayout;
import androidx.viewbinding.ViewBinding;
import androidx.viewbinding.ViewBindings;
import com.airbnb.lottie.LottieAnimationView;
import com.uniden.rtach.C2074R;

/* JADX INFO: loaded from: classes2.dex */
public final class LoaderDialogBinding implements ViewBinding {
    public final LottieAnimationView connectionAnimation;
    public final ProgressBar progress;
    private final RelativeLayout rootView;

    @Override // androidx.viewbinding.ViewBinding
    public RelativeLayout getRoot() {
        return this.rootView;
    }

    private LoaderDialogBinding(RelativeLayout relativeLayout, LottieAnimationView lottieAnimationView, ProgressBar progressBar) {
        this.rootView = relativeLayout;
        this.connectionAnimation = lottieAnimationView;
        this.progress = progressBar;
    }

    public static LoaderDialogBinding inflate(LayoutInflater layoutInflater) {
        return inflate(layoutInflater, null, false);
    }

    public static LoaderDialogBinding inflate(LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z) {
        View viewInflate = layoutInflater.inflate(C2074R.layout.loader_dialog, viewGroup, false);
        if (z) {
            viewGroup.addView(viewInflate);
        }
        return bind(viewInflate);
    }

    public static LoaderDialogBinding bind(View view) {
        int i = C2074R.id.connectionAnimation;
        LottieAnimationView lottieAnimationView = (LottieAnimationView) ViewBindings.findChildViewById(view, i);
        if (lottieAnimationView != null) {
            i = C2074R.id.progress;
            ProgressBar progressBar = (ProgressBar) ViewBindings.findChildViewById(view, i);
            if (progressBar != null) {
                return new LoaderDialogBinding((RelativeLayout) view, lottieAnimationView, progressBar);
            }
        }
        throw new NullPointerException("Missing required view with ID: ".concat(view.getResources().getResourceName(i)));
    }
}
