package com.google.android.gms.internal.measurement;

import java.io.IOException;
import java.util.Iterator;
import java.util.Map;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
final class zzli<T> implements zzlu<T> {
    private final zzlc zza;
    private final zzmk<?, ?> zzb;
    private final boolean zzc;
    private final zzji<?> zzd;

    @Override // com.google.android.gms.internal.measurement.zzlu
    public final int zza(T t) {
        zzmk<?, ?> zzmkVar = this.zzb;
        int iZzb = zzmkVar.zzb(zzmkVar.zzd(t));
        return this.zzc ? iZzb + this.zzd.zza(t).zza() : iZzb;
    }

    @Override // com.google.android.gms.internal.measurement.zzlu
    public final int zzb(T t) {
        int iHashCode = this.zzb.zzd(t).hashCode();
        return this.zzc ? (iHashCode * 53) + this.zzd.zza(t).hashCode() : iHashCode;
    }

    static <T> zzli<T> zza(zzmk<?, ?> zzmkVar, zzji<?> zzjiVar, zzlc zzlcVar) {
        return new zzli<>(zzmkVar, zzjiVar, zzlcVar);
    }

    @Override // com.google.android.gms.internal.measurement.zzlu
    public final T zza() {
        zzlc zzlcVar = this.zza;
        if (zzlcVar instanceof zzjt) {
            return (T) ((zzjt) zzlcVar).zzce();
        }
        return (T) zzlcVar.zzci().zzaj();
    }

    private zzli(zzmk<?, ?> zzmkVar, zzji<?> zzjiVar, zzlc zzlcVar) {
        this.zzb = zzmkVar;
        this.zzc = zzjiVar.zza(zzlcVar);
        this.zzd = zzjiVar;
        this.zza = zzlcVar;
    }

    @Override // com.google.android.gms.internal.measurement.zzlu
    public final void zzd(T t) {
        this.zzb.zzf(t);
        this.zzd.zzc(t);
    }

    @Override // com.google.android.gms.internal.measurement.zzlu
    public final void zza(T t, T t2) {
        zzlw.zza(this.zzb, t, t2);
        if (this.zzc) {
            zzlw.zza(this.zzd, t, t2);
        }
    }

    @Override // com.google.android.gms.internal.measurement.zzlu
    public final void zza(T t, zzlr zzlrVar, zzjg zzjgVar) throws IOException {
        boolean zZzt;
        zzmk<?, ?> zzmkVar = this.zzb;
        zzji<?> zzjiVar = this.zzd;
        Object objZzc = zzmkVar.zzc(t);
        zzjm<T> zzjmVarZzb = zzjiVar.zzb(t);
        while (zzlrVar.zzc() != Integer.MAX_VALUE) {
            try {
                int iZzd = zzlrVar.zzd();
                int iZzj = 0;
                if (iZzd != 11) {
                    if ((iZzd & 7) == 2) {
                        Object objZza = zzjiVar.zza(zzjgVar, this.zza, iZzd >>> 3);
                        if (objZza != null) {
                            zzjiVar.zza(zzlrVar, objZza, zzjgVar, zzjmVarZzb);
                        } else {
                            zZzt = zzmkVar.zza(objZzc, zzlrVar, 0);
                        }
                    } else {
                        zZzt = zzlrVar.zzt();
                    }
                    if (!zZzt) {
                        zzmkVar.zzb(t, objZzc);
                        return;
                    }
                } else {
                    Object objZza2 = null;
                    zzik zzikVarZzp = null;
                    while (zzlrVar.zzc() != Integer.MAX_VALUE) {
                        int iZzd2 = zzlrVar.zzd();
                        if (iZzd2 == 16) {
                            iZzj = zzlrVar.zzj();
                            objZza2 = zzjiVar.zza(zzjgVar, this.zza, iZzj);
                        } else if (iZzd2 == 26) {
                            if (objZza2 != null) {
                                zzjiVar.zza(zzlrVar, objZza2, zzjgVar, zzjmVarZzb);
                            } else {
                                zzikVarZzp = zzlrVar.zzp();
                            }
                        } else if (!zzlrVar.zzt()) {
                            break;
                        }
                    }
                    if (zzlrVar.zzd() != 12) {
                        throw zzkb.zzb();
                    }
                    if (zzikVarZzp != null) {
                        if (objZza2 != null) {
                            zzjiVar.zza(zzikVarZzp, objZza2, zzjgVar, zzjmVarZzb);
                        } else {
                            zzmkVar.zza(objZzc, iZzj, zzikVarZzp);
                        }
                    }
                }
            } catch (Throwable th) {
                zzmkVar.zzb(t, objZzc);
                throw th;
            }
        }
        zzmkVar.zzb(t, objZzc);
    }

