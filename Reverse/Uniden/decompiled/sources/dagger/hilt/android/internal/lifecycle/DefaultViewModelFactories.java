package dagger.hilt.android.internal.lifecycle;

import androidx.activity.ComponentActivity;
import androidx.fragment.app.Fragment;
import androidx.lifecycle.ViewModelProvider;
import dagger.Module;
import dagger.hilt.EntryPoints;
import dagger.hilt.android.internal.builders.ViewModelComponentBuilder;
import dagger.hilt.internal.Preconditions;
import dagger.multibindings.Multibinds;
import java.util.Set;
import javax.inject.Inject;

/* JADX INFO: loaded from: classes2.dex */
public final class DefaultViewModelFactories {

    public interface ActivityEntryPoint {
        InternalFactoryFactory getHiltInternalFactoryFactory();
    }

    @Module
    interface ActivityModule {
        @Multibinds
        Set<String> viewModelKeys();
    }

    public interface FragmentEntryPoint {
        InternalFactoryFactory getHiltInternalFactoryFactory();
    }

    public static ViewModelProvider.Factory getActivityFactory(ComponentActivity activity, ViewModelProvider.Factory delegateFactory) {
        return ((ActivityEntryPoint) EntryPoints.get(activity, ActivityEntryPoint.class)).getHiltInternalFactoryFactory().fromActivity(activity, delegateFactory);
    }

    public static ViewModelProvider.Factory getFragmentFactory(Fragment fragment, ViewModelProvider.Factory delegateFactory) {
        return ((FragmentEntryPoint) EntryPoints.get(fragment, FragmentEntryPoint.class)).getHiltInternalFactoryFactory().fromFragment(fragment, delegateFactory);
    }

    public static final class InternalFactoryFactory {
        private final Set<String> keySet;
        private final ViewModelComponentBuilder viewModelComponentBuilder;

        @Inject
        InternalFactoryFactory(Set<String> keySet, ViewModelComponentBuilder viewModelComponentBuilder) {
            this.keySet = keySet;
            this.viewModelComponentBuilder = viewModelComponentBuilder;
        }

        ViewModelProvider.Factory fromActivity(ComponentActivity activity, ViewModelProvider.Factory delegateFactory) {
            return getHiltViewModelFactory(delegateFactory);
        }

        ViewModelProvider.Factory fromFragment(Fragment fragment, ViewModelProvider.Factory delegateFactory) {
            return getHiltViewModelFactory(delegateFactory);
        }

        private ViewModelProvider.Factory getHiltViewModelFactory(ViewModelProvider.Factory delegate) {
            return new HiltViewModelFactory(this.keySet, (ViewModelProvider.Factory) Preconditions.checkNotNull(delegate), this.viewModelComponentBuilder);
        }
    }

    private DefaultViewModelFactories() {
    }
}
