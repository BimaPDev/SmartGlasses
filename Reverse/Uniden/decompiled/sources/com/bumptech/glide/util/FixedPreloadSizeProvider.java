package com.bumptech.glide.util;

import com.bumptech.glide.ListPreloader;

/* JADX INFO: loaded from: classes.dex */
public class FixedPreloadSizeProvider<T> implements ListPreloader.PreloadSizeProvider<T> {
    private final int[] size;

    @Override // com.bumptech.glide.ListPreloader.PreloadSizeProvider
    public int[] getPreloadSize(T t, int i, int i2) {
        return this.size;
    }

    public FixedPreloadSizeProvider(int i, int i2) {
        this.size = new int[]{i, i2};
    }
}
