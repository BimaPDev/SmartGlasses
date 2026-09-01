package com.google.android.gms.common.api;

import com.google.android.gms.common.api.Result;

/* JADX INFO: compiled from: com.google.android.gms:play-services-basement@@18.3.0 */
/* JADX INFO: loaded from: classes2.dex */
public class Response<T extends Result> {
    private Result zza;

    public Response() {
    }

    protected Response(T t) {
        this.zza = t;
    }

    protected T getResult() {
        return (T) this.zza;
    }

    public void setResult(T t) {
        this.zza = t;
    }
}
