package com.uniden.rtach.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AutoCompleteTextView;
import android.widget.EditText;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.viewbinding.ViewBinding;
import androidx.viewbinding.ViewBindings;
import com.google.android.material.textfield.TextInputLayout;
import com.uniden.rtach.C2074R;

/* JADX INFO: loaded from: classes2.dex */
public final class ActivityWifiSettingBinding implements ViewBinding {
    public final ConstraintLayout appBarButton;
    public final ImageView btnBack;
    public final TextView btnUpdate;
    public final TextInputLayout dropdownWiFi;
    public final EditText edtPassword;
    public final ImageView imgInfo;
    public final ImageView imgWife;
    public final LinearLayout llPassword;
    public final LinearLayout llSsid;
    public final LinearLayout parentLayout;
    private final FrameLayout rootView;
    public final AutoCompleteTextView selectedSSID;
    public final TextView txtApDetail;
    public final TextView txtAppBarTitle;
    public final TextView txtConnectedWifi;

    @Override // androidx.viewbinding.ViewBinding
    public FrameLayout getRoot() {
        return this.rootView;
    }

    private ActivityWifiSettingBinding(FrameLayout frameLayout, ConstraintLayout constraintLayout, ImageView imageView, TextView textView, TextInputLayout textInputLayout, EditText editText, ImageView imageView2, ImageView imageView3, LinearLayout linearLayout, LinearLayout linearLayout2, LinearLayout linearLayout3, AutoCompleteTextView autoCompleteTextView, TextView textView2, TextView textView3, TextView textView4) {
        this.rootView = frameLayout;
        this.appBarButton = constraintLayout;
        this.btnBack = imageView;
        this.btnUpdate = textView;
        this.dropdownWiFi = textInputLayout;
        this.edtPassword = editText;
        this.imgInfo = imageView2;
        this.imgWife = imageView3;
        this.llPassword = linearLayout;
        this.llSsid = linearLayout2;
        this.parentLayout = linearLayout3;
        this.selectedSSID = autoCompleteTextView;
        this.txtApDetail = textView2;
        this.txtAppBarTitle = textView3;
        this.txtConnectedWifi = textView4;
    }

    public static ActivityWifiSettingBinding inflate(LayoutInflater layoutInflater) {
        return inflate(layoutInflater, null, false);
    }

    public static ActivityWifiSettingBinding inflate(LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z) {
        View viewInflate = layoutInflater.inflate(C2074R.layout.activity_wifi_setting, viewGroup, false);
        if (z) {
            viewGroup.addView(viewInflate);
        }
        return bind(viewInflate);
    }

    public static ActivityWifiSettingBinding bind(View view) {
        int i = C2074R.id.appBarButton;
        ConstraintLayout constraintLayout = (ConstraintLayout) ViewBindings.findChildViewById(view, i);
        if (constraintLayout != null) {
            i = C2074R.id.btn_back;
            ImageView imageView = (ImageView) ViewBindings.findChildViewById(view, i);
            if (imageView != null) {
                i = C2074R.id.btn_update;
                TextView textView = (TextView) ViewBindings.findChildViewById(view, i);
                if (textView != null) {
                    i = C2074R.id.dropdownWiFi;
                    TextInputLayout textInputLayout = (TextInputLayout) ViewBindings.findChildViewById(view, i);
                    if (textInputLayout != null) {
                        i = C2074R.id.edtPassword;
                        EditText editText = (EditText) ViewBindings.findChildViewById(view, i);
                        if (editText != null) {
                            i = C2074R.id.imgInfo;
                            ImageView imageView2 = (ImageView) ViewBindings.findChildViewById(view, i);
                            if (imageView2 != null) {
                                i = C2074R.id.imgWife;
                                ImageView imageView3 = (ImageView) ViewBindings.findChildViewById(view, i);
                                if (imageView3 != null) {
                                    i = C2074R.id.llPassword;
                                    LinearLayout linearLayout = (LinearLayout) ViewBindings.findChildViewById(view, i);
                                    if (linearLayout != null) {
                                        i = C2074R.id.ll_ssid;
                                        LinearLayout linearLayout2 = (LinearLayout) ViewBindings.findChildViewById(view, i);
                                        if (linearLayout2 != null) {
                                            i = C2074R.id.parentLayout;
                                            LinearLayout linearLayout3 = (LinearLayout) ViewBindings.findChildViewById(view, i);
                                            if (linearLayout3 != null) {
                                                i = C2074R.id.selectedSSID;
                                                AutoCompleteTextView autoCompleteTextView = (AutoCompleteTextView) ViewBindings.findChildViewById(view, i);
                                                if (autoCompleteTextView != null) {
                                                    i = C2074R.id.txtApDetail;
                                                    TextView textView2 = (TextView) ViewBindings.findChildViewById(view, i);
                                                    if (textView2 != null) {
                                                        i = C2074R.id.txtAppBarTitle;
                                                        TextView textView3 = (TextView) ViewBindings.findChildViewById(view, i);
                                                        if (textView3 != null) {
                                                            i = C2074R.id.txtConnectedWifi;
                                                            TextView textView4 = (TextView) ViewBindings.findChildViewById(view, i);
                                                            if (textView4 != null) {
                                                                return new ActivityWifiSettingBinding((FrameLayout) view, constraintLayout, imageView, textView, textInputLayout, editText, imageView2, imageView3, linearLayout, linearLayout2, linearLayout3, autoCompleteTextView, textView2, textView3, textView4);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
