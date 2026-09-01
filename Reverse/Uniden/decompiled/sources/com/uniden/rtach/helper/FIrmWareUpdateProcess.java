package com.uniden.rtach.helper;

import androidx.constraintlayout.widget.ConstraintLayout;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import kotlin.enums.EnumEntriesKt;

/* JADX INFO: compiled from: FIrmWareUpdateProcess.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\f\b\u0086\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003j\u0002\b\u0004j\u0002\b\u0005j\u0002\b\u0006j\u0002\b\u0007j\u0002\b\bj\u0002\b\tj\u0002\b\nj\u0002\b\u000bj\u0002\b\f¨\u0006\r"}, m491d2 = {"Lcom/uniden/rtach/helper/FIrmWareUpdateProcess;", "", "<init>", "(Ljava/lang/String;I)V", "FILE_DOWNLOAD_START", "FILE_DOWNLOADING", "FILE_DOWNLOAD_COMPLETE", "FILE_DOWNLOAD_FAIL", "FILE_INSTALLING", "FILE_INSTALL_FINISH", "FILE_UPDATE_START", "FILE_UPDATE_COMPLETE", "FILE_UPDATE_FAIL", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public enum FIrmWareUpdateProcess {
    FILE_DOWNLOAD_START,
    FILE_DOWNLOADING,
    FILE_DOWNLOAD_COMPLETE,
    FILE_DOWNLOAD_FAIL,
    FILE_INSTALLING,
    FILE_INSTALL_FINISH,
    FILE_UPDATE_START,
    FILE_UPDATE_COMPLETE,
    FILE_UPDATE_FAIL;

    private static final /* synthetic */ EnumEntries $ENTRIES = EnumEntriesKt.enumEntries(values());

    public static EnumEntries<FIrmWareUpdateProcess> getEntries() {
        return $ENTRIES;
    }
}
