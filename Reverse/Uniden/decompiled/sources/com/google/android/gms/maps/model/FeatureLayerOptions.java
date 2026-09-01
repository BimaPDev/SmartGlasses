package com.google.android.gms.maps.model;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.Preconditions;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelWriter;
import com.google.android.gms.internal.maps.zzbm;

/* JADX INFO: compiled from: com.google.android.gms:play-services-maps@@19.0.0 */
/* JADX INFO: loaded from: classes2.dex */
public final class FeatureLayerOptions extends AbstractSafeParcelable {
    public static final Parcelable.Creator<FeatureLayerOptions> CREATOR = new zzg();
    private static final zzbm zza = zzbm.zzi(FeatureType.ADMINISTRATIVE_AREA_LEVEL_1, FeatureType.ADMINISTRATIVE_AREA_LEVEL_2, FeatureType.COUNTRY, FeatureType.LOCALITY, FeatureType.POSTAL_CODE, FeatureType.SCHOOL_DISTRICT, FeatureType.DATASET);

    @FeatureType
    private final String zzb;
    private final String zzc;

    /* JADX INFO: compiled from: com.google.android.gms:play-services-maps@@19.0.0 */
    public static final class Builder {
        private String zza;
        private String zzb;

        public Builder datasetId(String str) {
            this.zzb = str;
            return this;
        }

        public Builder featureType(@FeatureType String str) {
            Preconditions.checkArgument(FeatureLayerOptions.zza.contains(str), "Invalid FeatureType value");
            this.zza = str;
            return this;
        }

        public FeatureLayerOptions build() {
            String str = this.zza;
            if (str == null) {
                throw new IllegalArgumentException("FeatureType must be specified.");
            }
            if (str.equals(FeatureType.DATASET) && this.zzb == null) {
                throw new IllegalArgumentException("A datasetId must be specified for DATASET feature layers.");
            }
            return new FeatureLayerOptions(this, (zzf) null);
        }
    }

    /* synthetic */ FeatureLayerOptions(Builder builder, zzf zzfVar) {
        this.zzb = builder.zza;
        this.zzc = builder.zzb;
    }

    public static Builder builder() {
        return new Builder();
    }

    public String getDatasetId() {
        return this.zzc;
    }

    @FeatureType
    public String getFeatureType() {
        return this.zzb;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        int iBeginObjectHeader = SafeParcelWriter.beginObjectHeader(parcel);
        SafeParcelWriter.writeString(parcel, 1, getFeatureType(), false);
        SafeParcelWriter.writeString(parcel, 2, getDatasetId(), false);
        SafeParcelWriter.finishObjectHeader(parcel, iBeginObjectHeader);
    }

    FeatureLayerOptions(@FeatureType String str, String str2) {
        this.zzb = str;
        this.zzc = str2;
    }
}
