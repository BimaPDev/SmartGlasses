package com.google.android.gms.maps.model;

import android.os.IBinder;
import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelReader;

/* JADX INFO: compiled from: com.google.android.gms:play-services-maps@@19.0.0 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzp implements Parcelable.Creator {
    @Override // android.os.Parcelable.Creator
    public final /* bridge */ /* synthetic */ Object createFromParcel(Parcel parcel) {
        int iValidateObjectHeader = SafeParcelReader.validateObjectHeader(parcel);
        float f = 0.0f;
        float f2 = 0.0f;
        float f3 = 0.0f;
        float f4 = 0.0f;
        float f5 = 0.0f;
        float f6 = 0.0f;
        LatLng latLng = null;
        String strCreateString = null;
        String strCreateString2 = null;
        IBinder iBinder = null;
        IBinder iBinder2 = null;
        String strCreateString3 = null;
        boolean z = false;
        boolean z2 = false;
        boolean z3 = false;
        int i = 0;
        int i2 = 0;
        float f7 = 1.0f;
        float f8 = 0.5f;
        while (parcel.dataPosition() < iValidateObjectHeader) {
            int header = SafeParcelReader.readHeader(parcel);
            switch (SafeParcelReader.getFieldId(header)) {
                case 2:
                    latLng = (LatLng) SafeParcelReader.createParcelable(parcel, header, LatLng.CREATOR);
                    break;
                case 3:
                    strCreateString = SafeParcelReader.createString(parcel, header);
                    break;
                case 4:
                    strCreateString2 = SafeParcelReader.createString(parcel, header);
                    break;
                case 5:
                    iBinder = SafeParcelReader.readIBinder(parcel, header);
                    break;
                case 6:
                    f = SafeParcelReader.readFloat(parcel, header);
                    break;
                case 7:
                    f2 = SafeParcelReader.readFloat(parcel, header);
                    break;
                case 8:
                    z = SafeParcelReader.readBoolean(parcel, header);
                    break;
                case 9:
                    z2 = SafeParcelReader.readBoolean(parcel, header);
                    break;
                case 10:
                    z3 = SafeParcelReader.readBoolean(parcel, header);
                    break;
                case 11:
                    f3 = SafeParcelReader.readFloat(parcel, header);
                    break;
                case 12:
                    f8 = SafeParcelReader.readFloat(parcel, header);
                    break;
                case 13:
                    f4 = SafeParcelReader.readFloat(parcel, header);
                    break;
                case 14:
                    f7 = SafeParcelReader.readFloat(parcel, header);
                    break;
                case 15:
                    f5 = SafeParcelReader.readFloat(parcel, header);
                    break;
                case 16:
                default:
                    SafeParcelReader.skipUnknownField(parcel, header);
                    break;
                case 17:
                    i = SafeParcelReader.readInt(parcel, header);
                    break;
                case 18:
                    iBinder2 = SafeParcelReader.readIBinder(parcel, header);
                    break;
                case 19:
                    i2 = SafeParcelReader.readInt(parcel, header);
                    break;
                case 20:
                    strCreateString3 = SafeParcelReader.createString(parcel, header);
                    break;
                case 21:
                    f6 = SafeParcelReader.readFloat(parcel, header);
                    break;
            }
        }
        SafeParcelReader.ensureAtEnd(parcel, iValidateObjectHeader);
        return new MarkerOptions(latLng, strCreateString, strCreateString2, iBinder, f, f2, z, z2, z3, f3, f8, f4, f7, f5, i, iBinder2, i2, strCreateString3, f6);
    }

    @Override // android.os.Parcelable.Creator
    public final /* synthetic */ Object[] newArray(int i) {
        return new MarkerOptions[i];
    }
}
