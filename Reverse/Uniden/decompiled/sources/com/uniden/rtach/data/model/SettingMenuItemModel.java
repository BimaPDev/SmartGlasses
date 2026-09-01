package com.uniden.rtach.data.model;

import androidx.constraintlayout.widget.ConstraintLayout;
import java.util.List;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: SettingMenuItemModel.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0086\b\u0018\u00002\u00020\u0001B\u0015\u0012\f\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003¢\u0006\u0004\b\u0005\u0010\u0006J\u000f\u0010\t\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003HÆ\u0003J\u0019\u0010\n\u001a\u00020\u00002\u000e\b\u0002\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003HÆ\u0001J\u0013\u0010\u000b\u001a\u00020\f2\b\u0010\r\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u000e\u001a\u00020\u000fHÖ\u0001J\t\u0010\u0010\u001a\u00020\u0011HÖ\u0001R\u0017\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\b¨\u0006\u0012"}, m491d2 = {"Lcom/uniden/rtach/data/model/SettingMenuItemModel;", "", "radar_settings", "", "Lcom/uniden/rtach/data/model/RadarSettingsModel;", "<init>", "(Ljava/util/List;)V", "getRadar_settings", "()Ljava/util/List;", "component1", "copy", "equals", "", "other", "hashCode", "", "toString", "", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final /* data */ class SettingMenuItemModel {
    private final List<RadarSettingsModel> radar_settings;

    /* JADX WARN: Multi-variable type inference failed */
    public static /* synthetic */ SettingMenuItemModel copy$default(SettingMenuItemModel settingMenuItemModel, List list, int i, Object obj) {
        if ((i & 1) != 0) {
            list = settingMenuItemModel.radar_settings;
        }
        return settingMenuItemModel.copy(list);
    }

    public final List<RadarSettingsModel> component1() {
        return this.radar_settings;
    }

    public final SettingMenuItemModel copy(List<RadarSettingsModel> radar_settings) {
        Intrinsics.checkNotNullParameter(radar_settings, "radar_settings");
        return new SettingMenuItemModel(radar_settings);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        return (other instanceof SettingMenuItemModel) && Intrinsics.areEqual(this.radar_settings, ((SettingMenuItemModel) other).radar_settings);
    }

    public final List<RadarSettingsModel> getRadar_settings() {
        return this.radar_settings;
    }

    public int hashCode() {
        return this.radar_settings.hashCode();
    }

    public String toString() {
        return "SettingMenuItemModel(radar_settings=" + this.radar_settings + ')';
    }

    public SettingMenuItemModel(List<RadarSettingsModel> radar_settings) {
        Intrinsics.checkNotNullParameter(radar_settings, "radar_settings");
        this.radar_settings = radar_settings;
    }
}
