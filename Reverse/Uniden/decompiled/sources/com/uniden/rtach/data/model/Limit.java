package com.uniden.rtach.data.model;

import androidx.constraintlayout.widget.ConstraintLayout;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: RadarSettingsModel.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0011\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0086\b\u0018\u00002\u00020\u0001B%\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0003¢\u0006\u0004\b\u0006\u0010\u0007J\u000b\u0010\u0010\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010\u0011\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010\u0012\u001a\u0004\u0018\u00010\u0003HÆ\u0003J-\u0010\u0013\u001a\u00020\u00002\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0003HÆ\u0001J\u0013\u0010\u0014\u001a\u00020\u00152\b\u0010\u0016\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0017\u001a\u00020\u0018HÖ\u0001J\t\u0010\u0019\u001a\u00020\u0003HÖ\u0001R\u001c\u0010\u0002\u001a\u0004\u0018\u00010\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\b\u0010\t\"\u0004\b\n\u0010\u000bR\u001c\u0010\u0004\u001a\u0004\u0018\u00010\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\f\u0010\t\"\u0004\b\r\u0010\u000bR\u001c\u0010\u0005\u001a\u0004\u0018\u00010\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u000e\u0010\t\"\u0004\b\u000f\u0010\u000b¨\u0006\u001a"}, m491d2 = {"Lcom/uniden/rtach/data/model/Limit;", "", "kmh", "", "mph", "Ghz", "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", "getKmh", "()Ljava/lang/String;", "setKmh", "(Ljava/lang/String;)V", "getMph", "setMph", "getGhz", "setGhz", "component1", "component2", "component3", "copy", "equals", "", "other", "hashCode", "", "toString", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final /* data */ class Limit {
    private String Ghz;
    private String kmh;
    private String mph;

    public static /* synthetic */ Limit copy$default(Limit limit, String str, String str2, String str3, int i, Object obj) {
        if ((i & 1) != 0) {
            str = limit.kmh;
        }
        if ((i & 2) != 0) {
            str2 = limit.mph;
        }
        if ((i & 4) != 0) {
            str3 = limit.Ghz;
        }
        return limit.copy(str, str2, str3);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final String getKmh() {
        return this.kmh;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final String getMph() {
        return this.mph;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final String getGhz() {
        return this.Ghz;
    }

    public final Limit copy(String kmh, String mph, String Ghz) {
        return new Limit(kmh, mph, Ghz);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof Limit)) {
            return false;
        }
        Limit limit = (Limit) other;
        return Intrinsics.areEqual(this.kmh, limit.kmh) && Intrinsics.areEqual(this.mph, limit.mph) && Intrinsics.areEqual(this.Ghz, limit.Ghz);
    }

    public final String getGhz() {
        return this.Ghz;
    }

    public final String getKmh() {
        return this.kmh;
    }

    public final String getMph() {
        return this.mph;
    }

    public int hashCode() {
        String str = this.kmh;
        int iHashCode = (str == null ? 0 : str.hashCode()) * 31;
        String str2 = this.mph;
        int iHashCode2 = (iHashCode + (str2 == null ? 0 : str2.hashCode())) * 31;
        String str3 = this.Ghz;
        return iHashCode2 + (str3 != null ? str3.hashCode() : 0);
    }

    public final void setGhz(String str) {
        this.Ghz = str;
    }

    public final void setKmh(String str) {
        this.kmh = str;
    }

    public final void setMph(String str) {
        this.mph = str;
    }

    public String toString() {
        return "Limit(kmh=" + this.kmh + ", mph=" + this.mph + ", Ghz=" + this.Ghz + ')';
    }

    public Limit(String str, String str2, String str3) {
        this.kmh = str;
        this.mph = str2;
        this.Ghz = str3;
    }
}
