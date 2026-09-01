package com.uniden.rtach.databinding;

import android.content.Context;
import android.graphics.drawable.Drawable;
import android.util.SparseIntArray;
import android.view.View;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import androidx.appcompat.content.res.AppCompatResources;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.databinding.DataBindingComponent;
import androidx.databinding.ViewDataBinding;
import androidx.databinding.adapters.ViewBindingAdapter;
import androidx.lifecycle.MutableLiveData;
import androidx.recyclerview.widget.RecyclerView;
import com.uniden.rtach.C2074R;
import com.uniden.rtach.viewmodel.SettingMenuItemViewModel;

/* JADX INFO: loaded from: classes2.dex */
public class ActivitySettingMenuBindingImpl extends ActivitySettingMenuBinding {
    private static final ViewDataBinding.IncludedLayouts sIncludes = null;
    private static final SparseIntArray sViewsWithIds;
    private long mDirtyFlags;
    private final FrameLayout mboundView0;
    private final LinearLayout mboundView5;

    static {
        SparseIntArray sparseIntArray = new SparseIntArray();
        sViewsWithIds = sparseIntArray;
        sparseIntArray.put(C2074R.id.appBarButton, 6);
        sparseIntArray.put(C2074R.id.btn_back, 7);
        sparseIntArray.put(C2074R.id.txtAppBarTitle, 8);
        sparseIntArray.put(C2074R.id.categoryText, 9);
        sparseIntArray.put(C2074R.id.recyclerviewRadarSetting, 10);
    }

    public ActivitySettingMenuBindingImpl(DataBindingComponent dataBindingComponent, View view) {
        this(dataBindingComponent, view, mapBindings(dataBindingComponent, view, 11, sIncludes, sViewsWithIds));
    }

    private ActivitySettingMenuBindingImpl(DataBindingComponent dataBindingComponent, View view, Object[] objArr) {
        super(dataBindingComponent, view, 2, (ConstraintLayout) objArr[6], (ImageView) objArr[7], (TextView) objArr[9], (LinearLayout) objArr[4], (LinearLayout) objArr[1], (RecyclerView) objArr[10], (TextView) objArr[8], (TextView) objArr[2], (TextView) objArr[3]);
        this.mDirtyFlags = -1L;
        this.itemListLayout.setTag(null);
        FrameLayout frameLayout = (FrameLayout) objArr[0];
        this.mboundView0 = frameLayout;
        frameLayout.setTag(null);
        LinearLayout linearLayout = (LinearLayout) objArr[5];
        this.mboundView5 = linearLayout;
        linearLayout.setTag(null);
        this.menuModeButtonLayout.setTag(null);
        this.txtBasic.setTag(null);
        this.txtExpert.setTag(null);
        setRootTag(view);
        invalidateAll();
    }

