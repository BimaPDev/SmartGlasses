package com.uniden.rtach.p005ui.activity;

import android.app.Application;
import android.os.Bundle;
import android.view.View;
import android.webkit.WebViewClient;
import androidx.appcompat.app.AppCompatActivity;
import androidx.constraintlayout.widget.ConstraintLayout;
import com.google.android.gms.common.internal.ImagesContract;
import com.uniden.rtach.databinding.ActivityWebViewBinding;
import com.uniden.rtach.helper.BaseApplication;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: WebViewActivity.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\b\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\u0018\u00002\u00020\u0001B\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u0012\u0010\u0015\u001a\u00020\u00162\b\u0010\u0017\u001a\u0004\u0018\u00010\u0018H\u0014J\u0018\u0010\u0019\u001a\u00020\u00162\u0006\u0010\u001a\u001a\u00020\u00052\u0006\u0010\n\u001a\u00020\u0005H\u0002J\b\u0010\u001b\u001a\u00020\u0016H\u0016J\b\u0010\u001c\u001a\u00020\u0016H\u0014R\u001a\u0010\u0004\u001a\u00020\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0006\u0010\u0007\"\u0004\b\b\u0010\tR\u001a\u0010\n\u001a\u00020\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u000b\u0010\u0007\"\u0004\b\f\u0010\tR\u000e\u0010\r\u001a\u00020\u000eX\u0082.¢\u0006\u0002\n\u0000R\u001a\u0010\u000f\u001a\u00020\u0010X\u0084.¢\u0006\u000e\n\u0000\u001a\u0004\b\u0011\u0010\u0012\"\u0004\b\u0013\u0010\u0014¨\u0006\u001d"}, m491d2 = {"Lcom/uniden/rtach/ui/activity/WebViewActivity;", "Landroidx/appcompat/app/AppCompatActivity;", "<init>", "()V", "weburl", "", "getWeburl", "()Ljava/lang/String;", "setWeburl", "(Ljava/lang/String;)V", "title", "getTitle", "setTitle", "myApp", "Lcom/uniden/rtach/helper/BaseApplication;", "binding", "Lcom/uniden/rtach/databinding/ActivityWebViewBinding;", "getBinding", "()Lcom/uniden/rtach/databinding/ActivityWebViewBinding;", "setBinding", "(Lcom/uniden/rtach/databinding/ActivityWebViewBinding;)V", "onCreate", "", "savedInstanceState", "Landroid/os/Bundle;", "showWebViewWithUrl", ImagesContract.URL, "onBackPressed", "onPause", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class WebViewActivity extends AppCompatActivity {
    protected ActivityWebViewBinding binding;
    private BaseApplication myApp;
    private String weburl = "";
    private String title = "";

    @Override // android.app.Activity
    public final String getTitle() {
        return this.title;
    }

    public final String getWeburl() {
        return this.weburl;
    }

    protected final void setBinding(ActivityWebViewBinding activityWebViewBinding) {
        Intrinsics.checkNotNullParameter(activityWebViewBinding, "<set-?>");
        this.binding = activityWebViewBinding;
    }

    public final void setTitle(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.title = str;
    }

    public final void setWeburl(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.weburl = str;
    }

    protected final ActivityWebViewBinding getBinding() {
        ActivityWebViewBinding activityWebViewBinding = this.binding;
        if (activityWebViewBinding != null) {
            return activityWebViewBinding;
        }
        Intrinsics.throwUninitializedPropertyAccessException("binding");
        return null;
    }

    @Override // androidx.fragment.app.FragmentActivity, androidx.activity.ComponentActivity, androidx.core.app.ComponentActivity, android.app.Activity
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setBinding(ActivityWebViewBinding.inflate(getLayoutInflater()));
        setContentView(getBinding().getRoot());
        Application application = getApplication();
        Intrinsics.checkNotNull(application, "null cannot be cast to non-null type com.uniden.rtach.helper.BaseApplication");
        this.myApp = (BaseApplication) application;
        getBinding().txtAppBarTitle.setText("About");
        getBinding().webView.setVisibility(8);
        getBinding().llPricypolcyLayout.setVisibility(0);
        this.title = "About";
        getBinding().textView2.setText("Version 1.0.9");
        getBinding().btnBack.setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.activity.WebViewActivity$$ExternalSyntheticLambda0
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                WebViewActivity.onCreate$lambda$0(this.f$0, view);
            }
        });
        getBinding().txtPrivacyPolicy.setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.activity.WebViewActivity$$ExternalSyntheticLambda1
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                WebViewActivity.onCreate$lambda$1(this.f$0, view);
            }
        });
        getBinding().txtTermsandCondition.setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.activity.WebViewActivity$$ExternalSyntheticLambda2
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                WebViewActivity.onCreate$lambda$2(this.f$0, view);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void onCreate$lambda$0(WebViewActivity this$0, View view) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        this$0.onBackPressed();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void onCreate$lambda$1(WebViewActivity this$0, View view) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        this$0.showWebViewWithUrl("https://uniden.com/pages/app-policy", "Privacy Policy");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void onCreate$lambda$2(WebViewActivity this$0, View view) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        this$0.showWebViewWithUrl("https://uniden.com/policies/terms-of-service", "Terms & Conditions");
    }

    private final void showWebViewWithUrl(String url, String title) {
        getBinding().llPricypolcyLayout.setVisibility(8);
        this.weburl = url;
        this.title = title;
        getBinding().webView.setVisibility(0);
        getBinding().txtAppBarTitle.setText(title);
        getBinding().webView.loadUrl(url);
        getBinding().webView.getSettings().setJavaScriptEnabled(true);
        getBinding().webView.setWebViewClient(new WebViewClient());
    }

    @Override // androidx.activity.ComponentActivity, android.app.Activity
    public void onBackPressed() {
        if (getBinding().webView.getVisibility() == 0) {
            getBinding().webView.setVisibility(8);
            getBinding().llPricypolcyLayout.setVisibility(0);
            getBinding().txtAppBarTitle.setText("About");
            return;
        }
        super.onBackPressed();
    }

    @Override // androidx.fragment.app.FragmentActivity, android.app.Activity
    protected void onPause() {
        super.onPause();
        BaseApplication baseApplication = this.myApp;
        if (baseApplication == null) {
            Intrinsics.throwUninitializedPropertyAccessException("myApp");
            baseApplication = null;
        }
        baseApplication.getAlertCharacteristicChanged().postValue("0&0&0&0");
    }
}
