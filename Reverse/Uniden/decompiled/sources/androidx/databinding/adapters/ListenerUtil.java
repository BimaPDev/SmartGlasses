package androidx.databinding.adapters;

import android.util.SparseArray;
import android.view.View;
import java.lang.ref.WeakReference;
import java.util.WeakHashMap;

/* JADX INFO: loaded from: classes.dex */
public class ListenerUtil {
    private static final SparseArray<WeakHashMap<View, WeakReference<?>>> sListeners = new SparseArray<>();

    public static <T> T trackListener(View view, T t, int i) {
        T t2 = (T) view.getTag(i);
        view.setTag(i, t);
        return t2;
    }

    public static <T> T getListener(View view, int i) {
        return (T) view.getTag(i);
    }
}
