package com.uniden.rtach.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import android.widget.TextView;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.databinding.Bindable;
import androidx.databinding.DataBindingUtil;
import androidx.databinding.ViewDataBinding;
import androidx.drawerlayout.widget.DrawerLayout;
import androidx.recyclerview.widget.RecyclerView;
import com.google.android.material.navigation.NavigationView;
import com.uniden.rtach.C2074R;
import com.uniden.rtach.viewmodel.DashboardViewModel;

/* JADX INFO: loaded from: classes2.dex */
public abstract class ActivityDashboardBinding extends ViewDataBinding {
    public final AppBarDashboardBinding appBarDashboard;
    public final TextView btnDisconnect;
    public final DrawerLayout drawerLayout;
    public final ImageView imgBack;
    public final ConstraintLayout llDeviceName;

    @Bindable
    protected DashboardViewModel mViewModel;
    public final FrameLayout myFragmentFrame;
    public final NavigationView navView;
    public final RecyclerView recyclerviewDrawerMenu;
    public final RelativeLayout rl2;
    public final TextView textView2;
    public final TextView txtBleName;
    public final TextView txtMenu;

    public DashboardViewModel getViewModel() {
        return this.mViewModel;
    }

    public abstract void setViewModel(DashboardViewModel dashboardViewModel);

    protected ActivityDashboardBinding(Object obj, View view, int i, AppBarDashboardBinding appBarDashboardBinding, TextView textView, DrawerLayout drawerLayout, ImageView imageView, ConstraintLayout constraintLayout, FrameLayout frameLayout, NavigationView navigationView, RecyclerView recyclerView, RelativeLayout relativeLayout, TextView textView2, TextView textView3, TextView textView4) {
        super(obj, view, i);
        this.appBarDashboard = appBarDashboardBinding;
        this.btnDisconnect = textView;
        this.drawerLayout = drawerLayout;
        this.imgBack = imageView;
        this.llDeviceName = constraintLayout;
        this.myFragmentFrame = frameLayout;
        this.navView = navigationView;
        this.recyclerviewDrawerMenu = recyclerView;
        this.rl2 = relativeLayout;
        this.textView2 = textView2;
        this.txtBleName = textView3;
        this.txtMenu = textView4;
    }

    public static ActivityDashboardBinding inflate(LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z) {
        return inflate(layoutInflater, viewGroup, z, DataBindingUtil.getDefaultComponent());
    }

    @Deprecated
    public static ActivityDashboardBinding inflate(LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z, Object obj) {
        return (ActivityDashboardBinding) ViewDataBinding.inflateInternal(layoutInflater, C2074R.layout.activity_dashboard, viewGroup, z, obj);
    }

    public static ActivityDashboardBinding inflate(LayoutInflater layoutInflater) {
        return inflate(layoutInflater, DataBindingUtil.getDefaultComponent());
    }

    @Deprecated
    public static ActivityDashboardBinding inflate(LayoutInflater layoutInflater, Object obj) {
        return (ActivityDashboardBinding) ViewDataBinding.inflateInternal(layoutInflater, C2074R.layout.activity_dashboard, null, false, obj);
    }

    public static ActivityDashboardBinding bind(View view) {
        return bind(view, DataBindingUtil.getDefaultComponent());
    }

    @Deprecated
    public static ActivityDashboardBinding bind(View view, Object obj) {
        return (ActivityDashboardBinding) bind(obj, view, C2074R.layout.activity_dashboard);
    }
}
