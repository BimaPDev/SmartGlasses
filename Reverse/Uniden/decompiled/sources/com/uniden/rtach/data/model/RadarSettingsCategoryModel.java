package com.uniden.rtach.data.model;

import androidx.constraintlayout.widget.ConstraintLayout;
import java.util.List;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: RadarSettingsModel.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\f\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0086\b\u0018\u00002\u00020\u0001B\u001d\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¢\u0006\u0004\b\u0007\u0010\bJ\t\u0010\u000f\u001a\u00020\u0003HÆ\u0003J\u000f\u0010\u0010\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005HÆ\u0003J#\u0010\u0011\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\u000e\b\u0002\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005HÆ\u0001J\u0013\u0010\u0012\u001a\u00020\u00132\b\u0010\u0014\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0015\u001a\u00020\u0016HÖ\u0001J\t\u0010\u0017\u001a\u00020\u0018HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\nR \u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u000b\u0010\f\"\u0004\b\r\u0010\u000e¨\u0006\u0019"}, m491d2 = {"Lcom/uniden/rtach/data/model/RadarSettingsCategoryModel;", "", "title", "Lcom/uniden/rtach/data/model/RadarSettingsTitleModel;", "itemList", "", "Lcom/uniden/rtach/data/model/RadarSettingsModel;", "<init>", "(Lcom/uniden/rtach/data/model/RadarSettingsTitleModel;Ljava/util/List;)V", "getTitle", "()Lcom/uniden/rtach/data/model/RadarSettingsTitleModel;", "getItemList", "()Ljava/util/List;", "setItemList", "(Ljava/util/List;)V", "component1", "component2", "copy", "equals", "", "other", "hashCode", "", "toString", "", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final /* data */ class RadarSettingsCategoryModel {
    private List<RadarSettingsModel> itemList;
    private final RadarSettingsTitleModel title;

    /* JADX WARN: Multi-variable type inference failed */
    public static /* synthetic */ RadarSettingsCategoryModel copy$default(RadarSettingsCategoryModel radarSettingsCategoryModel, RadarSettingsTitleModel radarSettingsTitleModel, List list, int i, Object obj) {
        if ((i & 1) != 0) {
            radarSettingsTitleModel = radarSettingsCategoryModel.title;
        }
        if ((i & 2) != 0) {
            list = radarSettingsCategoryModel.itemList;
        }
        return radarSettingsCategoryModel.copy(radarSettingsTitleModel, list);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final RadarSettingsTitleModel getTitle() {
        return this.title;
    }

    public final List<RadarSettingsModel> component2() {
        return this.itemList;
    }

    public final RadarSettingsCategoryModel copy(RadarSettingsTitleModel title, List<RadarSettingsModel> itemList) {
        Intrinsics.checkNotNullParameter(title, "title");
        Intrinsics.checkNotNullParameter(itemList, "itemList");
        return new RadarSettingsCategoryModel(title, itemList);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof RadarSettingsCategoryModel)) {
            return false;
        }
        RadarSettingsCategoryModel radarSettingsCategoryModel = (RadarSettingsCategoryModel) other;
        return Intrinsics.areEqual(this.title, radarSettingsCategoryModel.title) && Intrinsics.areEqual(this.itemList, radarSettingsCategoryModel.itemList);
    }

    public final List<RadarSettingsModel> getItemList() {
        return this.itemList;
    }

    public final RadarSettingsTitleModel getTitle() {
        return this.title;
    }

    public int hashCode() {
        return (this.title.hashCode() * 31) + this.itemList.hashCode();
    }

    public final void setItemList(List<RadarSettingsModel> list) {
        Intrinsics.checkNotNullParameter(list, "<set-?>");
        this.itemList = list;
    }

    public String toString() {
        return "RadarSettingsCategoryModel(title=" + this.title + ", itemList=" + this.itemList + ')';
    }

    public RadarSettingsCategoryModel(RadarSettingsTitleModel title, List<RadarSettingsModel> itemList) {
        Intrinsics.checkNotNullParameter(title, "title");
        Intrinsics.checkNotNullParameter(itemList, "itemList");
        this.title = title;
        this.itemList = itemList;
    }
}
