package com.google.android.gms.internal.measurement;

import java.io.IOException;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
class zziv extends zzis {
    protected final byte[] zzb;

    @Override // com.google.android.gms.internal.measurement.zzik
    public byte zza(int i) {
        return this.zzb[i];
    }

    protected int zzc() {
        return 0;
    }

    @Override // com.google.android.gms.internal.measurement.zzik
    byte zzb(int i) {
        return this.zzb[i];
    }

    @Override // com.google.android.gms.internal.measurement.zzik
    protected final int zzb(int i, int i2, int i3) {
        return zzjv.zza(i, this.zzb, zzc(), i3);
    }

    @Override // com.google.android.gms.internal.measurement.zzik
    public int zzb() {
        return this.zzb.length;
    }

    @Override // com.google.android.gms.internal.measurement.zzik
    public final zzik zza(int i, int i2) {
        int iZza = zza(0, i2, zzb());
        if (iZza == 0) {
            return zzik.zza;
        }
        return new zzio(this.zzb, zzc(), iZza);
    }

    zziv(byte[] bArr) {
        super();
        bArr.getClass();
        this.zzb = bArr;
    }

    @Override // com.google.android.gms.internal.measurement.zzik
    final void zza(zzil zzilVar) throws IOException {
        zzilVar.zza(this.zzb, zzc(), zzb());
    }

    @Override // com.google.android.gms.internal.measurement.zzik
    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof zzik) || zzb() != ((zzik) obj).zzb()) {
            return false;
        }
        if (zzb() == 0) {
            return true;
        }
        if (obj instanceof zziv) {
            zziv zzivVar = (zziv) obj;
            int iZza = zza();
            int iZza2 = zzivVar.zza();
            if (iZza == 0 || iZza2 == 0 || iZza == iZza2) {
                return zza(zzivVar, 0, zzb());
            }
            return false;
        }
        return obj.equals(this);
    }

    @Override // com.google.android.gms.internal.measurement.zzis
    final boolean zza(zzik zzikVar, int i, int i2) {
        if (i2 > zzikVar.zzb()) {
            throw new IllegalArgumentException("Length too large: " + i2 + zzb());
        }
        if (i2 > zzikVar.zzb()) {
            throw new IllegalArgumentException("Ran off end of other: 0, " + i2 + ", " + zzikVar.zzb());
        }
        if (zzikVar instanceof zziv) {
            zziv zzivVar = (zziv) zzikVar;
            byte[] bArr = this.zzb;
            byte[] bArr2 = zzivVar.zzb;
            int iZzc = zzc() + i2;
            int iZzc2 = zzc();
            int iZzc3 = zzivVar.zzc();
            while (iZzc2 < iZzc) {
                if (bArr[iZzc2] != bArr2[iZzc3]) {
                    return false;
                }
                iZzc2++;
                iZzc3++;
            }
            return true;
        }
        return zzikVar.zza(0, i2).equals(zza(0, i2));
    }
}
