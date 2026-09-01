package com.google.android.gms.internal.measurement;

import java.io.IOException;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
abstract class zzmk<T, B> {
    private static volatile int zza = 100;

    abstract int zza(T t);

    abstract B zza();

    abstract T zza(T t, T t2);

    abstract void zza(B b, int i, int i2);

    abstract void zza(B b, int i, long j);

    abstract void zza(B b, int i, zzik zzikVar);

    abstract void zza(B b, int i, T t);

    abstract void zza(T t, zznb zznbVar) throws IOException;

    abstract boolean zza(zzlr zzlrVar);

    abstract int zzb(T t);

    abstract void zzb(B b, int i, long j);

    abstract void zzb(T t, zznb zznbVar) throws IOException;

    abstract void zzb(Object obj, B b);

    abstract B zzc(Object obj);

    abstract void zzc(Object obj, T t);

    abstract T zzd(Object obj);

    abstract T zze(B b);

    abstract void zzf(Object obj);

    zzmk() {
    }

    final boolean zza(B b, zzlr zzlrVar, int i) throws IOException {
        int iZzd = zzlrVar.zzd();
        int i2 = iZzd >>> 3;
        int i3 = iZzd & 7;
        if (i3 == 0) {
            zzb(b, i2, zzlrVar.zzl());
            return true;
        }
        if (i3 == 1) {
            zza(b, i2, zzlrVar.zzk());
            return true;
        }
        if (i3 == 2) {
            zza((Object) b, i2, zzlrVar.zzp());
            return true;
        }
        if (i3 != 3) {
            if (i3 == 4) {
                return false;
            }
            if (i3 == 5) {
                zza((Object) b, i2, zzlrVar.zzf());
                return true;
            }
            throw zzkb.zza();
        }
        B bZza = zza();
        int i4 = 4 | (i2 << 3);
        int i5 = i + 1;
        if (i5 >= zza) {
            throw zzkb.zzh();
        }
        while (zzlrVar.zzc() != Integer.MAX_VALUE && zza(bZza, zzlrVar, i5)) {
        }
        if (i4 != zzlrVar.zzd()) {
            throw zzkb.zzb();
        }
        zza(b, i2, zze(bZza));
        return true;
    }
}
