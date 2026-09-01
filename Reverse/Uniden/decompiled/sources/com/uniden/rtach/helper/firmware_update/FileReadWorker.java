package com.uniden.rtach.helper.firmware_update;

import android.content.Context;
import android.content.SharedPreferences;
import android.util.Log;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.work.ListenableWorker;
import androidx.work.Worker;
import androidx.work.WorkerParameters;
import com.uniden.rtach.data.sharedpref.StoreUserData;
import java.io.IOException;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.p006io.CloseableKt;
import kotlin.text.StringsKt;
import kotlinx.coroutines.BuildersKt__Builders_commonKt;
import kotlinx.coroutines.CoroutineScopeKt;
import kotlinx.coroutines.Dispatchers;
import okhttp3.OkHttpClient;
import okhttp3.Request;
import okhttp3.Response;
import okhttp3.ResponseBody;
import org.json.JSONObject;

/* JADX INFO: compiled from: FirmwareUtils.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\u0018\u00002\u00020\u0001B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\b\u0010\b\u001a\u00020\tH\u0016¨\u0006\n"}, m491d2 = {"Lcom/uniden/rtach/helper/firmware_update/FileReadWorker;", "Landroidx/work/Worker;", "appContext", "Landroid/content/Context;", "workerParams", "Landroidx/work/WorkerParameters;", "<init>", "(Landroid/content/Context;Landroidx/work/WorkerParameters;)V", "doWork", "Landroidx/work/ListenableWorker$Result;", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class FileReadWorker extends Worker {
    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public FileReadWorker(Context appContext, WorkerParameters workerParams) {
        super(appContext, workerParams);
        Intrinsics.checkNotNullParameter(appContext, "appContext");
        Intrinsics.checkNotNullParameter(workerParams, "workerParams");
    }

    @Override // androidx.work.Worker
    public ListenableWorker.Result doWork() {
        String strString;
        String string = getInputData().getString("fileUrl");
        if (string == null) {
            ListenableWorker.Result resultFailure = ListenableWorker.Result.failure();
            Intrinsics.checkNotNullExpressionValue(resultFailure, "failure(...)");
            return resultFailure;
        }
        try {
            try {
                Response responseExecute = new OkHttpClient().newCall(new Request.Builder().url(string).build()).execute();
                try {
                    Response response = responseExecute;
                    try {
                        if (!response.isSuccessful()) {
                            throw new IOException("Failed to download file: " + response);
                        }
                        ResponseBody responseBodyBody = response.body();
                        if (responseBodyBody == null || (strString = responseBodyBody.string()) == null) {
                            throw new IOException("Empty response body");
                        }
                        JSONObject jSONObject = new JSONObject(strString);
                        Context applicationContext = getApplicationContext();
                        StoreUserData.Companion companion = StoreUserData.INSTANCE;
                        Context applicationContext2 = getApplicationContext();
                        Intrinsics.checkNotNullExpressionValue(applicationContext2, "getApplicationContext(...)");
                        SharedPreferences sharedPreferences = applicationContext.getSharedPreferences(companion.getPrefName(applicationContext2), 0);
                        Intrinsics.checkNotNullExpressionValue(sharedPreferences, "getSharedPreferences(...)");
                        StoreUserData storeUserData = new StoreUserData(sharedPreferences);
                        String strSubstringBefore$default = StringsKt.substringBefore$default(storeUserData.getDeviceName(), "@", (String) null, 2, (Object) null);
                        JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject(strSubstringBefore$default);
                        if (jSONObjectOptJSONObject != null) {
                            String string2 = jSONObjectOptJSONObject.getString("latest_version");
                            String string3 = jSONObjectOptJSONObject.getString("firmware_url");
                            storeUserData.setLatestFirmwareVersion(string2);
                            storeUserData.setLatestFirmwareUrl(string3);
                            Log.d("TAG_Latest_Version", "device:" + strSubstringBefore$default + " || version: " + string2 + " || url: " + string3);
                            BuildersKt__Builders_commonKt.launch$default(CoroutineScopeKt.CoroutineScope(Dispatchers.getMain()), null, null, new FileReadWorker$doWork$1$1(this, null), 3, null);
                            CloseableKt.closeFinally(responseExecute, null);
                            ListenableWorker.Result resultSuccess = ListenableWorker.Result.success();
                            Intrinsics.checkNotNullExpressionValue(resultSuccess, "success(...)");
                            return resultSuccess;
                        }
                        Log.e("TAG_Latest_Version", "Device info not found for device: " + strSubstringBefore$default);
                        ListenableWorker.Result resultFailure2 = ListenableWorker.Result.failure();
                        Intrinsics.checkNotNullExpressionValue(resultFailure2, "failure(...)");
                        CloseableKt.closeFinally(responseExecute, null);
                        return resultFailure2;
                    } catch (Throwable th) {
                        th = th;
                    }
                } catch (Throwable th2) {
                    th = th2;
                }
                Throwable th3 = th;
                try {
                    throw th3;
                } catch (Throwable th4) {
                    CloseableKt.closeFinally(responseExecute, th3);
                    throw th4;
                }
            } catch (IOException e) {
                e = e;
                e.printStackTrace();
                ListenableWorker.Result resultFailure3 = ListenableWorker.Result.failure();
                Intrinsics.checkNotNullExpressionValue(resultFailure3, "failure(...)");
                return resultFailure3;
            }
        } catch (IOException e2) {
            e = e2;
            e.printStackTrace();
            ListenableWorker.Result resultFailure4 = ListenableWorker.Result.failure();
            Intrinsics.checkNotNullExpressionValue(resultFailure4, "failure(...)");
            return resultFailure4;
        }
    }
}
