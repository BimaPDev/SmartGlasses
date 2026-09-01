package com.uniden.rtach.data.module;

import android.app.Application;
import android.content.Context;
import dagger.internal.Factory;
import dagger.internal.Preconditions;
import javax.inject.Provider;

/* JADX INFO: loaded from: classes2.dex */
public final class AppModule_ProvideContextFactory implements Factory<Context> {
    private final Provider<Application> applicationProvider;

    public AppModule_ProvideContextFactory(Provider<Application> provider) {
        this.applicationProvider = provider;
    }

    @Override // javax.inject.Provider
    public Context get() {
        return provideContext(this.applicationProvider.get());
    }

    public static AppModule_ProvideContextFactory create(Provider<Application> provider) {
        return new AppModule_ProvideContextFactory(provider);
    }

    public static Context provideContext(Application application) {
        return (Context) Preconditions.checkNotNullFromProvides(AppModule.INSTANCE.provideContext(application));
    }
}
