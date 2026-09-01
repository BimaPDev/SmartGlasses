package com.google.android.gms.location;

import android.content.Intent;
import android.location.Location;
import android.os.Parcel;
import com.google.android.gms.common.internal.Constants;
import com.google.android.gms.libs.identity.zzek;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: compiled from: com.google.android.gms:play-services-location@@21.2.0 */
/* JADX INFO: loaded from: classes2.dex */
public class GeofencingEvent {
    private final int zza;
    private final int zzb;
    private final List zzc;
    private final Location zzd;

    private GeofencingEvent(int i, int i2, List list, Location location) {
        this.zza = i;
        this.zzb = i2;
        this.zzc = list;
        this.zzd = location;
    }

    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    public static GeofencingEvent fromIntent(Intent intent) {
        ArrayList arrayList;
        if (intent != null) {
            int intExtra = intent.getIntExtra(Constants.KEY_GMS_ERROR_CODE, -1);
            int intExtra2 = intent.getIntExtra("com.google.android.location.intent.extra.transition", -1);
            if (intExtra2 == -1) {
                intExtra2 = -1;
            } else if (intExtra2 != 1 && intExtra2 != 2) {
                if (intExtra2 == 4) {
                    intExtra2 = 4;
                } else {
                    intExtra2 = -1;
                }
            }
            ArrayList arrayList2 = (ArrayList) intent.getSerializableExtra("com.google.android.location.intent.extra.geofence_list");
            if (arrayList2 == null) {
                arrayList = null;
            } else {
                arrayList = new ArrayList(arrayList2.size());
                int size = arrayList2.size();
                for (int i = 0; i < size; i++) {
                    byte[] bArr = (byte[]) arrayList2.get(i);
                    Parcel parcelObtain = Parcel.obtain();
                    parcelObtain.unmarshall(bArr, 0, bArr.length);
                    parcelObtain.setDataPosition(0);
                    zzek zzekVarCreateFromParcel = zzek.CREATOR.createFromParcel(parcelObtain);
                    parcelObtain.recycle();
                    arrayList.add(zzekVarCreateFromParcel);
                }
            }
            Location location = (Location) intent.getParcelableExtra("com.google.android.location.intent.extra.triggering_location");
            if (arrayList != null || intExtra != -1) {
                return new GeofencingEvent(intExtra, intExtra2, arrayList, location);
            }
        }
        return null;
    }

    public int getErrorCode() {
        return this.zza;
    }

    public int getGeofenceTransition() {
        return this.zzb;
    }

    public List<Geofence> getTriggeringGeofences() {
        return this.zzc;
    }

    public Location getTriggeringLocation() {
        return this.zzd;
    }

    public boolean hasError() {
        return this.zza != -1;
    }
}
