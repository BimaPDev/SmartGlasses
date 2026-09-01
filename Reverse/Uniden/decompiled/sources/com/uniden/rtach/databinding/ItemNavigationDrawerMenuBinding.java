package com.uniden.rtach.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import androidx.databinding.Bindable;
import androidx.databinding.DataBindingUtil;
import androidx.databinding.ViewDataBinding;
import com.uniden.rtach.C2074R;
import com.uniden.rtach.data.model.NavigationMenuModel;

/* JADX INFO: loaded from: classes2.dex */
public abstract class ItemNavigationDrawerMenuBinding extends ViewDataBinding {
    public final ImageView imageView;

    @Bindable
    protected NavigationMenuModel mItemMenu;
    public final ImageView updateWarning;

    public NavigationMenuModel getItemMenu() {
        return this.mItemMenu;
    }

    public abstract void setItemMenu(NavigationMenuModel navigationMenuModel);

    protected ItemNavigationDrawerMenuBinding(Object obj, View view, int i, ImageView imageView, ImageView imageView2) {
        super(obj, view, i);
        this.imageView = imageView;
        this.updateWarning = imageView2;
    }

    public static ItemNavigationDrawerMenuBinding inflate(LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z) {
        return inflate(layoutInflater, viewGroup, z, DataBindingUtil.getDefaultComponent());
    }

    @Deprecated
    public static ItemNavigationDrawerMenuBinding inflate(LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z, Object obj) {
        return (ItemNavigationDrawerMenuBinding) ViewDataBinding.inflateInternal(layoutInflater, C2074R.layout.item_navigation_drawer_menu, viewGroup, z, obj);
    }

    public static ItemNavigationDrawerMenuBinding inflate(LayoutInflater layoutInflater) {
        return inflate(layoutInflater, DataBindingUtil.getDefaultComponent());
    }

    @Deprecated
    public static ItemNavigationDrawerMenuBinding inflate(LayoutInflater layoutInflater, Object obj) {
        return (ItemNavigationDrawerMenuBinding) ViewDataBinding.inflateInternal(layoutInflater, C2074R.layout.item_navigation_drawer_menu, null, false, obj);
    }

    public static ItemNavigationDrawerMenuBinding bind(View view) {
        return bind(view, DataBindingUtil.getDefaultComponent());
    }

    @Deprecated
    public static ItemNavigationDrawerMenuBinding bind(View view, Object obj) {
        return (ItemNavigationDrawerMenuBinding) bind(obj, view, C2074R.layout.item_navigation_drawer_menu);
    }
}
