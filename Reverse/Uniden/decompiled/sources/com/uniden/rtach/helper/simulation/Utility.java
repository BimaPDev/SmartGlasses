package com.uniden.rtach.helper.simulation;

import android.graphics.Point;
import android.view.Display;
import androidx.constraintlayout.widget.ConstraintLayout;
import com.google.android.gms.maps.model.LatLng;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: Utility.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0006\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0007\n\u0002\b\u0006\u0018\u00002\u00020\u0001B\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u001e\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u00052\u0006\u0010\b\u001a\u00020\u0005J\u000e\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\fJ\u000e\u0010\r\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0005J&\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\u0010\u001a\u00020\u00052\u0006\u0010\u0011\u001a\u00020\u00052\u0006\u0010\u0012\u001a\u00020\u00132\u0006\u0010\u0014\u001a\u00020\u0005J\u000e\u0010\u0015\u001a\u00020\u00052\u0006\u0010\u0016\u001a\u00020\u0005J\u000e\u0010\u0017\u001a\u00020\u00052\u0006\u0010\u0018\u001a\u00020\u0005¨\u0006\u0019"}, m491d2 = {"Lcom/uniden/rtach/helper/simulation/Utility;", "", "<init>", "()V", "clamp", "", "x", "min", "max", "getDisplaySize", "Landroid/graphics/Point;", "display", "Landroid/view/Display;", "lg", "Destination", "Lcom/google/android/gms/maps/model/LatLng;", "lat", "lon", "heading", "", "meters", "Deg2Rad", "d", "Rad2Deg", "r", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class Utility {
    public final double Deg2Rad(double d) {
        return (d * 3.141592653589793d) / ((double) 180);
    }

    public final double Rad2Deg(double r) {
        return (r * ((double) 180)) / 3.141592653589793d;
    }

    public final double clamp(double x, double min, double max) {
        if (x < min) {
            return min;
        }
        return x > max ? max : x;
    }

    public final Point getDisplaySize(Display display) {
        Intrinsics.checkNotNullParameter(display, "display");
        Point point = new Point();
        try {
            display.getSize(point);
        } catch (NoSuchMethodError unused) {
            point.x = display.getWidth();
            point.y = display.getHeight();
        }
        return point;
    }

    /* JADX INFO: renamed from: lg */
    public final double m488lg(double x) {
        return Math.log(x) / Math.log(2.0d);
    }

    public final LatLng Destination(double lat, double lon, float heading, double meters) {
        double dDeg2Rad = Deg2Rad(lat);
        double dDeg2Rad2 = Deg2Rad(lon);
        double dDeg2Rad3 = Deg2Rad(heading);
        double d = (meters / ((double) 1000)) / 6371.0d;
        double dAsin = Math.asin((Math.sin(dDeg2Rad) * Math.cos(d)) + (Math.cos(dDeg2Rad) * Math.sin(d) * Math.cos(dDeg2Rad3)));
        return new LatLng(Rad2Deg(dAsin), Rad2Deg(dDeg2Rad2 + Math.atan2(Math.sin(dDeg2Rad3) * Math.sin(d) * Math.cos(dDeg2Rad), Math.cos(d) - (Math.sin(dDeg2Rad) * Math.sin(dAsin)))));
    }
}
