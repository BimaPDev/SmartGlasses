package com.uniden.rtach.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;
import androidx.databinding.Bindable;
import androidx.databinding.DataBindingUtil;
import androidx.databinding.ViewDataBinding;
import com.uniden.rtach.C2074R;
import com.uniden.rtach.data.model.BluetoothDeviceModel;

/* JADX INFO: loaded from: classes2.dex */
public abstract class ItemBleListBinding extends ViewDataBinding {
    public final TextView btnConnect;

    @Bindable
    protected BluetoothDeviceModel mItemChapter;
    public final TextView txtBleName;

    public BluetoothDeviceModel getItemChapter() {
        return this.mItemChapter;
    }

    public abstract void setItemChapter(BluetoothDeviceModel bluetoothDeviceModel);

    protected ItemBleListBinding(Object obj, View view, int i, TextView textView, TextView textView2) {
        super(obj, view, i);
        this.btnConnect = textView;
        this.txtBleName = textView2;
    }

    public static ItemBleListBinding inflate(LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z) {
        return inflate(layoutInflater, viewGroup, z, DataBindingUtil.getDefaultComponent());
    }

    @Deprecated
    public static ItemBleListBinding inflate(LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z, Object obj) {
        return (ItemBleListBinding) ViewDataBinding.inflateInternal(layoutInflater, C2074R.layout.item_ble_list, viewGroup, z, obj);
    }

    public static ItemBleListBinding inflate(LayoutInflater layoutInflater) {
        return inflate(layoutInflater, DataBindingUtil.getDefaultComponent());
    }

    @Deprecated
    public static ItemBleListBinding inflate(LayoutInflater layoutInflater, Object obj) {
        return (ItemBleListBinding) ViewDataBinding.inflateInternal(layoutInflater, C2074R.layout.item_ble_list, null, false, obj);
    }

    public static ItemBleListBinding bind(View view) {
        return bind(view, DataBindingUtil.getDefaultComponent());
    }

    @Deprecated
    public static ItemBleListBinding bind(View view, Object obj) {
        return (ItemBleListBinding) bind(obj, view, C2074R.layout.item_ble_list);
    }
}
