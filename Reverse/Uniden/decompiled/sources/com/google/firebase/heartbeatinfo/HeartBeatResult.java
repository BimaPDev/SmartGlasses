package com.google.firebase.heartbeatinfo;

import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public abstract class HeartBeatResult {
    public abstract List<String> getUsedDates();

    public abstract String getUserAgent();

    public static HeartBeatResult create(String str, List<String> list) {
        return new AutoValue_HeartBeatResult(str, list);
    }
}
