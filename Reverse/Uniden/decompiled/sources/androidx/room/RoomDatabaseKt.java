package androidx.room;

import androidx.constraintlayout.widget.ConstraintLayout;
import java.util.concurrent.CancellationException;
import java.util.concurrent.Executor;
import java.util.concurrent.RejectedExecutionException;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.ContinuationInterceptor;
import kotlin.coroutines.CoroutineContext;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.Boxing;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.DebugProbesKt;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.BuildersKt;
import kotlinx.coroutines.BuildersKt__BuildersKt;
import kotlinx.coroutines.CancellableContinuation;
import kotlinx.coroutines.CancellableContinuationImpl;
import kotlinx.coroutines.CompletableJob;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.Job;
import kotlinx.coroutines.JobKt__JobKt;
import kotlinx.coroutines.ThreadContextElementKt;

/* JADX INFO: compiled from: RoomDatabaseExt.kt */
/* JADX INFO: loaded from: classes.dex */
@Metadata(m490d1 = {"\u00000\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\u001a\u001d\u0010\u0000\u001a\u00020\u0001*\u00020\u00022\u0006\u0010\u0003\u001a\u00020\u0004H\u0082@ø\u0001\u0000¢\u0006\u0002\u0010\u0005\u001a\u0015\u0010\u0006\u001a\u00020\u0007*\u00020\bH\u0082@ø\u0001\u0000¢\u0006\u0002\u0010\t\u001a9\u0010\n\u001a\u0002H\u000b\"\u0004\b\u0000\u0010\u000b*\u00020\b2\u001c\u0010\f\u001a\u0018\b\u0001\u0012\n\u0012\b\u0012\u0004\u0012\u0002H\u000b0\u000e\u0012\u0006\u0012\u0004\u0018\u00010\u000f0\rH\u0086@ø\u0001\u0000¢\u0006\u0002\u0010\u0010\u0082\u0002\u0004\n\u0002\b\u0019¨\u0006\u0011"}, m491d2 = {"acquireTransactionThread", "Lkotlin/coroutines/ContinuationInterceptor;", "Ljava/util/concurrent/Executor;", "controlJob", "Lkotlinx/coroutines/Job;", "(Ljava/util/concurrent/Executor;Lkotlinx/coroutines/Job;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "createTransactionContext", "Lkotlin/coroutines/CoroutineContext;", "Landroidx/room/RoomDatabase;", "(Landroidx/room/RoomDatabase;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "withTransaction", "R", "block", "Lkotlin/Function1;", "Lkotlin/coroutines/Continuation;", "", "(Landroidx/room/RoomDatabase;Lkotlin/jvm/functions/Function1;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "room-ktx_release"}, m492k = 2, m493mv = {1, 7, 1}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class RoomDatabaseKt {

    /* JADX INFO: renamed from: androidx.room.RoomDatabaseKt$createTransactionContext$1 */
    /* JADX INFO: compiled from: RoomDatabaseExt.kt */
    @Metadata(m492k = 3, m493mv = {1, 7, 1}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    @DebugMetadata(m503c = "androidx.room.RoomDatabaseKt", m504f = "RoomDatabaseExt.kt", m505i = {0, 0}, m506l = {100}, m507m = "createTransactionContext", m508n = {"$this$createTransactionContext", "controlJob"}, m509s = {"L$0", "L$1"})
    static final class C06991 extends ContinuationImpl {
        Object L$0;
        Object L$1;
        int label;
        /* synthetic */ Object result;

        C06991(Continuation<? super C06991> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return RoomDatabaseKt.createTransactionContext(null, this);
        }
    }

    /* JADX INFO: renamed from: androidx.room.RoomDatabaseKt$withTransaction$1 */
    /* JADX INFO: compiled from: RoomDatabaseExt.kt */
    @Metadata(m492k = 3, m493mv = {1, 7, 1}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    @DebugMetadata(m503c = "androidx.room.RoomDatabaseKt", m504f = "RoomDatabaseExt.kt", m505i = {0, 0}, m506l = {ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_TAG, ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_BASELINE_TO_TOP_OF}, m507m = "withTransaction", m508n = {"$this$withTransaction", "block"}, m509s = {"L$0", "L$1"})
    static final class C07011<R> extends ContinuationImpl {
        Object L$0;
        Object L$1;
        int label;
        /* synthetic */ Object result;

        C07011(Continuation<? super C07011> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return RoomDatabaseKt.withTransaction(null, null, this);
        }
    }

    /* JADX WARN: Code duplicated, block: B:27:0x0081 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:28:0x0082 A[PHI: r7
      0x0082: PHI (r7v12 java.lang.Object) = (r7v9 java.lang.Object), (r7v1 java.lang.Object) binds: [B:26:0x007f, B:12:0x0029] A[DONT_GENERATE, DONT_INLINE], RETURN] */
    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    public static final <R> Object withTransaction(RoomDatabase roomDatabase, Function1<? super Continuation<? super R>, ? extends Object> function1, Continuation<? super R> continuation) throws Throwable {
        C07011 c07011;
        ContinuationInterceptor transactionDispatcher;
        ContinuationInterceptor continuationInterceptor;
        if (continuation instanceof C07011) {
            c07011 = (C07011) continuation;
            if ((c07011.label & Integer.MIN_VALUE) != 0) {
                c07011.label -= Integer.MIN_VALUE;
            } else {
                c07011 = new C07011(continuation);
            }
        } else {
            c07011 = new C07011(continuation);
        }
        Object objCreateTransactionContext = c07011.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = c07011.label;
        if (i != 0) {
            if (i == 1) {
                function1 = (Function1) c07011.L$1;
                roomDatabase = (RoomDatabase) c07011.L$0;
                ResultKt.throwOnFailure(objCreateTransactionContext);
            } else {
                if (i != 2) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(objCreateTransactionContext);
            }
            return objCreateTransactionContext;
        }
        ResultKt.throwOnFailure(objCreateTransactionContext);
        TransactionElement transactionElement = (TransactionElement) c07011.get$context().get(TransactionElement.INSTANCE);
        if (transactionElement == null || (transactionDispatcher = transactionElement.getTransactionDispatcher()) == null) {
            c07011.L$0 = roomDatabase;
            c07011.L$1 = function1;
            c07011.label = 1;
            objCreateTransactionContext = createTransactionContext(roomDatabase, c07011);
            if (objCreateTransactionContext == coroutine_suspended) {
                return coroutine_suspended;
            }
        } else {
            continuationInterceptor = transactionDispatcher;
        }
        C07022 c07022 = new C07022(roomDatabase, function1, null);
        c07011.L$0 = null;
        c07011.L$1 = null;
        c07011.label = 2;
        objCreateTransactionContext = BuildersKt.withContext(continuationInterceptor, c07022, c07011);
        if (objCreateTransactionContext == coroutine_suspended) {
            return coroutine_suspended;
        }
        return objCreateTransactionContext;
        continuationInterceptor = (CoroutineContext) objCreateTransactionContext;
        C07022 c07023 = new C07022(roomDatabase, function1, null);
        c07011.L$0 = null;
        c07011.L$1 = null;
        c07011.label = 2;
        objCreateTransactionContext = BuildersKt.withContext(continuationInterceptor, c07023, c07011);
        if (objCreateTransactionContext == coroutine_suspended) {
            return coroutine_suspended;
        }
        return objCreateTransactionContext;
    }

    /* JADX INFO: Add missing generic type declarations: [R] */
    /* JADX INFO: renamed from: androidx.room.RoomDatabaseKt$withTransaction$2 */
    /* JADX INFO: compiled from: RoomDatabaseExt.kt */
    @Metadata(m490d1 = {"\u0000\b\n\u0002\b\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u0002H\u0001\"\u0004\b\u0000\u0010\u0001*\u00020\u0002H\u008a@"}, m491d2 = {"<anonymous>", "R", "Lkotlinx/coroutines/CoroutineScope;"}, m492k = 3, m493mv = {1, 7, 1}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    @DebugMetadata(m503c = "androidx.room.RoomDatabaseKt$withTransaction$2", m504f = "RoomDatabaseExt.kt", m505i = {0}, m506l = {59}, m507m = "invokeSuspend", m508n = {"transactionElement"}, m509s = {"L$0"})
    static final class C07022<R> extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super R>, Object> {
        final /* synthetic */ Function1<Continuation<? super R>, Object> $block;
        final /* synthetic */ RoomDatabase $this_withTransaction;
        private /* synthetic */ Object L$0;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        /* JADX WARN: Multi-variable type inference failed */
        C07022(RoomDatabase roomDatabase, Function1<? super Continuation<? super R>, ? extends Object> function1, Continuation<? super C07022> continuation) {
            super(2, continuation);
            this.$this_withTransaction = roomDatabase;
            this.$block = function1;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            C07022 c07022 = new C07022(this.$this_withTransaction, this.$block, continuation);
            c07022.L$0 = obj;
            return c07022;
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super R> continuation) {
            return ((C07022) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        /* JADX WARN: Multi-variable type inference failed */
        /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object] */
        /* JADX WARN: Type inference failed for: r0v3 */
        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) throws Throwable {
            Throwable th;
            TransactionElement transactionElement;
            TransactionElement coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            try {
                if (i == 0) {
                    ResultKt.throwOnFailure(obj);
                    CoroutineContext.Element element = ((CoroutineScope) this.L$0).getCoroutineContext().get(TransactionElement.INSTANCE);
                    Intrinsics.checkNotNull(element);
                    TransactionElement transactionElement2 = (TransactionElement) element;
                    transactionElement2.acquire();
                    try {
                        this.$this_withTransaction.beginTransaction();
                        try {
                            Function1<Continuation<? super R>, Object> function1 = this.$block;
                            this.L$0 = transactionElement2;
                            this.label = 1;
                            Object objInvoke = function1.invoke(this);
                            if (objInvoke == coroutine_suspended) {
                                return coroutine_suspended;
                            }
                            transactionElement = transactionElement2;
                            obj = objInvoke;
                        } catch (Throwable th2) {
                            th = th2;
                            this.$this_withTransaction.endTransaction();
                            throw th;
                        }
                    } catch (Throwable th3) {
                        coroutine_suspended = transactionElement2;
                        th = th3;
                        coroutine_suspended.release();
                        throw th;
                    }
                } else {
                    if (i != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    transactionElement = (TransactionElement) this.L$0;
                    try {
                        ResultKt.throwOnFailure(obj);
                    } catch (Throwable th4) {
                        th = th4;
                        this.$this_withTransaction.endTransaction();
                        throw th;
                    }
                }
                this.$this_withTransaction.setTransactionSuccessful();
                this.$this_withTransaction.endTransaction();
                transactionElement.release();
                return obj;
            } catch (Throwable th5) {
                th = th5;
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    public static final Object createTransactionContext(RoomDatabase roomDatabase, Continuation<? super CoroutineContext> continuation) {
        C06991 c06991;
        RoomDatabase roomDatabase2;
        CompletableJob completableJob;
        if (continuation instanceof C06991) {
            c06991 = (C06991) continuation;
            if ((c06991.label & Integer.MIN_VALUE) != 0) {
                c06991.label -= Integer.MIN_VALUE;
            } else {
                c06991 = new C06991(continuation);
            }
        } else {
            c06991 = new C06991(continuation);
        }
        Object obj = c06991.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = c06991.label;
        if (i == 0) {
            ResultKt.throwOnFailure(obj);
            final CompletableJob completableJobJob$default = JobKt__JobKt.Job$default((Job) null, 1, (Object) null);
            Job job = (Job) c06991.get$context().get(Job.INSTANCE);
            if (job != null) {
                job.invokeOnCompletion(new Function1<Throwable, Unit>() { // from class: androidx.room.RoomDatabaseKt.createTransactionContext.2
                    {
                        super(1);
                    }

                    @Override // kotlin.jvm.functions.Function1
                    public /* bridge */ /* synthetic */ Unit invoke(Throwable th) {
                        invoke2(th);
                        return Unit.INSTANCE;
                    }

                    /* JADX INFO: renamed from: invoke, reason: avoid collision after fix types in other method */
                    public final void invoke2(Throwable th) {
                        Job.DefaultImpls.cancel$default((Job) completableJobJob$default, (CancellationException) null, 1, (Object) null);
                    }
                });
            }
            c06991.L$0 = roomDatabase;
            c06991.L$1 = completableJobJob$default;
            c06991.label = 1;
            Object objAcquireTransactionThread = acquireTransactionThread(roomDatabase.getTransactionExecutor(), completableJobJob$default, c06991);
            if (objAcquireTransactionThread == coroutine_suspended) {
                return coroutine_suspended;
            }
            roomDatabase2 = roomDatabase;
            completableJob = completableJobJob$default;
            obj = objAcquireTransactionThread;
        } else {
            if (i != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            completableJob = (CompletableJob) c06991.L$1;
            roomDatabase2 = (RoomDatabase) c06991.L$0;
            ResultKt.throwOnFailure(obj);
        }
        ContinuationInterceptor continuationInterceptor = (ContinuationInterceptor) obj;
        return continuationInterceptor.plus(new TransactionElement(completableJob, continuationInterceptor)).plus(ThreadContextElementKt.asContextElement(roomDatabase2.getSuspendingTransactionId(), Boxing.boxInt(System.identityHashCode(completableJob))));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Object acquireTransactionThread(Executor executor, final Job job, Continuation<? super ContinuationInterceptor> continuation) {
        CancellableContinuationImpl cancellableContinuationImpl = new CancellableContinuationImpl(IntrinsicsKt.intercepted(continuation), 1);
        cancellableContinuationImpl.initCancellability();
        final CancellableContinuationImpl cancellableContinuationImpl2 = cancellableContinuationImpl;
        cancellableContinuationImpl2.invokeOnCancellation(new Function1<Throwable, Unit>() { // from class: androidx.room.RoomDatabaseKt$acquireTransactionThread$2$1
            {
                super(1);
            }

            @Override // kotlin.jvm.functions.Function1
            public /* bridge */ /* synthetic */ Unit invoke(Throwable th) {
                invoke2(th);
                return Unit.INSTANCE;
            }

            /* JADX INFO: renamed from: invoke, reason: avoid collision after fix types in other method */
            public final void invoke2(Throwable th) {
                Job.DefaultImpls.cancel$default(job, (CancellationException) null, 1, (Object) null);
            }
        });
        try {
            executor.execute(new Runnable() { // from class: androidx.room.RoomDatabaseKt$acquireTransactionThread$2$2

                /* JADX INFO: renamed from: androidx.room.RoomDatabaseKt$acquireTransactionThread$2$2$1 */
                /* JADX INFO: compiled from: RoomDatabaseExt.kt */
                @Metadata(m490d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u008a@"}, m491d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, m492k = 3, m493mv = {1, 7, 1}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
                @DebugMetadata(m503c = "androidx.room.RoomDatabaseKt$acquireTransactionThread$2$2$1", m504f = "RoomDatabaseExt.kt", m505i = {}, m506l = {125}, m507m = "invokeSuspend", m508n = {}, m509s = {})
                static final class C06981 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
                    final /* synthetic */ CancellableContinuation<ContinuationInterceptor> $continuation;
                    final /* synthetic */ Job $controlJob;
                    private /* synthetic */ Object L$0;
                    int label;

                    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                    /* JADX WARN: Multi-variable type inference failed */
                    C06981(CancellableContinuation<? super ContinuationInterceptor> cancellableContinuation, Job job, Continuation<? super C06981> continuation) {
                        super(2, continuation);
                        this.$continuation = cancellableContinuation;
                        this.$controlJob = job;
                    }

                    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
                    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
                        C06981 c06981 = new C06981(this.$continuation, this.$controlJob, continuation);
                        c06981.L$0 = obj;
                        return c06981;
                    }

                    @Override // kotlin.jvm.functions.Function2
                    public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
                        return ((C06981) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
                    }

                    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
                    public final Object invokeSuspend(Object obj) {
                        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
                        int i = this.label;
                        if (i == 0) {
                            ResultKt.throwOnFailure(obj);
                            CoroutineScope coroutineScope = (CoroutineScope) this.L$0;
                            CancellableContinuation<ContinuationInterceptor> cancellableContinuation = this.$continuation;
                            Result.Companion companion = Result.INSTANCE;
                            CoroutineContext.Element element = coroutineScope.getCoroutineContext().get(ContinuationInterceptor.INSTANCE);
                            Intrinsics.checkNotNull(element);
                            cancellableContinuation.resumeWith(Result.m695constructorimpl(element));
                            this.label = 1;
                            if (this.$controlJob.join(this) == coroutine_suspended) {
                                return coroutine_suspended;
                            }
                        } else {
                            if (i != 1) {
                                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                            }
                            ResultKt.throwOnFailure(obj);
                        }
                        return Unit.INSTANCE;
                    }
                }

                @Override // java.lang.Runnable
                public final void run() throws InterruptedException {
                    BuildersKt__BuildersKt.runBlocking$default(null, new C06981(cancellableContinuationImpl2, job, null), 1, null);
                }
            });
        } catch (RejectedExecutionException e) {
            cancellableContinuationImpl2.cancel(new IllegalStateException("Unable to acquire a thread to perform the database transaction.", e));
        }
        Object result = cancellableContinuationImpl.getResult();
        if (result == IntrinsicsKt.getCOROUTINE_SUSPENDED()) {
            DebugProbesKt.probeCoroutineSuspended(continuation);
        }
        return result;
    }
}
