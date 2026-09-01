package com.uniden.rtach.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import androidx.databinding.Bindable;
import androidx.databinding.DataBindingUtil;
import androidx.databinding.ViewDataBinding;
import androidx.recyclerview.widget.RecyclerView;
import androidx.swiperefreshlayout.widget.SwipeRefreshLayout;
import com.uniden.rtach.C2074R;
import com.uniden.rtach.viewmodel.BleDeviceListViewModel;

/* JADX INFO: loaded from: classes2.dex */
public abstract class ActivityBleDeviceListBinding extends ViewDataBinding {
    public final AppBarBinding appBar;
    public final ImageView btnRefresh;
    public final LinearLayout llNoDevices;

    @Bindable
    protected BleDeviceListViewModel mViewModel;
    public final RecyclerView recyclerviewDevice;
    public final SwipeRefreshLayout swiperefresh;
    public final TextView textView2;
    public final TextView txtListOfDevice;

    public BleDeviceListViewModel getViewModel() {
        return this.mViewModel;
    }

    public abstract void setViewModel(BleDeviceListViewModel bleDeviceListViewModel);

    protected ActivityBleDeviceListBinding(Object obj, View view, int i, AppBarBinding appBarBinding, ImageView imageView, LinearLayout linearLayout, RecyclerView recyclerView, SwipeRefreshLayout swipeRefreshLayout, TextView textView, TextView textView2) {
        super(obj, view, i);
        this.appBar = appBarBinding;
        this.btnRefresh = imageView;
        this.llNoDevices = linearLayout;
        this.recyclerviewDevice = recyclerView;
        this.swiperefresh = swipeRefreshLayout;
        this.textView2 = textView;
        this.txtListOfDevice = textView2;
    }

    public static ActivityBleDeviceListBinding inflate(LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z) {
        return inflate(layoutInflater, viewGroup, z, DataBindingUtil.getDefaultComponent());
    }

    @Deprecated
    public static ActivityBleDeviceListBinding inflate(LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z, Object obj) {
        return (ActivityBleDeviceListBinding) ViewDataBinding.inflateInternal(layoutInflater, C2074R.layout.activity_ble_device_list, viewGroup, z, obj);
    }

    public static ActivityBleDeviceListBinding inflate(LayoutInflater layoutInflater) {
        return inflate(layoutInflater, DataBindingUtil.getDefaultComponent());
    }

    @Deprecated
    public static ActivityBleDeviceListBinding inflate(LayoutInflater layoutInflater, Object obj) {
        return (ActivityBleDeviceListBinding) ViewDataBinding.inflateInternal(layoutInflater, C2074R.layout.activity_ble_device_list, null, false, obj);
    }

    public static ActivityBleDeviceListBinding bind(View view) {
        return bind(view, DataBindingUtil.getDefaultComponent());
    }

    @Deprecated
    public static ActivityBleDeviceListBinding bind(View view, Object obj) {
        return (ActivityBleDeviceListBinding) bind(obj, view, C2074R.layout.activity_ble_device_list);
    }
}
