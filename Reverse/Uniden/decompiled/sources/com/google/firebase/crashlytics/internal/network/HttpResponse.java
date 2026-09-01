package com.google.firebase.crashlytics.internal.network;

/* JADX INFO: loaded from: classes2.dex */
public class HttpResponse {
    private final String body;
    private final int code;

    public String body() {
        return this.body;
    }

    public int code() {
        return this.code;
    }

    public HttpResponse(int i, String str) {
        this.code = i;
        this.body = str;
    }
}
