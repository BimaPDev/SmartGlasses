package com.uniden.rtach.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import androidx.databinding.Bindable;
import androidx.databinding.DataBindingUtil;
import androidx.databinding.ViewDataBinding;
import com.uniden.rtach.C2074R;
import com.uniden.rtach.viewmodel.DashboardViewModel;

/* JADX INFO: loaded from: classes2.dex */
public abstract class FragmentMapsBinding extends ViewDataBinding {

    @Bindable
    protected DashboardViewModel mViewModel;

    public DashboardViewModel getViewModel() {
        return this.mViewModel;
    }

    public abstract void setViewModel(DashboardViewModel dashboardViewModel);

    protected FragmentMapsBinding(Object obj, View view, int i) {
        super(obj, view, i);
    }

    public static FragmentMapsBinding inflate(LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z) {
        return inflate(layoutInflater, viewGroup, z, DataBindingUtil.getDefaultComponent());
    }

    @Deprecated
    public static FragmentMapsBinding inflate(LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z, Object obj) {
        return (FragmentMapsBinding) ViewDataBinding.inflateInternal(layoutInflater, C2074R.layout.fragment_maps, viewGroup, z, obj);
    }

    public static FragmentMapsBinding inflate(LayoutInflater layoutInflater) {
        return inflate(layoutInflater, DataBindingUtil.getDefaultComponent());
    }

    @Deprecated
    public static FragmentMapsBinding inflate(LayoutInflater layoutInflater, Object obj) {
        return (FragmentMapsBinding) ViewDataBinding.inflateInternal(layoutInflater, C2074R.layout.fragment_maps, null, false, obj);
    }

    public static FragmentMapsBinding bind(View view) {
        return bind(view, DataBindingUtil.getDefaultComponent());
    }

    @Deprecated
    public static FragmentMapsBinding bind(View view, Object obj) {
        return (FragmentMapsBinding) bind(obj, view, C2074R.layout.fragment_maps);
    }
}
