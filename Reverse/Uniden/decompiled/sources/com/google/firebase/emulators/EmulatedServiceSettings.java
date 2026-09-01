package com.google.firebase.emulators;

/* JADX INFO: loaded from: classes2.dex */
public final class EmulatedServiceSettings {
    private final String host;
    private final int port;

    public String getHost() {
        return this.host;
    }

    public int getPort() {
        return this.port;
    }

    public EmulatedServiceSettings(String str, int i) {
        this.host = str;
        this.port = i;
    }
}
