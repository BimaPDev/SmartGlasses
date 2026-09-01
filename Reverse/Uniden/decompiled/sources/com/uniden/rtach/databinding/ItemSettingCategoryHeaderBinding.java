package com.uniden.rtach.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;
import androidx.databinding.Bindable;
import androidx.databinding.DataBindingUtil;
import androidx.databinding.ViewDataBinding;
import com.uniden.rtach.C2074R;
import com.uniden.rtach.data.model.RadarSettingsTitleModel;

/* JADX INFO: loaded from: classes2.dex */
public abstract class ItemSettingCategoryHeaderBinding extends ViewDataBinding {
    public final TextView categoryText;

    @Bindable
    protected RadarSettingsTitleModel mItemRadarTitle;

    public RadarSettingsTitleModel getItemRadarTitle() {
        return this.mItemRadarTitle;
    }

    public abstract void setItemRadarTitle(RadarSettingsTitleModel radarSettingsTitleModel);

    protected ItemSettingCategoryHeaderBinding(Object obj, View view, int i, TextView textView) {
        super(obj, view, i);
        this.categoryText = textView;
    }

    public static ItemSettingCategoryHeaderBinding inflate(LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z) {
        return inflate(layoutInflater, viewGroup, z, DataBindingUtil.getDefaultComponent());
    }

    @Deprecated
    public static ItemSettingCategoryHeaderBinding inflate(LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z, Object obj) {
        return (ItemSettingCategoryHeaderBinding) ViewDataBinding.inflateInternal(layoutInflater, C2074R.layout.item_setting_category_header, viewGroup, z, obj);
    }

    public static ItemSettingCategoryHeaderBinding inflate(LayoutInflater layoutInflater) {
        return inflate(layoutInflater, DataBindingUtil.getDefaultComponent());
    }

    @Deprecated
    public static ItemSettingCategoryHeaderBinding inflate(LayoutInflater layoutInflater, Object obj) {
        return (ItemSettingCategoryHeaderBinding) ViewDataBinding.inflateInternal(layoutInflater, C2074R.layout.item_setting_category_header, null, false, obj);
    }

    public static ItemSettingCategoryHeaderBinding bind(View view) {
        return bind(view, DataBindingUtil.getDefaultComponent());
    }

    @Deprecated
    public static ItemSettingCategoryHeaderBinding bind(View view, Object obj) {
        return (ItemSettingCategoryHeaderBinding) bind(obj, view, C2074R.layout.item_setting_category_header);
    }
}
