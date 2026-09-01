package com.google.android.gms.internal.measurement;

import java.util.Iterator;
import java.util.List;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzbi extends zzay {
    /* JADX WARN: Code duplicated, block: B:17:0x007c  */
    /* JADX WARN: Code duplicated, block: B:19:0x0087  */
    /* JADX WARN: Code duplicated, block: B:21:0x0093  */
    /* JADX WARN: Code duplicated, block: B:88:0x00a2 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:89:0x009d A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:90:0x009e A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:91:0x009e A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:92:? A[SYNTHETIC] */
    @Override // com.google.android.gms.internal.measurement.zzay
    public final zzaq zza(String str, zzh zzhVar, List<zzaq> list) {
        zzaq zzaqVarZza;
        zzaj zzajVar;
        switch (zzbl.zza[zzg.zza(str).ordinal()]) {
            case 1:
                zzg.zza(zzbv.FOR_IN, 3, list);
                if (!(list.get(0) instanceof zzas)) {
                    throw new IllegalArgumentException("Variable name in FOR_IN must be a string");
                }
                return zza(new zzbp(zzhVar, list.get(0).zzf()), zzhVar.zza(list.get(1)), zzhVar.zza(list.get(2)));
            case 2:
                zzg.zza(zzbv.FOR_IN_CONST, 3, list);
                if (!(list.get(0) instanceof zzas)) {
                    throw new IllegalArgumentException("Variable name in FOR_IN_CONST must be a string");
                }
                return zza(new zzbk(zzhVar, list.get(0).zzf()), zzhVar.zza(list.get(1)), zzhVar.zza(list.get(2)));
            case 3:
                zzg.zza(zzbv.FOR_IN_LET, 3, list);
                if (!(list.get(0) instanceof zzas)) {
                    throw new IllegalArgumentException("Variable name in FOR_IN_LET must be a string");
                }
                return zza(new zzbn(zzhVar, list.get(0).zzf()), zzhVar.zza(list.get(1)), zzhVar.zza(list.get(2)));
            case 4:
                zzg.zza(zzbv.FOR_LET, 4, list);
                zzaq zzaqVarZza2 = zzhVar.zza(list.get(0));
                if (!(zzaqVarZza2 instanceof zzaf)) {
                    throw new IllegalArgumentException("Initializer variables in FOR_LET must be an ArrayList");
                }
                zzaf zzafVar = (zzaf) zzaqVarZza2;
                zzaq zzaqVar = list.get(1);
                zzaq zzaqVar2 = list.get(2);
                zzaq zzaqVarZza3 = zzhVar.zza(list.get(3));
                zzh zzhVarZza = zzhVar.zza();
                for (int i = 0; i < zzafVar.zzb(); i++) {
                    String strZzf = zzafVar.zza(i).zzf();
                    zzhVarZza.zzc(strZzf, zzhVar.zza(strZzf));
                }
                while (zzhVar.zza(zzaqVar).zzd().booleanValue()) {
                    zzaq zzaqVarZza4 = zzhVar.zza((zzaf) zzaqVarZza3);
                    if (zzaqVarZza4 instanceof zzaj) {
                        zzaj zzajVar2 = (zzaj) zzaqVarZza4;
                        if ("break".equals(zzajVar2.zzb())) {
                            return zzaq.zzc;
                        }
                        if ("return".equals(zzajVar2.zzb())) {
                            return zzajVar2;
                        }
                    }
                    zzh zzhVarZza2 = zzhVar.zza();
                    for (int i2 = 0; i2 < zzafVar.zzb(); i2++) {
                        String strZzf2 = zzafVar.zza(i2).zzf();
                        zzhVarZza2.zzc(strZzf2, zzhVarZza.zza(strZzf2));
                    }
                    zzhVarZza2.zza(zzaqVar2);
                    zzhVarZza = zzhVarZza2;
                }
                return zzaq.zzc;
            case 5:
                zzg.zza(zzbv.FOR_OF, 3, list);
                if (!(list.get(0) instanceof zzas)) {
                    throw new IllegalArgumentException("Variable name in FOR_OF must be a string");
                }
                return zzb(new zzbp(zzhVar, list.get(0).zzf()), zzhVar.zza(list.get(1)), zzhVar.zza(list.get(2)));
            case 6:
                zzg.zza(zzbv.FOR_OF_CONST, 3, list);
                if (!(list.get(0) instanceof zzas)) {
                    throw new IllegalArgumentException("Variable name in FOR_OF_CONST must be a string");
                }
                return zzb(new zzbk(zzhVar, list.get(0).zzf()), zzhVar.zza(list.get(1)), zzhVar.zza(list.get(2)));
            case 7:
                zzg.zza(zzbv.FOR_OF_LET, 3, list);
                if (!(list.get(0) instanceof zzas)) {
                    throw new IllegalArgumentException("Variable name in FOR_OF_LET must be a string");
                }
                return zzb(new zzbn(zzhVar, list.get(0).zzf()), zzhVar.zza(list.get(1)), zzhVar.zza(list.get(2)));
            case 8:
                zzg.zza(zzbv.WHILE, 4, list);
                zzaq zzaqVar3 = list.get(0);
                zzaq zzaqVar4 = list.get(1);
                zzaq zzaqVar5 = list.get(2);
                zzaq zzaqVarZza5 = zzhVar.zza(list.get(3));
                if (zzhVar.zza(zzaqVar5).zzd().booleanValue()) {
                    zzaq zzaqVarZza6 = zzhVar.zza((zzaf) zzaqVarZza5);
                    if (zzaqVarZza6 instanceof zzaj) {
                        zzaj zzajVar3 = (zzaj) zzaqVarZza6;
                        if (!"break".equals(zzajVar3.zzb())) {
                            if ("return".equals(zzajVar3.zzb())) {
                                return zzajVar3;
                            }
                            while (zzhVar.zza(zzaqVar3).zzd().booleanValue()) {
                                zzaqVarZza = zzhVar.zza((zzaf) zzaqVarZza5);
                                if (zzaqVarZza instanceof zzaj) {
                                    zzajVar = (zzaj) zzaqVarZza;
                                    if (!"break".equals(zzajVar.zzb())) {
                                        if ("return".equals(zzajVar.zzb())) {
                                            return zzajVar;
                                        }
                                    }
                                }
                                zzhVar.zza(zzaqVar4);
                            }
                        }
                    } else {
                        while (zzhVar.zza(zzaqVar3).zzd().booleanValue()) {
                            zzaqVarZza = zzhVar.zza((zzaf) zzaqVarZza5);
                            if (zzaqVarZza instanceof zzaj) {
                                zzajVar = (zzaj) zzaqVarZza;
                                if (!"break".equals(zzajVar.zzb())) {
                                    if ("return".equals(zzajVar.zzb())) {
                                        return zzajVar;
                                    }
                                }
                            }
                            zzhVar.zza(zzaqVar4);
                        }
                    }
                } else {
                    while (zzhVar.zza(zzaqVar3).zzd().booleanValue()) {
                        zzaqVarZza = zzhVar.zza((zzaf) zzaqVarZza5);
                        if (zzaqVarZza instanceof zzaj) {
                            zzajVar = (zzaj) zzaqVarZza;
                            if (!"break".equals(zzajVar.zzb())) {
                                if ("return".equals(zzajVar.zzb())) {
                                    return zzajVar;
                                }
                            }
                        }
                        zzhVar.zza(zzaqVar4);
                    }
                }
                return zzaq.zzc;
            default:
                return super.zza(str);
        }
    }

    private static zzaq zza(zzbm zzbmVar, Iterator<zzaq> it, zzaq zzaqVar) {
        if (it != null) {
            while (it.hasNext()) {
                zzaq zzaqVarZza = zzbmVar.zza(it.next()).zza((zzaf) zzaqVar);
                if (zzaqVarZza instanceof zzaj) {
                    zzaj zzajVar = (zzaj) zzaqVarZza;
                    if ("break".equals(zzajVar.zzb())) {
                        return zzaq.zzc;
                    }
                    if ("return".equals(zzajVar.zzb())) {
                        return zzajVar;
                    }
                }
            }
        }
        return zzaq.zzc;
    }

    private static zzaq zza(zzbm zzbmVar, zzaq zzaqVar, zzaq zzaqVar2) {
        return zza(zzbmVar, zzaqVar.zzh(), zzaqVar2);
    }

    private static zzaq zzb(zzbm zzbmVar, zzaq zzaqVar, zzaq zzaqVar2) {
        if (zzaqVar instanceof Iterable) {
            return zza(zzbmVar, (Iterator<zzaq>) ((Iterable) zzaqVar).iterator(), zzaqVar2);
        }
        throw new IllegalArgumentException("Non-iterable type in for...of loop.");
    }

    protected zzbi() {
        this.zza.add(zzbv.FOR_IN);
        this.zza.add(zzbv.FOR_IN_CONST);
        this.zza.add(zzbv.FOR_IN_LET);
        this.zza.add(zzbv.FOR_LET);
        this.zza.add(zzbv.FOR_OF);
        this.zza.add(zzbv.FOR_OF_CONST);
        this.zza.add(zzbv.FOR_OF_LET);
        this.zza.add(zzbv.WHILE);
    }
}
