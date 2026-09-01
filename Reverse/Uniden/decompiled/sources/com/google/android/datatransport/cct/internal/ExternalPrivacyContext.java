package com.google.android.datatransport.cct.internal;

/* JADX INFO: loaded from: classes.dex */
public abstract class ExternalPrivacyContext {

    public static abstract class Builder {
        public abstract ExternalPrivacyContext build();

        public abstract Builder setPrequest(ExternalPRequestContext externalPRequestContext);
    }

    public abstract ExternalPRequestContext getPrequest();

    public static Builder builder() {
        return new AutoValue_ExternalPrivacyContext.Builder();
    }
}
