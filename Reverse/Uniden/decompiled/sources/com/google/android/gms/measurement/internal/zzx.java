package com.google.android.gms.measurement.internal;

import androidx.collection.ArrayMap;
import java.util.HashSet;
import java.util.Iterator;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
final class zzx extends zzaa {
    private com.google.android.gms.internal.measurement.zzfo.zzb zzg;
    private final /* synthetic */ zzt zzh;

    @Override // com.google.android.gms.measurement.internal.zzaa
    final int zza() {
        return this.zzg.zzb();
    }

    @Override // com.google.android.gms.measurement.internal.zzaa
    final boolean zzc() {
        return false;
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    zzx(zzt zztVar, String str, int i, com.google.android.gms.internal.measurement.zzfo.zzb zzbVar) {
        super(str, i);
        this.zzh = zztVar;
        this.zzg = zzbVar;
    }

    @Override // com.google.android.gms.measurement.internal.zzaa
    final boolean zzb() {
        return this.zzg.zzk();
    }

    /* JADX WARN: Code duplicated, block: B:104:0x02b6  */
    /* JADX WARN: Code duplicated, block: B:107:0x02c8  */
    /* JADX WARN: Code duplicated, block: B:112:0x02d4  */
    /* JADX WARN: Code duplicated, block: B:114:0x02da  */
    /* JADX WARN: Code duplicated, block: B:115:0x02eb  */
    /* JADX WARN: Code duplicated, block: B:117:0x02f1  */
    /* JADX WARN: Code duplicated, block: B:119:0x02f9  */
    /* JADX WARN: Code duplicated, block: B:122:0x0305  */
    /* JADX WARN: Code duplicated, block: B:128:0x0359 A[EDGE_INSN: B:128:0x0359->B:131:0x03a3 BREAK  A[LOOP:0: B:47:0x0120->B:52:0x0150]] */
    /* JADX WARN: Code duplicated, block: B:129:0x037d  */
    /* JADX WARN: Code duplicated, block: B:163:0x0158 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:164:0x0136 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:165:0x01f2 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:166:0x017b A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:167:0x0199 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:168:0x01b7 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:169:0x0181 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:170:0x019f A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:171:0x01c9 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:173:0x0165 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:177:0x03a3 A[EDGE_INSN: B:177:0x03a3->B:131:0x03a3 BREAK  A[LOOP:0: B:47:0x0120->B:52:0x0150], SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:178:0x03a2 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:179:0x021f A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:180:0x0287 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:181:0x0248 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:182:0x0108 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:183:0x02d0 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:184:0x0291 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:185:0x0108 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:186:0x03a3 A[EDGE_INSN: B:186:0x03a3->B:131:0x03a3 BREAK  A[LOOP:0: B:47:0x0120->B:52:0x0150], SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:187:0x0242 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:188:0x028b A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:189:0x0357 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:190:0x0332 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:191:0x030d A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:192:0x0108 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:193:0x03a3 A[EDGE_INSN: B:193:0x03a3->B:131:0x03a3 BREAK  A[LOOP:0: B:47:0x0120->B:52:0x0150], SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:195:0x01fa A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:196:0x01fa A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:197:0x01fa A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:46:0x0113  */
    /* JADX WARN: Code duplicated, block: B:49:0x0126  */
    /* JADX WARN: Code duplicated, block: B:52:0x0150 A[LOOP:0: B:47:0x0120->B:52:0x0150, LOOP_END] */
    /* JADX WARN: Code duplicated, block: B:56:0x016b  */
    /* JADX WARN: Code duplicated, block: B:62:0x018b  */
    /* JADX WARN: Code duplicated, block: B:63:0x0194  */
    /* JADX WARN: Code duplicated, block: B:69:0x01a9  */
    /* JADX WARN: Code duplicated, block: B:70:0x01b2  */
    /* JADX WARN: Code duplicated, block: B:74:0x01bd  */
    /* JADX WARN: Code duplicated, block: B:79:0x0200  */
    /* JADX WARN: Code duplicated, block: B:84:0x0214  */
    /* JADX WARN: Code duplicated, block: B:88:0x023a  */
    /* JADX WARN: Code duplicated, block: B:93:0x026d  */
    /* JADX WARN: Code duplicated, block: B:96:0x027f  */
    final boolean zza(Long l, Long l2, com.google.android.gms.internal.measurement.zzfy.zzf zzfVar, long j, zzbb zzbbVar, boolean z) {
        HashSet hashSet;
        Iterator<com.google.android.gms.internal.measurement.zzfo.zzc> it;
        ArrayMap arrayMap;
        Iterator<com.google.android.gms.internal.measurement.zzfy.zzh> it2;
        Iterator<com.google.android.gms.internal.measurement.zzfo.zzc> it3;
        com.google.android.gms.internal.measurement.zzfo.zzc next;
        boolean z2;
        String strZze;
        Object obj;
        Boolean boolZza;
        Boolean boolZza2;
        String str;
        Boolean boolZza3;
        com.google.android.gms.internal.measurement.zzfy.zzh next2;
        Long lValueOf;
        Double dValueOf;
        com.google.android.gms.internal.measurement.zzfo.zzc next3;
        Boolean bool = false;
        boolean z3 = com.google.android.gms.internal.measurement.zzoe.zza() && this.zzh.zze().zzf(this.zza, zzbh.zzbp);
        long j2 = this.zzg.zzj() ? zzbbVar.zze : j;
        if (this.zzh.zzj().zza(2)) {
            this.zzh.zzj().zzp().zza("Evaluating filter. audience, filter, event", Integer.valueOf(this.zzb), this.zzg.zzl() ? Integer.valueOf(this.zzg.zzb()) : null, this.zzh.zzi().zza(this.zzg.zzf()));
            this.zzh.zzj().zzp().zza("Filter definition", this.zzh.mo147g_().zza(this.zzg));
        }
        if (!this.zzg.zzl() || this.zzg.zzb() > 256) {
            this.zzh.zzj().zzu().zza("Invalid event filter ID. appId, id", zzgo.zza(this.zza), String.valueOf(this.zzg.zzl() ? Integer.valueOf(this.zzg.zzb()) : null));
            return false;
        }
        boolean z4 = this.zzg.zzh() || this.zzg.zzi() || this.zzg.zzj();
        if (z && !z4) {
            this.zzh.zzj().zzp().zza("Event filter already evaluated true and it is not associated with an enhanced audience. audience ID, filter ID", Integer.valueOf(this.zzb), this.zzg.zzl() ? Integer.valueOf(this.zzg.zzb()) : null);
            return true;
        }
        com.google.android.gms.internal.measurement.zzfo.zzb zzbVar = this.zzg;
        String strZzg = zzfVar.zzg();
        if (zzbVar.zzk()) {
            Boolean boolZza4 = zza(j2, zzbVar.zze());
            if (boolZza4 == null) {
                bool = null;
                break;
            }
            if (boolZza4.booleanValue()) {
                hashSet = new HashSet();
                it = zzbVar.zzg().iterator();
                while (true) {
                    if (it.hasNext()) {
                        next3 = it.next();
                        if (next3.zze().isEmpty()) {
                            this.zzh.zzj().zzu().zza("null or empty param name in filter. event", this.zzh.zzi().zza(strZzg));
                        } else {
                            hashSet.add(next3.zze());
                        }
                    } else {
                        arrayMap = new ArrayMap();
                        it2 = zzfVar.zzh().iterator();
                        while (true) {
                            if (it2.hasNext()) {
                                next2 = it2.next();
                                if (!hashSet.contains(next2.zzg())) {
                                    if (next2.zzl()) {
                                        String strZzg2 = next2.zzg();
                                        if (next2.zzl()) {
                                            lValueOf = Long.valueOf(next2.zzd());
                                        } else {
                                            lValueOf = null;
                                        }
                                        arrayMap.put(strZzg2, lValueOf);
                                    } else if (next2.zzj()) {
                                        String strZzg3 = next2.zzg();
                                        if (next2.zzj()) {
                                            dValueOf = Double.valueOf(next2.zza());
                                        } else {
                                            dValueOf = null;
                                        }
                                        arrayMap.put(strZzg3, dValueOf);
                                    } else if (next2.zzn()) {
                                        arrayMap.put(next2.zzg(), next2.zzh());
                                    } else {
                                        this.zzh.zzj().zzu().zza("Unknown value for param. event, param", this.zzh.zzi().zza(strZzg), this.zzh.zzi().zzb(next2.zzg()));
                                    }
                                }
                            } else {
                                it3 = zzbVar.zzg().iterator();
                                while (true) {
                                    if (it3.hasNext()) {
                                        next = it3.next();
                                        if (next.zzg()) {
                                            z2 = false;
                                        } else {
                                            z2 = false;
                                        }
                                        strZze = next.zze();
                                        if (strZze.isEmpty()) {
                                            this.zzh.zzj().zzu().zza("Event has empty param name. event", this.zzh.zzi().zza(strZzg));
                                        } else {
                                            obj = arrayMap.get(strZze);
                                            if (obj instanceof Long) {
                                                if (!next.zzh()) {
                                                    this.zzh.zzj().zzu().zza("No number filter for long param. event, param", this.zzh.zzi().zza(strZzg), this.zzh.zzi().zzb(strZze));
                                                } else {
                                                    boolZza = zza(((Long) obj).longValue(), next.zzc());
                                                    if (boolZza == null) {
                                                        if (boolZza.booleanValue() == z2) {
                                                            break;
                                                            break;
                                                        }
                                                    }
                                                }
                                            } else if (obj instanceof Double) {
                                                if (!next.zzh()) {
                                                    this.zzh.zzj().zzu().zza("No number filter for double param. event, param", this.zzh.zzi().zza(strZzg), this.zzh.zzi().zzb(strZze));
                                                } else {
                                                    boolZza2 = zza(((Double) obj).doubleValue(), next.zzc());
                                                    if (boolZza2 == null) {
                                                        if (boolZza2.booleanValue() == z2) {
                                                            break;
                                                            break;
                                                        }
                                                    }
                                                }
                                            } else if (obj instanceof String) {
                                                if (next.zzj()) {
                                                    boolZza3 = zza((String) obj, next.zzd(), this.zzh.zzj());
                                                } else if (next.zzh()) {
                                                    str = (String) obj;
                                                    if (zzoo.zzb(str)) {
                                                        boolZza3 = zza(str, next.zzc());
                                                    } else {
                                                        this.zzh.zzj().zzu().zza("Invalid param value for number filter. event, param", this.zzh.zzi().zza(strZzg), this.zzh.zzi().zzb(strZze));
                                                    }
                                                } else {
                                                    this.zzh.zzj().zzu().zza("No filter for String param. event, param", this.zzh.zzi().zza(strZzg), this.zzh.zzi().zzb(strZze));
                                                }
                                                if (boolZza3 == null) {
                                                    if (boolZza3.booleanValue() == z2) {
                                                        break;
                                                        break;
                                                    }
                                                }
                                            } else {
                                                if (obj == null) {
                                                    this.zzh.zzj().zzp().zza("Missing param for filter. event, param", this.zzh.zzi().zza(strZzg), this.zzh.zzi().zzb(strZze));
                                                    break;
                                                }
                                                this.zzh.zzj().zzu().zza("Unknown param type. event, param", this.zzh.zzi().zza(strZzg), this.zzh.zzi().zzb(strZze));
                                            }
                                        }
                                    } else {
                                        bool = true;
                                        break;
                                    }
                                }
                            }
                        }
                    }
                    bool = null;
                    break;
                }
            }
        } else {
            hashSet = new HashSet();
            it = zzbVar.zzg().iterator();
            while (true) {
                if (it.hasNext()) {
                    next3 = it.next();
                    if (next3.zze().isEmpty()) {
                        this.zzh.zzj().zzu().zza("null or empty param name in filter. event", this.zzh.zzi().zza(strZzg));
                    } else {
                        hashSet.add(next3.zze());
                    }
                } else {
                    arrayMap = new ArrayMap();
                    it2 = zzfVar.zzh().iterator();
                    while (true) {
                        if (it2.hasNext()) {
                            next2 = it2.next();
                            if (!hashSet.contains(next2.zzg())) {
                                if (next2.zzl()) {
                                    String strZzg4 = next2.zzg();
                                    if (next2.zzl()) {
                                        lValueOf = Long.valueOf(next2.zzd());
                                    } else {
                                        lValueOf = null;
                                    }
                                    arrayMap.put(strZzg4, lValueOf);
                                } else if (next2.zzj()) {
                                    String strZzg5 = next2.zzg();
                                    if (next2.zzj()) {
                                        dValueOf = Double.valueOf(next2.zza());
                                    } else {
                                        dValueOf = null;
                                    }
                                    arrayMap.put(strZzg5, dValueOf);
                                } else if (next2.zzn()) {
                                    arrayMap.put(next2.zzg(), next2.zzh());
                                } else {
                                    this.zzh.zzj().zzu().zza("Unknown value for param. event, param", this.zzh.zzi().zza(strZzg), this.zzh.zzi().zzb(next2.zzg()));
                                }
                            }
                        } else {
                            it3 = zzbVar.zzg().iterator();
                            while (true) {
                                if (it3.hasNext()) {
                                    next = it3.next();
                                    if (next.zzg() || !next.zzf()) {
                                        z2 = false;
                                    } else {
                                        z2 = true;
                                    }
                                    strZze = next.zze();
                                    if (strZze.isEmpty()) {
                                        this.zzh.zzj().zzu().zza("Event has empty param name. event", this.zzh.zzi().zza(strZzg));
                                    } else {
                                        obj = arrayMap.get(strZze);
                                        if (obj instanceof Long) {
                                            if (!next.zzh()) {
                                                this.zzh.zzj().zzu().zza("No number filter for long param. event, param", this.zzh.zzi().zza(strZzg), this.zzh.zzi().zzb(strZze));
                                            } else {
                                                boolZza = zza(((Long) obj).longValue(), next.zzc());
                                                if (boolZza == null) {
                                                    if (boolZza.booleanValue() == z2) {
                                                        break;
                                                    }
                                                }
                                            }
                                        } else if (obj instanceof Double) {
                                            if (!next.zzh()) {
                                                this.zzh.zzj().zzu().zza("No number filter for double param. event, param", this.zzh.zzi().zza(strZzg), this.zzh.zzi().zzb(strZze));
                                            } else {
                                                boolZza2 = zza(((Double) obj).doubleValue(), next.zzc());
                                                if (boolZza2 == null) {
                                                    if (boolZza2.booleanValue() == z2) {
                                                        break;
                                                    }
                                                }
                                            }
                                        } else if (obj instanceof String) {
                                            if (next.zzj()) {
                                                boolZza3 = zza((String) obj, next.zzd(), this.zzh.zzj());
                                            } else if (next.zzh()) {
                                                str = (String) obj;
                                                if (zzoo.zzb(str)) {
                                                    boolZza3 = zza(str, next.zzc());
                                                } else {
                                                    this.zzh.zzj().zzu().zza("Invalid param value for number filter. event, param", this.zzh.zzi().zza(strZzg), this.zzh.zzi().zzb(strZze));
                                                }
                                            } else {
                                                this.zzh.zzj().zzu().zza("No filter for String param. event, param", this.zzh.zzi().zza(strZzg), this.zzh.zzi().zzb(strZze));
                                            }
                                            if (boolZza3 == null) {
                                                if (boolZza3.booleanValue() == z2) {
                                                    break;
                                                }
                                            }
                                        } else {
                                            if (obj == null) {
                                                this.zzh.zzj().zzp().zza("Missing param for filter. event, param", this.zzh.zzi().zza(strZzg), this.zzh.zzi().zzb(strZze));
                                                break;
                                            }
                                            this.zzh.zzj().zzu().zza("Unknown param type. event, param", this.zzh.zzi().zza(strZzg), this.zzh.zzi().zzb(strZze));
                                        }
                                    }
                                } else {
                                    bool = true;
                                    break;
                                }
                            }
                        }
                    }
                }
                bool = null;
                break;
            }
        }
        this.zzh.zzj().zzp().zza("Event filter result", bool == null ? "null" : bool);
        if (bool == null) {
            return false;
        }
        this.zzc = true;
        if (!bool.booleanValue()) {
            return true;
        }
        this.zzd = true;
        if (z4 && zzfVar.zzk()) {
            Long lValueOf2 = Long.valueOf(zzfVar.zzd());
            if (this.zzg.zzi()) {
                if (z3 && this.zzg.zzk()) {
                    lValueOf2 = l;
                }
                this.zzf = lValueOf2;
            } else {
                if (z3 && this.zzg.zzk()) {
                    lValueOf2 = l2;
                }
                this.zze = lValueOf2;
            }
        }
        return true;
    }
}
