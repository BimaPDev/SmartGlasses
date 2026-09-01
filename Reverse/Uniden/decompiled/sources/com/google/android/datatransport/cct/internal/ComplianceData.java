package com.google.android.datatransport.cct.internal;

import android.util.SparseArray;

/* JADX INFO: loaded from: classes.dex */
public abstract class ComplianceData {

    public static abstract class Builder {
        public abstract ComplianceData build();

        public abstract Builder setPrivacyContext(ExternalPrivacyContext externalPrivacyContext);

        public abstract Builder setProductIdOrigin(ProductIdOrigin productIdOrigin);
    }

    public abstract ExternalPrivacyContext getPrivacyContext();

    public abstract ProductIdOrigin getProductIdOrigin();

    public enum ProductIdOrigin {
        NOT_SET(0),
        EVENT_OVERRIDE(5);

        private static final SparseArray<ProductIdOrigin> valueMap;
        private final int value;

        public int getValue() {
            return this.value;
        }

        static {
            ProductIdOrigin productIdOrigin = NOT_SET;
            ProductIdOrigin productIdOrigin2 = EVENT_OVERRIDE;
            SparseArray<ProductIdOrigin> sparseArray = new SparseArray<>();
            valueMap = sparseArray;
            sparseArray.put(0, productIdOrigin);
            sparseArray.put(5, productIdOrigin2);
        }

        ProductIdOrigin(int i) {
            this.value = i;
        }

        public static ProductIdOrigin forNumber(int i) {
            return valueMap.get(i);
        }
    }

    public static Builder builder() {
        return new AutoValue_ComplianceData.Builder();
    }
}
