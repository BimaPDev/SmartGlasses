package com.uniden.rtach.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;
import androidx.databinding.DataBindingUtil;
import androidx.databinding.ViewDataBinding;
import com.uniden.rtach.C2074R;

/* JADX INFO: loaded from: classes2.dex */
public abstract class ItemBandAlertBinding extends ViewDataBinding {
    public final ImageView imgBandRSSILevel;
    public final ImageView imgDirection;
    public final TextView textAlertType;

    protected ItemBandAlertBinding(Object obj, View view, int i, ImageView imageView, ImageView imageView2, TextView textView) {
        super(obj, view, i);
        this.imgBandRSSILevel = imageView;
        this.imgDirection = imageView2;
        this.textAlertType = textView;
    }

    public static ItemBandAlertBinding inflate(LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z) {
        return inflate(layoutInflater, viewGroup, z, DataBindingUtil.getDefaultComponent());
    }

    @Deprecated
    public static ItemBandAlertBinding inflate(LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z, Object obj) {
        return (ItemBandAlertBinding) ViewDataBinding.inflateInternal(layoutInflater, C2074R.layout.item_band_alert, viewGroup, z, obj);
    }

    public static ItemBandAlertBinding inflate(LayoutInflater layoutInflater) {
        return inflate(layoutInflater, DataBindingUtil.getDefaultComponent());
    }

    @Deprecated
    public static ItemBandAlertBinding inflate(LayoutInflater layoutInflater, Object obj) {
        return (ItemBandAlertBinding) ViewDataBinding.inflateInternal(layoutInflater, C2074R.layout.item_band_alert, null, false, obj);
    }

    public static ItemBandAlertBinding bind(View view) {
        return bind(view, DataBindingUtil.getDefaultComponent());
    }

    @Deprecated
    public static ItemBandAlertBinding bind(View view, Object obj) {
        return (ItemBandAlertBinding) bind(obj, view, C2074R.layout.item_band_alert);
    }
}