    @Override // androidx.databinding.ViewDataBinding
    public void invalidateAll() {
        synchronized (this) {
            this.mDirtyFlags = 8L;
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
        setViewModel((SettingMenuItemViewModel) obj);
        return true;
    }

    @Override // com.uniden.rtach.databinding.ActivitySettingMenuBinding
    public void setViewModel(SettingMenuItemViewModel settingMenuItemViewModel) {
        this.mViewModel = settingMenuItemViewModel;
        synchronized (this) {
            this.mDirtyFlags |= 4;
        }
        notifyPropertyChanged(34);
        super.requestRebind();
    }

    @Override // androidx.databinding.ViewDataBinding
    protected boolean onFieldChange(int i, Object obj, int i2) {
        if (i == 0) {
            return onChangeViewModelIsSettingsAvailable((MutableLiveData) obj, i2);
        }
        if (i != 1) {
            return false;
        }
        return onChangeViewModelIsBasicMode((MutableLiveData) obj, i2);
    }

    private boolean onChangeViewModelIsSettingsAvailable(MutableLiveData<Boolean> mutableLiveData, int i) {
        if (i != 0) {
            return false;
        }
        synchronized (this) {
            this.mDirtyFlags |= 1;
        }
        return true;
    }

    private boolean onChangeViewModelIsBasicMode(MutableLiveData<Boolean> mutableLiveData, int i) {
        if (i != 0) {
            return false;
        }
        synchronized (this) {
            this.mDirtyFlags |= 2;
        }
        return true;
    }

    @Override // androidx.databinding.ViewDataBinding
    protected void executeBindings() {
        long j;
        Drawable drawable;
        int i;
        int i2;
        int i3;
        int i4;
        Context context;
        int i5;
        synchronized (this) {
            j = this.mDirtyFlags;
            this.mDirtyFlags = 0L;
        }
        SettingMenuItemViewModel settingMenuItemViewModel = this.mViewModel;
        Drawable drawable2 = null;
        drawable2 = null;
        int i6 = 0;
        if ((15 & j) != 0) {
            long j2 = j & 13;
            if (j2 != 0) {
                MutableLiveData<Boolean> mutableLiveDataIsSettingsAvailable = settingMenuItemViewModel != null ? settingMenuItemViewModel.isSettingsAvailable() : null;
                updateLiveDataRegistration(0, mutableLiveDataIsSettingsAvailable);
                boolean zSafeUnbox = ViewDataBinding.safeUnbox(mutableLiveDataIsSettingsAvailable != null ? mutableLiveDataIsSettingsAvailable.getValue() : null);
                if (j2 != 0) {
                    j |= zSafeUnbox ? 2080L : 1040L;
                }
                i4 = 8;
                i3 = zSafeUnbox ? 8 : 0;
                if (zSafeUnbox) {
                    i4 = 0;
                }
            } else {
                i4 = 0;
                i3 = 0;
            }
            long j3 = j & 14;
            if (j3 != 0) {
                MutableLiveData<Boolean> mutableLiveDataIsBasicMode = settingMenuItemViewModel != null ? settingMenuItemViewModel.isBasicMode() : null;
                updateLiveDataRegistration(1, mutableLiveDataIsBasicMode);
                boolean zSafeUnbox2 = ViewDataBinding.safeUnbox(mutableLiveDataIsBasicMode != null ? mutableLiveDataIsBasicMode.getValue() : null);
                if (j3 != 0) {
                    j |= zSafeUnbox2 ? 8704L : 4352L;
                }
                int colorFromResource = getColorFromResource(this.txtBasic, zSafeUnbox2 ? C2074R.color.white : C2074R.color.black);
                Drawable drawable3 = AppCompatResources.getDrawable(this.txtBasic.getContext(), zSafeUnbox2 ? C2074R.drawable.bg_dashboard_selected : C2074R.drawable.bg_dashboard_unselected);
                boolean z = !zSafeUnbox2;
                if ((j & 14) != 0) {
                    j |= z ? 32896L : 16448L;
                }
                int colorFromResource2 = getColorFromResource(this.txtExpert, z ? C2074R.color.white : C2074R.color.black);
                if (z) {
                    context = this.txtExpert.getContext();
                    i5 = C2074R.drawable.bg_map_selected;
                } else {
                    context = this.txtExpert.getContext();
                    i5 = C2074R.drawable.bg_map_unselected;
                }
                drawable = AppCompatResources.getDrawable(context, i5);
                i6 = i4;
                i = colorFromResource;
                drawable2 = drawable3;
                i2 = colorFromResource2;
            } else {
                drawable = null;
                i2 = 0;
                i6 = i4;
                i = 0;
            }
        } else {
            drawable = null;
            i = 0;
            i2 = 0;
            i3 = 0;
        }
        if ((13 & j) != 0) {
            this.itemListLayout.setVisibility(i6);
            this.mboundView5.setVisibility(i3);
            this.menuModeButtonLayout.setVisibility(i6);
        }
        if ((j & 14) != 0) {
            ViewBindingAdapter.setBackground(this.txtBasic, drawable2);
            this.txtBasic.setTextColor(i);
            ViewBindingAdapter.setBackground(this.txtExpert, drawable);
            this.txtExpert.setTextColor(i2);
        }
    }
}
