package com.uniden.rtach.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.databinding.Bindable;
import androidx.databinding.DataBindingUtil;
import androidx.databinding.ViewDataBinding;
import androidx.recyclerview.widget.RecyclerView;
import com.uniden.rtach.C2074R;
import com.uniden.rtach.viewmodel.SettingMenuItemViewModel;

/* JADX INFO: loaded from: classes2.dex */
public abstract class ActivitySettingMenuBinding extends ViewDataBinding {
    public final ConstraintLayout appBarButton;
    public final ImageView btnBack;
    public final TextView categoryText;
    public final LinearLayout itemListLayout;

    @Bindable
    protected SettingMenuItemViewModel mViewModel;
    public final LinearLayout menuModeButtonLayout;
    public final RecyclerView recyclerviewRadarSetting;
    public final TextView txtAppBarTitle;
    public final TextView txtBasic;
    public final TextView txtExpert;

    public SettingMenuItemViewModel getViewModel() {
        return this.mViewModel;
    }

    public abstract void setViewModel(SettingMenuItemViewModel settingMenuItemViewModel);

    protected ActivitySettingMenuBinding(Object obj, View view, int i, ConstraintLayout constraintLayout, ImageView imageView, TextView textView, LinearLayout linearLayout, LinearLayout linearLayout2, RecyclerView recyclerView, TextView textView2, TextView textView3, TextView textView4) {
        super(obj, view, i);
        this.appBarButton = constraintLayout;
        this.btnBack = imageView;
        this.categoryText = textView;
        this.itemListLayout = linearLayout;
        this.menuModeButtonLayout = linearLayout2;
        this.recyclerviewRadarSetting = recyclerView;
        this.txtAppBarTitle = textView2;
        this.txtBasic = textView3;
        this.txtExpert = textView4;
    }

    public static ActivitySettingMenuBinding inflate(LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z) {
        return inflate(layoutInflater, viewGroup, z, DataBindingUtil.getDefaultComponent());
    }

    @Deprecated
    public static ActivitySettingMenuBinding inflate(LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z, Object obj) {
        return (ActivitySettingMenuBinding) ViewDataBinding.inflateInternal(layoutInflater, C2074R.layout.activity_setting_menu, viewGroup, z, obj);
    }

    public static ActivitySettingMenuBinding inflate(LayoutInflater layoutInflater) {
        return inflate(layoutInflater, DataBindingUtil.getDefaultComponent());
    }

    @Deprecated
    public static ActivitySettingMenuBinding inflate(LayoutInflater layoutInflater, Object obj) {
        return (ActivitySettingMenuBinding) ViewDataBinding.inflateInternal(layoutInflater, C2074R.layout.activity_setting_menu, null, false, obj);
    }

    public static ActivitySettingMenuBinding bind(View view) {
        return bind(view, DataBindingUtil.getDefaultComponent());
    }

    @Deprecated
    public static ActivitySettingMenuBinding bind(View view, Object obj) {
        return (ActivitySettingMenuBinding) bind(obj, view, C2074R.layout.activity_setting_menu);
    }
}
