package androidx.lifecycle;

import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentActivity;

/* JADX INFO: loaded from: classes.dex */
@Deprecated
public class ViewModelStores {
    private ViewModelStores() {
    }

    @Deprecated
    /* JADX INFO: renamed from: of */
    public static ViewModelStore m63of(FragmentActivity fragmentActivity) {
        return fragmentActivity.getViewModelStore();
    }

    @Deprecated
    /* JADX INFO: renamed from: of */
    public static ViewModelStore m62of(Fragment fragment) {
        return fragment.getViewModelStore();
    }
}
