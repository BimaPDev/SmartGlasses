package com.google.android.gms.measurement.internal;

import java.util.List;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
final class zzhr implements com.google.android.gms.internal.measurement.zzv {
    private final /* synthetic */ zzhl zza;

    zzhr(zzhl zzhlVar) {
        this.zza = zzhlVar;
    }

    @Override // com.google.android.gms.internal.measurement.zzv
    public final void zza(com.google.android.gms.internal.measurement.zzs zzsVar, String str, List<String> list, boolean z, boolean z2) {
        zzgq zzgqVarZzc;
        int i = zzht.zza[zzsVar.ordinal()];
        if (i == 1) {
            zzgqVarZzc = this.zza.zzj().zzc();
        } else if (i != 2) {
            if (i != 3) {
                zzgqVarZzc = i != 4 ? this.zza.zzj().zzo() : this.zza.zzj().zzp();
            } else if (z) {
                zzgqVarZzc = this.zza.zzj().zzw();
            } else {
                zzgqVarZzc = !z2 ? this.zza.zzj().zzv() : this.zza.zzj().zzu();
            }
        } else if (z) {
            zzgqVarZzc = this.zza.zzj().zzn();
        } else {
            zzgqVarZzc = !z2 ? this.zza.zzj().zzm() : this.zza.zzj().zzg();
        }
        int size = list.size();
        if (size == 1) {
            zzgqVarZzc.zza(str, list.get(0));
            return;
        }
        if (size == 2) {
            zzgqVarZzc.zza(str, list.get(0), list.get(1));
        } else if (size != 3) {
            zzgqVarZzc.zza(str);
        } else {
            zzgqVarZzc.zza(str, list.get(0), list.get(1), list.get(2));
        }
    }
}
