package com.google.android.gms.maps.model;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.Preconditions;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelWriter;

/* JADX INFO: compiled from: com.google.android.gms:play-services-maps@@19.0.0 */
/* JADX INFO: loaded from: classes2.dex */
public final class FeatureStyle extends AbstractSafeParcelable {
    public static final Parcelable.Creator<FeatureStyle> CREATOR = new zzi();
    private final Integer zza;
    private final Integer zzb;
    private final Float zzc;
    private final Float zzd;

    /* JADX INFO: compiled from: com.google.android.gms:play-services-maps@@19.0.0 */
    public static final class Builder {
        private Integer zza;
        private Integer zzb;
        private Float zzc;
        private Float zzd;

        public FeatureStyle build() {
            return new FeatureStyle(this, null);
        }

        public Builder fillColor(int i) {
            this.zza = Integer.valueOf(i);
            return this;
        }

        public Builder pointRadius(float f) {
            Preconditions.checkArgument(f >= 0.0f, "Point radius cannot be negative.");
            Preconditions.checkArgument(f <= 128.0f, "The max allowed pointRadius value is 128px.");
            this.zzd = Float.valueOf(f);
            return this;
        }

        public Builder strokeColor(int i) {
            this.zzb = Integer.valueOf(i);
            return this;
        }

        public Builder strokeWidth(float f) {
            Preconditions.checkArgument(f >= 0.0f, "Stroke width cannot be negative.");
            this.zzc = Float.valueOf(f);
            return this;
        }
    }

    /* synthetic */ FeatureStyle(Builder builder, zzh zzhVar) {
        this.zza = builder.zza;
        this.zzb = builder.zzb;
        this.zzc = builder.zzc;
        this.zzd = builder.zzd;
    }

    public static Builder builder() {
        return new Builder();
    }

    public Integer getFillColor() {
        return this.zza;
    }

    public Float getPointRadius() {
        return this.zzd;
    }

    public Integer getStrokeColor() {
        return this.zzb;
    }

    public Float getStrokeWidth() {
        return this.zzc;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i) {
        int iBeginObjectHeader = SafeParcelWriter.beginObjectHeader(parcel);
        SafeParcelWriter.writeIntegerObject(parcel, 1, getFillColor(), false);
        SafeParcelWriter.writeIntegerObject(parcel, 2, getStrokeColor(), false);
        SafeParcelWriter.writeFloatObject(parcel, 3, getStrokeWidth(), false);
        SafeParcelWriter.writeFloatObject(parcel, 4, getPointRadius(), false);
        SafeParcelWriter.finishObjectHeader(parcel, iBeginObjectHeader);
    }

    FeatureStyle(Integer num, Integer num2, Float f, Float f2) {
        this.zza = num;
        this.zzb = num2;
        this.zzc = f;
        this.zzd = f2;
    }
}
