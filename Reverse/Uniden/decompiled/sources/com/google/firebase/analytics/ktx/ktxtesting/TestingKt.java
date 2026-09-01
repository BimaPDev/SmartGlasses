package com.google.firebase.analytics.ktx.ktxtesting;

import androidx.constraintlayout.widget.ConstraintLayout;
import com.google.firebase.analytics.FirebaseAnalytics;
import com.google.firebase.analytics.ktx.AnalyticsKt;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-api@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000\u0014\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\u001a\u001c\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00032\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00010\u0005¨\u0006\u0006"}, m491d2 = {"withAnalyticsForTest", "", "analytics", "Lcom/google/firebase/analytics/FirebaseAnalytics;", "block", "Lkotlin/Function0;", "java.com.google.android.gmscore.integ.client.measurement_api_measurement_api"}, m492k = 2, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class TestingKt {
    public static final void withAnalyticsForTest(FirebaseAnalytics analytics, Function0<Unit> block) {
        Intrinsics.checkNotNullParameter(analytics, "analytics");
        Intrinsics.checkNotNullParameter(block, "block");
        synchronized (AnalyticsKt.getLOCK()) {
            FirebaseAnalytics analytics2 = AnalyticsKt.getANALYTICS();
            AnalyticsKt.setANALYTICS(analytics);
            try {
                block.invoke();
                AnalyticsKt.setANALYTICS(analytics2);
            } catch (Throwable th) {
                AnalyticsKt.setANALYTICS(analytics2);
                throw th;
            }
        }
    }
}
