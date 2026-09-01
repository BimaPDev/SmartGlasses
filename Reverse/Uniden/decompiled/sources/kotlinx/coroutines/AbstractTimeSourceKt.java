package kotlinx.coroutines;

import androidx.constraintlayout.widget.ConstraintLayout;
import com.google.firebase.analytics.FirebaseAnalytics;
import java.util.concurrent.locks.LockSupport;
import kotlin.Metadata;
import kotlin.Unit;

/* JADX INFO: compiled from: AbstractTimeSource.kt */
/* JADX INFO: loaded from: classes3.dex */
@Metadata(m490d1 = {"\u00002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0004\n\u0002\u0010\u0000\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\u001a\t\u0010\u0002\u001a\u00020\u0003H\u0081\b\u001a\u0013\u0010\u0004\u001a\u00020\u00052\b\u0010\u0006\u001a\u0004\u0018\u00010\u0001H\u0080\b\u001a\t\u0010\u0007\u001a\u00020\u0003H\u0081\b\u001a\u0019\u0010\b\u001a\u00020\u00052\u0006\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\u0003H\u0081\b\u001a\t\u0010\f\u001a\u00020\u0005H\u0081\b\u001a\t\u0010\r\u001a\u00020\u0005H\u0081\b\u001a\t\u0010\u000e\u001a\u00020\u0005H\u0081\b\u001a\u0011\u0010\u000f\u001a\u00020\u00052\u0006\u0010\u0010\u001a\u00020\u0011H\u0081\b\u001a\t\u0010\u0012\u001a\u00020\u0005H\u0081\b\u001a\u0019\u0010\u0013\u001a\u00060\u0014j\u0002`\u00152\n\u0010\u0016\u001a\u00060\u0014j\u0002`\u0015H\u0081\b\"\u0010\u0010\u0000\u001a\u0004\u0018\u00010\u0001X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u0017"}, m491d2 = {"timeSource", "Lkotlinx/coroutines/AbstractTimeSource;", "currentTimeMillis", "", "mockTimeSource", "", FirebaseAnalytics.Param.SOURCE, "nanoTime", "parkNanos", "blocker", "", "nanos", "registerTimeLoopThread", "trackTask", "unTrackTask", "unpark", "thread", "Ljava/lang/Thread;", "unregisterTimeLoopThread", "wrapTask", "Ljava/lang/Runnable;", "Lkotlinx/coroutines/Runnable;", "block", "kotlinx-coroutines-core"}, m492k = 2, m493mv = {1, 9, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class AbstractTimeSourceKt {
    private static AbstractTimeSource timeSource;

    public static final void mockTimeSource(AbstractTimeSource abstractTimeSource) {
        timeSource = abstractTimeSource;
    }

    private static final long currentTimeMillis() {
        AbstractTimeSource abstractTimeSource = timeSource;
        return abstractTimeSource != null ? abstractTimeSource.currentTimeMillis() : System.currentTimeMillis();
    }

    private static final long nanoTime() {
        AbstractTimeSource abstractTimeSource = timeSource;
        return abstractTimeSource != null ? abstractTimeSource.nanoTime() : System.nanoTime();
    }

    private static final Runnable wrapTask(Runnable runnable) {
        Runnable runnableWrapTask;
        AbstractTimeSource abstractTimeSource = timeSource;
        return (abstractTimeSource == null || (runnableWrapTask = abstractTimeSource.wrapTask(runnable)) == null) ? runnable : runnableWrapTask;
    }

    private static final void trackTask() {
        AbstractTimeSource abstractTimeSource = timeSource;
        if (abstractTimeSource != null) {
            abstractTimeSource.trackTask();
        }
    }

    private static final void unTrackTask() {
        AbstractTimeSource abstractTimeSource = timeSource;
        if (abstractTimeSource != null) {
            abstractTimeSource.unTrackTask();
        }
    }

    private static final void registerTimeLoopThread() {
        AbstractTimeSource abstractTimeSource = timeSource;
        if (abstractTimeSource != null) {
            abstractTimeSource.registerTimeLoopThread();
        }
    }

    private static final void unregisterTimeLoopThread() {
        AbstractTimeSource abstractTimeSource = timeSource;
        if (abstractTimeSource != null) {
            abstractTimeSource.unregisterTimeLoopThread();
        }
    }

    private static final void parkNanos(Object obj, long j) {
        Unit unit;
        AbstractTimeSource abstractTimeSource = timeSource;
        if (abstractTimeSource != null) {
            abstractTimeSource.parkNanos(obj, j);
            unit = Unit.INSTANCE;
        } else {
            unit = null;
        }
        if (unit == null) {
            LockSupport.parkNanos(obj, j);
        }
    }

    private static final void unpark(Thread thread) {
        Unit unit;
        AbstractTimeSource abstractTimeSource = timeSource;
        if (abstractTimeSource != null) {
            abstractTimeSource.unpark(thread);
            unit = Unit.INSTANCE;
        } else {
            unit = null;
        }
        if (unit == null) {
            LockSupport.unpark(thread);
        }
    }
}
