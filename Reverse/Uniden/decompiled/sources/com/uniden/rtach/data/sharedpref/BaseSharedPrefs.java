package com.uniden.rtach.data.sharedpref;

import android.content.SharedPreferences;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.exifinterface.media.ExifInterface;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: BaseSharedPrefs.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0003\b&\u0018\u00002\u00020\u0001B\u0007¢\u0006\u0004\b\u0002\u0010\u0003J-\u0010\u0004\u001a\u0002H\u0005\"\u0004\b\u0000\u0010\u0005*\u00020\u00062\u0006\u0010\u0007\u001a\u00020\b2\f\u0010\t\u001a\b\u0012\u0004\u0012\u0002H\u00050\nH\u0004¢\u0006\u0002\u0010\u000bJ'\u0010\f\u001a\u00020\r\"\u0004\b\u0000\u0010\u0005*\u00020\u00062\u0006\u0010\u0007\u001a\u00020\b2\u0006\u0010\u000e\u001a\u0002H\u0005H\u0004¢\u0006\u0002\u0010\u000f¨\u0006\u0010"}, m491d2 = {"Lcom/uniden/rtach/data/sharedpref/BaseSharedPrefs;", "", "<init>", "()V", "get", ExifInterface.GPS_DIRECTION_TRUE, "Landroid/content/SharedPreferences;", "key", "", "cl", "Ljava/lang/Class;", "(Landroid/content/SharedPreferences;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;", "set", "", "data", "(Landroid/content/SharedPreferences;Ljava/lang/String;Ljava/lang/Object;)V", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public abstract class BaseSharedPrefs {
    protected final <T> T get(SharedPreferences sharedPreferences, String key, Class<T> cl) {
        Intrinsics.checkNotNullParameter(sharedPreferences, "<this>");
        Intrinsics.checkNotNullParameter(key, "key");
        Intrinsics.checkNotNullParameter(cl, "cl");
        if (Intrinsics.areEqual(cl, String.class)) {
            return (T) sharedPreferences.getString(key, "");
        }
        if (Intrinsics.areEqual(cl, Boolean.TYPE)) {
            return (T) Boolean.valueOf(sharedPreferences.getBoolean(key, false));
        }
        if (!Intrinsics.areEqual(cl, Float.TYPE) && !Intrinsics.areEqual(cl, Double.TYPE)) {
            if (Intrinsics.areEqual(cl, Integer.TYPE)) {
                return (T) Integer.valueOf(sharedPreferences.getInt(key, 0));
            }
            if (Intrinsics.areEqual(cl, Long.TYPE)) {
                return (T) Long.valueOf(sharedPreferences.getLong(key, 0L));
            }
            return null;
        }
        return (T) Float.valueOf(sharedPreferences.getFloat(key, 0.0f));
    }

    /* JADX WARN: Multi-variable type inference failed */
    protected final <T> void set(SharedPreferences sharedPreferences, String key, T t) {
        Intrinsics.checkNotNullParameter(sharedPreferences, "<this>");
        Intrinsics.checkNotNullParameter(key, "key");
        SharedPreferences.Editor editorEdit = sharedPreferences.edit();
        if (t instanceof String) {
            editorEdit.putString(key, (String) t);
        } else if (t instanceof Boolean) {
            editorEdit.putBoolean(key, ((Boolean) t).booleanValue());
        } else if (t instanceof Float) {
            editorEdit.putFloat(key, ((Number) t).floatValue());
        } else if (t instanceof Double) {
            editorEdit.putFloat(key, (float) ((Number) t).doubleValue());
        } else if (t instanceof Integer) {
            editorEdit.putInt(key, ((Number) t).intValue());
        } else if (t instanceof Long) {
            editorEdit.putLong(key, ((Number) t).longValue());
        }
        editorEdit.apply();
    }
}
