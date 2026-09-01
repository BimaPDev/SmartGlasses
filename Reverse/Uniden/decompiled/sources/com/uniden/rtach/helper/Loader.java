package com.uniden.rtach.helper;

import android.app.Activity;
import android.graphics.drawable.ColorDrawable;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.widget.ProgressBar;
import androidx.appcompat.app.AlertDialog;
import androidx.constraintlayout.widget.ConstraintLayout;
import com.airbnb.lottie.LottieAnimationView;
import com.uniden.rtach.C2074R;
import com.uniden.rtach.databinding.LoaderDialogBinding;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: Loader.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0005\u0018\u00002\u00020\u0001B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\u0006\u0010\f\u001a\u00020\rJ\u0006\u0010\u000e\u001a\u00020\rJ\u0006\u0010\u000f\u001a\u00020\rR\u0010\u0010\b\u001a\u0004\u0018\u00010\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\n\u001a\u0004\u0018\u00010\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u0011\u0010\u0010\u001a\u00020\u00058F¢\u0006\u0006\u001a\u0004\b\u0010\u0010\u0011¨\u0006\u0012"}, m491d2 = {"Lcom/uniden/rtach/helper/Loader;", "", "activity", "Landroid/app/Activity;", "cancelable", "", "<init>", "(Landroid/app/Activity;Z)V", "alertDialog", "Landroidx/appcompat/app/AlertDialog;", "binding", "Lcom/uniden/rtach/databinding/LoaderDialogBinding;", "show", "", "showAnim", "dismiss", "isShowing", "()Z", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class Loader {
    private final AlertDialog alertDialog;
    private final LoaderDialogBinding binding;

    public Loader(Activity activity, boolean z) {
        Intrinsics.checkNotNullParameter(activity, "activity");
        AlertDialog.Builder builder = new AlertDialog.Builder(activity);
        LayoutInflater layoutInflater = activity.getLayoutInflater();
        Intrinsics.checkNotNullExpressionValue(layoutInflater, "getLayoutInflater(...)");
        View viewInflate = layoutInflater.inflate(C2074R.layout.loader_dialog, (ViewGroup) null);
        Intrinsics.checkNotNullExpressionValue(viewInflate, "inflate(...)");
        this.binding = LoaderDialogBinding.bind(viewInflate);
        builder.setView(viewInflate);
        AlertDialog alertDialogCreate = builder.create();
        this.alertDialog = alertDialogCreate;
        Window window = alertDialogCreate.getWindow();
        Intrinsics.checkNotNull(window);
        window.setBackgroundDrawable(new ColorDrawable(0));
        alertDialogCreate.setCancelable(z);
    }

    public final void show() {
        LottieAnimationView lottieAnimationView;
        ProgressBar progressBar;
        AlertDialog alertDialog = this.alertDialog;
        if (alertDialog == null || alertDialog.isShowing()) {
            return;
        }
        LoaderDialogBinding loaderDialogBinding = this.binding;
        if (loaderDialogBinding != null && (progressBar = loaderDialogBinding.progress) != null) {
            progressBar.setVisibility(0);
        }
        LoaderDialogBinding loaderDialogBinding2 = this.binding;
        if (loaderDialogBinding2 != null && (lottieAnimationView = loaderDialogBinding2.connectionAnimation) != null) {
            lottieAnimationView.setVisibility(8);
        }
        this.alertDialog.show();
    }

    public final void showAnim() {
        ProgressBar progressBar;
        LottieAnimationView lottieAnimationView;
        try {
            AlertDialog alertDialog = this.alertDialog;
            if (alertDialog == null || alertDialog.isShowing()) {
                return;
            }
            LoaderDialogBinding loaderDialogBinding = this.binding;
            if (loaderDialogBinding != null && (lottieAnimationView = loaderDialogBinding.connectionAnimation) != null) {
                lottieAnimationView.setVisibility(0);
            }
            LoaderDialogBinding loaderDialogBinding2 = this.binding;
            if (loaderDialogBinding2 != null && (progressBar = loaderDialogBinding2.progress) != null) {
                progressBar.setVisibility(8);
            }
            this.alertDialog.show();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public final void dismiss() {
        AlertDialog alertDialog = this.alertDialog;
        if (alertDialog == null || !alertDialog.isShowing()) {
            return;
        }
        try {
            this.alertDialog.dismiss();
        } catch (IllegalArgumentException e) {
            e.printStackTrace();
        }
    }

    public final boolean isShowing() {
        AlertDialog alertDialog = this.alertDialog;
        return alertDialog != null && alertDialog.isShowing();
    }
}
