package com.uniden.rtach.databinding;

import android.util.SparseIntArray;
import android.view.View;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.databinding.DataBindingComponent;
import androidx.databinding.ViewDataBinding;
import androidx.recyclerview.widget.RecyclerView;
import androidx.swiperefreshlayout.widget.SwipeRefreshLayout;
import com.uniden.rtach.C2074R;
import com.uniden.rtach.viewmodel.BleDeviceListViewModel;

/* JADX INFO: loaded from: classes2.dex */
public class ActivityBleDeviceListBindingImpl extends ActivityBleDeviceListBinding {
    private static final ViewDataBinding.IncludedLayouts sIncludes = null;
    private static final SparseIntArray sViewsWithIds;
    private long mDirtyFlags;
    private final FrameLayout mboundView0;
    private final ConstraintLayout mboundView1;

    @Override // androidx.databinding.ViewDataBinding
    protected boolean onFieldChange(int i, Object obj, int i2) {
        return false;
    }

    static {
        SparseIntArray sparseIntArray = new SparseIntArray();
        sViewsWithIds = sparseIntArray;
        sparseIntArray.put(C2074R.id.app_bar, 2);
        sparseIntArray.put(C2074R.id.txt_list_of_device, 3);
        sparseIntArray.put(C2074R.id.btn_refresh, 4);
        sparseIntArray.put(C2074R.id.swiperefresh, 5);
        sparseIntArray.put(C2074R.id.recyclerviewDevice, 6);
        sparseIntArray.put(C2074R.id.ll_no_devices, 7);
        sparseIntArray.put(C2074R.id.textView2, 8);
    }

    public ActivityBleDeviceListBindingImpl(DataBindingComponent dataBindingComponent, View view) {
        this(dataBindingComponent, view, mapBindings(dataBindingComponent, view, 9, sIncludes, sViewsWithIds));
    }

    /* JADX WARN: Illegal instructions before constructor call */
    private ActivityBleDeviceListBindingImpl(DataBindingComponent dataBindingComponent, View view, Object[] objArr) {
        Object obj = objArr[2];
        super(dataBindingComponent, view, 0, obj != null ? AppBarBinding.bind((View) obj) : null, (ImageView) objArr[4], (LinearLayout) objArr[7], (RecyclerView) objArr[6], (SwipeRefreshLayout) objArr[5], (TextView) objArr[8], (TextView) objArr[3]);
        this.mDirtyFlags = -1L;
        FrameLayout frameLayout = (FrameLayout) objArr[0];
        this.mboundView0 = frameLayout;
        frameLayout.setTag(null);
        ConstraintLayout constraintLayout = (ConstraintLayout) objArr[1];
        this.mboundView1 = constraintLayout;
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
        if (34 != i) {
            return false;
        }
        setViewModel((BleDeviceListViewModel) obj);
        return true;
    }

    @Override // com.uniden.rtach.databinding.ActivityBleDeviceListBinding
    public void setViewModel(BleDeviceListViewModel bleDeviceListViewModel) {
        this.mViewModel = bleDeviceListViewModel;
    }

    @Override // androidx.databinding.ViewDataBinding
    protected void executeBindings() {
        synchronized (this) {
            this.mDirtyFlags = 0L;
        }
    }
}