    /* JADX WARN: Code duplicated, block: B:33:0x0094  */
    /* JADX WARN: Code duplicated, block: B:56:0x0099 A[EDGE_INSN: B:56:0x0099->B:34:0x0099 BREAK  A[LOOP:1: B:18:0x0053->B:61:0x0053], SYNTHETIC] */
    /* JADX WARN: Multi-variable type inference failed */
    @Override // com.google.android.gms.internal.measurement.zzlu
    public final void zza(T t, byte[] bArr, int i, int i2, zzij zzijVar) throws IOException {
        zzjt zzjtVar = (zzjt) t;
        zzmj zzmjVarZzd = zzjtVar.zzb;
        if (zzmjVarZzd == zzmj.zzc()) {
            zzmjVarZzd = zzmj.zzd();
            zzjtVar.zzb = zzmjVarZzd;
        }
        ((zzjt.zzd) t).zza();
        zzjt.zzf zzfVar = null;
        while (i < i2) {
            int iZzc = zzig.zzc(bArr, i, zzijVar);
            int i3 = zzijVar.zza;
            if (i3 == 11) {
                int i4 = 0;
                zzik zzikVar = null;
                while (iZzc < i2) {
                    iZzc = zzig.zzc(bArr, iZzc, zzijVar);
                    int i5 = zzijVar.zza;
                    int i6 = i5 >>> 3;
                    int i7 = i5 & 7;
                    if (i6 == 2) {
                        if (i7 != 0) {
                            if (i5 != 12) {
                                break;
                                break;
                            }
                            iZzc = zzig.zza(i5, bArr, iZzc, i2, zzijVar);
                        } else {
                            iZzc = zzig.zzc(bArr, iZzc, zzijVar);
                            i4 = zzijVar.zza;
                            zzfVar = (zzjt.zzf) this.zzd.zza(zzijVar.zzd, this.zza, i4);
                        }
                    } else {
                        if (i6 == 3) {
                            if (zzfVar != null) {
                                zzlq.zza();
                                throw new NoSuchMethodError();
                            }
                            if (i7 == 2) {
                                iZzc = zzig.zza(bArr, iZzc, zzijVar);
                                zzikVar = (zzik) zzijVar.zzc;
                            }
                        }
                        if (i5 != 12) {
                            break;
                        } else {
                            iZzc = zzig.zza(i5, bArr, iZzc, i2, zzijVar);
                        }
                    }
                }
                if (zzikVar != null) {
                    zzmjVarZzd.zza((i4 << 3) | 2, zzikVar);
                }
                i = iZzc;
            } else if ((i3 & 7) == 2) {
                zzfVar = (zzjt.zzf) this.zzd.zza(zzijVar.zzd, this.zza, i3 >>> 3);
                if (zzfVar != null) {
                    zzlq.zza();
                    throw new NoSuchMethodError();
                }
                i = zzig.zza(i3, bArr, iZzc, i2, zzmjVarZzd, zzijVar);
            } else {
                i = zzig.zza(i3, bArr, iZzc, i2, zzijVar);
            }
        }
        if (i != i2) {
            throw zzkb.zzg();
        }
    }

    @Override // com.google.android.gms.internal.measurement.zzlu
    public final void zza(T t, zznb zznbVar) throws IOException {
        Iterator itZzd = this.zzd.zza(t).zzd();
        while (itZzd.hasNext()) {
            Map.Entry entry = (Map.Entry) itZzd.next();
            zzjo zzjoVar = (zzjo) entry.getKey();
            if (zzjoVar.zzc() != zzmz.MESSAGE || zzjoVar.zze() || zzjoVar.zzd()) {
                throw new IllegalStateException("Found invalid MessageSet item.");
            }
            if (entry instanceof zzkf) {
                zznbVar.zza(zzjoVar.zza(), (Object) ((zzkf) entry).zza().zzb());
            } else {
                zznbVar.zza(zzjoVar.zza(), entry.getValue());
            }
        }
        zzmk<?, ?> zzmkVar = this.zzb;
        zzmkVar.zza(zzmkVar.zzd(t), zznbVar);
    }

    @Override // com.google.android.gms.internal.measurement.zzlu
    public final boolean zzb(T t, T t2) {
        if (!this.zzb.zzd(t).equals(this.zzb.zzd(t2))) {
            return false;
        }
        if (this.zzc) {
            return this.zzd.zza(t).equals(this.zzd.zza(t2));
        }
        return true;
    }

    @Override // com.google.android.gms.internal.measurement.zzlu
    public final boolean zze(T t) {
        return this.zzd.zza(t).zzg();
    }
}
