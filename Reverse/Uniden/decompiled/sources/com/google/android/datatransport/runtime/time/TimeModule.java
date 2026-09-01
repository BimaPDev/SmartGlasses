package com.google.android.datatransport.runtime.time;

import com.google.android.datatransport.runtime.dagger.Module;
import com.google.android.datatransport.runtime.dagger.Provides;

/* JADX INFO: loaded from: classes.dex */
@Module
public abstract class TimeModule {
    @Provides
    static Clock eventClock() {
        return new WallTimeClock();
    }

    @Provides
    static Clock uptimeClock() {
        return new UptimeClock();
    }
}
