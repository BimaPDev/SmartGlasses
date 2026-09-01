package com.google.android.gms.internal.measurement;

import com.google.common.base.Ascii;
import java.io.IOException;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
final class zzig {
    private static volatile int zza = 100;

    static double zza(byte[] bArr, int i) {
        return Double.longBitsToDouble(zzd(bArr, i));
    }

    static float zzb(byte[] bArr, int i) {
        return Float.intBitsToFloat(zzc(bArr, i));
    }

    static int zza(byte[] bArr, int i, zzij zzijVar) throws zzkb {
        int iZzc = zzc(bArr, i, zzijVar);
        int i2 = zzijVar.zza;
        if (i2 < 0) {
            throw zzkb.zzf();
        }
        if (i2 > bArr.length - iZzc) {
            throw zzkb.zzi();
        }
        if (i2 == 0) {
            zzijVar.zzc = zzik.zza;
            return iZzc;
        }
        zzijVar.zzc = zzik.zza(bArr, iZzc, i2);
        return iZzc + i2;
    }

    static int zza(int i, byte[] bArr, int i2, int i3, Object obj, zzlc zzlcVar, zzmk<zzmj, zzmj> zzmkVar, zzij zzijVar) throws IOException {
        if (zzijVar.zzd.zza(zzlcVar, i >>> 3) == null) {
            return zza(i, bArr, i2, i3, zzlg.zzc(obj), zzijVar);
        }
        zzjt.zzd zzdVar = (zzjt.zzd) obj;
        zzdVar.zza();
        zzjm<zzjt.zzc> zzjmVar = zzdVar.zzc;
        throw new NoSuchMethodError();
    }

    static int zzc(byte[] bArr, int i) {
        return ((bArr[i + 3] & 255) << 24) | (bArr[i] & 255) | ((bArr[i + 1] & 255) << 8) | ((bArr[i + 2] & 255) << 16);
    }

    private static int zza(zzlu zzluVar, byte[] bArr, int i, int i2, int i3, zzij zzijVar) throws IOException {
        Object objZza = zzluVar.zza();
        int iZza = zza(objZza, zzluVar, bArr, i, i2, i3, zzijVar);
        zzluVar.zzd(objZza);
        zzijVar.zzc = objZza;
        return iZza;
    }

    static int zza(zzlu zzluVar, int i, byte[] bArr, int i2, int i3, zzkc<?> zzkcVar, zzij zzijVar) throws IOException {
        int i4 = (i & (-8)) | 4;
        int iZza = zza(zzluVar, bArr, i2, i3, i4, zzijVar);
        zzkcVar.add(zzijVar.zzc);
        while (iZza < i3) {
            int iZzc = zzc(bArr, iZza, zzijVar);
            if (i != zzijVar.zza) {
                break;
            }
            iZza = zza(zzluVar, bArr, iZzc, i3, i4, zzijVar);
            zzkcVar.add(zzijVar.zzc);
        }
        return iZza;
    }

    static int zza(zzlu zzluVar, byte[] bArr, int i, int i2, zzij zzijVar) throws IOException {
        Object objZza = zzluVar.zza();
        int iZza = zza(objZza, zzluVar, bArr, i, i2, zzijVar);
        zzluVar.zzd(objZza);
        zzijVar.zzc = objZza;
        return iZza;
    }

    static int zzb(zzlu<?> zzluVar, int i, byte[] bArr, int i2, int i3, zzkc<?> zzkcVar, zzij zzijVar) throws IOException {
        int iZza = zza(zzluVar, bArr, i2, i3, zzijVar);
        zzkcVar.add(zzijVar.zzc);
        while (iZza < i3) {
            int iZzc = zzc(bArr, iZza, zzijVar);
            if (i != zzijVar.zza) {
                break;
            }
            iZza = zza(zzluVar, bArr, iZzc, i3, zzijVar);
            zzkcVar.add(zzijVar.zzc);
        }
        return iZza;
    }

    static int zza(byte[] bArr, int i, zzkc<?> zzkcVar, zzij zzijVar) throws IOException {
        zzjw zzjwVar = (zzjw) zzkcVar;
        int iZzc = zzc(bArr, i, zzijVar);
        int i2 = zzijVar.zza + iZzc;
        while (iZzc < i2) {
            iZzc = zzc(bArr, iZzc, zzijVar);
            zzjwVar.zzd(zzijVar.zza);
        }
        if (iZzc == i2) {
            return iZzc;
        }
        throw zzkb.zzi();
    }

