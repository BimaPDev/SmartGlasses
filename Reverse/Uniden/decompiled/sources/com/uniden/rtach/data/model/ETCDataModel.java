package com.uniden.rtach.data.model;

import androidx.constraintlayout.widget.ConstraintLayout;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: ETCDataModel.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b5\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0086\b\u0018\u00002\u00020\u0001B\u007f\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0005\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0007\u001a\u00020\u0003\u0012\b\b\u0002\u0010\b\u001a\u00020\u0003\u0012\b\b\u0002\u0010\t\u001a\u00020\u0003\u0012\b\b\u0002\u0010\n\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u000b\u001a\u00020\u0003\u0012\b\b\u0002\u0010\f\u001a\u00020\u0003\u0012\b\b\u0002\u0010\r\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u000e\u001a\u00020\u0003¢\u0006\u0004\b\u000f\u0010\u0010J\t\u0010+\u001a\u00020\u0003HÆ\u0003J\t\u0010,\u001a\u00020\u0003HÆ\u0003J\t\u0010-\u001a\u00020\u0003HÆ\u0003J\t\u0010.\u001a\u00020\u0003HÆ\u0003J\t\u0010/\u001a\u00020\u0003HÆ\u0003J\t\u00100\u001a\u00020\u0003HÆ\u0003J\t\u00101\u001a\u00020\u0003HÆ\u0003J\t\u00102\u001a\u00020\u0003HÆ\u0003J\t\u00103\u001a\u00020\u0003HÆ\u0003J\t\u00104\u001a\u00020\u0003HÆ\u0003J\t\u00105\u001a\u00020\u0003HÆ\u0003J\t\u00106\u001a\u00020\u0003HÆ\u0003J\u0081\u0001\u00107\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u00032\b\b\u0002\u0010\u0006\u001a\u00020\u00032\b\b\u0002\u0010\u0007\u001a\u00020\u00032\b\b\u0002\u0010\b\u001a\u00020\u00032\b\b\u0002\u0010\t\u001a\u00020\u00032\b\b\u0002\u0010\n\u001a\u00020\u00032\b\b\u0002\u0010\u000b\u001a\u00020\u00032\b\b\u0002\u0010\f\u001a\u00020\u00032\b\b\u0002\u0010\r\u001a\u00020\u00032\b\b\u0002\u0010\u000e\u001a\u00020\u0003HÆ\u0001J\u0013\u00108\u001a\u0002092\b\u0010:\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010;\u001a\u00020<HÖ\u0001J\t\u0010=\u001a\u00020\u0003HÖ\u0001R\u001a\u0010\u0002\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0011\u0010\u0012\"\u0004\b\u0013\u0010\u0014R\u001a\u0010\u0004\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0015\u0010\u0012\"\u0004\b\u0016\u0010\u0014R\u001a\u0010\u0005\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0017\u0010\u0012\"\u0004\b\u0018\u0010\u0014R\u001a\u0010\u0006\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0019\u0010\u0012\"\u0004\b\u001a\u0010\u0014R\u001a\u0010\u0007\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u001b\u0010\u0012\"\u0004\b\u001c\u0010\u0014R\u001a\u0010\b\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u001d\u0010\u0012\"\u0004\b\u001e\u0010\u0014R\u001a\u0010\t\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u001f\u0010\u0012\"\u0004\b \u0010\u0014R\u001a\u0010\n\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b!\u0010\u0012\"\u0004\b\"\u0010\u0014R\u001a\u0010\u000b\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b#\u0010\u0012\"\u0004\b$\u0010\u0014R\u001a\u0010\f\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b%\u0010\u0012\"\u0004\b&\u0010\u0014R\u001a\u0010\r\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b'\u0010\u0012\"\u0004\b(\u0010\u0014R\u001a\u0010\u000e\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b)\u0010\u0012\"\u0004\b*\u0010\u0014¨\u0006>"}, m491d2 = {"Lcom/uniden/rtach/data/model/ETCDataModel;", "", "voltage", "", "poiType", "poiDistance", "poiLimitSpeed", "gpsDirection", "currentSpeed", "altitude", "gpsStatus", "warning", "scanDoneCount", "radarWiFiStatus", "autoBrightnessStatus", "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", "getVoltage", "()Ljava/lang/String;", "setVoltage", "(Ljava/lang/String;)V", "getPoiType", "setPoiType", "getPoiDistance", "setPoiDistance", "getPoiLimitSpeed", "setPoiLimitSpeed", "getGpsDirection", "setGpsDirection", "getCurrentSpeed", "setCurrentSpeed", "getAltitude", "setAltitude", "getGpsStatus", "setGpsStatus", "getWarning", "setWarning", "getScanDoneCount", "setScanDoneCount", "getRadarWiFiStatus", "setRadarWiFiStatus", "getAutoBrightnessStatus", "setAutoBrightnessStatus", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "component8", "component9", "component10", "component11", "component12", "copy", "equals", "", "other", "hashCode", "", "toString", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final /* data */ class ETCDataModel {
    private String altitude;
    private String autoBrightnessStatus;
    private String currentSpeed;
    private String gpsDirection;
    private String gpsStatus;
    private String poiDistance;
    private String poiLimitSpeed;
    private String poiType;
    private String radarWiFiStatus;
    private String scanDoneCount;
    private String voltage;
    private String warning;

    public ETCDataModel() {
        this(null, null, null, null, null, null, null, null, null, null, null, null, 4095, null);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final String getVoltage() {
        return this.voltage;
    }

    /* JADX INFO: renamed from: component10, reason: from getter */
    public final String getScanDoneCount() {
        return this.scanDoneCount;
    }

    /* JADX INFO: renamed from: component11, reason: from getter */
    public final String getRadarWiFiStatus() {
        return this.radarWiFiStatus;
    }

    /* JADX INFO: renamed from: component12, reason: from getter */
    public final String getAutoBrightnessStatus() {
        return this.autoBrightnessStatus;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final String getPoiType() {
        return this.poiType;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final String getPoiDistance() {
        return this.poiDistance;
    }

    /* JADX INFO: renamed from: component4, reason: from getter */
    public final String getPoiLimitSpeed() {
        return this.poiLimitSpeed;
    }

    /* JADX INFO: renamed from: component5, reason: from getter */
    public final String getGpsDirection() {
        return this.gpsDirection;
    }

    /* JADX INFO: renamed from: component6, reason: from getter */
    public final String getCurrentSpeed() {
        return this.currentSpeed;
    }

    /* JADX INFO: renamed from: component7, reason: from getter */
    public final String getAltitude() {
        return this.altitude;
    }

    /* JADX INFO: renamed from: component8, reason: from getter */
    public final String getGpsStatus() {
        return this.gpsStatus;
    }

    /* JADX INFO: renamed from: component9, reason: from getter */
    public final String getWarning() {
        return this.warning;
    }

    public final ETCDataModel copy(String voltage, String poiType, String poiDistance, String poiLimitSpeed, String gpsDirection, String currentSpeed, String altitude, String gpsStatus, String warning, String scanDoneCount, String radarWiFiStatus, String autoBrightnessStatus) {
        Intrinsics.checkNotNullParameter(voltage, "voltage");
        Intrinsics.checkNotNullParameter(poiType, "poiType");
        Intrinsics.checkNotNullParameter(poiDistance, "poiDistance");
        Intrinsics.checkNotNullParameter(poiLimitSpeed, "poiLimitSpeed");
        Intrinsics.checkNotNullParameter(gpsDirection, "gpsDirection");
        Intrinsics.checkNotNullParameter(currentSpeed, "currentSpeed");
        Intrinsics.checkNotNullParameter(altitude, "altitude");
        Intrinsics.checkNotNullParameter(gpsStatus, "gpsStatus");
        Intrinsics.checkNotNullParameter(warning, "warning");
        Intrinsics.checkNotNullParameter(scanDoneCount, "scanDoneCount");
        Intrinsics.checkNotNullParameter(radarWiFiStatus, "radarWiFiStatus");
        Intrinsics.checkNotNullParameter(autoBrightnessStatus, "autoBrightnessStatus");
        return new ETCDataModel(voltage, poiType, poiDistance, poiLimitSpeed, gpsDirection, currentSpeed, altitude, gpsStatus, warning, scanDoneCount, radarWiFiStatus, autoBrightnessStatus);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof ETCDataModel)) {
            return false;
        }
        ETCDataModel eTCDataModel = (ETCDataModel) other;
        return Intrinsics.areEqual(this.voltage, eTCDataModel.voltage) && Intrinsics.areEqual(this.poiType, eTCDataModel.poiType) && Intrinsics.areEqual(this.poiDistance, eTCDataModel.poiDistance) && Intrinsics.areEqual(this.poiLimitSpeed, eTCDataModel.poiLimitSpeed) && Intrinsics.areEqual(this.gpsDirection, eTCDataModel.gpsDirection) && Intrinsics.areEqual(this.currentSpeed, eTCDataModel.currentSpeed) && Intrinsics.areEqual(this.altitude, eTCDataModel.altitude) && Intrinsics.areEqual(this.gpsStatus, eTCDataModel.gpsStatus) && Intrinsics.areEqual(this.warning, eTCDataModel.warning) && Intrinsics.areEqual(this.scanDoneCount, eTCDataModel.scanDoneCount) && Intrinsics.areEqual(this.radarWiFiStatus, eTCDataModel.radarWiFiStatus) && Intrinsics.areEqual(this.autoBrightnessStatus, eTCDataModel.autoBrightnessStatus);
    }

    public final String getAltitude() {
        return this.altitude;
    }

    public final String getAutoBrightnessStatus() {
        return this.autoBrightnessStatus;
    }

    public final String getCurrentSpeed() {
        return this.currentSpeed;
    }

    public final String getGpsDirection() {
        return this.gpsDirection;
    }

    public final String getGpsStatus() {
        return this.gpsStatus;
    }

    public final String getPoiDistance() {
        return this.poiDistance;
    }

    public final String getPoiLimitSpeed() {
        return this.poiLimitSpeed;
    }

    public final String getPoiType() {
        return this.poiType;
    }

    public final String getRadarWiFiStatus() {
        return this.radarWiFiStatus;
    }

    public final String getScanDoneCount() {
        return this.scanDoneCount;
    }

    public final String getVoltage() {
        return this.voltage;
    }

    public final String getWarning() {
        return this.warning;
    }

    public int hashCode() {
        return (((((((((((((((((((((this.voltage.hashCode() * 31) + this.poiType.hashCode()) * 31) + this.poiDistance.hashCode()) * 31) + this.poiLimitSpeed.hashCode()) * 31) + this.gpsDirection.hashCode()) * 31) + this.currentSpeed.hashCode()) * 31) + this.altitude.hashCode()) * 31) + this.gpsStatus.hashCode()) * 31) + this.warning.hashCode()) * 31) + this.scanDoneCount.hashCode()) * 31) + this.radarWiFiStatus.hashCode()) * 31) + this.autoBrightnessStatus.hashCode();
    }

    public final void setAltitude(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.altitude = str;
    }

    public final void setAutoBrightnessStatus(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.autoBrightnessStatus = str;
    }

    public final void setCurrentSpeed(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.currentSpeed = str;
    }

    public final void setGpsDirection(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.gpsDirection = str;
    }

    public final void setGpsStatus(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.gpsStatus = str;
    }

    public final void setPoiDistance(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.poiDistance = str;
    }

    public final void setPoiLimitSpeed(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.poiLimitSpeed = str;
    }

    public final void setPoiType(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.poiType = str;
    }

    public final void setRadarWiFiStatus(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.radarWiFiStatus = str;
    }

    public final void setScanDoneCount(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.scanDoneCount = str;
    }

    public final void setVoltage(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.voltage = str;
    }

    public final void setWarning(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.warning = str;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder("ETCDataModel(voltage=");
        sb.append(this.voltage).append(", poiType=").append(this.poiType).append(", poiDistance=").append(this.poiDistance).append(", poiLimitSpeed=").append(this.poiLimitSpeed).append(", gpsDirection=").append(this.gpsDirection).append(", currentSpeed=").append(this.currentSpeed).append(", altitude=").append(this.altitude).append(", gpsStatus=").append(this.gpsStatus).append(", warning=").append(this.warning).append(", scanDoneCount=").append(this.scanDoneCount).append(", radarWiFiStatus=").append(this.radarWiFiStatus).append(", autoBrightnessStatus=");
        sb.append(this.autoBrightnessStatus).append(')');
        return sb.toString();
    }

    public ETCDataModel(String voltage, String poiType, String poiDistance, String poiLimitSpeed, String gpsDirection, String currentSpeed, String altitude, String gpsStatus, String warning, String scanDoneCount, String radarWiFiStatus, String autoBrightnessStatus) {
        Intrinsics.checkNotNullParameter(voltage, "voltage");
        Intrinsics.checkNotNullParameter(poiType, "poiType");
        Intrinsics.checkNotNullParameter(poiDistance, "poiDistance");
        Intrinsics.checkNotNullParameter(poiLimitSpeed, "poiLimitSpeed");
        Intrinsics.checkNotNullParameter(gpsDirection, "gpsDirection");
        Intrinsics.checkNotNullParameter(currentSpeed, "currentSpeed");
        Intrinsics.checkNotNullParameter(altitude, "altitude");
        Intrinsics.checkNotNullParameter(gpsStatus, "gpsStatus");
        Intrinsics.checkNotNullParameter(warning, "warning");
        Intrinsics.checkNotNullParameter(scanDoneCount, "scanDoneCount");
        Intrinsics.checkNotNullParameter(radarWiFiStatus, "radarWiFiStatus");
        Intrinsics.checkNotNullParameter(autoBrightnessStatus, "autoBrightnessStatus");
        this.voltage = voltage;
        this.poiType = poiType;
        this.poiDistance = poiDistance;
        this.poiLimitSpeed = poiLimitSpeed;
        this.gpsDirection = gpsDirection;
        this.currentSpeed = currentSpeed;
        this.altitude = altitude;
        this.gpsStatus = gpsStatus;
        this.warning = warning;
        this.scanDoneCount = scanDoneCount;
        this.radarWiFiStatus = radarWiFiStatus;
        this.autoBrightnessStatus = autoBrightnessStatus;
    }

    public /* synthetic */ ETCDataModel(String str, String str2, String str3, String str4, String str5, String str6, String str7, String str8, String str9, String str10, String str11, String str12, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this((i & 1) != 0 ? "" : str, (i & 2) != 0 ? "" : str2, (i & 4) != 0 ? "" : str3, (i & 8) != 0 ? "" : str4, (i & 16) != 0 ? "" : str5, (i & 32) != 0 ? "" : str6, (i & 64) != 0 ? "0" : str7, (i & 128) == 0 ? str8 : "0", (i & 256) != 0 ? "" : str9, (i & 512) != 0 ? "" : str10, (i & 1024) != 0 ? "" : str11, (i & 2048) == 0 ? str12 : "");
    }
}
