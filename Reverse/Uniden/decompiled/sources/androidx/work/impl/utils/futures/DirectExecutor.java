package androidx.work.impl.utils.futures;

import java.util.concurrent.Executor;

/* JADX INFO: loaded from: classes.dex */
enum DirectExecutor implements Executor {
    INSTANCE;

    @Override // java.lang.Enum
    public String toString() {
        return "DirectExecutor";
    }

    @Override // java.util.concurrent.Executor
    public void execute(Runnable command) {
        command.run();
    }
}
