package com.uniden.rtach.data.model;

import androidx.constraintlayout.widget.ConstraintLayout;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: NavigationMenuModel.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\n\n\u0002\u0010\u000b\n\u0002\b\u0004\b\u0086\b\u0018\u00002\u00020\u0001B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\t\u0010\f\u001a\u00020\u0003HÆ\u0003J\t\u0010\r\u001a\u00020\u0005HÆ\u0003J\u001d\u0010\u000e\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u0005HÆ\u0001J\u0013\u0010\u000f\u001a\u00020\u00102\b\u0010\u0011\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0012\u001a\u00020\u0003HÖ\u0001J\t\u0010\u0013\u001a\u00020\u0005HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000b¨\u0006\u0014"}, m491d2 = {"Lcom/uniden/rtach/data/model/NavigationMenuModel;", "", "icon", "", "title", "", "<init>", "(ILjava/lang/String;)V", "getIcon", "()I", "getTitle", "()Ljava/lang/String;", "component1", "component2", "copy", "equals", "", "other", "hashCode", "toString", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final /* data */ class NavigationMenuModel {
    private final int icon;
    private final String title;

    public static /* synthetic */ NavigationMenuModel copy$default(NavigationMenuModel navigationMenuModel, int i, String str, int i2, Object obj) {
        if ((i2 & 1) != 0) {
            i = navigationMenuModel.icon;
        }
        if ((i2 & 2) != 0) {
            str = navigationMenuModel.title;
        }
        return navigationMenuModel.copy(i, str);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final int getIcon() {
        return this.icon;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final String getTitle() {
        return this.title;
    }

    public final NavigationMenuModel copy(int icon, String title) {
        Intrinsics.checkNotNullParameter(title, "title");
        return new NavigationMenuModel(icon, title);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof NavigationMenuModel)) {
            return false;
        }
        NavigationMenuModel navigationMenuModel = (NavigationMenuModel) other;
        return this.icon == navigationMenuModel.icon && Intrinsics.areEqual(this.title, navigationMenuModel.title);
    }

    public final int getIcon() {
        return this.icon;
    }

    public final String getTitle() {
        return this.title;
    }

    public int hashCode() {
        return (Integer.hashCode(this.icon) * 31) + this.title.hashCode();
    }

    public String toString() {
        return "NavigationMenuModel(icon=" + this.icon + ", title=" + this.title + ')';
    }

    public NavigationMenuModel(int i, String title) {
        Intrinsics.checkNotNullParameter(title, "title");
        this.icon = i;
        this.title = title;
    }
}
