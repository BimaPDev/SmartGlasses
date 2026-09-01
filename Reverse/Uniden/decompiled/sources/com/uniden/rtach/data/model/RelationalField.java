package com.uniden.rtach.data.model;

import androidx.constraintlayout.widget.ConstraintLayout;
import java.util.List;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: RadarSettingsModel.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010 \n\u0000\n\u0002\u0010\u000e\n\u0002\b\f\n\u0002\u0010\u000b\n\u0002\b\u0004\b\u0086\b\u0018\u00002\u00020\u0001B-\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00030\u0005\u0012\u000e\u0010\u0006\u001a\n\u0012\u0004\u0012\u00020\u0007\u0018\u00010\u0005¢\u0006\u0004\b\b\u0010\tJ\t\u0010\u000f\u001a\u00020\u0003HÆ\u0003J\u000f\u0010\u0010\u001a\b\u0012\u0004\u0012\u00020\u00030\u0005HÆ\u0003J\u0011\u0010\u0011\u001a\n\u0012\u0004\u0012\u00020\u0007\u0018\u00010\u0005HÆ\u0003J5\u0010\u0012\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\u000e\b\u0002\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00030\u00052\u0010\b\u0002\u0010\u0006\u001a\n\u0012\u0004\u0012\u00020\u0007\u0018\u00010\u0005HÆ\u0001J\u0013\u0010\u0013\u001a\u00020\u00142\b\u0010\u0015\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0016\u001a\u00020\u0003HÖ\u0001J\t\u0010\u0017\u001a\u00020\u0007HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000bR\u0017\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00030\u0005¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\rR\u0019\u0010\u0006\u001a\n\u0012\u0004\u0012\u00020\u0007\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\r¨\u0006\u0018"}, m491d2 = {"Lcom/uniden/rtach/data/model/RelationalField;", "", "relational_value", "", "visibility_index", "", "relational_model", "", "<init>", "(ILjava/util/List;Ljava/util/List;)V", "getRelational_value", "()I", "getVisibility_index", "()Ljava/util/List;", "getRelational_model", "component1", "component2", "component3", "copy", "equals", "", "other", "hashCode", "toString", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final /* data */ class RelationalField {
    private final List<String> relational_model;
    private final int relational_value;
    private final List<Integer> visibility_index;

    /* JADX WARN: Multi-variable type inference failed */
    public static /* synthetic */ RelationalField copy$default(RelationalField relationalField, int i, List list, List list2, int i2, Object obj) {
        if ((i2 & 1) != 0) {
            i = relationalField.relational_value;
        }
        if ((i2 & 2) != 0) {
            list = relationalField.visibility_index;
        }
        if ((i2 & 4) != 0) {
            list2 = relationalField.relational_model;
        }
        return relationalField.copy(i, list, list2);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final int getRelational_value() {
        return this.relational_value;
    }

    public final List<Integer> component2() {
        return this.visibility_index;
    }

    public final List<String> component3() {
        return this.relational_model;
    }

    public final RelationalField copy(int relational_value, List<Integer> visibility_index, List<String> relational_model) {
        Intrinsics.checkNotNullParameter(visibility_index, "visibility_index");
        return new RelationalField(relational_value, visibility_index, relational_model);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof RelationalField)) {
            return false;
        }
        RelationalField relationalField = (RelationalField) other;
        return this.relational_value == relationalField.relational_value && Intrinsics.areEqual(this.visibility_index, relationalField.visibility_index) && Intrinsics.areEqual(this.relational_model, relationalField.relational_model);
    }

    public final List<String> getRelational_model() {
        return this.relational_model;
    }

    public final int getRelational_value() {
        return this.relational_value;
    }

    public final List<Integer> getVisibility_index() {
        return this.visibility_index;
    }

    public int hashCode() {
        int iHashCode = ((Integer.hashCode(this.relational_value) * 31) + this.visibility_index.hashCode()) * 31;
        List<String> list = this.relational_model;
        return iHashCode + (list == null ? 0 : list.hashCode());
    }

    public String toString() {
        return "RelationalField(relational_value=" + this.relational_value + ", visibility_index=" + this.visibility_index + ", relational_model=" + this.relational_model + ')';
    }

    public RelationalField(int i, List<Integer> visibility_index, List<String> list) {
        Intrinsics.checkNotNullParameter(visibility_index, "visibility_index");
        this.relational_value = i;
        this.visibility_index = visibility_index;
        this.relational_model = list;
    }
}
