package com.uniden.rtach.viewmodel;

import androidx.constraintlayout.widget.ConstraintLayout;
import com.uniden.rtach.data.model.UpdateProgressModel;
import com.uniden.rtach.helper.BaseApplication;
import com.uniden.rtach.helper.FIrmWareUpdateProcess;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;

/* JADX INFO: compiled from: FirmwareUpdateViewModel.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, m491d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
@DebugMetadata(m503c = "com.uniden.rtach.viewmodel.FirmwareUpdateViewModel$downloadFile$3$1$2", m504f = "FirmwareUpdateViewModel.kt", m505i = {}, m506l = {}, m507m = "invokeSuspend", m508n = {}, m509s = {})
final class FirmwareUpdateViewModel$downloadFile$3$1$2 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
    final /* synthetic */ int $progress;
    int label;
    final /* synthetic */ FirmwareUpdateViewModel this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    FirmwareUpdateViewModel$downloadFile$3$1$2(FirmwareUpdateViewModel firmwareUpdateViewModel, int i, Continuation<? super FirmwareUpdateViewModel$downloadFile$3$1$2> continuation) {
        super(2, continuation);
        this.this$0 = firmwareUpdateViewModel;
        this.$progress = i;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        return new FirmwareUpdateViewModel$downloadFile$3$1$2(this.this$0, this.$progress, continuation);
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
        return ((FirmwareUpdateViewModel$downloadFile$3$1$2) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Object invokeSuspend(Object obj) {
        IntrinsicsKt.getCOROUTINE_SUSPENDED();
        if (this.label == 0) {
            ResultKt.throwOnFailure(obj);
            BaseApplication baseApplication = this.this$0.myApp;
            if (baseApplication == null) {
                Intrinsics.throwUninitializedPropertyAccessException("myApp");
                baseApplication = null;
            }
            baseApplication.getFirmwareUpdateProcessBT().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_DOWNLOADING, String.valueOf(this.$progress), ""));
            return Unit.INSTANCE;
        }
        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
    }
}
