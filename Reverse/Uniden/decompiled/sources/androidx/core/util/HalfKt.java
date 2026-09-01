package androidx.core.util;

import android.util.Half;
import androidx.constraintlayout.widget.ConstraintLayout;
import kotlin.Metadata;

/* JADX INFO: compiled from: Half.kt */
/* JADX INFO: loaded from: classes.dex */
@Metadata(m490d1 = {"\u0000\u0018\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u0006\n\u0002\u0010\u0007\n\u0002\u0010\n\n\u0002\u0010\u000e\n\u0000\u001a\r\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u0087\b\u001a\r\u0010\u0000\u001a\u00020\u0001*\u00020\u0003H\u0087\b\u001a\r\u0010\u0000\u001a\u00020\u0001*\u00020\u0004H\u0087\b\u001a\r\u0010\u0000\u001a\u00020\u0001*\u00020\u0005H\u0087\b¨\u0006\u0006"}, m491d2 = {"toHalf", "Landroid/util/Half;", "", "", "", "", "core-ktx_release"}, m492k = 2, m493mv = {1, 8, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class HalfKt {
    public static final Half toHalf(short s) {
        return Half.valueOf(s);
    }

    public static final Half toHalf(float f) {
        return Half.valueOf(f);
    }

    public static final Half toHalf(String str) {
        return Half.valueOf(str);
    }

    public static final Half toHalf(double d) {
        return Half.valueOf((float) d);
    }
}
