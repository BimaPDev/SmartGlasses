package com.uniden.rtach.viewmodel;

import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.lifecycle.MutableLiveData;
import androidx.lifecycle.ViewModel;
import javax.inject.Inject;
import kotlin.Metadata;

/* JADX INFO: compiled from: SharedViewModel.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0010\u000b\n\u0002\b\u0002\b\u0007\u0018\u00002\u00020\u0001B\t\b\u0007¢\u0006\u0004\b\u0002\u0010\u0003R\u0017\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0004\u0010\u0007¨\u0006\b"}, m491d2 = {"Lcom/uniden/rtach/viewmodel/SharedViewModel;", "Landroidx/lifecycle/ViewModel;", "<init>", "()V", "isRequiredPermissionAllowed", "Landroidx/lifecycle/MutableLiveData;", "", "()Landroidx/lifecycle/MutableLiveData;", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class SharedViewModel extends ViewModel {
    private final MutableLiveData<Boolean> isRequiredPermissionAllowed = new MutableLiveData<>();

    public final MutableLiveData<Boolean> isRequiredPermissionAllowed() {
        return this.isRequiredPermissionAllowed;
    }

    @Inject
    public SharedViewModel() {
    }
}
