package com.uniden.rtach.databinding;

import android.util.SparseIntArray;
import android.view.View;
import android.widget.LinearLayout;
import android.widget.TextView;
import androidx.databinding.DataBindingComponent;
import androidx.databinding.ViewDataBinding;
import androidx.databinding.adapters.TextViewBindingAdapter;
import com.uniden.rtach.data.model.RadarSettingsTitleModel;

/* JADX INFO: loaded from: classes2.dex */
public class ItemSettingCategoryHeaderBindingImpl extends ItemSettingCategoryHeaderBinding {
    private static final ViewDataBinding.IncludedLayouts sIncludes = null;
    private static final SparseIntArray sViewsWithIds = null;
    private long mDirtyFlags;
    private final LinearLayout mboundView0;

    @Override // androidx.databinding.ViewDataBinding
    protected boolean onFieldChange(int i, Object obj, int i2) {
        return false;
    }

    public ItemSettingCategoryHeaderBindingImpl(DataBindingComponent dataBindingComponent, View view) {
        this(dataBindingComponent, view, mapBindings(dataBindingComponent, view, 2, sIncludes, sViewsWithIds));
    }

    private ItemSettingCategoryHeaderBindingImpl(DataBindingComponent dataBindingComponent, View view, Object[] objArr) {
        super(dataBindingComponent, view, 0, (TextView) objArr[1]);
        this.mDirtyFlags = -1L;
        this.categoryText.setTag(null);
        LinearLayout linearLayout = (LinearLayout) objArr[0];
        this.mboundView0 = linearLayout;
        linearLayout.setTag(null);
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
        if (26 != i) {
            return false;
        }
        setItemRadarTitle((RadarSettingsTitleModel) obj);
        return true;
    }

    @Override // com.uniden.rtach.databinding.ItemSettingCategoryHeaderBinding
    public void setItemRadarTitle(RadarSettingsTitleModel radarSettingsTitleModel) {
        this.mItemRadarTitle = radarSettingsTitleModel;
        synchronized (this) {
            this.mDirtyFlags |= 1;
        }
        notifyPropertyChanged(26);
        super.requestRebind();
    }

    @Override // androidx.databinding.ViewDataBinding
    protected void executeBindings() {
        long j;
        synchronized (this) {
            j = this.mDirtyFlags;
            this.mDirtyFlags = 0L;
        }
        RadarSettingsTitleModel radarSettingsTitleModel = this.mItemRadarTitle;
        long j2 = j & 3;
        String title = (j2 == 0 || radarSettingsTitleModel == null) ? null : radarSettingsTitleModel.getTitle();
        if (j2 != 0) {
            TextViewBindingAdapter.setText(this.categoryText, title);
        }
    }
}
