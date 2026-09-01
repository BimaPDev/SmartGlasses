package com.google.android.gms.maps.model;

import android.view.View;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

/* JADX INFO: compiled from: com.google.android.gms:play-services-maps@@19.0.0 */
/* JADX INFO: loaded from: classes2.dex */
public class AdvancedMarkerOptions extends MarkerOptions {

    /* JADX INFO: compiled from: com.google.android.gms:play-services-maps@@19.0.0 */
    @Retention(RetentionPolicy.RUNTIME)
    public @interface CollisionBehavior {
        public static final int OPTIONAL_AND_HIDES_LOWER_PRIORITY = 2;
        public static final int REQUIRED = 0;
        public static final int REQUIRED_AND_HIDES_OPTIONAL = 1;
    }

    @Override // com.google.android.gms.maps.model.MarkerOptions
    public AdvancedMarkerOptions alpha(float f) {
        super.alpha(f);
        return this;
    }

    @Override // com.google.android.gms.maps.model.MarkerOptions
    public AdvancedMarkerOptions anchor(float f, float f2) {
        super.anchor(f, f2);
        return this;
    }

    public AdvancedMarkerOptions collisionBehavior(@CollisionBehavior int i) {
        super.zzd(i);
        return this;
    }

    @Override // com.google.android.gms.maps.model.MarkerOptions
    public AdvancedMarkerOptions contentDescription(String str) {
        super.contentDescription(str);
        return this;
    }

    @Override // com.google.android.gms.maps.model.MarkerOptions
    public AdvancedMarkerOptions draggable(boolean z) {
        super.draggable(z);
        return this;
    }

    @Override // com.google.android.gms.maps.model.MarkerOptions
    public AdvancedMarkerOptions flat(boolean z) {
        super.flat(z);
        return this;
    }

    public int getCollisionBehavior() {
        return super.zza();
    }

    public View getIconView() {
        return super.zzc();
    }

    @Override // com.google.android.gms.maps.model.MarkerOptions
    public AdvancedMarkerOptions icon(BitmapDescriptor bitmapDescriptor) {
        super.icon(bitmapDescriptor);
        return this;
    }

    public AdvancedMarkerOptions iconView(View view) {
        zze(view);
        return this;
    }

    @Override // com.google.android.gms.maps.model.MarkerOptions
    public AdvancedMarkerOptions infoWindowAnchor(float f, float f2) {
        super.infoWindowAnchor(f, f2);
        return this;
    }

    @Override // com.google.android.gms.maps.model.MarkerOptions
    public AdvancedMarkerOptions position(LatLng latLng) {
        super.position(latLng);
        return this;
    }

    @Override // com.google.android.gms.maps.model.MarkerOptions
    public AdvancedMarkerOptions rotation(float f) {
        super.rotation(f);
        return this;
    }

    @Override // com.google.android.gms.maps.model.MarkerOptions
    public AdvancedMarkerOptions snippet(String str) {
        super.snippet(str);
        return this;
    }

    @Override // com.google.android.gms.maps.model.MarkerOptions
    public AdvancedMarkerOptions title(String str) {
        super.title(str);
        return this;
    }

    @Override // com.google.android.gms.maps.model.MarkerOptions
    public AdvancedMarkerOptions visible(boolean z) {
        super.visible(z);
        return this;
    }

    @Override // com.google.android.gms.maps.model.MarkerOptions
    public AdvancedMarkerOptions zIndex(float f) {
        super.zIndex(f);
        return this;
    }
}
