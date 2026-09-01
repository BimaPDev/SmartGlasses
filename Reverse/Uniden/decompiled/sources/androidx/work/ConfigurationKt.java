package androidx.work;

import androidx.constraintlayout.widget.ConstraintLayout;
import java.util.concurrent.Executor;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.ThreadFactory;
import java.util.concurrent.atomic.AtomicInteger;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: Configuration.kt */
/* JADX INFO: loaded from: classes.dex */
@Metadata(m490d1 = {"\u0000\u0016\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\u001a\u0010\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007H\u0002\"\u0014\u0010\u0000\u001a\u00020\u0001X\u0080D¢\u0006\b\n\u0000\u001a\u0004\b\u0002\u0010\u0003¨\u0006\b"}, m491d2 = {"DEFAULT_CONTENT_URI_TRIGGERS_WORKERS_LIMIT", "", "getDEFAULT_CONTENT_URI_TRIGGERS_WORKERS_LIMIT", "()I", "createDefaultExecutor", "Ljava/util/concurrent/Executor;", "isTaskExecutor", "", "work-runtime_release"}, m492k = 2, m493mv = {1, 8, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class ConfigurationKt {
    private static final int DEFAULT_CONTENT_URI_TRIGGERS_WORKERS_LIMIT = 8;

    public static final int getDEFAULT_CONTENT_URI_TRIGGERS_WORKERS_LIMIT() {
        return DEFAULT_CONTENT_URI_TRIGGERS_WORKERS_LIMIT;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Executor createDefaultExecutor(final boolean z) {
        ExecutorService executorServiceNewFixedThreadPool = Executors.newFixedThreadPool(Math.max(2, Math.min(Runtime.getRuntime().availableProcessors() - 1, 4)), new ThreadFactory() { // from class: androidx.work.ConfigurationKt$createDefaultExecutor$factory$1
            private final AtomicInteger threadCount = new AtomicInteger(0);

            @Override // java.util.concurrent.ThreadFactory
            public Thread newThread(Runnable runnable) {
                Intrinsics.checkNotNullParameter(runnable, "runnable");
                return new Thread(runnable, (z ? "WM.task-" : "androidx.work-") + this.threadCount.incrementAndGet());
            }
        });
        Intrinsics.checkNotNullExpressionValue(executorServiceNewFixedThreadPool, "newFixedThreadPool(\n    …)),\n        factory\n    )");
        return executorServiceNewFixedThreadPool;
    }
}
