package com.uniden.rtach.data.model;

import androidx.constraintlayout.widget.ConstraintLayout;
import com.uniden.rtach.helper.FIrmWareUpdateProcess;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: UpdateProgressModel.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0012\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0086\b\u0018\u00002\u00020\u0001B%\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0005¢\u0006\u0004\b\u0007\u0010\bJ\t\u0010\u0013\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0014\u001a\u00020\u0005HÆ\u0003J\t\u0010\u0015\u001a\u00020\u0005HÆ\u0003J'\u0010\u0016\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u0005HÆ\u0001J\u0013\u0010\u0017\u001a\u00020\u00182\b\u0010\u0019\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u001a\u001a\u00020\u001bHÖ\u0001J\t\u0010\u001c\u001a\u00020\u0005HÖ\u0001R\u001a\u0010\u0002\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\t\u0010\n\"\u0004\b\u000b\u0010\fR\u001a\u0010\u0004\u001a\u00020\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\r\u0010\u000e\"\u0004\b\u000f\u0010\u0010R\u001a\u0010\u0006\u001a\u00020\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0011\u0010\u000e\"\u0004\b\u0012\u0010\u0010¨\u0006\u001d"}, m491d2 = {"Lcom/uniden/rtach/data/model/UpdateProgressModel;", "", "updateState", "Lcom/uniden/rtach/helper/FIrmWareUpdateProcess;", "progress", "", "updatingFileName", "<init>", "(Lcom/uniden/rtach/helper/FIrmWareUpdateProcess;Ljava/lang/String;Ljava/lang/String;)V", "getUpdateState", "()Lcom/uniden/rtach/helper/FIrmWareUpdateProcess;", "setUpdateState", "(Lcom/uniden/rtach/helper/FIrmWareUpdateProcess;)V", "getProgress", "()Ljava/lang/String;", "setProgress", "(Ljava/lang/String;)V", "getUpdatingFileName", "setUpdatingFileName", "component1", "component2", "component3", "copy", "equals", "", "other", "hashCode", "", "toString", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final /* data */ class UpdateProgressModel {
    private String progress;
    private FIrmWareUpdateProcess updateState;
    private String updatingFileName;

    public UpdateProgressModel() {
        this(null, null, null, 7, null);
    }

    public static /* synthetic */ UpdateProgressModel copy$default(UpdateProgressModel updateProgressModel, FIrmWareUpdateProcess fIrmWareUpdateProcess, String str, String str2, int i, Object obj) {
        if ((i & 1) != 0) {
            fIrmWareUpdateProcess = updateProgressModel.updateState;
        }
        if ((i & 2) != 0) {
            str = updateProgressModel.progress;
        }
        if ((i & 4) != 0) {
            str2 = updateProgressModel.updatingFileName;
        }
        return updateProgressModel.copy(fIrmWareUpdateProcess, str, str2);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final FIrmWareUpdateProcess getUpdateState() {
        return this.updateState;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final String getProgress() {
        return this.progress;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final String getUpdatingFileName() {
        return this.updatingFileName;
    }

    public final UpdateProgressModel copy(FIrmWareUpdateProcess updateState, String progress, String updatingFileName) {
        Intrinsics.checkNotNullParameter(updateState, "updateState");
        Intrinsics.checkNotNullParameter(progress, "progress");
        Intrinsics.checkNotNullParameter(updatingFileName, "updatingFileName");
        return new UpdateProgressModel(updateState, progress, updatingFileName);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof UpdateProgressModel)) {
            return false;
        }
        UpdateProgressModel updateProgressModel = (UpdateProgressModel) other;
        return this.updateState == updateProgressModel.updateState && Intrinsics.areEqual(this.progress, updateProgressModel.progress) && Intrinsics.areEqual(this.updatingFileName, updateProgressModel.updatingFileName);
    }

    public final String getProgress() {
        return this.progress;
    }

    public final FIrmWareUpdateProcess getUpdateState() {
        return this.updateState;
    }

    public final String getUpdatingFileName() {
        return this.updatingFileName;
    }

    public int hashCode() {
        return (((this.updateState.hashCode() * 31) + this.progress.hashCode()) * 31) + this.updatingFileName.hashCode();
    }

    public final void setProgress(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.progress = str;
    }

    public final void setUpdateState(FIrmWareUpdateProcess fIrmWareUpdateProcess) {
        Intrinsics.checkNotNullParameter(fIrmWareUpdateProcess, "<set-?>");
        this.updateState = fIrmWareUpdateProcess;
    }

    public final void setUpdatingFileName(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.updatingFileName = str;
    }

    public String toString() {
        return "UpdateProgressModel(updateState=" + this.updateState + ", progress=" + this.progress + ", updatingFileName=" + this.updatingFileName + ')';
    }

    public UpdateProgressModel(FIrmWareUpdateProcess updateState, String progress, String updatingFileName) {
        Intrinsics.checkNotNullParameter(updateState, "updateState");
        Intrinsics.checkNotNullParameter(progress, "progress");
        Intrinsics.checkNotNullParameter(updatingFileName, "updatingFileName");
        this.updateState = updateState;
        this.progress = progress;
        this.updatingFileName = updatingFileName;
    }

    public /* synthetic */ UpdateProgressModel(FIrmWareUpdateProcess fIrmWareUpdateProcess, String str, String str2, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this((i & 1) != 0 ? FIrmWareUpdateProcess.FILE_DOWNLOAD_START : fIrmWareUpdateProcess, (i & 2) != 0 ? "" : str, (i & 4) != 0 ? "" : str2);
    }
}
