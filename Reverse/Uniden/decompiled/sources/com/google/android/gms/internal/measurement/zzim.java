package com.google.android.gms.internal.measurement;

import java.util.Comparator;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
final class zzim implements Comparator<zzik> {
    @Override // java.util.Comparator
    public final /* synthetic */ int compare(zzik zzikVar, zzik zzikVar2) {
        zzik zzikVar3 = zzikVar;
        zzik zzikVar4 = zzikVar2;
        zziq zziqVar = (zziq) zzikVar3.iterator();
        zziq zziqVar2 = (zziq) zzikVar4.iterator();
        while (zziqVar.hasNext() && zziqVar2.hasNext()) {
            int iCompare = Integer.compare(zzik.zza(zziqVar.zza()), zzik.zza(zziqVar2.zza()));
            if (iCompare != 0) {
                return iCompare;
            }
        }
        return Integer.compare(zzikVar3.zzb(), zzikVar4.zzb());
    }

    zzim() {
    }
}
