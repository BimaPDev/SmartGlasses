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
import com.uniden.rtach.C2074R;
import com.uniden.rtach.helper.GaugeView;
import com.uniden.rtach.viewmodel.DashboardViewModel;

/* JADX INFO: loaded from: classes2.dex */
public abstract class FragmentDashboardBinding extends ViewDataBinding {
    public final ConstraintLayout appBarButton;
    public final ImageView arrow;
    public final ImageView bgSpeedometer;
    public final ConstraintLayout csBottom;
    public final GaugeView imgSpeedometer;
    public final ConstraintLayout layoutMode;
    public final LinearLayout llAlAndBattery;

    @Bindable
    protected DashboardViewModel mViewModel;
    public final TextView textView;
    public final TextView txtDistance;
    public final TextView txtMode;
    public final TextView txtVolt;

    public DashboardViewModel getViewModel() {
        return this.mViewModel;
    }

    public abstract void setViewModel(DashboardViewModel dashboardViewModel);

    protected FragmentDashboardBinding(Object obj, View view, int i, ConstraintLayout constraintLayout, ImageView imageView, ImageView imageView2, ConstraintLayout constraintLayout2, GaugeView gaugeView, ConstraintLayout constraintLayout3, LinearLayout linearLayout, TextView textView, TextView textView2, TextView textView3, TextView textView4) {
        super(obj, view, i);
        this.appBarButton = constraintLayout;
        this.arrow = imageView;
        this.bgSpeedometer = imageView2;
        this.csBottom = constraintLayout2;
        this.imgSpeedometer = gaugeView;
        this.layoutMode = constraintLayout3;
        this.llAlAndBattery = linearLayout;
        this.textView = textView;
        this.txtDistance = textView2;
        this.txtMode = textView3;
        this.txtVolt = textView4;
    }

    public static FragmentDashboardBinding inflate(LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z) {
        return inflate(layoutInflater, viewGroup, z, DataBindingUtil.getDefaultComponent());
    }

    @Deprecated
    public static FragmentDashboardBinding inflate(LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z, Object obj) {
        return (FragmentDashboardBinding) ViewDataBinding.inflateInternal(layoutInflater, C2074R.layout.fragment_dashboard, viewGroup, z, obj);
    }

    public static FragmentDashboardBinding inflate(LayoutInflater layoutInflater) {
        return inflate(layoutInflater, DataBindingUtil.getDefaultComponent());
    }

    @Deprecated
    public static FragmentDashboardBinding inflate(LayoutInflater layoutInflater, Object obj) {
        return (FragmentDashboardBinding) ViewDataBinding.inflateInternal(layoutInflater, C2074R.layout.fragment_dashboard, null, false, obj);
    }

    public static FragmentDashboardBinding bind(View view) {
        return bind(view, DataBindingUtil.getDefaultComponent());
    }

    @Deprecated
    public static FragmentDashboardBinding bind(View view, Object obj) {
        return (FragmentDashboardBinding) bind(obj, view, C2074R.layout.fragment_dashboard);
    }
}
