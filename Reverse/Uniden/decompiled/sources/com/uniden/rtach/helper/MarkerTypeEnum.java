package com.uniden.rtach.helper;

import androidx.constraintlayout.widget.ConstraintLayout;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import kotlin.enums.EnumEntriesKt;

/* JADX INFO: compiled from: MarkerTypeEnum.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\u0007\b\u0086\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003j\u0002\b\u0004j\u0002\b\u0005j\u0002\b\u0006j\u0002\b\u0007¨\u0006\b"}, m491d2 = {"Lcom/uniden/rtach/helper/MarkerTypeEnum;", "", "<init>", "(Ljava/lang/String;I)V", "NONE", "SPEED_CAMERA", "RED_LIGHT_CAMERA", "USER_MARK", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public enum MarkerTypeEnum {
    NONE,
    SPEED_CAMERA,
    RED_LIGHT_CAMERA,
    USER_MARK;

    private static final /* synthetic */ EnumEntries $ENTRIES = EnumEntriesKt.enumEntries(values());

    public static EnumEntries<MarkerTypeEnum> getEntries() {
        return $ENTRIES;
    }
}
