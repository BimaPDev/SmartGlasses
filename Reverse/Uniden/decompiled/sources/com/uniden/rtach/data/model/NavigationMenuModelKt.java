package com.uniden.rtach.data.model;

import android.widget.ImageView;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.databinding.BindingAdapter;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: NavigationMenuModel.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000\u0014\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\u001a\u0018\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0005H\u0007¨\u0006\u0006"}, m491d2 = {"setImageViewResource", "", "imageView", "Landroid/widget/ImageView;", "resource", "", "app_unidenRelease"}, m492k = 2, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class NavigationMenuModelKt {
    @BindingAdapter({"android:src"})
    public static final void setImageViewResource(ImageView imageView, int i) {
        Intrinsics.checkNotNullParameter(imageView, "imageView");
        imageView.setImageResource(i);
    }
}
