package dagger.hilt.android.internal.modules;

import android.app.Activity;
import android.content.Context;
import androidx.fragment.app.FragmentActivity;
import dagger.Binds;
import dagger.Module;
import dagger.Provides;
import dagger.Reusable;

/* JADX INFO: loaded from: classes2.dex */
@Module
abstract class ActivityModule {
    @Binds
    abstract Context provideContext(Activity activity);

    @Provides
    @Reusable
    static FragmentActivity provideFragmentActivity(Activity activity) {
        try {
            return (FragmentActivity) activity;
        } catch (ClassCastException e) {
            throw new IllegalStateException("Expected activity to be a FragmentActivity: " + activity, e);
        }
    }

    private ActivityModule() {
    }
}
