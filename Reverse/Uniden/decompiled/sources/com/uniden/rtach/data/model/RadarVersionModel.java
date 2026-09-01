package com.uniden.rtach.data.model;

import androidx.constraintlayout.widget.ConstraintLayout;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: RadarVersionModel.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0019\b\u0086\b\u0018\u00002\u00020\u0001B/\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u0007\u001a\u00020\b¢\u0006\u0004\b\t\u0010\nJ\t\u0010\u0018\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0019\u001a\u00020\u0005HÆ\u0003J\t\u0010\u001a\u001a\u00020\u0005HÆ\u0003J\t\u0010\u001b\u001a\u00020\bHÆ\u0003J1\u0010\u001c\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00052\b\b\u0002\u0010\u0007\u001a\u00020\bHÆ\u0001J\u0013\u0010\u001d\u001a\u00020\b2\b\u0010\u001e\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u001f\u001a\u00020\u0005HÖ\u0001J\t\u0010 \u001a\u00020\u0003HÖ\u0001R\u001a\u0010\u0002\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u000b\u0010\f\"\u0004\b\r\u0010\u000eR\u001a\u0010\u0004\u001a\u00020\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u000f\u0010\u0010\"\u0004\b\u0011\u0010\u0012R\u001a\u0010\u0006\u001a\u00020\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0013\u0010\u0010\"\u0004\b\u0014\u0010\u0012R\u001a\u0010\u0007\u001a\u00020\bX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0007\u0010\u0015\"\u0004\b\u0016\u0010\u0017¨\u0006!"}, m491d2 = {"Lcom/uniden/rtach/data/model/RadarVersionModel;", "", "elementName", "", "currentVersion", "", "latestVersion", "isUpdateAvailable", "", "<init>", "(Ljava/lang/String;IIZ)V", "getElementName", "()Ljava/lang/String;", "setElementName", "(Ljava/lang/String;)V", "getCurrentVersion", "()I", "setCurrentVersion", "(I)V", "getLatestVersion", "setLatestVersion", "()Z", "setUpdateAvailable", "(Z)V", "component1", "component2", "component3", "component4", "copy", "equals", "other", "hashCode", "toString", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final /* data */ class RadarVersionModel {
    private int currentVersion;
    private String elementName;
    private boolean isUpdateAvailable;
    private int latestVersion;

    public RadarVersionModel() {
        this(null, 0, 0, false, 15, null);
    }

    public static /* synthetic */ RadarVersionModel copy$default(RadarVersionModel radarVersionModel, String str, int i, int i2, boolean z, int i3, Object obj) {
        if ((i3 & 1) != 0) {
            str = radarVersionModel.elementName;
        }
        if ((i3 & 2) != 0) {
            i = radarVersionModel.currentVersion;
        }
        if ((i3 & 4) != 0) {
            i2 = radarVersionModel.latestVersion;
        }
        if ((i3 & 8) != 0) {
            z = radarVersionModel.isUpdateAvailable;
        }
        return radarVersionModel.copy(str, i, i2, z);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final String getElementName() {
        return this.elementName;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final int getCurrentVersion() {
        return this.currentVersion;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final int getLatestVersion() {
        return this.latestVersion;
    }

    /* JADX INFO: renamed from: component4, reason: from getter */
    public final boolean getIsUpdateAvailable() {
        return this.isUpdateAvailable;
    }

    public final RadarVersionModel copy(String elementName, int currentVersion, int latestVersion, boolean isUpdateAvailable) {
        Intrinsics.checkNotNullParameter(elementName, "elementName");
        return new RadarVersionModel(elementName, currentVersion, latestVersion, isUpdateAvailable);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof RadarVersionModel)) {
            return false;
        }
        RadarVersionModel radarVersionModel = (RadarVersionModel) other;
        return Intrinsics.areEqual(this.elementName, radarVersionModel.elementName) && this.currentVersion == radarVersionModel.currentVersion && this.latestVersion == radarVersionModel.latestVersion && this.isUpdateAvailable == radarVersionModel.isUpdateAvailable;
    }

    public final int getCurrentVersion() {
        return this.currentVersion;
    }

    public final String getElementName() {
        return this.elementName;
    }

    public final int getLatestVersion() {
        return this.latestVersion;
    }

    public int hashCode() {
        return (((((this.elementName.hashCode() * 31) + Integer.hashCode(this.currentVersion)) * 31) + Integer.hashCode(this.latestVersion)) * 31) + Boolean.hashCode(this.isUpdateAvailable);
    }

    public final boolean isUpdateAvailable() {
        return this.isUpdateAvailable;
    }

    public final void setCurrentVersion(int i) {
        this.currentVersion = i;
    }

    public final void setElementName(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.elementName = str;
    }

    public final void setLatestVersion(int i) {
        this.latestVersion = i;
    }

    public final void setUpdateAvailable(boolean z) {
        this.isUpdateAvailable = z;
    }

    public String toString() {
        return "RadarVersionModel(elementName=" + this.elementName + ", currentVersion=" + this.currentVersion + ", latestVersion=" + this.latestVersion + ", isUpdateAvailable=" + this.isUpdateAvailable + ')';
    }

    public RadarVersionModel(String elementName, int i, int i2, boolean z) {
        Intrinsics.checkNotNullParameter(elementName, "elementName");
        this.elementName = elementName;
        this.currentVersion = i;
        this.latestVersion = i2;
        this.isUpdateAvailable = z;
    }

    public /* synthetic */ RadarVersionModel(String str, int i, int i2, boolean z, int i3, DefaultConstructorMarker defaultConstructorMarker) {
        this((i3 & 1) != 0 ? "0" : str, (i3 & 2) != 0 ? 0 : i, (i3 & 4) != 0 ? 0 : i2, (i3 & 8) != 0 ? false : z);
    }
}
