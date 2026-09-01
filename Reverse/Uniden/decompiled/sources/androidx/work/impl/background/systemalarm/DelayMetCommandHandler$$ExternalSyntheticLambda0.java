package androidx.work.impl.background.systemalarm;

/* JADX INFO: compiled from: D8$$SyntheticClass */
/* JADX INFO: loaded from: classes.dex */
public final /* synthetic */ class DelayMetCommandHandler$$ExternalSyntheticLambda0 implements Runnable {
    public final /* synthetic */ DelayMetCommandHandler f$0;

    public /* synthetic */ DelayMetCommandHandler$$ExternalSyntheticLambda0(DelayMetCommandHandler delayMetCommandHandler) {
        this.f$0 = delayMetCommandHandler;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f$0.stopWork();
    }
}
