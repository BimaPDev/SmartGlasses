package com.google.android.gms.internal.measurement;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
final class zzce extends zzcm {
    private final String zzc;
    private final boolean zzd;
    private final zzco zze;
    private final zzcc zzf;
    private final zzcb zzg;
    private final zzcn zzh;

    public final int hashCode() {
        int iHashCode = (((((this.zzc.hashCode() ^ 1000003) * 1000003) ^ (this.zzd ? 1231 : 1237)) * 1000003) ^ this.zze.hashCode()) * 1000003;
        zzcc zzccVar = this.zzf;
        int iHashCode2 = (iHashCode ^ (zzccVar == null ? 0 : zzccVar.hashCode())) * 1000003;
        zzcb zzcbVar = this.zzg;
        return ((iHashCode2 ^ (zzcbVar != null ? zzcbVar.hashCode() : 0)) * 1000003) ^ this.zzh.hashCode();
    }

    @Override // com.google.android.gms.internal.measurement.zzcm
    public final zzcc zza() {
        return this.zzf;
    }

    @Override // com.google.android.gms.internal.measurement.zzcm
    public final zzcb zzb() {
        return this.zzg;
    }

    @Override // com.google.android.gms.internal.measurement.zzcm
    public final zzco zzc() {
        return this.zze;
    }

    @Override // com.google.android.gms.internal.measurement.zzcm
    public final zzcn zzd() {
        return this.zzh;
    }

    @Override // com.google.android.gms.internal.measurement.zzcm
    public final String zze() {
        return this.zzc;
    }

    @Override // com.google.android.gms.internal.measurement.zzcm
    public final boolean zzf() {
        return this.zzd;
    }

    public final String toString() {
        return "FileComplianceOptions{fileOwner=" + this.zzc + ", hasDifferentDmaOwner=" + this.zzd + ", fileChecks=" + String.valueOf(this.zze) + ", dataForwardingNotAllowedResolver=" + String.valueOf(this.zzf) + ", multipleProductIdGroupsResolver=" + String.valueOf(this.zzg) + ", filePurpose=" + String.valueOf(this.zzh) + "}";
    }

    private zzce(String str, boolean z, zzco zzcoVar, zzcc zzccVar, zzcb zzcbVar, zzcn zzcnVar) {
        this.zzc = str;
        this.zzd = z;
        this.zze = zzcoVar;
        this.zzf = null;
        this.zzg = null;
        this.zzh = zzcnVar;
    }

    public final boolean equals(Object obj) {
        zzcc zzccVar;
        zzcb zzcbVar;
        if (obj == this) {
            return true;
        }
        if (obj instanceof zzcm) {
            zzcm zzcmVar = (zzcm) obj;
            if (this.zzc.equals(zzcmVar.zze()) && this.zzd == zzcmVar.zzf() && this.zze.equals(zzcmVar.zzc()) && ((zzccVar = this.zzf) != null ? zzccVar.equals(zzcmVar.zza()) : zzcmVar.zza() == null) && ((zzcbVar = this.zzg) != null ? zzcbVar.equals(zzcmVar.zzb()) : zzcmVar.zzb() == null) && this.zzh.equals(zzcmVar.zzd())) {
                return true;
            }
        }
        return false;
    }
}
