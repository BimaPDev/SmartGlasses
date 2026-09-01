package com.uniden.rtach.viewmodel;

import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.lifecycle.MutableLiveData;
import androidx.lifecycle.ViewModel;
import javax.inject.Inject;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: SettingMenuItemViewModel.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0010\u000b\n\u0002\b\u0005\b\u0007\u0018\u00002\u00020\u0001B\t\b\u0007¢\u0006\u0004\b\u0002\u0010\u0003R\u0017\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0004\u0010\u0007R \u0010\b\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\b\u0010\u0007\"\u0004\b\t\u0010\n¨\u0006\u000b"}, m491d2 = {"Lcom/uniden/rtach/viewmodel/SettingMenuItemViewModel;", "Landroidx/lifecycle/ViewModel;", "<init>", "()V", "isSettingsAvailable", "Landroidx/lifecycle/MutableLiveData;", "", "()Landroidx/lifecycle/MutableLiveData;", "isBasicMode", "setBasicMode", "(Landroidx/lifecycle/MutableLiveData;)V", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class SettingMenuItemViewModel extends ViewModel {
    private final MutableLiveData<Boolean> isSettingsAvailable = new MutableLiveData<>(false);
    private MutableLiveData<Boolean> isBasicMode = new MutableLiveData<>(false);

    public final MutableLiveData<Boolean> isBasicMode() {
        return this.isBasicMode;
    }

    public final MutableLiveData<Boolean> isSettingsAvailable() {
        return this.isSettingsAvailable;
    }

    public final void setBasicMode(MutableLiveData<Boolean> mutableLiveData) {
        Intrinsics.checkNotNullParameter(mutableLiveData, "<set-?>");
        this.isBasicMode = mutableLiveData;
    }

    @Inject
    public SettingMenuItemViewModel() {
    }
}
