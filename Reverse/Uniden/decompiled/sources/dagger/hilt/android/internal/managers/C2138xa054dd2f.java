package dagger.hilt.android.internal.managers;

import dagger.hilt.android.ActivityRetainedLifecycle;
import dagger.internal.Factory;
import dagger.internal.Preconditions;

/* JADX INFO: renamed from: dagger.hilt.android.internal.managers.ActivityRetainedComponentManager_LifecycleModule_ProvideActivityRetainedLifecycleFactory */
/* JADX INFO: loaded from: classes2.dex */
public final class C2138xa054dd2f implements Factory<ActivityRetainedLifecycle> {
    @Override // javax.inject.Provider
    public ActivityRetainedLifecycle get() {
        return provideActivityRetainedLifecycle();
    }

    public static C2138xa054dd2f create() {
        return InstanceHolder.INSTANCE;
    }

    public static ActivityRetainedLifecycle provideActivityRetainedLifecycle() {
        return (ActivityRetainedLifecycle) Preconditions.checkNotNullFromProvides(ActivityRetainedComponentManager.LifecycleModule.provideActivityRetainedLifecycle());
    }

    /* JADX INFO: renamed from: dagger.hilt.android.internal.managers.ActivityRetainedComponentManager_LifecycleModule_ProvideActivityRetainedLifecycleFactory$InstanceHolder */
    private static final class InstanceHolder {
        private static final C2138xa054dd2f INSTANCE = new C2138xa054dd2f();

        private InstanceHolder() {
        }
    }
}