    static int zzb(byte[] bArr, int i, zzij zzijVar) throws zzkb {
        int iZzc = zzc(bArr, i, zzijVar);
        int i2 = zzijVar.zza;
        if (i2 < 0) {
            throw zzkb.zzf();
        }
        if (i2 == 0) {
            zzijVar.zzc = "";
            return iZzc;
        }
        zzijVar.zzc = zzmp.zzb(bArr, iZzc, i2);
        return iZzc + i2;
    }

    static int zza(int i, byte[] bArr, int i2, int i3, zzmj zzmjVar, zzij zzijVar) throws zzkb {
        if ((i >>> 3) == 0) {
            throw zzkb.zzc();
        }
        int i4 = i & 7;
        if (i4 == 0) {
            int iZzd = zzd(bArr, i2, zzijVar);
            zzmjVar.zza(i, Long.valueOf(zzijVar.zzb));
            return iZzd;
        }
        if (i4 == 1) {
            zzmjVar.zza(i, Long.valueOf(zzd(bArr, i2)));
            return i2 + 8;
        }
        if (i4 == 2) {
            int iZzc = zzc(bArr, i2, zzijVar);
            int i5 = zzijVar.zza;
            if (i5 < 0) {
                throw zzkb.zzf();
            }
            if (i5 > bArr.length - iZzc) {
                throw zzkb.zzi();
            }
            if (i5 == 0) {
                zzmjVar.zza(i, zzik.zza);
            } else {
                zzmjVar.zza(i, zzik.zza(bArr, iZzc, i5));
            }
            return iZzc + i5;
        }
        if (i4 != 3) {
            if (i4 == 5) {
                zzmjVar.zza(i, Integer.valueOf(zzc(bArr, i2)));
                return i2 + 4;
            }
            throw zzkb.zzc();
        }
        zzmj zzmjVarZzd = zzmj.zzd();
        int i6 = (i & (-8)) | 4;
        zzijVar.zze++;
        zza(zzijVar.zze);
        int i7 = 0;
        while (i2 < i3) {
            int iZzc2 = zzc(bArr, i2, zzijVar);
            int i8 = zzijVar.zza;
            i7 = i8;
            if (i8 == i6) {
                i2 = iZzc2;
                break;
            }
            int iZza = zza(i7, bArr, iZzc2, i3, zzmjVarZzd, zzijVar);
            i7 = i8;
            i2 = iZza;
        }
        zzijVar.zze--;
        if (i2 > i3 || i7 != i6) {
            throw zzkb.zzg();
        }
        zzmjVar.zza(i, zzmjVarZzd);
        return i2;
    }

    static int zzc(byte[] bArr, int i, zzij zzijVar) {
        int i2 = i + 1;
        byte b = bArr[i];
        if (b >= 0) {
            zzijVar.zza = b;
            return i2;
        }
        return zza(b, bArr, i2, zzijVar);
    }

    static int zza(int i, byte[] bArr, int i2, zzij zzijVar) {
        int i3 = i & 127;
        int i4 = i2 + 1;
        byte b = bArr[i2];
        if (b >= 0) {
            zzijVar.zza = i3 | (b << 7);
            return i4;
        }
        int i5 = i3 | ((b & 127) << 7);
        int i6 = i2 + 2;
        byte b2 = bArr[i4];
        if (b2 >= 0) {
            zzijVar.zza = i5 | (b2 << Ascii.f291SO);
            return i6;
        }
        int i7 = i5 | ((b2 & 127) << 14);
        int i8 = i2 + 3;
        byte b3 = bArr[i6];
        if (b3 >= 0) {
            zzijVar.zza = i7 | (b3 << Ascii.NAK);
            return i8;
        }
        int i9 = i7 | ((b3 & 127) << 21);
        int i10 = i2 + 4;
        byte b4 = bArr[i8];
        if (b4 >= 0) {
            zzijVar.zza = i9 | (b4 << Ascii.f284FS);
            return i10;
        }
        int i11 = i9 | ((b4 & 127) << 28);
        while (true) {
            int i12 = i10 + 1;
            if (bArr[i10] >= 0) {
                zzijVar.zza = i11;
                return i12;
            }
            i10 = i12;
        }
    }

