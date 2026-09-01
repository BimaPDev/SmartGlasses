package com.uniden.rtach.p005ui.activity;

import android.app.Application;
import android.content.Intent;
import android.os.Handler;
import android.os.Looper;
import android.view.LayoutInflater;
import androidx.constraintlayout.widget.ConstraintLayout;
import com.uniden.rtach.databinding.ActivitySplashBinding;
import com.uniden.rtach.helper.BaseApplication;
import com.uniden.rtach.helper.CustomLog;
import dagger.hilt.android.AndroidEntryPoint;
import kotlin.Metadata;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: SplashActivity.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\b\u0007\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\u0007¢\u0006\u0004\b\u0003\u0010\u0004J\b\u0010\u0007\u001a\u00020\bH\u0014J\b\u0010\t\u001a\u00020\bH\u0014R\u000e\u0010\u0005\u001a\u00020\u0006X\u0082.¢\u0006\u0002\n\u0000¨\u0006\n"}, m491d2 = {"Lcom/uniden/rtach/ui/activity/SplashActivity;", "Lcom/uniden/rtach/ui/base/BaseActivity;", "Lcom/uniden/rtach/databinding/ActivitySplashBinding;", "<init>", "()V", "myApp", "Lcom/uniden/rtach/helper/BaseApplication;", "initUi", "", "setListeners", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
@AndroidEntryPoint
public final class SplashActivity extends Hilt_SplashActivity<ActivitySplashBinding> {
    private BaseApplication myApp;

    @Override // com.uniden.rtach.p005ui.base.BaseActivity
    protected void setListeners() {
    }

    /* JADX INFO: renamed from: com.uniden.rtach.ui.activity.SplashActivity$1 */
    /* JADX INFO: compiled from: SplashActivity.kt */
    @Metadata(m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    /* synthetic */ class C21201 extends FunctionReferenceImpl implements Function1<LayoutInflater, ActivitySplashBinding> {
        public static final C21201 INSTANCE = new C21201();

        C21201() {
            super(1, ActivitySplashBinding.class, "inflate", "inflate(Landroid/view/LayoutInflater;)Lcom/uniden/rtach/databinding/ActivitySplashBinding;", 0);
        }

        @Override // kotlin.jvm.functions.Function1
        public final ActivitySplashBinding invoke(LayoutInflater p0) {
            Intrinsics.checkNotNullParameter(p0, "p0");
            return ActivitySplashBinding.inflate(p0);
        }
    }

    public SplashActivity() {
        super(C21201.INSTANCE);
    }

    @Override // com.uniden.rtach.p005ui.base.BaseActivity
    protected void initUi() {
        Application application = getApplication();
        Intrinsics.checkNotNull(application, "null cannot be cast to non-null type com.uniden.rtach.helper.BaseApplication");
        this.myApp = (BaseApplication) application;
        CustomLog.INSTANCE.writeFile("========================= initUi StartApp  =================", getContext());
        BaseApplication baseApplication = this.myApp;
        if (baseApplication == null) {
            Intrinsics.throwUninitializedPropertyAccessException("myApp");
            baseApplication = null;
        }
        baseApplication.getAlertCharacteristicChanged().postValue("0&0&0&0");
        new Handler(Looper.getMainLooper()).postDelayed(new Runnable() { // from class: com.uniden.rtach.ui.activity.SplashActivity$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                SplashActivity.initUi$lambda$0(this.f$0);
            }
        }, 3000L);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void initUi$lambda$0(SplashActivity this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        this$0.getSharedPrefs().setFirmWareUpdating(false);
        this$0.getSharedPrefs().setIsfileExist(false);
        this$0.startActivity(new Intent(this$0, (Class<?>) BLeDeviceListActivity.class));
        this$0.finish();
    }
}
