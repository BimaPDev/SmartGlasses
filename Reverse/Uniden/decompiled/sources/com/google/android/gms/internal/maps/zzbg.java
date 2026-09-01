package com.google.android.gms.internal.maps;

/* JADX INFO: compiled from: com.google.android.gms:play-services-maps@@19.0.0 */
/* JADX INFO: loaded from: classes2.dex */
final class zzbg extends zzbc {
    private final zzbi zza;

    zzbg(zzbi zzbiVar, int i) {
        super(zzbiVar.size(), i);
        this.zza = zzbiVar;
    }

    @Override // com.google.android.gms.internal.maps.zzbc
    protected final Object zza(int i) {
        return this.zza.get(i);
    }
}
