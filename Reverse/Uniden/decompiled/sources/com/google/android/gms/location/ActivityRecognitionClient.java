package com.google.android.gms.location;

import android.app.PendingIntent;
import com.google.android.gms.common.api.Api;
import com.google.android.gms.common.api.HasApiKey;
import com.google.android.gms.tasks.Task;

/* JADX INFO: compiled from: com.google.android.gms:play-services-location@@21.2.0 */
/* JADX INFO: loaded from: classes2.dex */
public interface ActivityRecognitionClient extends HasApiKey<Api.ApiOptions.NoOptions> {
    Task<Void> removeActivityTransitionUpdates(PendingIntent pendingIntent);

    Task<Void> removeActivityUpdates(PendingIntent pendingIntent);

    Task<Void> removeSleepSegmentUpdates(PendingIntent pendingIntent);

    Task<Void> requestActivityTransitionUpdates(ActivityTransitionRequest activityTransitionRequest, PendingIntent pendingIntent);

    Task<Void> requestActivityUpdates(long j, PendingIntent pendingIntent);

    Task<Void> requestSleepSegmentUpdates(PendingIntent pendingIntent, SleepSegmentRequest sleepSegmentRequest);
}
