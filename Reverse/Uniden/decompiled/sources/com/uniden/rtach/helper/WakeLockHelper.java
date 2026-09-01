package com.uniden.rtach.helper;

import android.content.Context;
import android.os.PowerManager;
import androidx.constraintlayout.widget.ConstraintLayout;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: WakeLockHelper.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0006\u0010\t\u001a\u00020\nJ\u0006\u0010\u000b\u001a\u00020\nR\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u0006\u001a\b\u0018\u00010\u0007R\u00020\bX\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\f"}, m491d2 = {"Lcom/uniden/rtach/helper/WakeLockHelper;", "", "context", "Landroid/content/Context;", "<init>", "(Landroid/content/Context;)V", "wakeLock", "Landroid/os/PowerManager$WakeLock;", "Landroid/os/PowerManager;", "acquireWakeLock", "", "releaseWakeLock", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class WakeLockHelper {
    private final Context context;
    private PowerManager.WakeLock wakeLock;

    public WakeLockHelper(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        this.context = context;
    }

    public final void acquireWakeLock() {
        Object systemService = this.context.getSystemService("power");
        Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.os.PowerManager");
        PowerManager powerManager = (PowerManager) systemService;
        PowerManager.WakeLock wakeLockNewWakeLock = this.wakeLock;
        if (wakeLockNewWakeLock == null) {
            wakeLockNewWakeLock = powerManager.newWakeLock(1, "Uniden:MyWakeLockTag");
            wakeLockNewWakeLock.acquire(600000L);
        }
        this.wakeLock = wakeLockNewWakeLock;
    }

    public final void releaseWakeLock() {
        PowerManager.WakeLock wakeLock = this.wakeLock;
        if (wakeLock != null) {
            if (wakeLock.isHeld()) {
                wakeLock.release();
            }
            this.wakeLock = null;
        }
    }
}
