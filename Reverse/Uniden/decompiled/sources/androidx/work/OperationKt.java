package androidx.work;

import androidx.constraintlayout.widget.ConstraintLayout;
import com.google.common.util.concurrent.ListenableFuture;
import java.util.concurrent.ExecutionException;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.DebugProbesKt;
import kotlin.jvm.internal.InlineMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CancellableContinuationImpl;

/* JADX INFO: compiled from: Operation.kt */
/* JADX INFO: loaded from: classes.dex */
@Metadata(m490d1 = {"\u0000\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\u001a\u0015\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u0086Hø\u0001\u0000¢\u0006\u0002\u0010\u0003\u0082\u0002\u0004\n\u0002\b\u0019¨\u0006\u0004"}, m491d2 = {"await", "Landroidx/work/Operation$State$SUCCESS;", "Landroidx/work/Operation;", "(Landroidx/work/Operation;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "work-runtime_release"}, m492k = 2, m493mv = {1, 8, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class OperationKt {

    /* JADX INFO: renamed from: androidx.work.OperationKt$await$1 */
    /* JADX INFO: compiled from: Operation.kt */
    @Metadata(m492k = 3, m493mv = {1, 8, 0}, m495xi = 176)
    @DebugMetadata(m503c = "androidx.work.OperationKt", m504f = "Operation.kt", m505i = {0}, m506l = {39}, m507m = "await", m508n = {"$this$await$iv"}, m509s = {"L$0"})
    static final class C08001 extends ContinuationImpl {
        Object L$0;
        int label;
        /* synthetic */ Object result;

        C08001(Continuation<? super C08001> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return OperationKt.await(null, this);
        }
    }

    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    public static final Object await(Operation operation, Continuation<? super Operation.State.SUCCESS> continuation) throws Throwable {
        C08001 c08001;
        Object obj;
        if (continuation instanceof C08001) {
            c08001 = (C08001) continuation;
            if ((c08001.label & Integer.MIN_VALUE) != 0) {
                c08001.label -= Integer.MIN_VALUE;
            } else {
                c08001 = new C08001(continuation);
            }
        } else {
            c08001 = new C08001(continuation);
        }
        Object result = c08001.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = c08001.label;
        if (i == 0) {
            ResultKt.throwOnFailure(result);
            ListenableFuture<Operation.State.SUCCESS> result2 = operation.getResult();
            Intrinsics.checkNotNullExpressionValue(result2, "result");
            if (result2.isDone()) {
                try {
                    obj = result2.get();
                } catch (ExecutionException e) {
                    Throwable cause = e.getCause();
                    if (cause == null) {
                        throw e;
                    }
                    throw cause;
                }
            } else {
                c08001.L$0 = result2;
                c08001.label = 1;
                C08001 c08002 = c08001;
                CancellableContinuationImpl cancellableContinuationImpl = new CancellableContinuationImpl(IntrinsicsKt.intercepted(c08002), 1);
                cancellableContinuationImpl.initCancellability();
                CancellableContinuationImpl cancellableContinuationImpl2 = cancellableContinuationImpl;
                result2.addListener(new ListenableFutureKt$await$2$1(cancellableContinuationImpl2, result2), DirectExecutor.INSTANCE);
                cancellableContinuationImpl2.invokeOnCancellation(new ListenableFutureKt$await$2$2(result2));
                result = cancellableContinuationImpl.getResult();
                if (result == IntrinsicsKt.getCOROUTINE_SUSPENDED()) {
                    DebugProbesKt.probeCoroutineSuspended(c08002);
                }
                if (result == coroutine_suspended) {
                    return coroutine_suspended;
                }
            }
            Intrinsics.checkNotNullExpressionValue(obj, "result.await()");
            return obj;
        }
        if (i != 1) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        ResultKt.throwOnFailure(result);
        obj = result;
        Intrinsics.checkNotNullExpressionValue(obj, "result.await()");
        return obj;
    }

    private static final Object await$$forInline(Operation operation, Continuation<? super Operation.State.SUCCESS> continuation) throws Throwable {
        Object result;
        ListenableFuture<Operation.State.SUCCESS> result2 = operation.getResult();
        Intrinsics.checkNotNullExpressionValue(result2, "result");
        if (result2.isDone()) {
            try {
                result = result2.get();
            } catch (ExecutionException e) {
                Throwable cause = e.getCause();
                if (cause != null) {
                    throw cause;
                }
                throw e;
            }
        } else {
            InlineMarker.mark(0);
            CancellableContinuationImpl cancellableContinuationImpl = new CancellableContinuationImpl(IntrinsicsKt.intercepted(continuation), 1);
            cancellableContinuationImpl.initCancellability();
            CancellableContinuationImpl cancellableContinuationImpl2 = cancellableContinuationImpl;
            result2.addListener(new ListenableFutureKt$await$2$1(cancellableContinuationImpl2, result2), DirectExecutor.INSTANCE);
            cancellableContinuationImpl2.invokeOnCancellation(new ListenableFutureKt$await$2$2(result2));
            Unit unit = Unit.INSTANCE;
            result = cancellableContinuationImpl.getResult();
            if (result == IntrinsicsKt.getCOROUTINE_SUSPENDED()) {
                DebugProbesKt.probeCoroutineSuspended(continuation);
            }
            InlineMarker.mark(1);
        }
        Intrinsics.checkNotNullExpressionValue(result, "result.await()");
        return result;
    }
}
