package com.google.android.gms.internal.measurement;

import android.database.ContentObserver;
import android.os.Handler;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
final class zzgw extends ContentObserver {
    private final /* synthetic */ zzgu zza;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    zzgw(zzgu zzguVar, Handler handler) {
        super(null);
        this.zza = zzguVar;
    }

    @Override // android.database.ContentObserver
    public final void onChange(boolean z) {
        this.zza.zzd();
    }
}
