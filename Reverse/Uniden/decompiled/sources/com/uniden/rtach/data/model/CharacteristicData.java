package com.uniden.rtach.data.model;

import android.bluetooth.BluetoothGattCharacteristic;
import android.os.Parcel;
import android.os.Parcelable;
import androidx.constraintlayout.widget.ConstraintLayout;
import java.util.Arrays;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: CharacteristicData.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000F\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0012\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0002\b\u0086\b\u0018\u0000 \u001f2\u00020\u0001:\u0001\u001fB\u0019\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007B\u0011\b\u0016\u0012\u0006\u0010\b\u001a\u00020\t¢\u0006\u0004\b\u0006\u0010\nJ\u0018\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\t2\u0006\u0010\u0012\u001a\u00020\u0013H\u0016J\b\u0010\u0014\u001a\u00020\u0013H\u0016J\u000b\u0010\u0015\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\t\u0010\u0016\u001a\u00020\u0005HÆ\u0003J\u001f\u0010\u0017\u001a\u00020\u00002\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u0005HÆ\u0001J\u0013\u0010\u0018\u001a\u00020\u00192\b\u0010\u001a\u001a\u0004\u0018\u00010\u001bHÖ\u0003J\t\u0010\u001c\u001a\u00020\u0013HÖ\u0001J\t\u0010\u001d\u001a\u00020\u001eHÖ\u0001R\u0013\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\fR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u000e¨\u0006 "}, m491d2 = {"Lcom/uniden/rtach/data/model/CharacteristicData;", "Landroid/os/Parcelable;", "bluetoothGattCharacteristic", "Landroid/bluetooth/BluetoothGattCharacteristic;", "byteArrayData", "", "<init>", "(Landroid/bluetooth/BluetoothGattCharacteristic;[B)V", "parcel", "Landroid/os/Parcel;", "(Landroid/os/Parcel;)V", "getBluetoothGattCharacteristic", "()Landroid/bluetooth/BluetoothGattCharacteristic;", "getByteArrayData", "()[B", "writeToParcel", "", "dest", "flags", "", "describeContents", "component1", "component2", "copy", "equals", "", "other", "", "hashCode", "toString", "", "CREATOR", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final /* data */ class CharacteristicData implements Parcelable {

    /* JADX INFO: renamed from: CREATOR, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private final BluetoothGattCharacteristic bluetoothGattCharacteristic;
    private final byte[] byteArrayData;

    public static /* synthetic */ CharacteristicData copy$default(CharacteristicData characteristicData, BluetoothGattCharacteristic bluetoothGattCharacteristic, byte[] bArr, int i, Object obj) {
        if ((i & 1) != 0) {
            bluetoothGattCharacteristic = characteristicData.bluetoothGattCharacteristic;
        }
        if ((i & 2) != 0) {
            bArr = characteristicData.byteArrayData;
        }
        return characteristicData.copy(bluetoothGattCharacteristic, bArr);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final BluetoothGattCharacteristic getBluetoothGattCharacteristic() {
        return this.bluetoothGattCharacteristic;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final byte[] getByteArrayData() {
        return this.byteArrayData;
    }

    public final CharacteristicData copy(BluetoothGattCharacteristic bluetoothGattCharacteristic, byte[] byteArrayData) {
        Intrinsics.checkNotNullParameter(byteArrayData, "byteArrayData");
        return new CharacteristicData(bluetoothGattCharacteristic, byteArrayData);
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof CharacteristicData)) {
            return false;
        }
        CharacteristicData characteristicData = (CharacteristicData) other;
        return Intrinsics.areEqual(this.bluetoothGattCharacteristic, characteristicData.bluetoothGattCharacteristic) && Intrinsics.areEqual(this.byteArrayData, characteristicData.byteArrayData);
    }

    public final BluetoothGattCharacteristic getBluetoothGattCharacteristic() {
        return this.bluetoothGattCharacteristic;
    }

    public final byte[] getByteArrayData() {
        return this.byteArrayData;
    }

    public int hashCode() {
        BluetoothGattCharacteristic bluetoothGattCharacteristic = this.bluetoothGattCharacteristic;
        return ((bluetoothGattCharacteristic == null ? 0 : bluetoothGattCharacteristic.hashCode()) * 31) + Arrays.hashCode(this.byteArrayData);
    }

    public String toString() {
        return "CharacteristicData(bluetoothGattCharacteristic=" + this.bluetoothGattCharacteristic + ", byteArrayData=" + Arrays.toString(this.byteArrayData) + ')';
    }

    public CharacteristicData(BluetoothGattCharacteristic bluetoothGattCharacteristic, byte[] byteArrayData) {
        Intrinsics.checkNotNullParameter(byteArrayData, "byteArrayData");
        this.bluetoothGattCharacteristic = bluetoothGattCharacteristic;
        this.byteArrayData = byteArrayData;
    }

    /* JADX WARN: Illegal instructions before constructor call */
    public CharacteristicData(Parcel parcel) {
        Intrinsics.checkNotNullParameter(parcel, "parcel");
        BluetoothGattCharacteristic bluetoothGattCharacteristic = (BluetoothGattCharacteristic) parcel.readParcelable(BluetoothGattCharacteristic.class.getClassLoader());
        byte[] bArrCreateByteArray = parcel.createByteArray();
        Intrinsics.checkNotNull(bArrCreateByteArray);
        this(bluetoothGattCharacteristic, bArrCreateByteArray);
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel dest, int flags) {
        Intrinsics.checkNotNullParameter(dest, "dest");
        dest.writeParcelable(this.bluetoothGattCharacteristic, flags);
        dest.writeByteArray(this.byteArrayData);
    }

    /* JADX INFO: renamed from: com.uniden.rtach.data.model.CharacteristicData$CREATOR, reason: from kotlin metadata */
    /* JADX INFO: compiled from: CharacteristicData.kt */
    @Metadata(m490d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0011\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u0010\u0010\u0005\u001a\u00020\u00022\u0006\u0010\u0006\u001a\u00020\u0007H\u0016J\u001d\u0010\b\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00020\t2\u0006\u0010\n\u001a\u00020\u000bH\u0016¢\u0006\u0002\u0010\f¨\u0006\r"}, m491d2 = {"Lcom/uniden/rtach/data/model/CharacteristicData$CREATOR;", "Landroid/os/Parcelable$Creator;", "Lcom/uniden/rtach/data/model/CharacteristicData;", "<init>", "()V", "createFromParcel", "parcel", "Landroid/os/Parcel;", "newArray", "", "size", "", "(I)[Lcom/uniden/rtach/data/model/CharacteristicData;", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    public static final class Companion implements Parcelable.Creator<CharacteristicData> {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public CharacteristicData createFromParcel(Parcel parcel) {
            Intrinsics.checkNotNullParameter(parcel, "parcel");
            return new CharacteristicData(parcel);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public CharacteristicData[] newArray(int size) {
            return new CharacteristicData[size];
        }
    }
}
