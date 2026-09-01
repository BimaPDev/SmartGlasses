package com.uniden.rtach.data.model;

import androidx.constraintlayout.widget.ConstraintLayout;
import com.google.firebase.analytics.FirebaseAnalytics;
import java.util.List;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: RadarSettingsModel.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010 \n\u0002\u0010\b\n\u0002\b\n\n\u0002\u0010\u000b\n\u0002\b\u0004\b\u0086\b\u0018\u00002\u00020\u0001B\u001d\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¢\u0006\u0004\b\u0007\u0010\bJ\t\u0010\r\u001a\u00020\u0003HÆ\u0003J\u000f\u0010\u000e\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005HÆ\u0003J#\u0010\u000f\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\u000e\b\u0002\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005HÆ\u0001J\u0013\u0010\u0010\u001a\u00020\u00112\b\u0010\u0012\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0013\u001a\u00020\u0006HÖ\u0001J\t\u0010\u0014\u001a\u00020\u0003HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\nR\u0017\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\f¨\u0006\u0015"}, m491d2 = {"Lcom/uniden/rtach/data/model/RadarSettingsCategoryTable;", "", "category", "", FirebaseAnalytics.Param.ITEMS, "", "", "<init>", "(Ljava/lang/String;Ljava/util/List;)V", "getCategory", "()Ljava/lang/String;", "getItems", "()Ljava/util/List;", "component1", "component2", "copy", "equals", "", "other", "hashCode", "toString", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final /* data */ class RadarSettingsCategoryTable {
    private final String category;
    private final List<Integer> items;

    /* JADX WARN: Multi-variable type inference failed */
    public static /* synthetic */ RadarSettingsCategoryTable copy$default(RadarSettingsCategoryTable radarSettingsCategoryTable, String str, List list, int i, Object obj) {
        if ((i & 1) != 0) {
            str = radarSettingsCategoryTable.category;
        }
        if ((i & 2) != 0) {
            list = radarSettingsCategoryTable.items;
        }
        return radarSettingsCategoryTable.copy(str, list);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final String getCategory() {
        return this.category;
    }

    public final List<Integer> component2() {
        return this.items;
    }

    public final RadarSettingsCategoryTable copy(String category, List<Integer> items) {
        Intrinsics.checkNotNullParameter(category, "category");
        Intrinsics.checkNotNullParameter(items, "items");
        return new RadarSettingsCategoryTable(category, items);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof RadarSettingsCategoryTable)) {
            return false;
        }
        RadarSettingsCategoryTable radarSettingsCategoryTable = (RadarSettingsCategoryTable) other;
        return Intrinsics.areEqual(this.category, radarSettingsCategoryTable.category) && Intrinsics.areEqual(this.items, radarSettingsCategoryTable.items);
    }

    public final String getCategory() {
        return this.category;
    }

    public final List<Integer> getItems() {
        return this.items;
    }

    public int hashCode() {
        return (this.category.hashCode() * 31) + this.items.hashCode();
    }

    public String toString() {
        return "RadarSettingsCategoryTable(category=" + this.category + ", items=" + this.items + ')';
    }

    public RadarSettingsCategoryTable(String category, List<Integer> items) {
        Intrinsics.checkNotNullParameter(category, "category");
        Intrinsics.checkNotNullParameter(items, "items");
        this.category = category;
        this.items = items;
    }
}
