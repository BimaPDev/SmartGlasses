package androidx.lifecycle;

import android.app.Application;
import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentActivity;

/* JADX INFO: loaded from: classes.dex */
@Deprecated
public class ViewModelProviders {
    @Deprecated
    public ViewModelProviders() {
    }

    @Deprecated
    /* JADX INFO: renamed from: of */
    public static ViewModelProvider m58of(Fragment fragment) {
        return new ViewModelProvider(fragment);
    }

    @Deprecated
    /* JADX INFO: renamed from: of */
    public static ViewModelProvider m60of(FragmentActivity fragmentActivity) {
        return new ViewModelProvider(fragmentActivity);
    }

    @Deprecated
    /* JADX INFO: renamed from: of */
    public static ViewModelProvider m59of(Fragment fragment, ViewModelProvider.Factory factory) {
        if (factory == null) {
            factory = fragment.getDefaultViewModelProviderFactory();
        }
        return new ViewModelProvider(fragment.getViewModelStore(), factory);
    }

    @Deprecated
    /* JADX INFO: renamed from: of */
    public static ViewModelProvider m61of(FragmentActivity fragmentActivity, ViewModelProvider.Factory factory) {
        if (factory == null) {
            factory = fragmentActivity.getDefaultViewModelProviderFactory();
        }
        return new ViewModelProvider(fragmentActivity.getViewModelStore(), factory);
    }

    @Deprecated
    public static class DefaultFactory extends ViewModelProvider.AndroidViewModelFactory {
        @Deprecated
        public DefaultFactory(Application application) {
            super(application);
        }
    }
}