    static int zza(int i, byte[] bArr, int i2, int i3, zzkc<?> zzkcVar, zzij zzijVar) {
        zzjw zzjwVar = (zzjw) zzkcVar;
        int iZzc = zzc(bArr, i2, zzijVar);
        zzjwVar.zzd(zzijVar.zza);
        while (iZzc < i3) {
            int iZzc2 = zzc(bArr, iZzc, zzijVar);
            if (i != zzijVar.zza) {
                break;
            }
            iZzc = zzc(bArr, iZzc2, zzijVar);
            zzjwVar.zzd(zzijVar.zza);
        }
        return iZzc;
    }

    static int zzd(byte[] bArr, int i, zzij zzijVar) {
        int i2 = i + 1;
        long j = bArr[i];
        if (j >= 0) {
            zzijVar.zzb = j;
            return i2;
        }
        int i3 = i + 2;
        byte b = bArr[i2];
        long j2 = (j & 127) | (((long) (b & 127)) << 7);
        int i4 = 7;
        while (b < 0) {
            int i5 = i3 + 1;
            byte b2 = bArr[i3];
            i4 += 7;
            j2 |= ((long) (b2 & 127)) << i4;
            b = b2;
            i3 = i5;
        }
        zzijVar.zzb = j2;
        return i3;
    }

    static int zza(Object obj, zzlu zzluVar, byte[] bArr, int i, int i2, int i3, zzij zzijVar) throws IOException {
        zzijVar.zze++;
        zza(zzijVar.zze);
        int iZza = ((zzlg) zzluVar).zza(obj, bArr, i, i2, i3, zzijVar);
        zzijVar.zze--;
        zzijVar.zzc = obj;
        return iZza;
    }

    static int zza(Object obj, zzlu zzluVar, byte[] bArr, int i, int i2, zzij zzijVar) throws IOException {
        int iZza = i + 1;
        int i3 = bArr[i];
        if (i3 < 0) {
            iZza = zza(i3, bArr, iZza, zzijVar);
            i3 = zzijVar.zza;
        }
        int i4 = iZza;
        if (i3 < 0 || i3 > i2 - i4) {
            throw zzkb.zzi();
        }
        zzijVar.zze++;
        zza(zzijVar.zze);
        int i5 = i3 + i4;
        zzluVar.zza(obj, bArr, i4, i5, zzijVar);
        zzijVar.zze--;
        zzijVar.zzc = obj;
        return i5;
    }

    static int zza(int i, byte[] bArr, int i2, int i3, zzij zzijVar) throws zzkb {
        if ((i >>> 3) == 0) {
            throw zzkb.zzc();
        }
        int i4 = i & 7;
        if (i4 == 0) {
            return zzd(bArr, i2, zzijVar);
        }
        if (i4 == 1) {
            return i2 + 8;
        }
        if (i4 == 2) {
            return zzc(bArr, i2, zzijVar) + zzijVar.zza;
        }
        if (i4 != 3) {
            if (i4 == 5) {
                return i2 + 4;
            }
            throw zzkb.zzc();
        }
        int i5 = (i & (-8)) | 4;
        int i6 = 0;
        while (i2 < i3) {
            i2 = zzc(bArr, i2, zzijVar);
            i6 = zzijVar.zza;
            if (i6 == i5) {
                break;
            }
            i2 = zza(i6, bArr, i2, i3, zzijVar);
        }
        if (i2 > i3 || i6 != i5) {
            throw zzkb.zzg();
        }
        return i2;
    }

    static long zzd(byte[] bArr, int i) {
        return ((((long) bArr[i + 7]) & 255) << 56) | (((long) bArr[i]) & 255) | ((((long) bArr[i + 1]) & 255) << 8) | ((((long) bArr[i + 2]) & 255) << 16) | ((((long) bArr[i + 3]) & 255) << 24) | ((((long) bArr[i + 4]) & 255) << 32) | ((((long) bArr[i + 5]) & 255) << 40) | ((((long) bArr[i + 6]) & 255) << 48);
    }

    private static void zza(int i) throws zzkb {
        if (i >= zza) {
            throw zzkb.zzh();
        }
    }
}
