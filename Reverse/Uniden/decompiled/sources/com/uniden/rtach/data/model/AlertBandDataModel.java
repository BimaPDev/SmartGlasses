package com.uniden.rtach.data.model;

import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.core.app.FrameMetricsAggregator;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: AlertBandDataModel.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b)\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0086\b\u0018\u00002\u00020\u0001Ba\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0005\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0007\u001a\u00020\u0003\u0012\b\b\u0002\u0010\b\u001a\u00020\u0003\u0012\b\b\u0002\u0010\t\u001a\u00020\u0003\u0012\b\b\u0002\u0010\n\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u000b\u001a\u00020\u0003¢\u0006\u0004\b\f\u0010\rJ\t\u0010\"\u001a\u00020\u0003HÆ\u0003J\t\u0010#\u001a\u00020\u0003HÆ\u0003J\t\u0010$\u001a\u00020\u0003HÆ\u0003J\t\u0010%\u001a\u00020\u0003HÆ\u0003J\t\u0010&\u001a\u00020\u0003HÆ\u0003J\t\u0010'\u001a\u00020\u0003HÆ\u0003J\t\u0010(\u001a\u00020\u0003HÆ\u0003J\t\u0010)\u001a\u00020\u0003HÆ\u0003J\t\u0010*\u001a\u00020\u0003HÆ\u0003Jc\u0010+\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u00032\b\b\u0002\u0010\u0006\u001a\u00020\u00032\b\b\u0002\u0010\u0007\u001a\u00020\u00032\b\b\u0002\u0010\b\u001a\u00020\u00032\b\b\u0002\u0010\t\u001a\u00020\u00032\b\b\u0002\u0010\n\u001a\u00020\u00032\b\b\u0002\u0010\u000b\u001a\u00020\u0003HÆ\u0001J\u0013\u0010,\u001a\u00020-2\b\u0010.\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010/\u001a\u000200HÖ\u0001J\t\u00101\u001a\u00020\u0003HÖ\u0001R\u001a\u0010\u0002\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u000e\u0010\u000f\"\u0004\b\u0010\u0010\u0011R\u001a\u0010\u0004\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0012\u0010\u000f\"\u0004\b\u0013\u0010\u0011R\u001a\u0010\u0005\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0014\u0010\u000f\"\u0004\b\u0015\u0010\u0011R\u001a\u0010\u0006\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0016\u0010\u000f\"\u0004\b\u0017\u0010\u0011R\u001a\u0010\u0007\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0018\u0010\u000f\"\u0004\b\u0019\u0010\u0011R\u001a\u0010\b\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u001a\u0010\u000f\"\u0004\b\u001b\u0010\u0011R\u001a\u0010\t\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u001c\u0010\u000f\"\u0004\b\u001d\u0010\u0011R\u001a\u0010\n\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u001e\u0010\u000f\"\u0004\b\u001f\u0010\u0011R\u001a\u0010\u000b\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b \u0010\u000f\"\u0004\b!\u0010\u0011¨\u00062"}, m491d2 = {"Lcom/uniden/rtach/data/model/AlertBandDataModel;", "", "alert_detected_flag", "", "alert_id", "alert_type", "rssi_level", "raw_value", "info", "dir_type", "mute_type", "rcv_mode_status", "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", "getAlert_detected_flag", "()Ljava/lang/String;", "setAlert_detected_flag", "(Ljava/lang/String;)V", "getAlert_id", "setAlert_id", "getAlert_type", "setAlert_type", "getRssi_level", "setRssi_level", "getRaw_value", "setRaw_value", "getInfo", "setInfo", "getDir_type", "setDir_type", "getMute_type", "setMute_type", "getRcv_mode_status", "setRcv_mode_status", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "component8", "component9", "copy", "equals", "", "other", "hashCode", "", "toString", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final /* data */ class AlertBandDataModel {
    private String alert_detected_flag;
    private String alert_id;
    private String alert_type;
    private String dir_type;
    private String info;
    private String mute_type;
    private String raw_value;
    private String rcv_mode_status;
    private String rssi_level;

    public AlertBandDataModel() {
        this(null, null, null, null, null, null, null, null, null, FrameMetricsAggregator.EVERY_DURATION, null);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final String getAlert_detected_flag() {
        return this.alert_detected_flag;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final String getAlert_id() {
        return this.alert_id;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final String getAlert_type() {
        return this.alert_type;
    }

    /* JADX INFO: renamed from: component4, reason: from getter */
    public final String getRssi_level() {
        return this.rssi_level;
    }

    /* JADX INFO: renamed from: component5, reason: from getter */
    public final String getRaw_value() {
        return this.raw_value;
    }

    /* JADX INFO: renamed from: component6, reason: from getter */
    public final String getInfo() {
        return this.info;
    }

    /* JADX INFO: renamed from: component7, reason: from getter */
    public final String getDir_type() {
        return this.dir_type;
    }

    /* JADX INFO: renamed from: component8, reason: from getter */
    public final String getMute_type() {
        return this.mute_type;
    }

    /* JADX INFO: renamed from: component9, reason: from getter */
    public final String getRcv_mode_status() {
        return this.rcv_mode_status;
    }

    public final AlertBandDataModel copy(String alert_detected_flag, String alert_id, String alert_type, String rssi_level, String raw_value, String info, String dir_type, String mute_type, String rcv_mode_status) {
        Intrinsics.checkNotNullParameter(alert_detected_flag, "alert_detected_flag");
        Intrinsics.checkNotNullParameter(alert_id, "alert_id");
        Intrinsics.checkNotNullParameter(alert_type, "alert_type");
        Intrinsics.checkNotNullParameter(rssi_level, "rssi_level");
        Intrinsics.checkNotNullParameter(raw_value, "raw_value");
        Intrinsics.checkNotNullParameter(info, "info");
        Intrinsics.checkNotNullParameter(dir_type, "dir_type");
        Intrinsics.checkNotNullParameter(mute_type, "mute_type");
        Intrinsics.checkNotNullParameter(rcv_mode_status, "rcv_mode_status");
        return new AlertBandDataModel(alert_detected_flag, alert_id, alert_type, rssi_level, raw_value, info, dir_type, mute_type, rcv_mode_status);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof AlertBandDataModel)) {
            return false;
        }
        AlertBandDataModel alertBandDataModel = (AlertBandDataModel) other;
        return Intrinsics.areEqual(this.alert_detected_flag, alertBandDataModel.alert_detected_flag) && Intrinsics.areEqual(this.alert_id, alertBandDataModel.alert_id) && Intrinsics.areEqual(this.alert_type, alertBandDataModel.alert_type) && Intrinsics.areEqual(this.rssi_level, alertBandDataModel.rssi_level) && Intrinsics.areEqual(this.raw_value, alertBandDataModel.raw_value) && Intrinsics.areEqual(this.info, alertBandDataModel.info) && Intrinsics.areEqual(this.dir_type, alertBandDataModel.dir_type) && Intrinsics.areEqual(this.mute_type, alertBandDataModel.mute_type) && Intrinsics.areEqual(this.rcv_mode_status, alertBandDataModel.rcv_mode_status);
    }

    public final String getAlert_detected_flag() {
        return this.alert_detected_flag;
    }

    public final String getAlert_id() {
        return this.alert_id;
    }

    public final String getAlert_type() {
        return this.alert_type;
    }

    public final String getDir_type() {
        return this.dir_type;
    }

    public final String getInfo() {
        return this.info;
    }

    public final String getMute_type() {
        return this.mute_type;
    }

    public final String getRaw_value() {
        return this.raw_value;
    }

    public final String getRcv_mode_status() {
        return this.rcv_mode_status;
    }

    public final String getRssi_level() {
        return this.rssi_level;
    }

    public int hashCode() {
        return (((((((((((((((this.alert_detected_flag.hashCode() * 31) + this.alert_id.hashCode()) * 31) + this.alert_type.hashCode()) * 31) + this.rssi_level.hashCode()) * 31) + this.raw_value.hashCode()) * 31) + this.info.hashCode()) * 31) + this.dir_type.hashCode()) * 31) + this.mute_type.hashCode()) * 31) + this.rcv_mode_status.hashCode();
    }

    public final void setAlert_detected_flag(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.alert_detected_flag = str;
    }

    public final void setAlert_id(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.alert_id = str;
    }

    public final void setAlert_type(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.alert_type = str;
    }

    public final void setDir_type(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.dir_type = str;
    }

    public final void setInfo(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.info = str;
    }

    public final void setMute_type(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.mute_type = str;
    }

    public final void setRaw_value(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.raw_value = str;
    }

    public final void setRcv_mode_status(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.rcv_mode_status = str;
    }

    public final void setRssi_level(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.rssi_level = str;
    }

    public String toString() {
        return "AlertBandDataModel(alert_detected_flag=" + this.alert_detected_flag + ", alert_id=" + this.alert_id + ", alert_type=" + this.alert_type + ", rssi_level=" + this.rssi_level + ", raw_value=" + this.raw_value + ", info=" + this.info + ", dir_type=" + this.dir_type + ", mute_type=" + this.mute_type + ", rcv_mode_status=" + this.rcv_mode_status + ')';
    }

    public AlertBandDataModel(String alert_detected_flag, String alert_id, String alert_type, String rssi_level, String raw_value, String info, String dir_type, String mute_type, String rcv_mode_status) {
        Intrinsics.checkNotNullParameter(alert_detected_flag, "alert_detected_flag");
        Intrinsics.checkNotNullParameter(alert_id, "alert_id");
        Intrinsics.checkNotNullParameter(alert_type, "alert_type");
        Intrinsics.checkNotNullParameter(rssi_level, "rssi_level");
        Intrinsics.checkNotNullParameter(raw_value, "raw_value");
        Intrinsics.checkNotNullParameter(info, "info");
        Intrinsics.checkNotNullParameter(dir_type, "dir_type");
        Intrinsics.checkNotNullParameter(mute_type, "mute_type");
        Intrinsics.checkNotNullParameter(rcv_mode_status, "rcv_mode_status");
        this.alert_detected_flag = alert_detected_flag;
        this.alert_id = alert_id;
        this.alert_type = alert_type;
        this.rssi_level = rssi_level;
        this.raw_value = raw_value;
        this.info = info;
        this.dir_type = dir_type;
        this.mute_type = mute_type;
        this.rcv_mode_status = rcv_mode_status;
    }

    public /* synthetic */ AlertBandDataModel(String str, String str2, String str3, String str4, String str5, String str6, String str7, String str8, String str9, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this((i & 1) != 0 ? "" : str, (i & 2) != 0 ? "" : str2, (i & 4) != 0 ? "" : str3, (i & 8) != 0 ? "" : str4, (i & 16) != 0 ? "" : str5, (i & 32) != 0 ? "" : str6, (i & 64) != 0 ? "" : str7, (i & 128) != 0 ? "" : str8, (i & 256) == 0 ? str9 : "");
    }
}
