package com.uniden.rtach.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.RadioButton;
import androidx.databinding.Bindable;
import androidx.databinding.DataBindingUtil;
import androidx.databinding.ViewDataBinding;
import com.uniden.rtach.C2074R;

/* JADX INFO: loaded from: classes2.dex */
public abstract class ItemSettingBinding extends ViewDataBinding {

    @Bindable
    protected String mItemName;
    public final RadioButton radioButton;

    public String getItemName() {
        return this.mItemName;
    }

    public abstract void setItemName(String str);

    protected ItemSettingBinding(Object obj, View view, int i, RadioButton radioButton) {
        super(obj, view, i);
        this.radioButton = radioButton;
    }

    public static ItemSettingBinding inflate(LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z) {
        return inflate(layoutInflater, viewGroup, z, DataBindingUtil.getDefaultComponent());
    }

    @Deprecated
    public static ItemSettingBinding inflate(LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z, Object obj) {
        return (ItemSettingBinding) ViewDataBinding.inflateInternal(layoutInflater, C2074R.layout.item_setting, viewGroup, z, obj);
    }

    public static ItemSettingBinding inflate(LayoutInflater layoutInflater) {
        return inflate(layoutInflater, DataBindingUtil.getDefaultComponent());
    }

    @Deprecated
    public static ItemSettingBinding inflate(LayoutInflater layoutInflater, Object obj) {
        return (ItemSettingBinding) ViewDataBinding.inflateInternal(layoutInflater, C2074R.layout.item_setting, null, false, obj);
    }

    public static ItemSettingBinding bind(View view) {
        return bind(view, DataBindingUtil.getDefaultComponent());
    }

    @Deprecated
    public static ItemSettingBinding bind(View view, Object obj) {
        return (ItemSettingBinding) bind(obj, view, C2074R.layout.item_setting);
    }
}
