package com.google.android.gms.internal.measurement;

import java.io.IOException;
import java.util.List;
import java.util.Map;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
final class zzjb implements zzlr {
    private final zziw zza;
    private int zzb;
    private int zzc;
    private int zzd = 0;

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final double zza() throws IOException {
        zzb(1);
        return this.zza.zza();
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final int zzd() {
        return this.zzb;
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final float zzb() throws IOException {
        zzb(5);
        return this.zza.zzb();
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final int zzc() throws IOException {
        int i = this.zzd;
        if (i != 0) {
            this.zzb = i;
            this.zzd = 0;
        } else {
            this.zzb = this.zza.zzi();
        }
        int i2 = this.zzb;
        if (i2 == 0 || i2 == this.zzc) {
            return Integer.MAX_VALUE;
        }
        return i2 >>> 3;
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final int zze() throws IOException {
        zzb(0);
        return this.zza.zzd();
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final int zzf() throws IOException {
        zzb(5);
        return this.zza.zze();
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final int zzg() throws IOException {
        zzb(0);
        return this.zza.zzf();
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final int zzh() throws IOException {
        zzb(5);
        return this.zza.zzg();
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final int zzi() throws IOException {
        zzb(0);
        return this.zza.zzh();
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final int zzj() throws IOException {
        zzb(0);
        return this.zza.zzj();
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final long zzk() throws IOException {
        zzb(1);
        return this.zza.zzk();
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final long zzl() throws IOException {
        zzb(0);
        return this.zza.zzl();
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final long zzm() throws IOException {
        zzb(1);
        return this.zza.zzn();
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final long zzn() throws IOException {
        zzb(0);
        return this.zza.zzo();
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final long zzo() throws IOException {
        zzb(0);
        return this.zza.zzp();
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final zzik zzp() throws IOException {
        zzb(2);
        return this.zza.zzq();
    }

    public static zzjb zza(zziw zziwVar) {
        if (zziwVar.zzc != null) {
            return zziwVar.zzc;
        }
        return new zzjb(zziwVar);
    }

    private final Object zza(zzms zzmsVar, Class<?> cls, zzjg zzjgVar) throws IOException {
        switch (zzja.zza[zzmsVar.ordinal()]) {
            case 1:
                return Boolean.valueOf(zzs());
            case 2:
                return zzp();
            case 3:
                return Double.valueOf(zza());
            case 4:
                return Integer.valueOf(zze());
            case 5:
                return Integer.valueOf(zzf());
            case 6:
                return Long.valueOf(zzk());
            case 7:
                return Float.valueOf(zzb());
            case 8:
                return Integer.valueOf(zzg());
            case 9:
                return Long.valueOf(zzl());
            case 10:
                zzb(2);
                return zzb(zzlq.zza().zza((Class) cls), zzjgVar);
            case 11:
                return Integer.valueOf(zzh());
            case 12:
                return Long.valueOf(zzm());
            case 13:
                return Integer.valueOf(zzi());
            case 14:
                return Long.valueOf(zzn());
            case 15:
                return zzr();
            case 16:
                return Integer.valueOf(zzj());
            case 17:
                return Long.valueOf(zzo());
            default:
                throw new IllegalArgumentException("unsupported field type.");
        }
    }

    private final <T> T zza(zzlu<T> zzluVar, zzjg zzjgVar) throws IOException {
        T tZza = zzluVar.zza();
        zzc(tZza, zzluVar, zzjgVar);
        zzluVar.zzd(tZza);
        return tZza;
    }

    private final <T> T zzb(zzlu<T> zzluVar, zzjg zzjgVar) throws IOException {
        T tZza = zzluVar.zza();
        zzd(tZza, zzluVar, zzjgVar);
        zzluVar.zzd(tZza);
        return tZza;
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final String zzq() throws IOException {
        zzb(2);
        return this.zza.zzr();
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final String zzr() throws IOException {
        zzb(2);
        return this.zza.zzs();
    }

    private zzjb(zziw zziwVar) {
        zziw zziwVar2 = (zziw) zzjv.zza(zziwVar, "input");
        this.zza = zziwVar2;
        zziwVar2.zzc = this;
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final <T> void zza(T t, zzlu<T> zzluVar, zzjg zzjgVar) throws IOException {
        zzb(3);
        zzc(t, zzluVar, zzjgVar);
    }

    private final <T> void zzc(T t, zzlu<T> zzluVar, zzjg zzjgVar) throws IOException {
        int i = this.zzc;
        this.zzc = ((this.zzb >>> 3) << 3) | 4;
        try {
            zzluVar.zza(t, this, zzjgVar);
            if (this.zzb != this.zzc) {
                throw zzkb.zzg();
            }
            this.zzc = i;
        } catch (Throwable th) {
            this.zzc = i;
            throw th;
        }
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final <T> void zzb(T t, zzlu<T> zzluVar, zzjg zzjgVar) throws IOException {
        zzb(2);
        zzd(t, zzluVar, zzjgVar);
    }

    private final <T> void zzd(T t, zzlu<T> zzluVar, zzjg zzjgVar) throws IOException {
        int iZzj = this.zza.zzj();
        if (this.zza.zza >= this.zza.zzb) {
            throw zzkb.zzh();
        }
        int iZzb = this.zza.zzb(iZzj);
        this.zza.zza++;
        zzluVar.zza(t, this, zzjgVar);
        this.zza.zzc(0);
        this.zza.zza--;
        this.zza.zzd(iZzb);
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final void zza(List<Boolean> list) throws IOException {
        int iZzi;
        int iZzi2;
        if (!(list instanceof zzii)) {
            int i = this.zzb & 7;
            if (i == 0) {
                do {
                    list.add(Boolean.valueOf(this.zza.zzu()));
                    if (this.zza.zzt()) {
                        return;
                    } else {
                        iZzi = this.zza.zzi();
                    }
                } while (iZzi == this.zzb);
                this.zzd = iZzi;
                return;
            }
            if (i == 2) {
                int iZzc = this.zza.zzc() + this.zza.zzj();
                do {
                    list.add(Boolean.valueOf(this.zza.zzu()));
                } while (this.zza.zzc() < iZzc);
                zza(iZzc);
                return;
            }
            throw zzkb.zza();
        }
        zzii zziiVar = (zzii) list;
        int i2 = this.zzb & 7;
        if (i2 == 0) {
            do {
                zziiVar.zza(this.zza.zzu());
                if (this.zza.zzt()) {
                    return;
                } else {
                    iZzi2 = this.zza.zzi();
                }
            } while (iZzi2 == this.zzb);
            this.zzd = iZzi2;
            return;
        }
        if (i2 == 2) {
            int iZzc2 = this.zza.zzc() + this.zza.zzj();
            do {
                zziiVar.zza(this.zza.zzu());
            } while (this.zza.zzc() < iZzc2);
            zza(iZzc2);
            return;
        }
        throw zzkb.zza();
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final void zzb(List<zzik> list) throws IOException {
        int iZzi;
        if ((this.zzb & 7) != 2) {
            throw zzkb.zza();
        }
        do {
            list.add(zzp());
            if (this.zza.zzt()) {
                return;
            } else {
                iZzi = this.zza.zzi();
            }
        } while (iZzi == this.zzb);
        this.zzd = iZzi;
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final void zzc(List<Double> list) throws IOException {
        int iZzi;
        int iZzi2;
        if (!(list instanceof zzje)) {
            int i = this.zzb & 7;
            if (i == 1) {
                do {
                    list.add(Double.valueOf(this.zza.zza()));
                    if (this.zza.zzt()) {
                        return;
                    } else {
                        iZzi = this.zza.zzi();
                    }
                } while (iZzi == this.zzb);
                this.zzd = iZzi;
                return;
            }
            if (i == 2) {
                int iZzj = this.zza.zzj();
                zzd(iZzj);
                int iZzc = this.zza.zzc() + iZzj;
                do {
                    list.add(Double.valueOf(this.zza.zza()));
                } while (this.zza.zzc() < iZzc);
                return;
            }
            throw zzkb.zza();
        }
        zzje zzjeVar = (zzje) list;
        int i2 = this.zzb & 7;
        if (i2 == 1) {
            do {
                zzjeVar.zza(this.zza.zza());
                if (this.zza.zzt()) {
                    return;
                } else {
                    iZzi2 = this.zza.zzi();
                }
            } while (iZzi2 == this.zzb);
            this.zzd = iZzi2;
            return;
        }
        if (i2 == 2) {
            int iZzj2 = this.zza.zzj();
            zzd(iZzj2);
            int iZzc2 = this.zza.zzc() + iZzj2;
            do {
                zzjeVar.zza(this.zza.zza());
            } while (this.zza.zzc() < iZzc2);
            return;
        }
        throw zzkb.zza();
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final void zzd(List<Integer> list) throws IOException {
        int iZzi;
        int iZzi2;
        if (!(list instanceof zzjw)) {
            int i = this.zzb & 7;
            if (i == 0) {
                do {
                    list.add(Integer.valueOf(this.zza.zzd()));
                    if (this.zza.zzt()) {
                        return;
                    } else {
                        iZzi = this.zza.zzi();
                    }
                } while (iZzi == this.zzb);
                this.zzd = iZzi;
                return;
            }
            if (i == 2) {
                int iZzc = this.zza.zzc() + this.zza.zzj();
                do {
                    list.add(Integer.valueOf(this.zza.zzd()));
                } while (this.zza.zzc() < iZzc);
                zza(iZzc);
                return;
            }
            throw zzkb.zza();
        }
        zzjw zzjwVar = (zzjw) list;
        int i2 = this.zzb & 7;
        if (i2 == 0) {
            do {
                zzjwVar.zzd(this.zza.zzd());
                if (this.zza.zzt()) {
                    return;
                } else {
                    iZzi2 = this.zza.zzi();
                }
            } while (iZzi2 == this.zzb);
            this.zzd = iZzi2;
            return;
        }
        if (i2 == 2) {
            int iZzc2 = this.zza.zzc() + this.zza.zzj();
            do {
                zzjwVar.zzd(this.zza.zzd());
            } while (this.zza.zzc() < iZzc2);
            zza(iZzc2);
            return;
        }
        throw zzkb.zza();
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final void zze(List<Integer> list) throws IOException {
        int iZzi;
        int iZzi2;
        if (!(list instanceof zzjw)) {
            int i = this.zzb & 7;
            if (i == 2) {
                int iZzj = this.zza.zzj();
                zzc(iZzj);
                int iZzc = this.zza.zzc() + iZzj;
                do {
                    list.add(Integer.valueOf(this.zza.zze()));
                } while (this.zza.zzc() < iZzc);
                return;
            }
            if (i != 5) {
                throw zzkb.zza();
            }
            do {
                list.add(Integer.valueOf(this.zza.zze()));
                if (this.zza.zzt()) {
                    return;
                } else {
                    iZzi = this.zza.zzi();
                }
            } while (iZzi == this.zzb);
            this.zzd = iZzi;
            return;
        }
        zzjw zzjwVar = (zzjw) list;
        int i2 = this.zzb & 7;
        if (i2 == 2) {
            int iZzj2 = this.zza.zzj();
            zzc(iZzj2);
            int iZzc2 = this.zza.zzc() + iZzj2;
            do {
                zzjwVar.zzd(this.zza.zze());
            } while (this.zza.zzc() < iZzc2);
            return;
        }
        if (i2 != 5) {
            throw zzkb.zza();
        }
        do {
            zzjwVar.zzd(this.zza.zze());
            if (this.zza.zzt()) {
                return;
            } else {
                iZzi2 = this.zza.zzi();
            }
        } while (iZzi2 == this.zzb);
        this.zzd = iZzi2;
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final void zzf(List<Long> list) throws IOException {
        int iZzi;
        int iZzi2;
        if (!(list instanceof zzkn)) {
            int i = this.zzb & 7;
            if (i == 1) {
                do {
                    list.add(Long.valueOf(this.zza.zzk()));
                    if (this.zza.zzt()) {
                        return;
                    } else {
                        iZzi = this.zza.zzi();
                    }
                } while (iZzi == this.zzb);
                this.zzd = iZzi;
                return;
            }
            if (i == 2) {
                int iZzj = this.zza.zzj();
                zzd(iZzj);
                int iZzc = this.zza.zzc() + iZzj;
                do {
                    list.add(Long.valueOf(this.zza.zzk()));
                } while (this.zza.zzc() < iZzc);
                return;
            }
            throw zzkb.zza();
        }
        zzkn zzknVar = (zzkn) list;
        int i2 = this.zzb & 7;
        if (i2 == 1) {
            do {
                zzknVar.zza(this.zza.zzk());
                if (this.zza.zzt()) {
                    return;
                } else {
                    iZzi2 = this.zza.zzi();
                }
            } while (iZzi2 == this.zzb);
            this.zzd = iZzi2;
            return;
        }
        if (i2 == 2) {
            int iZzj2 = this.zza.zzj();
            zzd(iZzj2);
            int iZzc2 = this.zza.zzc() + iZzj2;
            do {
                zzknVar.zza(this.zza.zzk());
            } while (this.zza.zzc() < iZzc2);
            return;
        }
        throw zzkb.zza();
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final void zzg(List<Float> list) throws IOException {
        int iZzi;
        int iZzi2;
        if (!(list instanceof zzjs)) {
            int i = this.zzb & 7;
            if (i == 2) {
                int iZzj = this.zza.zzj();
                zzc(iZzj);
                int iZzc = this.zza.zzc() + iZzj;
                do {
                    list.add(Float.valueOf(this.zza.zzb()));
                } while (this.zza.zzc() < iZzc);
                return;
            }
            if (i != 5) {
                throw zzkb.zza();
            }
            do {
                list.add(Float.valueOf(this.zza.zzb()));
                if (this.zza.zzt()) {
                    return;
                } else {
                    iZzi = this.zza.zzi();
                }
            } while (iZzi == this.zzb);
            this.zzd = iZzi;
            return;
        }
        zzjs zzjsVar = (zzjs) list;
        int i2 = this.zzb & 7;
        if (i2 == 2) {
            int iZzj2 = this.zza.zzj();
            zzc(iZzj2);
            int iZzc2 = this.zza.zzc() + iZzj2;
            do {
                zzjsVar.zza(this.zza.zzb());
            } while (this.zza.zzc() < iZzc2);
            return;
        }
        if (i2 != 5) {
            throw zzkb.zza();
        }
        do {
            zzjsVar.zza(this.zza.zzb());
            if (this.zza.zzt()) {
                return;
            } else {
                iZzi2 = this.zza.zzi();
            }
        } while (iZzi2 == this.zzb);
        this.zzd = iZzi2;
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // com.google.android.gms.internal.measurement.zzlr
    @Deprecated
    public final <T> void zza(List<T> list, zzlu<T> zzluVar, zzjg zzjgVar) throws IOException {
        int iZzi;
        int i = this.zzb;
        if ((i & 7) != 3) {
            throw zzkb.zza();
        }
        do {
            list.add(zza(zzluVar, zzjgVar));
            if (this.zza.zzt() || this.zzd != 0) {
                return;
            } else {
                iZzi = this.zza.zzi();
            }
        } while (iZzi == i);
        this.zzd = iZzi;
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final void zzh(List<Integer> list) throws IOException {
        int iZzi;
        int iZzi2;
        if (!(list instanceof zzjw)) {
            int i = this.zzb & 7;
            if (i == 0) {
                do {
                    list.add(Integer.valueOf(this.zza.zzf()));
                    if (this.zza.zzt()) {
                        return;
                    } else {
                        iZzi = this.zza.zzi();
                    }
                } while (iZzi == this.zzb);
                this.zzd = iZzi;
                return;
            }
            if (i == 2) {
                int iZzc = this.zza.zzc() + this.zza.zzj();
                do {
                    list.add(Integer.valueOf(this.zza.zzf()));
                } while (this.zza.zzc() < iZzc);
                zza(iZzc);
                return;
            }
            throw zzkb.zza();
        }
        zzjw zzjwVar = (zzjw) list;
        int i2 = this.zzb & 7;
        if (i2 == 0) {
            do {
                zzjwVar.zzd(this.zza.zzf());
                if (this.zza.zzt()) {
                    return;
                } else {
                    iZzi2 = this.zza.zzi();
                }
            } while (iZzi2 == this.zzb);
            this.zzd = iZzi2;
            return;
        }
        if (i2 == 2) {
            int iZzc2 = this.zza.zzc() + this.zza.zzj();
            do {
                zzjwVar.zzd(this.zza.zzf());
            } while (this.zza.zzc() < iZzc2);
            zza(iZzc2);
            return;
        }
        throw zzkb.zza();
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final void zzi(List<Long> list) throws IOException {
        int iZzi;
        int iZzi2;
        if (!(list instanceof zzkn)) {
            int i = this.zzb & 7;
            if (i == 0) {
                do {
                    list.add(Long.valueOf(this.zza.zzl()));
                    if (this.zza.zzt()) {
                        return;
                    } else {
                        iZzi = this.zza.zzi();
                    }
                } while (iZzi == this.zzb);
                this.zzd = iZzi;
                return;
            }
            if (i == 2) {
                int iZzc = this.zza.zzc() + this.zza.zzj();
                do {
                    list.add(Long.valueOf(this.zza.zzl()));
                } while (this.zza.zzc() < iZzc);
                zza(iZzc);
                return;
            }
            throw zzkb.zza();
        }
        zzkn zzknVar = (zzkn) list;
        int i2 = this.zzb & 7;
        if (i2 == 0) {
            do {
                zzknVar.zza(this.zza.zzl());
                if (this.zza.zzt()) {
                    return;
                } else {
                    iZzi2 = this.zza.zzi();
                }
            } while (iZzi2 == this.zzb);
            this.zzd = iZzi2;
            return;
        }
        if (i2 == 2) {
            int iZzc2 = this.zza.zzc() + this.zza.zzj();
            do {
                zzknVar.zza(this.zza.zzl());
            } while (this.zza.zzc() < iZzc2);
            zza(iZzc2);
            return;
        }
        throw zzkb.zza();
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // com.google.android.gms.internal.measurement.zzlr
    public final <K, V> void zza(Map<K, V> map, zzkt<K, V> zzktVar, zzjg zzjgVar) throws IOException {
        zzb(2);
        int iZzb = this.zza.zzb(this.zza.zzj());
        Object objZza = zzktVar.zzb;
        Object objZza2 = zzktVar.zzd;
        while (true) {
            try {
                int iZzc = zzc();
                if (iZzc == Integer.MAX_VALUE || this.zza.zzt()) {
                    break;
                }
                if (iZzc == 1) {
                    objZza = zza(zzktVar.zza, (Class<?>) null, (zzjg) null);
                } else if (iZzc == 2) {
                    objZza2 = zza(zzktVar.zzc, zzktVar.zzd.getClass(), zzjgVar);
                } else {
                    try {
                        if (!zzt()) {
                            throw new zzkb("Unable to parse map entry.");
                        }
                    } catch (zzke unused) {
                        if (!zzt()) {
                            throw new zzkb("Unable to parse map entry.");
                        }
                    }
                }
            } catch (Throwable th) {
                this.zza.zzd(iZzb);
                throw th;
            }
        }
        map.put(objZza, objZza2);
        this.zza.zzd(iZzb);
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // com.google.android.gms.internal.measurement.zzlr
    public final <T> void zzb(List<T> list, zzlu<T> zzluVar, zzjg zzjgVar) throws IOException {
        int iZzi;
        int i = this.zzb;
        if ((i & 7) != 2) {
            throw zzkb.zza();
        }
        do {
            list.add(zzb(zzluVar, zzjgVar));
            if (this.zza.zzt() || this.zzd != 0) {
                return;
            } else {
                iZzi = this.zza.zzi();
            }
        } while (iZzi == i);
        this.zzd = iZzi;
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final void zzj(List<Integer> list) throws IOException {
        int iZzi;
        int iZzi2;
        if (!(list instanceof zzjw)) {
            int i = this.zzb & 7;
            if (i == 2) {
                int iZzj = this.zza.zzj();
                zzc(iZzj);
                int iZzc = this.zza.zzc() + iZzj;
                do {
                    list.add(Integer.valueOf(this.zza.zzg()));
                } while (this.zza.zzc() < iZzc);
                return;
            }
            if (i != 5) {
                throw zzkb.zza();
            }
            do {
                list.add(Integer.valueOf(this.zza.zzg()));
                if (this.zza.zzt()) {
                    return;
                } else {
                    iZzi = this.zza.zzi();
                }
            } while (iZzi == this.zzb);
            this.zzd = iZzi;
            return;
        }
        zzjw zzjwVar = (zzjw) list;
        int i2 = this.zzb & 7;
        if (i2 == 2) {
            int iZzj2 = this.zza.zzj();
            zzc(iZzj2);
            int iZzc2 = this.zza.zzc() + iZzj2;
            do {
                zzjwVar.zzd(this.zza.zzg());
            } while (this.zza.zzc() < iZzc2);
            return;
        }
        if (i2 != 5) {
            throw zzkb.zza();
        }
        do {
            zzjwVar.zzd(this.zza.zzg());
            if (this.zza.zzt()) {
                return;
            } else {
                iZzi2 = this.zza.zzi();
            }
        } while (iZzi2 == this.zzb);
        this.zzd = iZzi2;
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final void zzk(List<Long> list) throws IOException {
        int iZzi;
        int iZzi2;
        if (!(list instanceof zzkn)) {
            int i = this.zzb & 7;
            if (i == 1) {
                do {
                    list.add(Long.valueOf(this.zza.zzn()));
                    if (this.zza.zzt()) {
                        return;
                    } else {
                        iZzi = this.zza.zzi();
                    }
                } while (iZzi == this.zzb);
                this.zzd = iZzi;
                return;
            }
            if (i == 2) {
                int iZzj = this.zza.zzj();
                zzd(iZzj);
                int iZzc = this.zza.zzc() + iZzj;
                do {
                    list.add(Long.valueOf(this.zza.zzn()));
                } while (this.zza.zzc() < iZzc);
                return;
            }
            throw zzkb.zza();
        }
        zzkn zzknVar = (zzkn) list;
        int i2 = this.zzb & 7;
        if (i2 == 1) {
            do {
                zzknVar.zza(this.zza.zzn());
                if (this.zza.zzt()) {
                    return;
                } else {
                    iZzi2 = this.zza.zzi();
                }
            } while (iZzi2 == this.zzb);
            this.zzd = iZzi2;
            return;
        }
        if (i2 == 2) {
            int iZzj2 = this.zza.zzj();
            zzd(iZzj2);
            int iZzc2 = this.zza.zzc() + iZzj2;
            do {
                zzknVar.zza(this.zza.zzn());
            } while (this.zza.zzc() < iZzc2);
            return;
        }
        throw zzkb.zza();
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final void zzl(List<Integer> list) throws IOException {
        int iZzi;
        int iZzi2;
        if (!(list instanceof zzjw)) {
            int i = this.zzb & 7;
            if (i == 0) {
                do {
                    list.add(Integer.valueOf(this.zza.zzh()));
                    if (this.zza.zzt()) {
                        return;
                    } else {
                        iZzi = this.zza.zzi();
                    }
                } while (iZzi == this.zzb);
                this.zzd = iZzi;
                return;
            }
            if (i == 2) {
                int iZzc = this.zza.zzc() + this.zza.zzj();
                do {
                    list.add(Integer.valueOf(this.zza.zzh()));
                } while (this.zza.zzc() < iZzc);
                zza(iZzc);
                return;
            }
            throw zzkb.zza();
        }
        zzjw zzjwVar = (zzjw) list;
        int i2 = this.zzb & 7;
        if (i2 == 0) {
            do {
                zzjwVar.zzd(this.zza.zzh());
                if (this.zza.zzt()) {
                    return;
                } else {
                    iZzi2 = this.zza.zzi();
                }
            } while (iZzi2 == this.zzb);
            this.zzd = iZzi2;
            return;
        }
        if (i2 == 2) {
            int iZzc2 = this.zza.zzc() + this.zza.zzj();
            do {
                zzjwVar.zzd(this.zza.zzh());
            } while (this.zza.zzc() < iZzc2);
            zza(iZzc2);
            return;
        }
        throw zzkb.zza();
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final void zzm(List<Long> list) throws IOException {
        int iZzi;
        int iZzi2;
        if (!(list instanceof zzkn)) {
            int i = this.zzb & 7;
            if (i == 0) {
                do {
                    list.add(Long.valueOf(this.zza.zzo()));
                    if (this.zza.zzt()) {
                        return;
                    } else {
                        iZzi = this.zza.zzi();
                    }
                } while (iZzi == this.zzb);
                this.zzd = iZzi;
                return;
            }
            if (i == 2) {
                int iZzc = this.zza.zzc() + this.zza.zzj();
                do {
                    list.add(Long.valueOf(this.zza.zzo()));
                } while (this.zza.zzc() < iZzc);
                zza(iZzc);
                return;
            }
            throw zzkb.zza();
        }
        zzkn zzknVar = (zzkn) list;
        int i2 = this.zzb & 7;
        if (i2 == 0) {
            do {
                zzknVar.zza(this.zza.zzo());
                if (this.zza.zzt()) {
                    return;
                } else {
                    iZzi2 = this.zza.zzi();
                }
            } while (iZzi2 == this.zzb);
            this.zzd = iZzi2;
            return;
        }
        if (i2 == 2) {
            int iZzc2 = this.zza.zzc() + this.zza.zzj();
            do {
                zzknVar.zza(this.zza.zzo());
            } while (this.zza.zzc() < iZzc2);
            zza(iZzc2);
            return;
        }
        throw zzkb.zza();
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final void zzn(List<String> list) throws IOException {
        zza(list, false);
    }

    private final void zza(List<String> list, boolean z) throws IOException {
        int iZzi;
        int iZzi2;
        if ((this.zzb & 7) != 2) {
            throw zzkb.zza();
        }
        if (!(list instanceof zzkj) || z) {
            do {
                list.add(z ? zzr() : zzq());
                if (this.zza.zzt()) {
                    return;
                } else {
                    iZzi = this.zza.zzi();
                }
            } while (iZzi == this.zzb);
            this.zzd = iZzi;
            return;
        }
        zzkj zzkjVar = (zzkj) list;
        do {
            zzkjVar.zza(zzp());
            if (this.zza.zzt()) {
                return;
            } else {
                iZzi2 = this.zza.zzi();
            }
        } while (iZzi2 == this.zzb);
        this.zzd = iZzi2;
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final void zzo(List<String> list) throws IOException {
        zza(list, true);
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final void zzp(List<Integer> list) throws IOException {
        int iZzi;
        int iZzi2;
        if (!(list instanceof zzjw)) {
            int i = this.zzb & 7;
            if (i == 0) {
                do {
                    list.add(Integer.valueOf(this.zza.zzj()));
                    if (this.zza.zzt()) {
                        return;
                    } else {
                        iZzi = this.zza.zzi();
                    }
                } while (iZzi == this.zzb);
                this.zzd = iZzi;
                return;
            }
            if (i == 2) {
                int iZzc = this.zza.zzc() + this.zza.zzj();
                do {
                    list.add(Integer.valueOf(this.zza.zzj()));
                } while (this.zza.zzc() < iZzc);
                zza(iZzc);
                return;
            }
            throw zzkb.zza();
        }
        zzjw zzjwVar = (zzjw) list;
        int i2 = this.zzb & 7;
        if (i2 == 0) {
            do {
                zzjwVar.zzd(this.zza.zzj());
                if (this.zza.zzt()) {
                    return;
                } else {
                    iZzi2 = this.zza.zzi();
                }
            } while (iZzi2 == this.zzb);
            this.zzd = iZzi2;
            return;
        }
        if (i2 == 2) {
            int iZzc2 = this.zza.zzc() + this.zza.zzj();
            do {
                zzjwVar.zzd(this.zza.zzj());
            } while (this.zza.zzc() < iZzc2);
            zza(iZzc2);
            return;
        }
        throw zzkb.zza();
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final void zzq(List<Long> list) throws IOException {
        int iZzi;
        int iZzi2;
        if (!(list instanceof zzkn)) {
            int i = this.zzb & 7;
            if (i == 0) {
                do {
                    list.add(Long.valueOf(this.zza.zzp()));
                    if (this.zza.zzt()) {
                        return;
                    } else {
                        iZzi = this.zza.zzi();
                    }
                } while (iZzi == this.zzb);
                this.zzd = iZzi;
                return;
            }
            if (i == 2) {
                int iZzc = this.zza.zzc() + this.zza.zzj();
                do {
                    list.add(Long.valueOf(this.zza.zzp()));
                } while (this.zza.zzc() < iZzc);
                zza(iZzc);
                return;
            }
            throw zzkb.zza();
        }
        zzkn zzknVar = (zzkn) list;
        int i2 = this.zzb & 7;
        if (i2 == 0) {
            do {
                zzknVar.zza(this.zza.zzp());
                if (this.zza.zzt()) {
                    return;
                } else {
                    iZzi2 = this.zza.zzi();
                }
            } while (iZzi2 == this.zzb);
            this.zzd = iZzi2;
            return;
        }
        if (i2 == 2) {
            int iZzc2 = this.zza.zzc() + this.zza.zzj();
            do {
                zzknVar.zza(this.zza.zzp());
            } while (this.zza.zzc() < iZzc2);
            zza(iZzc2);
            return;
        }
        throw zzkb.zza();
    }

    private final void zza(int i) throws IOException {
        if (this.zza.zzc() != i) {
            throw zzkb.zzi();
        }
    }

    private final void zzb(int i) throws IOException {
        if ((this.zzb & 7) != i) {
            throw zzkb.zza();
        }
    }

    private static void zzc(int i) throws IOException {
        if ((i & 3) != 0) {
            throw zzkb.zzg();
        }
    }

    private static void zzd(int i) throws IOException {
        if ((i & 7) != 0) {
            throw zzkb.zzg();
        }
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final boolean zzs() throws IOException {
        zzb(0);
        return this.zza.zzu();
    }

    @Override // com.google.android.gms.internal.measurement.zzlr
    public final boolean zzt() throws IOException {
        int i;
        if (this.zza.zzt() || (i = this.zzb) == this.zzc) {
            return false;
        }
        return this.zza.zze(i);
    }
}
