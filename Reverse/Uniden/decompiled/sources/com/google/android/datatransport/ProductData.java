package com.google.android.datatransport;

/* JADX INFO: loaded from: classes.dex */
public abstract class ProductData {
    public abstract Integer getProductId();

    public static ProductData withProductId(Integer num) {
        return new AutoValue_ProductData(num);
    }
}
