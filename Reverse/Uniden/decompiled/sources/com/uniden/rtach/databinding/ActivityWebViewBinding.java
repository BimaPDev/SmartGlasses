package com.uniden.rtach.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.WebView;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.RelativeLayout;
import android.widget.TextView;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.viewbinding.ViewBinding;
import androidx.viewbinding.ViewBindings;
import com.uniden.rtach.C2074R;

/* JADX INFO: loaded from: classes2.dex */
public final class ActivityWebViewBinding implements ViewBinding {
    public final ConstraintLayout appBarButton;
    public final ImageView btnBack;
    public final LinearLayout llPricypolcyLayout;
    private final RelativeLayout rootView;
    public final TextView textView2;
    public final TextView txtAppBarTitle;
    public final TextView txtPrivacyPolicy;
    public final TextView txtTermsandCondition;
    public final WebView webView;

    @Override // androidx.viewbinding.ViewBinding
    public RelativeLayout getRoot() {
        return this.rootView;
    }

    private ActivityWebViewBinding(RelativeLayout relativeLayout, ConstraintLayout constraintLayout, ImageView imageView, LinearLayout linearLayout, TextView textView, TextView textView2, TextView textView3, TextView textView4, WebView webView) {
        this.rootView = relativeLayout;
        this.appBarButton = constraintLayout;
        this.btnBack = imageView;
        this.llPricypolcyLayout = linearLayout;
        this.textView2 = textView;
        this.txtAppBarTitle = textView2;
        this.txtPrivacyPolicy = textView3;
        this.txtTermsandCondition = textView4;
        this.webView = webView;
    }

    public static ActivityWebViewBinding inflate(LayoutInflater layoutInflater) {
        return inflate(layoutInflater, null, false);
    }

    public static ActivityWebViewBinding inflate(LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z) {
        View viewInflate = layoutInflater.inflate(C2074R.layout.activity_web_view, viewGroup, false);
        if (z) {
            viewGroup.addView(viewInflate);
        }
        return bind(viewInflate);
    }

    public static ActivityWebViewBinding bind(View view) {
        int i = C2074R.id.appBarButton;
        ConstraintLayout constraintLayout = (ConstraintLayout) ViewBindings.findChildViewById(view, i);
        if (constraintLayout != null) {
            i = C2074R.id.btn_back;
            ImageView imageView = (ImageView) ViewBindings.findChildViewById(view, i);
            if (imageView != null) {
                i = C2074R.id.llPricypolcyLayout;
                LinearLayout linearLayout = (LinearLayout) ViewBindings.findChildViewById(view, i);
                if (linearLayout != null) {
                    i = C2074R.id.textView2;
                    TextView textView = (TextView) ViewBindings.findChildViewById(view, i);
                    if (textView != null) {
                        i = C2074R.id.txtAppBarTitle;
                        TextView textView2 = (TextView) ViewBindings.findChildViewById(view, i);
                        if (textView2 != null) {
                            i = C2074R.id.txtPrivacyPolicy;
                            TextView textView3 = (TextView) ViewBindings.findChildViewById(view, i);
                            if (textView3 != null) {
                                i = C2074R.id.txtTermsandCondition;
                                TextView textView4 = (TextView) ViewBindings.findChildViewById(view, i);
                                if (textView4 != null) {
                                    i = C2074R.id.webView;
                                    WebView webView = (WebView) ViewBindings.findChildViewById(view, i);
                                    if (webView != null) {
                                        return new ActivityWebViewBinding((RelativeLayout) view, constraintLayout, imageView, linearLayout, textView, textView2, textView3, textView4, webView);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        throw new NullPointerException("Missing required view with ID: ".concat(view.getResources().getResourceName(i)));
    }
}
