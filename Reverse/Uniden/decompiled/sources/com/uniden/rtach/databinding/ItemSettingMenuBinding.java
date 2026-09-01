package com.uniden.rtach.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.NumberPicker;
import android.widget.RelativeLayout;
import android.widget.TextView;
import androidx.appcompat.widget.SwitchCompat;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.databinding.Bindable;
import androidx.databinding.DataBindingUtil;
import androidx.databinding.ViewDataBinding;
import com.uniden.rtach.C2074R;
import com.uniden.rtach.data.model.RadarSettingsModel;

/* JADX INFO: loaded from: classes2.dex */
public abstract class ItemSettingMenuBinding extends ViewDataBinding {
    public final ImageView arrowImage;
    public final ConstraintLayout btnDropDown;
    public final ImageView imgButton;
    public final NumberPicker itemSettingPicker;
    public final LinearLayout llDataSublist;
    public final LinearLayout llItemSettingChange;
    public final LinearLayout llSwitchView;

    @Bindable
    protected RadarSettingsModel mItemRadarSetting;
    public final ConstraintLayout mainItem;
    public final RelativeLayout relativeLayout;
    public final ConstraintLayout rlPicker;
    public final TextView selectedText;
    public final SwitchCompat switchSetting;
    public final TextView txtBleName;
    public final TextView txtNameValue;
    public final TextView txtSetItem;

    public RadarSettingsModel getItemRadarSetting() {
        return this.mItemRadarSetting;
    }

    public abstract void setItemRadarSetting(RadarSettingsModel radarSettingsModel);

    protected ItemSettingMenuBinding(Object obj, View view, int i, ImageView imageView, ConstraintLayout constraintLayout, ImageView imageView2, NumberPicker numberPicker, LinearLayout linearLayout, LinearLayout linearLayout2, LinearLayout linearLayout3, ConstraintLayout constraintLayout2, RelativeLayout relativeLayout, ConstraintLayout constraintLayout3, TextView textView, SwitchCompat switchCompat, TextView textView2, TextView textView3, TextView textView4) {
        super(obj, view, i);
        this.arrowImage = imageView;
        this.btnDropDown = constraintLayout;
        this.imgButton = imageView2;
        this.itemSettingPicker = numberPicker;
        this.llDataSublist = linearLayout;
        this.llItemSettingChange = linearLayout2;
        this.llSwitchView = linearLayout3;
        this.mainItem = constraintLayout2;
        this.relativeLayout = relativeLayout;
        this.rlPicker = constraintLayout3;
        this.selectedText = textView;
        this.switchSetting = switchCompat;
        this.txtBleName = textView2;
        this.txtNameValue = textView3;
        this.txtSetItem = textView4;
    }

    public static ItemSettingMenuBinding inflate(LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z) {
        return inflate(layoutInflater, viewGroup, z, DataBindingUtil.getDefaultComponent());
    }

    @Deprecated
    public static ItemSettingMenuBinding inflate(LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z, Object obj) {
        return (ItemSettingMenuBinding) ViewDataBinding.inflateInternal(layoutInflater, C2074R.layout.item_setting_menu, viewGroup, z, obj);
    }

    public static ItemSettingMenuBinding inflate(LayoutInflater layoutInflater) {
        return inflate(layoutInflater, DataBindingUtil.getDefaultComponent());
    }

    @Deprecated
    public static ItemSettingMenuBinding inflate(LayoutInflater layoutInflater, Object obj) {
        return (ItemSettingMenuBinding) ViewDataBinding.inflateInternal(layoutInflater, C2074R.layout.item_setting_menu, null, false, obj);
    }

    public static ItemSettingMenuBinding bind(View view) {
        return bind(view, DataBindingUtil.getDefaultComponent());
    }

    @Deprecated
    public static ItemSettingMenuBinding bind(View view, Object obj) {
        return (ItemSettingMenuBinding) bind(obj, view, C2074R.layout.item_setting_menu);
    }
}
