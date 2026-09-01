package com.google.android.gms.internal.measurement;

import java.io.File;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
final class zzch implements zzci {
    @Override // com.google.android.gms.internal.measurement.zzci
    public final String zza(String str, zzcm zzcmVar, zzcj zzcjVar) {
        return str;
    }

    @Override // com.google.android.gms.internal.measurement.zzci
    public final /* synthetic */ String zza(String str) {
        return zza(str, zzcm.zza);
    }

    @Override // com.google.android.gms.internal.measurement.zzci
    public final /* synthetic */ String zza(File file, String str) {
        return zza(file, str, zzcm.zza);
    }

    @Override // com.google.android.gms.internal.measurement.zzci
    public final /* synthetic */ String zza(String str, zzcm zzcmVar) {
        return zza(str, zzcmVar, zzcj.RAW_FILE_IO_TYPE);
    }

    @Override // com.google.android.gms.internal.measurement.zzci
    public final /* synthetic */ String zza(File file, String str, zzcm zzcmVar) {
        return zza(new File(file, str).getPath(), zzcmVar);
    }

    zzch() {
    }
}
