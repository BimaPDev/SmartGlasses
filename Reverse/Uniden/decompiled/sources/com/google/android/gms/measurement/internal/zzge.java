package com.google.android.gms.measurement.internal;

import android.os.Bundle;
import android.os.Parcel;
import android.os.RemoteException;
import java.util.List;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public abstract class zzge extends com.google.android.gms.internal.measurement.zzbx implements zzgb {
    public zzge() {
        super("com.google.android.gms.measurement.internal.IMeasurementService");
    }

    @Override // com.google.android.gms.internal.measurement.zzbx
    protected final boolean zza(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
        switch (i) {
            case 1:
                zzbf zzbfVar = (zzbf) com.google.android.gms.internal.measurement.zzbw.zza(parcel, zzbf.CREATOR);
                zzo zzoVar = (zzo) com.google.android.gms.internal.measurement.zzbw.zza(parcel, zzo.CREATOR);
                com.google.android.gms.internal.measurement.zzbw.zzb(parcel);
                zza(zzbfVar, zzoVar);
                parcel2.writeNoException();
                return true;
            case 2:
                zzon zzonVar = (zzon) com.google.android.gms.internal.measurement.zzbw.zza(parcel, zzon.CREATOR);
                zzo zzoVar2 = (zzo) com.google.android.gms.internal.measurement.zzbw.zza(parcel, zzo.CREATOR);
                com.google.android.gms.internal.measurement.zzbw.zzb(parcel);
                zza(zzonVar, zzoVar2);
                parcel2.writeNoException();
                return true;
            case 3:
            case 8:
            case 22:
            case 23:
            default:
                return false;
            case 4:
                zzo zzoVar3 = (zzo) com.google.android.gms.internal.measurement.zzbw.zza(parcel, zzo.CREATOR);
                com.google.android.gms.internal.measurement.zzbw.zzb(parcel);
                zzd(zzoVar3);
                parcel2.writeNoException();
                return true;
            case 5:
                zzbf zzbfVar2 = (zzbf) com.google.android.gms.internal.measurement.zzbw.zza(parcel, zzbf.CREATOR);
                String string = parcel.readString();
                String string2 = parcel.readString();
                com.google.android.gms.internal.measurement.zzbw.zzb(parcel);
                zza(zzbfVar2, string, string2);
                parcel2.writeNoException();
                return true;
            case 6:
                zzo zzoVar4 = (zzo) com.google.android.gms.internal.measurement.zzbw.zza(parcel, zzo.CREATOR);
                com.google.android.gms.internal.measurement.zzbw.zzb(parcel);
                zzh(zzoVar4);
                parcel2.writeNoException();
                return true;
            case 7:
                zzo zzoVar5 = (zzo) com.google.android.gms.internal.measurement.zzbw.zza(parcel, zzo.CREATOR);
                boolean zZzc = com.google.android.gms.internal.measurement.zzbw.zzc(parcel);
                com.google.android.gms.internal.measurement.zzbw.zzb(parcel);
                List<zzon> listZza = zza(zzoVar5, zZzc);
                parcel2.writeNoException();
                parcel2.writeTypedList(listZza);
                return true;
            case 9:
                zzbf zzbfVar3 = (zzbf) com.google.android.gms.internal.measurement.zzbw.zza(parcel, zzbf.CREATOR);
                String string3 = parcel.readString();
                com.google.android.gms.internal.measurement.zzbw.zzb(parcel);
                byte[] bArrZza = zza(zzbfVar3, string3);
                parcel2.writeNoException();
                parcel2.writeByteArray(bArrZza);
                return true;
            case 10:
                long j = parcel.readLong();
                String string4 = parcel.readString();
                String string5 = parcel.readString();
                String string6 = parcel.readString();
                com.google.android.gms.internal.measurement.zzbw.zzb(parcel);
                zza(j, string4, string5, string6);
                parcel2.writeNoException();
                return true;
            case 11:
                zzo zzoVar6 = (zzo) com.google.android.gms.internal.measurement.zzbw.zza(parcel, zzo.CREATOR);
                com.google.android.gms.internal.measurement.zzbw.zzb(parcel);
                String strZzb = zzb(zzoVar6);
                parcel2.writeNoException();
                parcel2.writeString(strZzb);
                return true;
            case 12:
                zzae zzaeVar = (zzae) com.google.android.gms.internal.measurement.zzbw.zza(parcel, zzae.CREATOR);
                zzo zzoVar7 = (zzo) com.google.android.gms.internal.measurement.zzbw.zza(parcel, zzo.CREATOR);
                com.google.android.gms.internal.measurement.zzbw.zzb(parcel);
                zza(zzaeVar, zzoVar7);
                parcel2.writeNoException();
                return true;
            case 13:
                zzae zzaeVar2 = (zzae) com.google.android.gms.internal.measurement.zzbw.zza(parcel, zzae.CREATOR);
                com.google.android.gms.internal.measurement.zzbw.zzb(parcel);
                zza(zzaeVar2);
                parcel2.writeNoException();
                return true;
            case 14:
                String string7 = parcel.readString();
                String string8 = parcel.readString();
                boolean zZzc2 = com.google.android.gms.internal.measurement.zzbw.zzc(parcel);
                zzo zzoVar8 = (zzo) com.google.android.gms.internal.measurement.zzbw.zza(parcel, zzo.CREATOR);
                com.google.android.gms.internal.measurement.zzbw.zzb(parcel);
                List<zzon> listZza2 = zza(string7, string8, zZzc2, zzoVar8);
                parcel2.writeNoException();
                parcel2.writeTypedList(listZza2);
                return true;
            case 15:
                String string9 = parcel.readString();
                String string10 = parcel.readString();
                String string11 = parcel.readString();
                boolean zZzc3 = com.google.android.gms.internal.measurement.zzbw.zzc(parcel);
                com.google.android.gms.internal.measurement.zzbw.zzb(parcel);
                List<zzon> listZza3 = zza(string9, string10, string11, zZzc3);
                parcel2.writeNoException();
                parcel2.writeTypedList(listZza3);
                return true;
            case 16:
                String string12 = parcel.readString();
                String string13 = parcel.readString();
                zzo zzoVar9 = (zzo) com.google.android.gms.internal.measurement.zzbw.zza(parcel, zzo.CREATOR);
                com.google.android.gms.internal.measurement.zzbw.zzb(parcel);
                List<zzae> listZza4 = zza(string12, string13, zzoVar9);
                parcel2.writeNoException();
                parcel2.writeTypedList(listZza4);
                return true;
            case 17:
                String string14 = parcel.readString();
                String string15 = parcel.readString();
                String string16 = parcel.readString();
                com.google.android.gms.internal.measurement.zzbw.zzb(parcel);
                List<zzae> listZza5 = zza(string14, string15, string16);
                parcel2.writeNoException();
                parcel2.writeTypedList(listZza5);
                return true;
            case 18:
                zzo zzoVar10 = (zzo) com.google.android.gms.internal.measurement.zzbw.zza(parcel, zzo.CREATOR);
                com.google.android.gms.internal.measurement.zzbw.zzb(parcel);
                zze(zzoVar10);
                parcel2.writeNoException();
                return true;
            case 19:
                Bundle bundle = (Bundle) com.google.android.gms.internal.measurement.zzbw.zza(parcel, Bundle.CREATOR);
                zzo zzoVar11 = (zzo) com.google.android.gms.internal.measurement.zzbw.zza(parcel, zzo.CREATOR);
                com.google.android.gms.internal.measurement.zzbw.zzb(parcel);
                zza(bundle, zzoVar11);
                parcel2.writeNoException();
                return true;
            case 20:
                zzo zzoVar12 = (zzo) com.google.android.gms.internal.measurement.zzbw.zza(parcel, zzo.CREATOR);
                com.google.android.gms.internal.measurement.zzbw.zzb(parcel);
                zzf(zzoVar12);
                parcel2.writeNoException();
                return true;
            case 21:
                zzo zzoVar13 = (zzo) com.google.android.gms.internal.measurement.zzbw.zza(parcel, zzo.CREATOR);
                com.google.android.gms.internal.measurement.zzbw.zzb(parcel);
                zzaj zzajVarZza = zza(zzoVar13);
                parcel2.writeNoException();
                com.google.android.gms.internal.measurement.zzbw.zzb(parcel2, zzajVarZza);
                return true;
            case 24:
                zzo zzoVar14 = (zzo) com.google.android.gms.internal.measurement.zzbw.zza(parcel, zzo.CREATOR);
                Bundle bundle2 = (Bundle) com.google.android.gms.internal.measurement.zzbw.zza(parcel, Bundle.CREATOR);
                com.google.android.gms.internal.measurement.zzbw.zzb(parcel);
                List<zzno> listZza6 = zza(zzoVar14, bundle2);
                parcel2.writeNoException();
                parcel2.writeTypedList(listZza6);
                return true;
            case 25:
                zzo zzoVar15 = (zzo) com.google.android.gms.internal.measurement.zzbw.zza(parcel, zzo.CREATOR);
                com.google.android.gms.internal.measurement.zzbw.zzb(parcel);
                zzi(zzoVar15);
                parcel2.writeNoException();
                return true;
            case 26:
                zzo zzoVar16 = (zzo) com.google.android.gms.internal.measurement.zzbw.zza(parcel, zzo.CREATOR);
                com.google.android.gms.internal.measurement.zzbw.zzb(parcel);
                zzg(zzoVar16);
                parcel2.writeNoException();
                return true;
            case 27:
                zzo zzoVar17 = (zzo) com.google.android.gms.internal.measurement.zzbw.zza(parcel, zzo.CREATOR);
                com.google.android.gms.internal.measurement.zzbw.zzb(parcel);
                zzc(zzoVar17);
                parcel2.writeNoException();
                return true;
            case 28:
                Bundle bundle3 = (Bundle) com.google.android.gms.internal.measurement.zzbw.zza(parcel, Bundle.CREATOR);
                zzo zzoVar18 = (zzo) com.google.android.gms.internal.measurement.zzbw.zza(parcel, zzo.CREATOR);
                com.google.android.gms.internal.measurement.zzbw.zzb(parcel);
                zzb(bundle3, zzoVar18);
                parcel2.writeNoException();
                return true;
        }
    }
}
