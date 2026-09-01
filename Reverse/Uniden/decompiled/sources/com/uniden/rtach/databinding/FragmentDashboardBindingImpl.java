package com.uniden.rtach.databinding;

import android.util.SparseIntArray;
import android.view.View;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.databinding.DataBindingComponent;
import androidx.databinding.ViewDataBinding;
import androidx.databinding.adapters.TextViewBindingAdapter;
import androidx.lifecycle.MutableLiveData;
import com.uniden.rtach.C2074R;
import com.uniden.rtach.helper.GaugeView;
import com.uniden.rtach.viewmodel.DashboardViewModel;

/* JADX INFO: loaded from: classes2.dex */
public class FragmentDashboardBindingImpl extends FragmentDashboardBinding {
    private static final ViewDataBinding.IncludedLayouts sIncludes = null;
    private static final SparseIntArray sViewsWithIds;
    private long mDirtyFlags;
    private final ConstraintLayout mboundView0;

    static {
        SparseIntArray sparseIntArray = new SparseIntArray();
        sViewsWithIds = sparseIntArray;
        sparseIntArray.put(C2074R.id.appBarButton, 4);
        sparseIntArray.put(C2074R.id.imgSpeedometer, 5);
        sparseIntArray.put(C2074R.id.bg_speedometer, 6);
        sparseIntArray.put(C2074R.id.cs_bottom, 7);
        sparseIntArray.put(C2074R.id.layoutMode, 8);
        sparseIntArray.put(C2074R.id.textView, 9);
        sparseIntArray.put(C2074R.id.arrow, 10);
        sparseIntArray.put(C2074R.id.llAlAndBattery, 11);
    }

    public FragmentDashboardBindingImpl(DataBindingComponent dataBindingComponent, View view) {
        this(dataBindingComponent, view, mapBindings(dataBindingComponent, view, 12, sIncludes, sViewsWithIds));
    }

    private FragmentDashboardBindingImpl(DataBindingComponent dataBindingComponent, View view, Object[] objArr) {
        super(dataBindingComponent, view, 3, (ConstraintLayout) objArr[4], (ImageView) objArr[10], (ImageView) objArr[6], (ConstraintLayout) objArr[7], (GaugeView) objArr[5], (ConstraintLayout) objArr[8], (LinearLayout) objArr[11], (TextView) objArr[9], (TextView) objArr[2], (TextView) objArr[1], (TextView) objArr[3]);
        this.mDirtyFlags = -1L;
        ConstraintLayout constraintLayout = (ConstraintLayout) objArr[0];
        this.mboundView0 = constraintLayout;
        constraintLayout.setTag(null);
        this.txtDistance.setTag(null);
        this.txtMode.setTag(null);
        this.txtVolt.setTag(null);
        setRootTag(view);
        invalidateAll();
    }

    @Override // androidx.databinding.ViewDataBinding
    public void invalidateAll() {
        synchronized (this) {
            this.mDirtyFlags = 16L;
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
        setViewModel((DashboardViewModel) obj);
        return true;
    }

    @Override // com.uniden.rtach.databinding.FragmentDashboardBinding
    public void setViewModel(DashboardViewModel dashboardViewModel) {
        this.mViewModel = dashboardViewModel;
        synchronized (this) {
            this.mDirtyFlags |= 8;
        }
        notifyPropertyChanged(34);
        super.requestRebind();
    }

    @Override // androidx.databinding.ViewDataBinding
    protected boolean onFieldChange(int i, Object obj, int i2) {
        if (i == 0) {
            return onChangeViewModelVolt((MutableLiveData) obj, i2);
        }
        if (i == 1) {
            return onChangeViewModelModeType((MutableLiveData) obj, i2);
        }
        if (i != 2) {
            return false;
        }
        return onChangeViewModelAltitude((MutableLiveData) obj, i2);
    }

    private boolean onChangeViewModelVolt(MutableLiveData<String> mutableLiveData, int i) {
        if (i != 0) {
            return false;
        }
        synchronized (this) {
            this.mDirtyFlags |= 1;
        }
        return true;
    }

    private boolean onChangeViewModelModeType(MutableLiveData<String> mutableLiveData, int i) {
        if (i != 0) {
            return false;
        }
        synchronized (this) {
            this.mDirtyFlags |= 2;
        }
        return true;
    }

    private boolean onChangeViewModelAltitude(MutableLiveData<String> mutableLiveData, int i) {
        if (i != 0) {
            return false;
        }
        synchronized (this) {
            this.mDirtyFlags |= 4;
        }
        return true;
    }

    /* JADX WARN: Code duplicated, block: B:16:0x0035  */
    /* JADX WARN: Code duplicated, block: B:25:0x0051  */
    @Override // androidx.databinding.ViewDataBinding
    protected void executeBindings() {
        long j;
        String value;
        String value2;
        synchronized (this) {
            j = this.mDirtyFlags;
            this.mDirtyFlags = 0L;
        }
        DashboardViewModel dashboardViewModel = this.mViewModel;
        String value3 = null;
        if ((31 & j) != 0) {
            if ((j & 25) == 0) {
                value = null;
            } else {
                MutableLiveData<String> volt = dashboardViewModel != null ? dashboardViewModel.getVolt() : null;
                updateLiveDataRegistration(0, volt);
                if (volt != null) {
                    value = volt.getValue();
                } else {
                    value = null;
                }
            }
            if ((j & 26) == 0) {
                value2 = null;
            } else {
                MutableLiveData<String> mutableLiveData = dashboardViewModel != null ? dashboardViewModel.get_modeType() : null;
                updateLiveDataRegistration(1, mutableLiveData);
                if (mutableLiveData != null) {
                    value2 = mutableLiveData.getValue();
                } else {
                    value2 = null;
                }
            }
            if ((j & 28) != 0) {
                MutableLiveData<String> altitude = dashboardViewModel != null ? dashboardViewModel.getAltitude() : null;
                updateLiveDataRegistration(2, altitude);
                if (altitude != null) {
                    value3 = altitude.getValue();
                }
            }
        } else {
            value = null;
            value2 = null;
        }
        if ((28 & j) != 0) {
            TextViewBindingAdapter.setText(this.txtDistance, value3);
        }
        if ((26 & j) != 0) {
            TextViewBindingAdapter.setText(this.txtMode, value2);
        }
        if ((j & 25) != 0) {
            TextViewBindingAdapter.setText(this.txtVolt, value);
        }
    }
}
