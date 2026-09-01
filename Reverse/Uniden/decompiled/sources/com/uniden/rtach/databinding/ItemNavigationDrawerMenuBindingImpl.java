package com.uniden.rtach.databinding;

import android.graphics.drawable.Drawable;
import android.util.SparseIntArray;
import android.view.View;
import android.widget.ImageView;
import android.widget.TextView;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.databinding.DataBindingComponent;
import androidx.databinding.ViewDataBinding;
import androidx.databinding.adapters.TextViewBindingAdapter;
import androidx.databinding.adapters.ViewBindingAdapter;
import com.uniden.rtach.C2074R;
import com.uniden.rtach.data.model.NavigationMenuModel;

/* JADX INFO: loaded from: classes2.dex */
public class ItemNavigationDrawerMenuBindingImpl extends ItemNavigationDrawerMenuBinding {
    private static final ViewDataBinding.IncludedLayouts sIncludes = null;
    private static final SparseIntArray sViewsWithIds;
    private long mDirtyFlags;
    private final ConstraintLayout mboundView0;
    private final TextView mboundView2;

    @Override // androidx.databinding.ViewDataBinding
    protected boolean onFieldChange(int i, Object obj, int i2) {
        return false;
    }

    static {
        SparseIntArray sparseIntArray = new SparseIntArray();
        sViewsWithIds = sparseIntArray;
        sparseIntArray.put(C2074R.id.updateWarning, 3);
    }

    public ItemNavigationDrawerMenuBindingImpl(DataBindingComponent dataBindingComponent, View view) {
        this(dataBindingComponent, view, mapBindings(dataBindingComponent, view, 4, sIncludes, sViewsWithIds));
    }

    private ItemNavigationDrawerMenuBindingImpl(DataBindingComponent dataBindingComponent, View view, Object[] objArr) {
        super(dataBindingComponent, view, 0, (ImageView) objArr[1], (ImageView) objArr[3]);
        this.mDirtyFlags = -1L;
        this.imageView.setTag(null);
        ConstraintLayout constraintLayout = (ConstraintLayout) objArr[0];
        this.mboundView0 = constraintLayout;
        constraintLayout.setTag(null);
        TextView textView = (TextView) objArr[2];
        this.mboundView2 = textView;
        textView.setTag(null);
        setRootTag(view);
        invalidateAll();
    }

    @Override // androidx.databinding.ViewDataBinding
    public void invalidateAll() {
        synchronized (this) {
            this.mDirtyFlags = 2L;
        }
        requestRebind();
    }

    @Override // androidx.databinding.ViewDataBinding
    public boolean hasPendingBindings() {
        synchronized (this) {
            return this.mDirtyFlags != 0;
        }
    }

    @Override // androidx.databinding.ViewDataBinding
    public boolean setVariable(int i, Object obj) {
        if (23 != i) {
            return false;
        }
        setItemMenu((NavigationMenuModel) obj);
        return true;
    }

    @Override // com.uniden.rtach.databinding.ItemNavigationDrawerMenuBinding
    public void setItemMenu(NavigationMenuModel navigationMenuModel) {
        this.mItemMenu = navigationMenuModel;
        synchronized (this) {
            this.mDirtyFlags |= 1;
        }
        notifyPropertyChanged(23);
        super.requestRebind();
    }

    @Override // androidx.databinding.ViewDataBinding
    protected void executeBindings() {
        long j;
        String title;
        int icon;
        synchronized (this) {
            j = this.mDirtyFlags;
            this.mDirtyFlags = 0L;
        }
        NavigationMenuModel navigationMenuModel = this.mItemMenu;
        long j2 = j & 3;
        Drawable drawable = null;
        if (j2 != 0) {
            if (navigationMenuModel != null) {
                icon = navigationMenuModel.getIcon();
                title = navigationMenuModel.getTitle();
            } else {
                title = null;
                icon = 0;
            }
            drawable = getRoot().getContext().getDrawable(icon);
        } else {
            title = null;
        }
        if (j2 != 0) {
            ViewBindingAdapter.setBackground(this.imageView, drawable);
            TextViewBindingAdapter.setText(this.mboundView2, title);
        }
    }
}
