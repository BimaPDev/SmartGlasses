package com.google.android.datatransport;

/* JADX INFO: loaded from: classes.dex */
final class AutoValue_ProductData extends ProductData {
    private final Integer productId;

    @Override // com.google.android.datatransport.ProductData
    public Integer getProductId() {
        return this.productId;
    }

    AutoValue_ProductData(Integer num) {
        this.productId = num;
    }

    public String toString() {
        return "ProductData{productId=" + this.productId + "}";
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof ProductData)) {
            return false;
        }
        Integer num = this.productId;
        Integer productId = ((ProductData) obj).getProductId();
        if (num == null) {
            return productId == null;
        }
        return num.equals(productId);
    }

    public int hashCode() {
        Integer num = this.productId;
        return (num == null ? 0 : num.hashCode()) ^ 1000003;
    }
}
