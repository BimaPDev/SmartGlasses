package dagger.hilt.android;

import android.app.Activity;
import android.content.Context;
import android.view.View;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.exifinterface.media.ExifInterface;
import androidx.fragment.app.Fragment;
import dagger.hilt.EntryPoints;
import dagger.hilt.android.internal.Contexts;
import kotlin.Metadata;
import kotlin.jvm.JvmStatic;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: EntryPointAccessors.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u00004\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0003\bÆ\u0002\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u001e\u0010\u0003\u001a\u0002H\u0004\"\u0006\b\u0000\u0010\u0004\u0018\u00012\u0006\u0010\u0005\u001a\u00020\u0006H\u0086\b¢\u0006\u0002\u0010\u0007J)\u0010\u0003\u001a\u0002H\u0004\"\u0004\b\u0000\u0010\u00042\u0006\u0010\u0005\u001a\u00020\u00062\f\u0010\b\u001a\b\u0012\u0004\u0012\u0002H\u00040\tH\u0007¢\u0006\u0002\u0010\nJ\u001e\u0010\u000b\u001a\u0002H\u0004\"\u0006\b\u0000\u0010\u0004\u0018\u00012\u0006\u0010\f\u001a\u00020\rH\u0086\b¢\u0006\u0002\u0010\u000eJ)\u0010\u000b\u001a\u0002H\u0004\"\u0004\b\u0000\u0010\u00042\u0006\u0010\f\u001a\u00020\r2\f\u0010\b\u001a\b\u0012\u0004\u0012\u0002H\u00040\tH\u0007¢\u0006\u0002\u0010\u000fJ\u001e\u0010\u0010\u001a\u0002H\u0004\"\u0006\b\u0000\u0010\u0004\u0018\u00012\u0006\u0010\u0011\u001a\u00020\u0012H\u0086\b¢\u0006\u0002\u0010\u0013J)\u0010\u0010\u001a\u0002H\u0004\"\u0004\b\u0000\u0010\u00042\u0006\u0010\u0011\u001a\u00020\u00122\f\u0010\b\u001a\b\u0012\u0004\u0012\u0002H\u00040\tH\u0007¢\u0006\u0002\u0010\u0014J\u001e\u0010\u0015\u001a\u0002H\u0004\"\u0006\b\u0000\u0010\u0004\u0018\u00012\u0006\u0010\u0016\u001a\u00020\u0017H\u0086\b¢\u0006\u0002\u0010\u0018J)\u0010\u0015\u001a\u0002H\u0004\"\u0004\b\u0000\u0010\u00042\u0006\u0010\u0016\u001a\u00020\u00172\f\u0010\b\u001a\b\u0012\u0004\u0012\u0002H\u00040\tH\u0007¢\u0006\u0002\u0010\u0019¨\u0006\u001a"}, m491d2 = {"Ldagger/hilt/android/EntryPointAccessors;", "", "()V", "fromActivity", ExifInterface.GPS_DIRECTION_TRUE, "activity", "Landroid/app/Activity;", "(Landroid/app/Activity;)Ljava/lang/Object;", "entryPoint", "Ljava/lang/Class;", "(Landroid/app/Activity;Ljava/lang/Class;)Ljava/lang/Object;", "fromApplication", "context", "Landroid/content/Context;", "(Landroid/content/Context;)Ljava/lang/Object;", "(Landroid/content/Context;Ljava/lang/Class;)Ljava/lang/Object;", "fromFragment", "fragment", "Landroidx/fragment/app/Fragment;", "(Landroidx/fragment/app/Fragment;)Ljava/lang/Object;", "(Landroidx/fragment/app/Fragment;Ljava/lang/Class;)Ljava/lang/Object;", "fromView", "view", "Landroid/view/View;", "(Landroid/view/View;)Ljava/lang/Object;", "(Landroid/view/View;Ljava/lang/Class;)Ljava/lang/Object;", "java_dagger_hilt_android-entry_point_accessors_internal_kt"}, m492k = 1, m493mv = {1, 8, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class EntryPointAccessors {
    public static final EntryPointAccessors INSTANCE = new EntryPointAccessors();

    private EntryPointAccessors() {
    }

    @JvmStatic
    public static final <T> T fromApplication(Context context, Class<T> entryPoint) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(entryPoint, "entryPoint");
        return (T) EntryPoints.get(Contexts.getApplication(context.getApplicationContext()), entryPoint);
    }

    public final /* synthetic */ <T> T fromApplication(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.reifiedOperationMarker(4, ExifInterface.GPS_DIRECTION_TRUE);
        return (T) fromApplication(context, Object.class);
    }

    @JvmStatic
    public static final <T> T fromActivity(Activity activity, Class<T> entryPoint) {
        Intrinsics.checkNotNullParameter(activity, "activity");
        Intrinsics.checkNotNullParameter(entryPoint, "entryPoint");
        return (T) EntryPoints.get(activity, entryPoint);
    }

    public final /* synthetic */ <T> T fromActivity(Activity activity) {
        Intrinsics.checkNotNullParameter(activity, "activity");
        Intrinsics.reifiedOperationMarker(4, ExifInterface.GPS_DIRECTION_TRUE);
        return (T) fromActivity(activity, Object.class);
    }

    @JvmStatic
    public static final <T> T fromFragment(Fragment fragment, Class<T> entryPoint) {
        Intrinsics.checkNotNullParameter(fragment, "fragment");
        Intrinsics.checkNotNullParameter(entryPoint, "entryPoint");
        return (T) EntryPoints.get(fragment, entryPoint);
    }

    public final /* synthetic */ <T> T fromFragment(Fragment fragment) {
        Intrinsics.checkNotNullParameter(fragment, "fragment");
        Intrinsics.reifiedOperationMarker(4, ExifInterface.GPS_DIRECTION_TRUE);
        return (T) fromFragment(fragment, Object.class);
    }

    @JvmStatic
    public static final <T> T fromView(View view, Class<T> entryPoint) {
        Intrinsics.checkNotNullParameter(view, "view");
        Intrinsics.checkNotNullParameter(entryPoint, "entryPoint");
        return (T) EntryPoints.get(view, entryPoint);
    }

    public final /* synthetic */ <T> T fromView(View view) {
        Intrinsics.checkNotNullParameter(view, "view");
        Intrinsics.reifiedOperationMarker(4, ExifInterface.GPS_DIRECTION_TRUE);
        return (T) fromView(view, Object.class);
    }
}
