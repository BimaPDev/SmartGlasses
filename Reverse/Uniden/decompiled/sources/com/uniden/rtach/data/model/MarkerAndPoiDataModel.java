package com.uniden.rtach.data.model;

import androidx.constraintlayout.widget.ConstraintLayout;
import com.google.android.gms.maps.model.LatLng;
import com.uniden.rtach.helper.MarkerTypeEnum;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: MarkerAndPoiDataModel.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b&\n\u0002\u0010\u000b\n\u0002\b\u0004\b\u0086\b\u0018\u00002\u00020\u0001BY\u0012\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005\u0012\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0007\u0012\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010\t\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\u000b\u0012\n\b\u0002\u0010\f\u001a\u0004\u0018\u00010\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u000b\u0010(\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\t\u0010)\u001a\u00020\u0005HÆ\u0003J\u000b\u0010*\u001a\u0004\u0018\u00010\u0007HÆ\u0003J\u0010\u0010+\u001a\u0004\u0018\u00010\u0005HÆ\u0003¢\u0006\u0002\u0010\u001cJ\u0010\u0010,\u001a\u0004\u0018\u00010\u0005HÆ\u0003¢\u0006\u0002\u0010\u001cJ\u000b\u0010-\u001a\u0004\u0018\u00010\u000bHÆ\u0003J\u000b\u0010.\u001a\u0004\u0018\u00010\u000bHÆ\u0003J`\u0010/\u001a\u00020\u00002\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u00072\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u0010\t\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\u000b2\n\b\u0002\u0010\f\u001a\u0004\u0018\u00010\u000bHÆ\u0001¢\u0006\u0002\u00100J\u0013\u00101\u001a\u0002022\b\u00103\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u00104\u001a\u00020\u0005HÖ\u0001J\t\u00105\u001a\u00020\u000bHÖ\u0001R\u001c\u0010\u0002\u001a\u0004\u0018\u00010\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u000f\u0010\u0010\"\u0004\b\u0011\u0010\u0012R\u001a\u0010\u0004\u001a\u00020\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0013\u0010\u0014\"\u0004\b\u0015\u0010\u0016R\u001c\u0010\u0006\u001a\u0004\u0018\u00010\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0017\u0010\u0018\"\u0004\b\u0019\u0010\u001aR\u001e\u0010\b\u001a\u0004\u0018\u00010\u0005X\u0086\u000e¢\u0006\u0010\n\u0002\u0010\u001f\u001a\u0004\b\u001b\u0010\u001c\"\u0004\b\u001d\u0010\u001eR\u001e\u0010\t\u001a\u0004\u0018\u00010\u0005X\u0086\u000e¢\u0006\u0010\n\u0002\u0010\u001f\u001a\u0004\b \u0010\u001c\"\u0004\b!\u0010\u001eR\u001c\u0010\n\u001a\u0004\u0018\u00010\u000bX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\"\u0010#\"\u0004\b$\u0010%R\u001c\u0010\f\u001a\u0004\u0018\u00010\u000bX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b&\u0010#\"\u0004\b'\u0010%¨\u00066"}, m491d2 = {"Lcom/uniden/rtach/data/model/MarkerAndPoiDataModel;", "", "markerType", "Lcom/uniden/rtach/helper/MarkerTypeEnum;", "length", "", "latLng", "Lcom/google/android/gms/maps/model/LatLng;", "angle", "speedLimit", "hexStringLat", "", "hexStringLng", "<init>", "(Lcom/uniden/rtach/helper/MarkerTypeEnum;ILcom/google/android/gms/maps/model/LatLng;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;)V", "getMarkerType", "()Lcom/uniden/rtach/helper/MarkerTypeEnum;", "setMarkerType", "(Lcom/uniden/rtach/helper/MarkerTypeEnum;)V", "getLength", "()I", "setLength", "(I)V", "getLatLng", "()Lcom/google/android/gms/maps/model/LatLng;", "setLatLng", "(Lcom/google/android/gms/maps/model/LatLng;)V", "getAngle", "()Ljava/lang/Integer;", "setAngle", "(Ljava/lang/Integer;)V", "Ljava/lang/Integer;", "getSpeedLimit", "setSpeedLimit", "getHexStringLat", "()Ljava/lang/String;", "setHexStringLat", "(Ljava/lang/String;)V", "getHexStringLng", "setHexStringLng", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "copy", "(Lcom/uniden/rtach/helper/MarkerTypeEnum;ILcom/google/android/gms/maps/model/LatLng;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;)Lcom/uniden/rtach/data/model/MarkerAndPoiDataModel;", "equals", "", "other", "hashCode", "toString", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final /* data */ class MarkerAndPoiDataModel {
    private Integer angle;
    private String hexStringLat;
    private String hexStringLng;
    private LatLng latLng;
    private int length;
    private MarkerTypeEnum markerType;
    private Integer speedLimit;

    public MarkerAndPoiDataModel() {
        this(null, 0, null, null, null, null, null, 127, null);
    }

    public static /* synthetic */ MarkerAndPoiDataModel copy$default(MarkerAndPoiDataModel markerAndPoiDataModel, MarkerTypeEnum markerTypeEnum, int i, LatLng latLng, Integer num, Integer num2, String str, String str2, int i2, Object obj) {
        if ((i2 & 1) != 0) {
            markerTypeEnum = markerAndPoiDataModel.markerType;
        }
        if ((i2 & 2) != 0) {
            i = markerAndPoiDataModel.length;
        }
        int i3 = i;
        if ((i2 & 4) != 0) {
            latLng = markerAndPoiDataModel.latLng;
        }
        LatLng latLng2 = latLng;
        if ((i2 & 8) != 0) {
            num = markerAndPoiDataModel.angle;
        }
        Integer num3 = num;
        if ((i2 & 16) != 0) {
            num2 = markerAndPoiDataModel.speedLimit;
        }
        Integer num4 = num2;
        if ((i2 & 32) != 0) {
            str = markerAndPoiDataModel.hexStringLat;
        }
        String str3 = str;
        if ((i2 & 64) != 0) {
            str2 = markerAndPoiDataModel.hexStringLng;
        }
        return markerAndPoiDataModel.copy(markerTypeEnum, i3, latLng2, num3, num4, str3, str2);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final MarkerTypeEnum getMarkerType() {
        return this.markerType;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final int getLength() {
        return this.length;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final LatLng getLatLng() {
        return this.latLng;
    }

    /* JADX INFO: renamed from: component4, reason: from getter */
    public final Integer getAngle() {
        return this.angle;
    }

    /* JADX INFO: renamed from: component5, reason: from getter */
    public final Integer getSpeedLimit() {
        return this.speedLimit;
    }

    /* JADX INFO: renamed from: component6, reason: from getter */
    public final String getHexStringLat() {
        return this.hexStringLat;
    }

    /* JADX INFO: renamed from: component7, reason: from getter */
    public final String getHexStringLng() {
        return this.hexStringLng;
    }

    public final MarkerAndPoiDataModel copy(MarkerTypeEnum markerType, int length, LatLng latLng, Integer angle, Integer speedLimit, String hexStringLat, String hexStringLng) {
        return new MarkerAndPoiDataModel(markerType, length, latLng, angle, speedLimit, hexStringLat, hexStringLng);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof MarkerAndPoiDataModel)) {
            return false;
        }
        MarkerAndPoiDataModel markerAndPoiDataModel = (MarkerAndPoiDataModel) other;
        return this.markerType == markerAndPoiDataModel.markerType && this.length == markerAndPoiDataModel.length && Intrinsics.areEqual(this.latLng, markerAndPoiDataModel.latLng) && Intrinsics.areEqual(this.angle, markerAndPoiDataModel.angle) && Intrinsics.areEqual(this.speedLimit, markerAndPoiDataModel.speedLimit) && Intrinsics.areEqual(this.hexStringLat, markerAndPoiDataModel.hexStringLat) && Intrinsics.areEqual(this.hexStringLng, markerAndPoiDataModel.hexStringLng);
    }

    public final Integer getAngle() {
        return this.angle;
    }

    public final String getHexStringLat() {
        return this.hexStringLat;
    }

    public final String getHexStringLng() {
        return this.hexStringLng;
    }

    public final LatLng getLatLng() {
        return this.latLng;
    }

    public final int getLength() {
        return this.length;
    }

    public final MarkerTypeEnum getMarkerType() {
        return this.markerType;
    }

    public final Integer getSpeedLimit() {
        return this.speedLimit;
    }

    public int hashCode() {
        MarkerTypeEnum markerTypeEnum = this.markerType;
        int iHashCode = (((markerTypeEnum == null ? 0 : markerTypeEnum.hashCode()) * 31) + Integer.hashCode(this.length)) * 31;
        LatLng latLng = this.latLng;
        int iHashCode2 = (iHashCode + (latLng == null ? 0 : latLng.hashCode())) * 31;
        Integer num = this.angle;
        int iHashCode3 = (iHashCode2 + (num == null ? 0 : num.hashCode())) * 31;
        Integer num2 = this.speedLimit;
        int iHashCode4 = (iHashCode3 + (num2 == null ? 0 : num2.hashCode())) * 31;
        String str = this.hexStringLat;
        int iHashCode5 = (iHashCode4 + (str == null ? 0 : str.hashCode())) * 31;
        String str2 = this.hexStringLng;
        return iHashCode5 + (str2 != null ? str2.hashCode() : 0);
    }

    public final void setAngle(Integer num) {
        this.angle = num;
    }

    public final void setHexStringLat(String str) {
        this.hexStringLat = str;
    }

    public final void setHexStringLng(String str) {
        this.hexStringLng = str;
    }

    public final void setLatLng(LatLng latLng) {
        this.latLng = latLng;
    }

    public final void setLength(int i) {
        this.length = i;
    }

    public final void setMarkerType(MarkerTypeEnum markerTypeEnum) {
        this.markerType = markerTypeEnum;
    }

    public final void setSpeedLimit(Integer num) {
        this.speedLimit = num;
    }

    public String toString() {
        return "MarkerAndPoiDataModel(markerType=" + this.markerType + ", length=" + this.length + ", latLng=" + this.latLng + ", angle=" + this.angle + ", speedLimit=" + this.speedLimit + ", hexStringLat=" + this.hexStringLat + ", hexStringLng=" + this.hexStringLng + ')';
    }

    public MarkerAndPoiDataModel(MarkerTypeEnum markerTypeEnum, int i, LatLng latLng, Integer num, Integer num2, String str, String str2) {
        this.markerType = markerTypeEnum;
        this.length = i;
        this.latLng = latLng;
        this.angle = num;
        this.speedLimit = num2;
        this.hexStringLat = str;
        this.hexStringLng = str2;
    }

    public /* synthetic */ MarkerAndPoiDataModel(MarkerTypeEnum markerTypeEnum, int i, LatLng latLng, Integer num, Integer num2, String str, String str2, int i2, DefaultConstructorMarker defaultConstructorMarker) {
        this((i2 & 1) != 0 ? null : markerTypeEnum, (i2 & 2) != 0 ? 0 : i, (i2 & 4) != 0 ? null : latLng, (i2 & 8) != 0 ? null : num, (i2 & 16) != 0 ? null : num2, (i2 & 32) != 0 ? null : str, (i2 & 64) != 0 ? null : str2);
    }
}
