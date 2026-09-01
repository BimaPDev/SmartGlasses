package com.uniden.rtach.viewmodel;

import android.content.Context;
import android.content.SharedPreferences;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.lifecycle.MutableLiveData;
import androidx.lifecycle.ViewModel;
import androidx.lifecycle.ViewModelKt;
import androidx.work.Data;
import androidx.work.OneTimeWorkRequest;
import androidx.work.WorkManager;
import com.google.android.gms.common.internal.ImagesContract;
import com.uniden.rtach.data.sharedpref.StoreUserData;
import com.uniden.rtach.helper.BaseApplication;
import com.uniden.rtach.helper.BluetoothManager;
import com.uniden.rtach.helper.BluetoothUtils;
import com.uniden.rtach.helper.Constant;
import com.uniden.rtach.helper.CustomLog;
import com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker;
import javax.inject.Inject;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.BuildersKt__Builders_commonKt;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.CoroutineScopeKt;
import kotlinx.coroutines.Dispatchers;

/* JADX INFO: compiled from: FirmwareUpdateViewModel.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u00006\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0004\b\u0007\u0018\u00002\u00020\u0001B\u0011\b\u0007\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u000e\u0010\u0010\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u000fJ\u0016\u0010\u0013\u001a\u00020\u00112\u0006\u0010\u0014\u001a\u00020\u0015H\u0086@¢\u0006\u0002\u0010\u0016J\u0006\u0010\u0017\u001a\u00020\u0011J\u0006\u0010\u0018\u001a\u00020\u0011R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u001b\u0010\u0006\u001a\u00020\u00078BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b\n\u0010\u000b\u001a\u0004\b\b\u0010\tR\u000e\u0010\f\u001a\u00020\rX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u000fX\u0082.¢\u0006\u0002\n\u0000¨\u0006\u0019"}, m491d2 = {"Lcom/uniden/rtach/viewmodel/FirmwareUpdateViewModel;", "Landroidx/lifecycle/ViewModel;", "context", "Landroid/content/Context;", "<init>", "(Landroid/content/Context;)V", "sharePref", "Lcom/uniden/rtach/data/sharedpref/StoreUserData;", "getSharePref", "()Lcom/uniden/rtach/data/sharedpref/StoreUserData;", "sharePref$delegate", "Lkotlin/Lazy;", "isWriteSuccess", "Lcom/uniden/rtach/helper/BaseApplication$Ack;", "myApp", "Lcom/uniden/rtach/helper/BaseApplication;", "initApp", "", "app", "downloadFile", ImagesContract.URL, "", "(Ljava/lang/String;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "updateFirmware", "flashBT", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class FirmwareUpdateViewModel extends ViewModel {
    private final Context context;
    private BaseApplication.Ack isWriteSuccess;
    private BaseApplication myApp;

    /* JADX INFO: renamed from: sharePref$delegate, reason: from kotlin metadata */
    private final Lazy sharePref;

    /* JADX INFO: renamed from: com.uniden.rtach.viewmodel.FirmwareUpdateViewModel$downloadFile$1 */
    /* JADX INFO: compiled from: FirmwareUpdateViewModel.kt */
    @Metadata(m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    @DebugMetadata(m503c = "com.uniden.rtach.viewmodel.FirmwareUpdateViewModel", m504f = "FirmwareUpdateViewModel.kt", m505i = {0, 0, 0, 0, 0, 0, 0}, m506l = {144}, m507m = "downloadFile", m508n = {"this", "bytesDownloaded", "buffer", "bytesRead", "outputStream", "inputStream", "totalBytes"}, m509s = {"L$0", "L$2", "L$3", "L$4", "L$6", "L$7", "J$0"})
    static final class C21321 extends ContinuationImpl {
        long J$0;
        Object L$0;
        Object L$1;
        Object L$2;
        Object L$3;
        Object L$4;
        Object L$5;
        Object L$6;
        Object L$7;
        int label;
        /* synthetic */ Object result;

        C21321(Continuation<? super C21321> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return FirmwareUpdateViewModel.this.downloadFile(null, this);
        }
    }

    @Inject
    public FirmwareUpdateViewModel(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        this.context = context;
        this.sharePref = LazyKt.lazy(new Function0() { // from class: com.uniden.rtach.viewmodel.FirmwareUpdateViewModel$$ExternalSyntheticLambda0
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return FirmwareUpdateViewModel.sharePref_delegate$lambda$0(this.f$0);
            }
        });
        this.isWriteSuccess = BaseApplication.Ack.WAIT;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final StoreUserData getSharePref() {
        return (StoreUserData) this.sharePref.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final StoreUserData sharePref_delegate$lambda$0(FirmwareUpdateViewModel this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        SharedPreferences sharedPreferences = this$0.context.getSharedPreferences(StoreUserData.INSTANCE.getPrefName(this$0.context), 0);
        Intrinsics.checkNotNullExpressionValue(sharedPreferences, "getSharedPreferences(...)");
        return new StoreUserData(sharedPreferences);
    }

    public final void initApp(BaseApplication app) {
        Intrinsics.checkNotNullParameter(app, "app");
        getSharePref().setFwDownloadComplete(false);
        getSharePref().setFwFlashing(false);
        BuildersKt__Builders_commonKt.launch$default(ViewModelKt.getViewModelScope(this), null, null, new C21341(app, null), 3, null);
    }

    /* JADX INFO: renamed from: com.uniden.rtach.viewmodel.FirmwareUpdateViewModel$initApp$1 */
    /* JADX INFO: compiled from: FirmwareUpdateViewModel.kt */
    @Metadata(m490d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, m491d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    @DebugMetadata(m503c = "com.uniden.rtach.viewmodel.FirmwareUpdateViewModel$initApp$1", m504f = "FirmwareUpdateViewModel.kt", m505i = {}, m506l = {}, m507m = "invokeSuspend", m508n = {}, m509s = {})
    static final class C21341 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ BaseApplication $app;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C21341(BaseApplication baseApplication, Continuation<? super C21341> continuation) {
            super(2, continuation);
            this.$app = baseApplication;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return FirmwareUpdateViewModel.this.new C21341(this.$app, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C21341) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label == 0) {
                ResultKt.throwOnFailure(obj);
                FirmwareUpdateViewModel.this.myApp = this.$app;
                BaseApplication baseApplication = FirmwareUpdateViewModel.this.myApp;
                BaseApplication baseApplication2 = null;
                if (baseApplication == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("myApp");
                    baseApplication = null;
                }
                MutableLiveData<BaseApplication.Ack> mutableLiveDataIsWriteSuccess = baseApplication.isWriteSuccess();
                final FirmwareUpdateViewModel firmwareUpdateViewModel = FirmwareUpdateViewModel.this;
                mutableLiveDataIsWriteSuccess.observeForever(new FirmwareUpdateViewModel$sam$androidx_lifecycle_Observer$0(new Function1() { // from class: com.uniden.rtach.viewmodel.FirmwareUpdateViewModel$initApp$1$$ExternalSyntheticLambda0
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj2) {
                        return FirmwareUpdateViewModel.C21341.invokeSuspend$lambda$1(firmwareUpdateViewModel, (BaseApplication.Ack) obj2);
                    }
                }));
                BaseApplication baseApplication3 = FirmwareUpdateViewModel.this.myApp;
                if (baseApplication3 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("myApp");
                } else {
                    baseApplication2 = baseApplication3;
                }
                MutableLiveData<Boolean> mutableLiveDataIsBTConnected = baseApplication2.isBTConnected();
                final FirmwareUpdateViewModel firmwareUpdateViewModel2 = FirmwareUpdateViewModel.this;
                mutableLiveDataIsBTConnected.observeForever(new FirmwareUpdateViewModel$sam$androidx_lifecycle_Observer$0(new Function1() { // from class: com.uniden.rtach.viewmodel.FirmwareUpdateViewModel$initApp$1$$ExternalSyntheticLambda1
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj2) {
                        return FirmwareUpdateViewModel.C21341.invokeSuspend$lambda$4(firmwareUpdateViewModel2, (Boolean) obj2);
                    }
                }));
                return Unit.INSTANCE;
            }
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final Unit invokeSuspend$lambda$1(FirmwareUpdateViewModel firmwareUpdateViewModel, BaseApplication.Ack ack) {
            if (ack != null) {
                firmwareUpdateViewModel.isWriteSuccess = ack;
            }
            return Unit.INSTANCE;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final Unit invokeSuspend$lambda$4(final FirmwareUpdateViewModel firmwareUpdateViewModel, Boolean bool) {
            if (bool != null) {
                boolean zBooleanValue = bool.booleanValue();
                Log.d("TAG_FW", "bt: " + zBooleanValue + " || downloadSuccessFlag:" + firmwareUpdateViewModel.getSharePref().isFwDownloadComplete() + " || isFlashing:" + firmwareUpdateViewModel.getSharePref().isFwFlashing());
                CustomLog.INSTANCE.writeFile("bt: " + zBooleanValue + " || downloadSuccessFlag:" + firmwareUpdateViewModel.getSharePref().isFwDownloadComplete() + " || isFlashing:" + firmwareUpdateViewModel.getSharePref().isFwFlashing(), firmwareUpdateViewModel.context);
                if (zBooleanValue && firmwareUpdateViewModel.getSharePref().isFwDownloadComplete() && !firmwareUpdateViewModel.getSharePref().isFwFlashing()) {
                    firmwareUpdateViewModel.getSharePref().setFwDownloadComplete(false);
                    new Handler(Looper.getMainLooper()).postDelayed(new Runnable() { // from class: com.uniden.rtach.viewmodel.FirmwareUpdateViewModel$initApp$1$$ExternalSyntheticLambda2
                        @Override // java.lang.Runnable
                        public final void run() {
                            FirmwareUpdateViewModel.C21341.invokeSuspend$lambda$4$lambda$3$lambda$2(firmwareUpdateViewModel);
                        }
                    }, 4000L);
                }
            }
            return Unit.INSTANCE;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final void invokeSuspend$lambda$4$lambda$3$lambda$2(FirmwareUpdateViewModel firmwareUpdateViewModel) {
            Log.d("TAG_FW", "flashBT()");
            firmwareUpdateViewModel.flashBT();
        }
    }

    /* JADX WARN: Code duplicated, block: B:145:0x0187 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:61:0x01d0 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:7:0x001a  */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r3v19 */
    /* JADX WARN: Type inference failed for: r3v35 */
    /* JADX WARN: Type inference failed for: r3v36 */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:60:0x01ce -> B:62:0x01d1). Please report as a decompilation issue!!! */
    /*  JADX ERROR: JadxOverflowException in pass: RegionMakerVisitor
        jadx.core.utils.exceptions.JadxOverflowException: Regions stack size limit reached
        	at jadx.core.utils.ErrorsCounter.addError(ErrorsCounter.java:59)
        	at jadx.core.utils.ErrorsCounter.error(ErrorsCounter.java:31)
        	at jadx.core.dex.attributes.nodes.NotificationAttrNode.addError(NotificationAttrNode.java:19)
        */
    public final java.lang.Object downloadFile(java.lang.String r20, kotlin.coroutines.Continuation<? super kotlin.Unit> r21) {
        /*
            Method dump skipped, instruction units count: 615
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.uniden.rtach.viewmodel.FirmwareUpdateViewModel.downloadFile(java.lang.String, kotlin.coroutines.Continuation):java.lang.Object");
    }

    public final void updateFirmware() throws Throwable {
        WorkManager.getInstance(this.context).cancelAllWork();
        Data dataBuild = new Data.Builder().putString("updateMode", Constant.INSTANCE.getUpdateMode()).putString("updateType", Constant.INSTANCE.getUpdateType()).build();
        Intrinsics.checkNotNullExpressionValue(dataBuild, "build(...)");
        WorkManager.getInstance(this.context).enqueue(new OneTimeWorkRequest.Builder(FirmWareUpdateWorker.class).setInputData(dataBuild).build());
    }

    /* JADX INFO: renamed from: com.uniden.rtach.viewmodel.FirmwareUpdateViewModel$flashBT$1 */
    /* JADX INFO: compiled from: FirmwareUpdateViewModel.kt */
    @Metadata(m490d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, m491d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    @DebugMetadata(m503c = "com.uniden.rtach.viewmodel.FirmwareUpdateViewModel$flashBT$1", m504f = "FirmwareUpdateViewModel.kt", m505i = {}, m506l = {}, m507m = "invokeSuspend", m508n = {}, m509s = {})
    static final class C21331 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        int label;

        C21331(Continuation<? super C21331> continuation) {
            super(2, continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return FirmwareUpdateViewModel.this.new C21331(continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C21331) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label == 0) {
                ResultKt.throwOnFailure(obj);
                String str = BluetoothUtils.INSTANCE.getFD_UPDATE_START_COM() + ':' + Constant.INSTANCE.getUpdateMode();
                Log.d("TAG_FW", "Send Command: FLASHBT" + str);
                BluetoothManager.INSTANCE.getInstance(FirmwareUpdateViewModel.this.context).writeCharacteristic(str);
                return Unit.INSTANCE;
            }
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
    }

    public final void flashBT() {
        BuildersKt__Builders_commonKt.launch$default(CoroutineScopeKt.CoroutineScope(Dispatchers.getIO()), null, null, new C21331(null), 3, null);
    }
}
