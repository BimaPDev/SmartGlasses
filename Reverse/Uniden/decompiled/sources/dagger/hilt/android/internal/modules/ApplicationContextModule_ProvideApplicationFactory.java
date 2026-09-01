package dagger.hilt.android.internal.modules;

import android.app.Application;
import dagger.internal.Factory;
import dagger.internal.Preconditions;

/* JADX INFO: loaded from: classes2.dex */
public final class ApplicationContextModule_ProvideApplicationFactory implements Factory<Application> {
    private final ApplicationContextModule module;

    public ApplicationContextModule_ProvideApplicationFactory(ApplicationContextModule module) {
        this.module = module;
    }

    @Override // javax.inject.Provider
    public Application get() {
        return provideApplication(this.module);
    }

    public static ApplicationContextModule_ProvideApplicationFactory create(ApplicationContextModule module) {
        return new ApplicationContextModule_ProvideApplicationFactory(module);
    }

    public static Application provideApplication(ApplicationContextModule instance) {
        return (Application) Preconditions.checkNotNullFromProvides(instance.provideApplication());
    }
}
