package com.uniden.rtach.data.model;

import androidx.constraintlayout.widget.ConstraintLayout;
import java.util.List;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: RadarSettingsModel.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u00006\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010 \n\u0000\n\u0002\u0010\b\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0002\b@\b\u0086\b\u0018\u00002\u00020\u0001B¡\u0001\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0003\u0012\f\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\u00030\b\u0012\u0006\u0010\t\u001a\u00020\n\u0012\u0006\u0010\u000b\u001a\u00020\n\u0012\u0006\u0010\f\u001a\u00020\u0003\u0012\b\u0010\r\u001a\u0004\u0018\u00010\u0005\u0012\u0006\u0010\u000e\u001a\u00020\u0003\u0012\u000e\u0010\u000f\u001a\n\u0012\u0004\u0012\u00020\u0010\u0018\u00010\b\u0012\u0006\u0010\u0011\u001a\u00020\n\u0012\f\u0010\u0012\u001a\b\u0012\u0004\u0012\u00020\u00030\b\u0012\u0006\u0010\u0013\u001a\u00020\n\u0012\u0006\u0010\u0014\u001a\u00020\n\u0012\u0006\u0010\u0015\u001a\u00020\u0016\u0012\u0006\u0010\u0017\u001a\u00020\u0003¢\u0006\u0004\b\u0018\u0010\u0019J\t\u0010A\u001a\u00020\u0003HÆ\u0003J\u000b\u0010B\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\t\u0010C\u001a\u00020\u0003HÆ\u0003J\u000f\u0010D\u001a\b\u0012\u0004\u0012\u00020\u00030\bHÆ\u0003J\t\u0010E\u001a\u00020\nHÆ\u0003J\t\u0010F\u001a\u00020\nHÆ\u0003J\t\u0010G\u001a\u00020\u0003HÆ\u0003J\u000b\u0010H\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\t\u0010I\u001a\u00020\u0003HÆ\u0003J\u0011\u0010J\u001a\n\u0012\u0004\u0012\u00020\u0010\u0018\u00010\bHÆ\u0003J\t\u0010K\u001a\u00020\nHÆ\u0003J\u000f\u0010L\u001a\b\u0012\u0004\u0012\u00020\u00030\bHÆ\u0003J\t\u0010M\u001a\u00020\nHÆ\u0003J\t\u0010N\u001a\u00020\nHÆ\u0003J\t\u0010O\u001a\u00020\u0016HÆ\u0003J\t\u0010P\u001a\u00020\u0003HÆ\u0003JÁ\u0001\u0010Q\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00032\u000e\b\u0002\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\u00030\b2\b\b\u0002\u0010\t\u001a\u00020\n2\b\b\u0002\u0010\u000b\u001a\u00020\n2\b\b\u0002\u0010\f\u001a\u00020\u00032\n\b\u0002\u0010\r\u001a\u0004\u0018\u00010\u00052\b\b\u0002\u0010\u000e\u001a\u00020\u00032\u0010\b\u0002\u0010\u000f\u001a\n\u0012\u0004\u0012\u00020\u0010\u0018\u00010\b2\b\b\u0002\u0010\u0011\u001a\u00020\n2\u000e\b\u0002\u0010\u0012\u001a\b\u0012\u0004\u0012\u00020\u00030\b2\b\b\u0002\u0010\u0013\u001a\u00020\n2\b\b\u0002\u0010\u0014\u001a\u00020\n2\b\b\u0002\u0010\u0015\u001a\u00020\u00162\b\b\u0002\u0010\u0017\u001a\u00020\u0003HÆ\u0001J\u0013\u0010R\u001a\u00020\u00162\b\u0010S\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010T\u001a\u00020\nHÖ\u0001J\t\u0010U\u001a\u00020\u0003HÖ\u0001R\u001a\u0010\u0002\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u001a\u0010\u001b\"\u0004\b\u001c\u0010\u001dR\u001c\u0010\u0004\u001a\u0004\u0018\u00010\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u001e\u0010\u001f\"\u0004\b \u0010!R\u001a\u0010\u0006\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\"\u0010\u001b\"\u0004\b#\u0010\u001dR \u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\u00030\bX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b$\u0010%\"\u0004\b&\u0010'R\u001a\u0010\t\u001a\u00020\nX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\t\u0010(\"\u0004\b)\u0010*R\u001a\u0010\u000b\u001a\u00020\nX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b+\u0010(\"\u0004\b,\u0010*R\u001a\u0010\f\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b-\u0010\u001b\"\u0004\b.\u0010\u001dR\u001c\u0010\r\u001a\u0004\u0018\u00010\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b/\u0010\u001f\"\u0004\b0\u0010!R\u001a\u0010\u000e\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b1\u0010\u001b\"\u0004\b2\u0010\u001dR\u0019\u0010\u000f\u001a\n\u0012\u0004\u0012\u00020\u0010\u0018\u00010\b¢\u0006\b\n\u0000\u001a\u0004\b3\u0010%R\u001a\u0010\u0011\u001a\u00020\nX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b4\u0010(\"\u0004\b5\u0010*R \u0010\u0012\u001a\b\u0012\u0004\u0012\u00020\u00030\bX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b6\u0010%\"\u0004\b7\u0010'R\u001a\u0010\u0013\u001a\u00020\nX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b8\u0010(\"\u0004\b9\u0010*R\u001a\u0010\u0014\u001a\u00020\nX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b:\u0010(\"\u0004\b;\u0010*R\u001a\u0010\u0015\u001a\u00020\u0016X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0015\u0010<\"\u0004\b=\u0010>R\u001a\u0010\u0017\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b?\u0010\u001b\"\u0004\b@\u0010\u001d¨\u0006V"}, m491d2 = {"Lcom/uniden/rtach/data/model/RadarSettingsModel;", "", "category", "", "conflict_limit", "Lcom/uniden/rtach/data/model/Limit;", "conflict_radars", "conflict_values", "", "isObservable", "", "byte_value", "item", "limit", "mode", "relational_fields", "Lcom/uniden/rtach/data/model/RelationalField;", "selected_value", "values", "write_index", "read_index", "isAvailable", "", "speedUnit", "<init>", "(Ljava/lang/String;Lcom/uniden/rtach/data/model/Limit;Ljava/lang/String;Ljava/util/List;IILjava/lang/String;Lcom/uniden/rtach/data/model/Limit;Ljava/lang/String;Ljava/util/List;ILjava/util/List;IIZLjava/lang/String;)V", "getCategory", "()Ljava/lang/String;", "setCategory", "(Ljava/lang/String;)V", "getConflict_limit", "()Lcom/uniden/rtach/data/model/Limit;", "setConflict_limit", "(Lcom/uniden/rtach/data/model/Limit;)V", "getConflict_radars", "setConflict_radars", "getConflict_values", "()Ljava/util/List;", "setConflict_values", "(Ljava/util/List;)V", "()I", "setObservable", "(I)V", "getByte_value", "setByte_value", "getItem", "setItem", "getLimit", "setLimit", "getMode", "setMode", "getRelational_fields", "getSelected_value", "setSelected_value", "getValues", "setValues", "getWrite_index", "setWrite_index", "getRead_index", "setRead_index", "()Z", "setAvailable", "(Z)V", "getSpeedUnit", "setSpeedUnit", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "component8", "component9", "component10", "component11", "component12", "component13", "component14", "component15", "component16", "copy", "equals", "other", "hashCode", "toString", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final /* data */ class RadarSettingsModel {
    private int byte_value;
    private String category;
    private Limit conflict_limit;
    private String conflict_radars;
    private List<String> conflict_values;
    private boolean isAvailable;
    private int isObservable;
    private String item;
    private Limit limit;
    private String mode;
    private int read_index;
    private final List<RelationalField> relational_fields;
    private int selected_value;
    private String speedUnit;
    private List<String> values;
    private int write_index;

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final String getCategory() {
        return this.category;
    }

    public final List<RelationalField> component10() {
        return this.relational_fields;
    }

    /* JADX INFO: renamed from: component11, reason: from getter */
    public final int getSelected_value() {
        return this.selected_value;
    }

    public final List<String> component12() {
        return this.values;
    }

    /* JADX INFO: renamed from: component13, reason: from getter */
    public final int getWrite_index() {
        return this.write_index;
    }

    /* JADX INFO: renamed from: component14, reason: from getter */
    public final int getRead_index() {
        return this.read_index;
    }

    /* JADX INFO: renamed from: component15, reason: from getter */
    public final boolean getIsAvailable() {
        return this.isAvailable;
    }

    /* JADX INFO: renamed from: component16, reason: from getter */
    public final String getSpeedUnit() {
        return this.speedUnit;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final Limit getConflict_limit() {
        return this.conflict_limit;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final String getConflict_radars() {
        return this.conflict_radars;
    }

    public final List<String> component4() {
        return this.conflict_values;
    }

    /* JADX INFO: renamed from: component5, reason: from getter */
    public final int getIsObservable() {
        return this.isObservable;
    }

    /* JADX INFO: renamed from: component6, reason: from getter */
    public final int getByte_value() {
        return this.byte_value;
    }

    /* JADX INFO: renamed from: component7, reason: from getter */
    public final String getItem() {
        return this.item;
    }

    /* JADX INFO: renamed from: component8, reason: from getter */
    public final Limit getLimit() {
        return this.limit;
    }

    /* JADX INFO: renamed from: component9, reason: from getter */
    public final String getMode() {
        return this.mode;
    }

    public final RadarSettingsModel copy(String category, Limit conflict_limit, String conflict_radars, List<String> conflict_values, int isObservable, int byte_value, String item, Limit limit, String mode, List<RelationalField> relational_fields, int selected_value, List<String> values, int write_index, int read_index, boolean isAvailable, String speedUnit) {
        Intrinsics.checkNotNullParameter(category, "category");
        Intrinsics.checkNotNullParameter(conflict_radars, "conflict_radars");
        Intrinsics.checkNotNullParameter(conflict_values, "conflict_values");
        Intrinsics.checkNotNullParameter(item, "item");
        Intrinsics.checkNotNullParameter(mode, "mode");
        Intrinsics.checkNotNullParameter(values, "values");
        Intrinsics.checkNotNullParameter(speedUnit, "speedUnit");
        return new RadarSettingsModel(category, conflict_limit, conflict_radars, conflict_values, isObservable, byte_value, item, limit, mode, relational_fields, selected_value, values, write_index, read_index, isAvailable, speedUnit);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof RadarSettingsModel)) {
            return false;
        }
        RadarSettingsModel radarSettingsModel = (RadarSettingsModel) other;
        return Intrinsics.areEqual(this.category, radarSettingsModel.category) && Intrinsics.areEqual(this.conflict_limit, radarSettingsModel.conflict_limit) && Intrinsics.areEqual(this.conflict_radars, radarSettingsModel.conflict_radars) && Intrinsics.areEqual(this.conflict_values, radarSettingsModel.conflict_values) && this.isObservable == radarSettingsModel.isObservable && this.byte_value == radarSettingsModel.byte_value && Intrinsics.areEqual(this.item, radarSettingsModel.item) && Intrinsics.areEqual(this.limit, radarSettingsModel.limit) && Intrinsics.areEqual(this.mode, radarSettingsModel.mode) && Intrinsics.areEqual(this.relational_fields, radarSettingsModel.relational_fields) && this.selected_value == radarSettingsModel.selected_value && Intrinsics.areEqual(this.values, radarSettingsModel.values) && this.write_index == radarSettingsModel.write_index && this.read_index == radarSettingsModel.read_index && this.isAvailable == radarSettingsModel.isAvailable && Intrinsics.areEqual(this.speedUnit, radarSettingsModel.speedUnit);
    }

    public final int getByte_value() {
        return this.byte_value;
    }

    public final String getCategory() {
        return this.category;
    }

    public final Limit getConflict_limit() {
        return this.conflict_limit;
    }

    public final String getConflict_radars() {
        return this.conflict_radars;
    }

    public final List<String> getConflict_values() {
        return this.conflict_values;
    }

    public final String getItem() {
        return this.item;
    }

    public final Limit getLimit() {
        return this.limit;
    }

    public final String getMode() {
        return this.mode;
    }

    public final int getRead_index() {
        return this.read_index;
    }

    public final List<RelationalField> getRelational_fields() {
        return this.relational_fields;
    }

    public final int getSelected_value() {
        return this.selected_value;
    }

    public final String getSpeedUnit() {
        return this.speedUnit;
    }

    public final List<String> getValues() {
        return this.values;
    }

    public final int getWrite_index() {
        return this.write_index;
    }

    public int hashCode() {
        int iHashCode = this.category.hashCode() * 31;
        Limit limit = this.conflict_limit;
        int iHashCode2 = (((((((((((iHashCode + (limit == null ? 0 : limit.hashCode())) * 31) + this.conflict_radars.hashCode()) * 31) + this.conflict_values.hashCode()) * 31) + Integer.hashCode(this.isObservable)) * 31) + Integer.hashCode(this.byte_value)) * 31) + this.item.hashCode()) * 31;
        Limit limit2 = this.limit;
        int iHashCode3 = (((iHashCode2 + (limit2 == null ? 0 : limit2.hashCode())) * 31) + this.mode.hashCode()) * 31;
        List<RelationalField> list = this.relational_fields;
        return ((((((((((((iHashCode3 + (list != null ? list.hashCode() : 0)) * 31) + Integer.hashCode(this.selected_value)) * 31) + this.values.hashCode()) * 31) + Integer.hashCode(this.write_index)) * 31) + Integer.hashCode(this.read_index)) * 31) + Boolean.hashCode(this.isAvailable)) * 31) + this.speedUnit.hashCode();
    }

    public final boolean isAvailable() {
        return this.isAvailable;
    }

    public final int isObservable() {
        return this.isObservable;
    }

    public final void setAvailable(boolean z) {
        this.isAvailable = z;
    }

    public final void setByte_value(int i) {
        this.byte_value = i;
    }

    public final void setCategory(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.category = str;
    }

    public final void setConflict_limit(Limit limit) {
        this.conflict_limit = limit;
    }

    public final void setConflict_radars(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.conflict_radars = str;
    }

    public final void setConflict_values(List<String> list) {
        Intrinsics.checkNotNullParameter(list, "<set-?>");
        this.conflict_values = list;
    }

    public final void setItem(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.item = str;
    }

    public final void setLimit(Limit limit) {
        this.limit = limit;
    }

    public final void setMode(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.mode = str;
    }

    public final void setObservable(int i) {
        this.isObservable = i;
    }

    public final void setRead_index(int i) {
        this.read_index = i;
    }

    public final void setSelected_value(int i) {
        this.selected_value = i;
    }

    public final void setSpeedUnit(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.speedUnit = str;
    }

    public final void setValues(List<String> list) {
        Intrinsics.checkNotNullParameter(list, "<set-?>");
        this.values = list;
    }

    public final void setWrite_index(int i) {
        this.write_index = i;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder("RadarSettingsModel(category=");
        sb.append(this.category).append(", conflict_limit=").append(this.conflict_limit).append(", conflict_radars=").append(this.conflict_radars).append(", conflict_values=").append(this.conflict_values).append(", isObservable=").append(this.isObservable).append(", byte_value=").append(this.byte_value).append(", item=").append(this.item).append(", limit=").append(this.limit).append(", mode=").append(this.mode).append(", relational_fields=").append(this.relational_fields).append(", selected_value=").append(this.selected_value).append(", values=");
        sb.append(this.values).append(", write_index=").append(this.write_index).append(", read_index=").append(this.read_index).append(", isAvailable=").append(this.isAvailable).append(", speedUnit=").append(this.speedUnit).append(')');
        return sb.toString();
    }

    public RadarSettingsModel(String category, Limit limit, String conflict_radars, List<String> conflict_values, int i, int i2, String item, Limit limit2, String mode, List<RelationalField> list, int i3, List<String> values, int i4, int i5, boolean z, String speedUnit) {
        Intrinsics.checkNotNullParameter(category, "category");
        Intrinsics.checkNotNullParameter(conflict_radars, "conflict_radars");
        Intrinsics.checkNotNullParameter(conflict_values, "conflict_values");
        Intrinsics.checkNotNullParameter(item, "item");
        Intrinsics.checkNotNullParameter(mode, "mode");
        Intrinsics.checkNotNullParameter(values, "values");
        Intrinsics.checkNotNullParameter(speedUnit, "speedUnit");
        this.category = category;
        this.conflict_limit = limit;
        this.conflict_radars = conflict_radars;
        this.conflict_values = conflict_values;
        this.isObservable = i;
        this.byte_value = i2;
        this.item = item;
        this.limit = limit2;
        this.mode = mode;
        this.relational_fields = list;
        this.selected_value = i3;
        this.values = values;
        this.write_index = i4;
        this.read_index = i5;
        this.isAvailable = z;
        this.speedUnit = speedUnit;
    }

    public /* synthetic */ RadarSettingsModel(String str, Limit limit, String str2, List list, int i, int i2, String str3, Limit limit2, String str4, List list2, int i3, List list3, int i4, int i5, boolean z, String str5, int i6, DefaultConstructorMarker defaultConstructorMarker) {
        this((i6 & 1) != 0 ? "" : str, limit, str2, list, i, i2, str3, limit2, str4, list2, i3, list3, i4, i5, z, str5);
    }
}
