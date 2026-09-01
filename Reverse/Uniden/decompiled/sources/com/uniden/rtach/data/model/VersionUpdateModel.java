package com.uniden.rtach.data.model;

import androidx.constraintlayout.widget.ConstraintLayout;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VersionUpdateModel.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u000b\n\u0002\b-\n\u0002\u0010\b\n\u0002\b\u0002\b\u0086\b\u0018\u00002\u00020\u0001B\u007f\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u0007\u001a\u00020\u0005\u0012\b\b\u0002\u0010\b\u001a\u00020\u0005\u0012\b\b\u0002\u0010\t\u001a\u00020\u0005\u0012\b\b\u0002\u0010\n\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u000b\u001a\u00020\u0005\u0012\b\b\u0002\u0010\f\u001a\u00020\u0005\u0012\b\b\u0002\u0010\r\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u000e\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u000f\u001a\u00020\u0005¢\u0006\u0004\b\u0010\u0010\u0011J\t\u0010#\u001a\u00020\u0003HÆ\u0003J\t\u0010$\u001a\u00020\u0005HÆ\u0003J\t\u0010%\u001a\u00020\u0005HÆ\u0003J\t\u0010&\u001a\u00020\u0005HÆ\u0003J\t\u0010'\u001a\u00020\u0005HÆ\u0003J\t\u0010(\u001a\u00020\u0005HÆ\u0003J\t\u0010)\u001a\u00020\u0005HÆ\u0003J\t\u0010*\u001a\u00020\u0005HÆ\u0003J\t\u0010+\u001a\u00020\u0005HÆ\u0003J\t\u0010,\u001a\u00020\u0005HÆ\u0003J\t\u0010-\u001a\u00020\u0005HÆ\u0003J\t\u0010.\u001a\u00020\u0005HÆ\u0003J\u0081\u0001\u0010/\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00052\b\b\u0002\u0010\u0007\u001a\u00020\u00052\b\b\u0002\u0010\b\u001a\u00020\u00052\b\b\u0002\u0010\t\u001a\u00020\u00052\b\b\u0002\u0010\n\u001a\u00020\u00052\b\b\u0002\u0010\u000b\u001a\u00020\u00052\b\b\u0002\u0010\f\u001a\u00020\u00052\b\b\u0002\u0010\r\u001a\u00020\u00052\b\b\u0002\u0010\u000e\u001a\u00020\u00052\b\b\u0002\u0010\u000f\u001a\u00020\u0005HÆ\u0001J\u0013\u00100\u001a\u00020\u00052\b\u00101\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u00102\u001a\u000203HÖ\u0001J\t\u00104\u001a\u00020\u0003HÖ\u0001R\u001a\u0010\u0002\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0012\u0010\u0013\"\u0004\b\u0014\u0010\u0015R\u001a\u0010\u0004\u001a\u00020\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0004\u0010\u0016\"\u0004\b\u0017\u0010\u0018R\u001a\u0010\u0006\u001a\u00020\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0006\u0010\u0016\"\u0004\b\u0019\u0010\u0018R\u001a\u0010\u0007\u001a\u00020\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0007\u0010\u0016\"\u0004\b\u001a\u0010\u0018R\u001a\u0010\b\u001a\u00020\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\b\u0010\u0016\"\u0004\b\u001b\u0010\u0018R\u001a\u0010\t\u001a\u00020\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\t\u0010\u0016\"\u0004\b\u001c\u0010\u0018R\u001a\u0010\n\u001a\u00020\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\n\u0010\u0016\"\u0004\b\u001d\u0010\u0018R\u001a\u0010\u000b\u001a\u00020\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u000b\u0010\u0016\"\u0004\b\u001e\u0010\u0018R\u001a\u0010\f\u001a\u00020\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\f\u0010\u0016\"\u0004\b\u001f\u0010\u0018R\u001a\u0010\r\u001a\u00020\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\r\u0010\u0016\"\u0004\b \u0010\u0018R\u001a\u0010\u000e\u001a\u00020\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u000e\u0010\u0016\"\u0004\b!\u0010\u0018R\u001a\u0010\u000f\u001a\u00020\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u000f\u0010\u0016\"\u0004\b\"\u0010\u0018¨\u00065"}, m491d2 = {"Lcom/uniden/rtach/data/model/VersionUpdateModel;", "", "radarModelName", "", "isUiUpdateAvailable", "", "isFRDUpdateAvailable", "isRRDUpdateAvailable", "isDspUpdateAvailable", "isGpsUpdateAvailable", "isSoundDbUpdateAvailable", "isGpsDbUpdateAvailable", "isInterface1UpdateAvailable", "isInterface2UpdateAvailable", "isInterface3UpdateAvailable", "isBtWiFiUpdateAvailable", "<init>", "(Ljava/lang/String;ZZZZZZZZZZZ)V", "getRadarModelName", "()Ljava/lang/String;", "setRadarModelName", "(Ljava/lang/String;)V", "()Z", "setUiUpdateAvailable", "(Z)V", "setFRDUpdateAvailable", "setRRDUpdateAvailable", "setDspUpdateAvailable", "setGpsUpdateAvailable", "setSoundDbUpdateAvailable", "setGpsDbUpdateAvailable", "setInterface1UpdateAvailable", "setInterface2UpdateAvailable", "setInterface3UpdateAvailable", "setBtWiFiUpdateAvailable", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "component8", "component9", "component10", "component11", "component12", "copy", "equals", "other", "hashCode", "", "toString", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final /* data */ class VersionUpdateModel {
    private boolean isBtWiFiUpdateAvailable;
    private boolean isDspUpdateAvailable;
    private boolean isFRDUpdateAvailable;
    private boolean isGpsDbUpdateAvailable;
    private boolean isGpsUpdateAvailable;
    private boolean isInterface1UpdateAvailable;
    private boolean isInterface2UpdateAvailable;
    private boolean isInterface3UpdateAvailable;
    private boolean isRRDUpdateAvailable;
    private boolean isSoundDbUpdateAvailable;
    private boolean isUiUpdateAvailable;
    private String radarModelName;

    public VersionUpdateModel() {
        this(null, false, false, false, false, false, false, false, false, false, false, false, 4095, null);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final String getRadarModelName() {
        return this.radarModelName;
    }

    /* JADX INFO: renamed from: component10, reason: from getter */
    public final boolean getIsInterface2UpdateAvailable() {
        return this.isInterface2UpdateAvailable;
    }

    /* JADX INFO: renamed from: component11, reason: from getter */
    public final boolean getIsInterface3UpdateAvailable() {
        return this.isInterface3UpdateAvailable;
    }

    /* JADX INFO: renamed from: component12, reason: from getter */
    public final boolean getIsBtWiFiUpdateAvailable() {
        return this.isBtWiFiUpdateAvailable;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final boolean getIsUiUpdateAvailable() {
        return this.isUiUpdateAvailable;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final boolean getIsFRDUpdateAvailable() {
        return this.isFRDUpdateAvailable;
    }

    /* JADX INFO: renamed from: component4, reason: from getter */
    public final boolean getIsRRDUpdateAvailable() {
        return this.isRRDUpdateAvailable;
    }

    /* JADX INFO: renamed from: component5, reason: from getter */
    public final boolean getIsDspUpdateAvailable() {
        return this.isDspUpdateAvailable;
    }

    /* JADX INFO: renamed from: component6, reason: from getter */
    public final boolean getIsGpsUpdateAvailable() {
        return this.isGpsUpdateAvailable;
    }

    /* JADX INFO: renamed from: component7, reason: from getter */
    public final boolean getIsSoundDbUpdateAvailable() {
        return this.isSoundDbUpdateAvailable;
    }

    /* JADX INFO: renamed from: component8, reason: from getter */
    public final boolean getIsGpsDbUpdateAvailable() {
        return this.isGpsDbUpdateAvailable;
    }

    /* JADX INFO: renamed from: component9, reason: from getter */
    public final boolean getIsInterface1UpdateAvailable() {
        return this.isInterface1UpdateAvailable;
    }

    public final VersionUpdateModel copy(String radarModelName, boolean isUiUpdateAvailable, boolean isFRDUpdateAvailable, boolean isRRDUpdateAvailable, boolean isDspUpdateAvailable, boolean isGpsUpdateAvailable, boolean isSoundDbUpdateAvailable, boolean isGpsDbUpdateAvailable, boolean isInterface1UpdateAvailable, boolean isInterface2UpdateAvailable, boolean isInterface3UpdateAvailable, boolean isBtWiFiUpdateAvailable) {
        Intrinsics.checkNotNullParameter(radarModelName, "radarModelName");
        return new VersionUpdateModel(radarModelName, isUiUpdateAvailable, isFRDUpdateAvailable, isRRDUpdateAvailable, isDspUpdateAvailable, isGpsUpdateAvailable, isSoundDbUpdateAvailable, isGpsDbUpdateAvailable, isInterface1UpdateAvailable, isInterface2UpdateAvailable, isInterface3UpdateAvailable, isBtWiFiUpdateAvailable);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof VersionUpdateModel)) {
            return false;
        }
        VersionUpdateModel versionUpdateModel = (VersionUpdateModel) other;
        return Intrinsics.areEqual(this.radarModelName, versionUpdateModel.radarModelName) && this.isUiUpdateAvailable == versionUpdateModel.isUiUpdateAvailable && this.isFRDUpdateAvailable == versionUpdateModel.isFRDUpdateAvailable && this.isRRDUpdateAvailable == versionUpdateModel.isRRDUpdateAvailable && this.isDspUpdateAvailable == versionUpdateModel.isDspUpdateAvailable && this.isGpsUpdateAvailable == versionUpdateModel.isGpsUpdateAvailable && this.isSoundDbUpdateAvailable == versionUpdateModel.isSoundDbUpdateAvailable && this.isGpsDbUpdateAvailable == versionUpdateModel.isGpsDbUpdateAvailable && this.isInterface1UpdateAvailable == versionUpdateModel.isInterface1UpdateAvailable && this.isInterface2UpdateAvailable == versionUpdateModel.isInterface2UpdateAvailable && this.isInterface3UpdateAvailable == versionUpdateModel.isInterface3UpdateAvailable && this.isBtWiFiUpdateAvailable == versionUpdateModel.isBtWiFiUpdateAvailable;
    }

    public final String getRadarModelName() {
        return this.radarModelName;
    }

    public int hashCode() {
        return (((((((((((((((((((((this.radarModelName.hashCode() * 31) + Boolean.hashCode(this.isUiUpdateAvailable)) * 31) + Boolean.hashCode(this.isFRDUpdateAvailable)) * 31) + Boolean.hashCode(this.isRRDUpdateAvailable)) * 31) + Boolean.hashCode(this.isDspUpdateAvailable)) * 31) + Boolean.hashCode(this.isGpsUpdateAvailable)) * 31) + Boolean.hashCode(this.isSoundDbUpdateAvailable)) * 31) + Boolean.hashCode(this.isGpsDbUpdateAvailable)) * 31) + Boolean.hashCode(this.isInterface1UpdateAvailable)) * 31) + Boolean.hashCode(this.isInterface2UpdateAvailable)) * 31) + Boolean.hashCode(this.isInterface3UpdateAvailable)) * 31) + Boolean.hashCode(this.isBtWiFiUpdateAvailable);
    }

    public final boolean isBtWiFiUpdateAvailable() {
        return this.isBtWiFiUpdateAvailable;
    }

    public final boolean isDspUpdateAvailable() {
        return this.isDspUpdateAvailable;
    }

    public final boolean isFRDUpdateAvailable() {
        return this.isFRDUpdateAvailable;
    }

    public final boolean isGpsDbUpdateAvailable() {
        return this.isGpsDbUpdateAvailable;
    }

    public final boolean isGpsUpdateAvailable() {
        return this.isGpsUpdateAvailable;
    }

    public final boolean isInterface1UpdateAvailable() {
        return this.isInterface1UpdateAvailable;
    }

    public final boolean isInterface2UpdateAvailable() {
        return this.isInterface2UpdateAvailable;
    }

    public final boolean isInterface3UpdateAvailable() {
        return this.isInterface3UpdateAvailable;
    }

    public final boolean isRRDUpdateAvailable() {
        return this.isRRDUpdateAvailable;
    }

    public final boolean isSoundDbUpdateAvailable() {
        return this.isSoundDbUpdateAvailable;
    }

    public final boolean isUiUpdateAvailable() {
        return this.isUiUpdateAvailable;
    }

    public final void setBtWiFiUpdateAvailable(boolean z) {
        this.isBtWiFiUpdateAvailable = z;
    }

    public final void setDspUpdateAvailable(boolean z) {
        this.isDspUpdateAvailable = z;
    }

    public final void setFRDUpdateAvailable(boolean z) {
        this.isFRDUpdateAvailable = z;
    }

    public final void setGpsDbUpdateAvailable(boolean z) {
        this.isGpsDbUpdateAvailable = z;
    }

    public final void setGpsUpdateAvailable(boolean z) {
        this.isGpsUpdateAvailable = z;
    }

    public final void setInterface1UpdateAvailable(boolean z) {
        this.isInterface1UpdateAvailable = z;
    }

    public final void setInterface2UpdateAvailable(boolean z) {
        this.isInterface2UpdateAvailable = z;
    }

    public final void setInterface3UpdateAvailable(boolean z) {
        this.isInterface3UpdateAvailable = z;
    }

    public final void setRRDUpdateAvailable(boolean z) {
        this.isRRDUpdateAvailable = z;
    }

    public final void setRadarModelName(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.radarModelName = str;
    }

    public final void setSoundDbUpdateAvailable(boolean z) {
        this.isSoundDbUpdateAvailable = z;
    }

    public final void setUiUpdateAvailable(boolean z) {
        this.isUiUpdateAvailable = z;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder("VersionUpdateModel(radarModelName=");
        sb.append(this.radarModelName).append(", isUiUpdateAvailable=").append(this.isUiUpdateAvailable).append(", isFRDUpdateAvailable=").append(this.isFRDUpdateAvailable).append(", isRRDUpdateAvailable=").append(this.isRRDUpdateAvailable).append(", isDspUpdateAvailable=").append(this.isDspUpdateAvailable).append(", isGpsUpdateAvailable=").append(this.isGpsUpdateAvailable).append(", isSoundDbUpdateAvailable=").append(this.isSoundDbUpdateAvailable).append(", isGpsDbUpdateAvailable=").append(this.isGpsDbUpdateAvailable).append(", isInterface1UpdateAvailable=").append(this.isInterface1UpdateAvailable).append(", isInterface2UpdateAvailable=").append(this.isInterface2UpdateAvailable).append(", isInterface3UpdateAvailable=").append(this.isInterface3UpdateAvailable).append(", isBtWiFiUpdateAvailable=");
        sb.append(this.isBtWiFiUpdateAvailable).append(')');
        return sb.toString();
    }

    public VersionUpdateModel(String radarModelName, boolean z, boolean z2, boolean z3, boolean z4, boolean z5, boolean z6, boolean z7, boolean z8, boolean z9, boolean z10, boolean z11) {
        Intrinsics.checkNotNullParameter(radarModelName, "radarModelName");
        this.radarModelName = radarModelName;
        this.isUiUpdateAvailable = z;
        this.isFRDUpdateAvailable = z2;
        this.isRRDUpdateAvailable = z3;
        this.isDspUpdateAvailable = z4;
        this.isGpsUpdateAvailable = z5;
        this.isSoundDbUpdateAvailable = z6;
        this.isGpsDbUpdateAvailable = z7;
        this.isInterface1UpdateAvailable = z8;
        this.isInterface2UpdateAvailable = z9;
        this.isInterface3UpdateAvailable = z10;
        this.isBtWiFiUpdateAvailable = z11;
    }

    public /* synthetic */ VersionUpdateModel(String str, boolean z, boolean z2, boolean z3, boolean z4, boolean z5, boolean z6, boolean z7, boolean z8, boolean z9, boolean z10, boolean z11, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this((i & 1) != 0 ? "" : str, (i & 2) != 0 ? false : z, (i & 4) != 0 ? false : z2, (i & 8) != 0 ? false : z3, (i & 16) != 0 ? false : z4, (i & 32) != 0 ? false : z5, (i & 64) != 0 ? false : z6, (i & 128) != 0 ? false : z7, (i & 256) != 0 ? false : z8, (i & 512) != 0 ? false : z9, (i & 1024) != 0 ? false : z10, (i & 2048) == 0 ? z11 : false);
    }
}
