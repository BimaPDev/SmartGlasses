package dagger.hilt.android.internal.modules;

import android.app.Application;
import android.content.Context;
import dagger.Module;
import dagger.Provides;
import dagger.hilt.android.internal.Contexts;

/* JADX INFO: loaded from: classes2.dex */
@Module
public final class ApplicationContextModule {
    private final Context applicationContext;

    @Provides
    Context provideContext() {
        return this.applicationContext;
    }

    public ApplicationContextModule(Context applicationContext) {
        this.applicationContext = applicationContext;
    }

    @Provides
    Application provideApplication() {
        return Contexts.getApplication(this.applicationContext);
    }
}
