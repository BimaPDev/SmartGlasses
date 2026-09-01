package com.google.android.gms.measurement.internal;

import android.database.Cursor;
import android.database.sqlite.SQLiteException;
import com.google.android.gms.common.internal.Preconditions;
import com.google.android.gms.measurement.api.AppMeasurementSdk;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzar {
    private final String zza;
    private long zzb = -1;
    private final /* synthetic */ zzal zzc;

    /* JADX WARN: Code duplicated, block: B:45:0x0103  */
    public final List<zzap> zza() throws Throwable {
        Cursor cursor;
        ArrayList arrayList = new ArrayList();
        try {
            int i = 5;
            Cursor cursorQuery = this.zzc.m145e_().query("raw_events", new String[]{"rowid", AppMeasurementSdk.ConditionalUserProperty.NAME, "timestamp", "metadata_fingerprint", "data", "realtime"}, "app_id = ? and rowid > ?", new String[]{this.zza, String.valueOf(this.zzb)}, null, null, "rowid", "1000");
            try {
                if (!cursorQuery.moveToFirst()) {
                    List<zzap> listEmptyList = Collections.emptyList();
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                    return listEmptyList;
                }
                while (true) {
                    long j = cursorQuery.getLong(0);
                    long j2 = cursorQuery.getLong(3);
                    boolean z = cursorQuery.getLong(i) == 1;
                    byte[] blob = cursorQuery.getBlob(4);
                    if (j > this.zzb) {
                        this.zzb = j;
                    }
                    try {
                        com.google.android.gms.internal.measurement.zzfy.zzf.zza zzaVar = (com.google.android.gms.internal.measurement.zzfy.zzf.zza) zzoo.zza(com.google.android.gms.internal.measurement.zzfy.zzf.zze(), blob);
                        String string = cursorQuery.getString(1);
                        if (string == null) {
                            string = "";
                        }
                        zzaVar.zza(string).zzb(cursorQuery.getLong(2));
                        arrayList.add(new zzap(j, j2, z, (com.google.android.gms.internal.measurement.zzfy.zzf) ((com.google.android.gms.internal.measurement.zzjt) zzaVar.zzai())));
                    } catch (IOException e) {
                        this.zzc.zzj().zzg().zza("Data loss. Failed to merge raw event. appId", zzgo.zza(this.zza), e);
                    }
                    if (!cursorQuery.moveToNext()) {
                        break;
                    }
                    i = 5;
                }
                if (cursorQuery != null) {
                    cursorQuery.close();
                }
            } catch (SQLiteException e2) {
                e = e2;
                cursor = cursorQuery;
                try {
                    this.zzc.zzj().zzg().zza("Data loss. Error querying raw events batch. appId", zzgo.zza(this.zza), e);
                    if (cursor != null) {
                        cursor.close();
                    }
                } catch (Throwable th) {
                    th = th;
                    if (cursor != null) {
                        cursor.close();
                    }
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
                cursor = cursorQuery;
                if (cursor != null) {
                    cursor.close();
                }
                throw th;
            }
        } catch (SQLiteException e3) {
            e = e3;
            cursor = null;
        } catch (Throwable th3) {
            th = th3;
            cursor = null;
        }
        return arrayList;
    }

    public zzar(zzal zzalVar, String str) {
        this.zzc = zzalVar;
        Preconditions.checkNotEmpty(str);
        this.zza = str;
    }
}
