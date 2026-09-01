package com.uniden.rtach.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.viewbinding.ViewBinding;
import androidx.viewbinding.ViewBindings;
import com.uniden.rtach.C2074R;

/* JADX INFO: loaded from: classes2.dex */
public final class UserInfoWindowBinding implements ViewBinding {
    public final TextView btnDeleteUserMarkerPosition;
    public final ImageView imgMarkerIcon;
    public final LinearLayout llAlertNameSpeed;
    private final ConstraintLayout rootView;
    public final TextView txtMarkerType;

    @Override // androidx.viewbinding.ViewBinding
    public ConstraintLayout getRoot() {
        return this.rootView;
    }

    private UserInfoWindowBinding(ConstraintLayout constraintLayout, TextView textView, ImageView imageView, LinearLayout linearLayout, TextView textView2) {
        this.rootView = constraintLayout;
        this.btnDeleteUserMarkerPosition = textView;
        this.imgMarkerIcon = imageView;
        this.llAlertNameSpeed = linearLayout;
        this.txtMarkerType = textView2;
    }

    public static UserInfoWindowBinding inflate(LayoutInflater layoutInflater) {
        return inflate(layoutInflater, null, false);
    }

    public static UserInfoWindowBinding inflate(LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z) {
        View viewInflate = layoutInflater.inflate(C2074R.layout.user_info_window, viewGroup, false);
        if (z) {
            viewGroup.addView(viewInflate);
        }
        return bind(viewInflate);
    }

    public static UserInfoWindowBinding bind(View view) {
        int i = C2074R.id.btnDeleteUserMarkerPosition;
        TextView textView = (TextView) ViewBindings.findChildViewById(view, i);
        if (textView != null) {
            i = C2074R.id.imgMarkerIcon;
            ImageView imageView = (ImageView) ViewBindings.findChildViewById(view, i);
            if (imageView != null) {
                i = C2074R.id.llAlertNameSpeed;
                LinearLayout linearLayout = (LinearLayout) ViewBindings.findChildViewById(view, i);
                if (linearLayout != null) {
                    i = C2074R.id.txtMarkerType;
                    TextView textView2 = (TextView) ViewBindings.findChildViewById(view, i);
                    if (textView2 != null) {
                        return new UserInfoWindowBinding((ConstraintLayout) view, textView, imageView, linearLayout, textView2);
                    }
                }
            }
        }
        throw new NullPointerException("Missing required view with ID: ".concat(view.getResources().getResourceName(i)));
    }
}
