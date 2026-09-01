package com.google.android.gms.maps;

import android.location.Location;

/* JADX INFO: compiled from: com.google.android.gms:play-services-maps@@19.0.0 */
/* JADX INFO: loaded from: classes2.dex */
public interface LocationSource {

    /* JADX INFO: compiled from: com.google.android.gms:play-services-maps@@19.0.0 */
    public interface OnLocationChangedListener {
        void onLocationChanged(Location location);
    }

    void activate(OnLocationChangedListener onLocationChangedListener);

    void deactivate();
}
