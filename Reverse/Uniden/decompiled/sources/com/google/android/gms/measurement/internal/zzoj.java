package com.google.android.gms.measurement.internal;

import java.util.Map;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzoj {
    private long zza;
    private com.google.android.gms.internal.measurement.zzfy.zzj zzb;
    private String zzc;
    private Map<String, String> zzd;
    private zznt zze;

    public final long zza() {
        return this.zza;
    }

    public final com.google.android.gms.internal.measurement.zzfy.zzj zzc() {
        return this.zzb;
    }

    public final String zzd() {
        return this.zzc;
    }

    public final Map<String, String> zze() {
        return this.zzd;
    }

    public final zznw zzb() {
        return new zznw(this.zzc, this.zzd, this.zze);
    }

    private zzoj(long j, com.google.android.gms.internal.measurement.zzfy.zzj zzjVar, String str, Map<String, String> map, zznt zzntVar) {
        this.zza = j;
        this.zzb = zzjVar;
        this.zzc = str;
        this.zzd = map;
        this.zze = zzntVar;
    }
}
