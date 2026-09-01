package com.uniden.rtach.helper.firmware_update;

import android.content.Context;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.work.Data;
import androidx.work.OneTimeWorkRequest;
import androidx.work.WorkManager;
import com.google.android.gms.common.internal.ImagesContract;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: FirmwareUtils.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0016\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\t¨\u0006\n"}, m491d2 = {"Lcom/uniden/rtach/helper/firmware_update/FirmwareUtils;", "", "<init>", "()V", "readLatestFirmwareVersions", "", "context", "Landroid/content/Context;", ImagesContract.URL, "", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class FirmwareUtils {
    public static final FirmwareUtils INSTANCE = new FirmwareUtils();

    private FirmwareUtils() {
    }

    public final void readLatestFirmwareVersions(Context context, String url) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(url, "url");
        Data dataBuild = new Data.Builder().putString("fileUrl", url).build();
        Intrinsics.checkNotNullExpressionValue(dataBuild, "build(...)");
        WorkManager.getInstance(context).enqueue(new OneTimeWorkRequest.Builder(FileReadWorker.class).setInputData(dataBuild).build());
    }
}
