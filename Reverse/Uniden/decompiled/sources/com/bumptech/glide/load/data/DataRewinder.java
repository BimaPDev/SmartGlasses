package com.bumptech.glide.load.data;

import java.io.IOException;

/* JADX INFO: loaded from: classes.dex */
public interface DataRewinder<T> {

    public interface Factory<T> {
        DataRewinder<T> build(T t);

        Class<T> getDataClass();
    }

    void cleanup();

    T rewindAndGet() throws IOException;
}
