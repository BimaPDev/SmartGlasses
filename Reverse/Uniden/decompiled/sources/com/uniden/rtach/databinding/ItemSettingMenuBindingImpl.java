package com.uniden.rtach.databinding;

import android.util.SparseIntArray;
import android.view.View;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.NumberPicker;
import android.widget.RelativeLayout;
import android.widget.TextView;
import androidx.appcompat.widget.SwitchCompat;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.databinding.DataBindingComponent;
import androidx.databinding.ViewDataBinding;
import com.uniden.rtach.C2074R;
import com.uniden.rtach.data.model.RadarSettingsModel;

/* JADX INFO: loaded from: classes2.dex */
public class ItemSettingMenuBindingImpl extends ItemSettingMenuBinding {
    private static final ViewDataBinding.IncludedLayouts sIncludes = null;
    private static final SparseIntArray sViewsWithIds;
    private long mDirtyFlags;
    private final ConstraintLayout mboundView0;

    @Override // androidx.databinding.ViewDataBinding
    protected boolean onFieldChange(int i, Object obj, int i2) {
        return false;
    }

    static {
        SparseIntArray sparseIntArray = new SparseIntArray();
        sViewsWithIds = sparseIntArray;
        sparseIntArray.put(C2074R.id.main_item, 1);
        sparseIntArray.put(C2074R.id.txt_ble_name, 2);
        sparseIntArray.put(C2074R.id.llSwitchView, 3);
        sparseIntArray.put(C2074R.id.llDataSublist, 4);
        sparseIntArray.put(C2074R.id.txtNameValue, 5);
        sparseIntArray.put(C2074R.id.switchSetting, 6);
        sparseIntArray.put(C2074R.id.btnDropDown, 7);
        sparseIntArray.put(C2074R.id.arrowImage, 8);
        sparseIntArray.put(C2074R.id.llItemSettingChange, 9);
        sparseIntArray.put(C2074R.id.selectedText, 10);
        sparseIntArray.put(C2074R.id.rl_picker, 11);
        sparseIntArray.put(C2074R.id.relativeLayout, 12);
        sparseIntArray.put(C2074R.id.itemSettingPicker, 13);
        sparseIntArray.put(C2074R.id.txtSetItem, 14);
        sparseIntArray.put(C2074R.id.imgButton, 15);
    }

    public ItemSettingMenuBindingImpl(DataBindingComponent dataBindingComponent, View view) {
        this(dataBindingComponent, view, mapBindings(dataBindingComponent, view, 16, sIncludes, sViewsWithIds));
    }

    private ItemSettingMenuBindingImpl(DataBindingComponent dataBindingComponent, View view, Object[] objArr) {
        super(dataBindingComponent, view, 0, (ImageView) objArr[8], (ConstraintLayout) objArr[7], (ImageView) objArr[15], (NumberPicker) objArr[13], (LinearLayout) objArr[4], (LinearLayout) objArr[9], (LinearLayout) objArr[3], (ConstraintLayout) objArr[1], (RelativeLayout) objArr[12], (ConstraintLayout) objArr[11], (TextView) objArr[10], (SwitchCompat) objArr[6], (TextView) objArr[2], (TextView) objArr[5], (TextView) objArr[14]);
        this.mDirtyFlags = -1L;
        ConstraintLayout constraintLayout = (ConstraintLayout) objArr[0];
        this.mboundView0 = constraintLayout;
        constraintLayout.setTag(null);
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
        if (25 != i) {
            return false;
        }
        setItemRadarSetting((RadarSettingsModel) obj);
        return true;
    }

    @Override // com.uniden.rtach.databinding.ItemSettingMenuBinding
    public void setItemRadarSetting(RadarSettingsModel radarSettingsModel) {
        this.mItemRadarSetting = radarSettingsModel;
    }

    @Override // androidx.databinding.ViewDataBinding
    protected void executeBindings() {
        synchronized (this) {
            this.mDirtyFlags = 0L;
        }
    }
}
