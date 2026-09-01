package com.google.android.gms.common.api;

import com.google.android.gms.common.api.Api.ApiOptions;
import com.google.android.gms.common.api.internal.ApiKey;

/* JADX INFO: compiled from: com.google.android.gms:play-services-base@@18.4.0 */
/* JADX INFO: loaded from: classes2.dex */
public interface HasApiKey<O extends Api.ApiOptions> {
    ApiKey<O> getApiKey();
}
