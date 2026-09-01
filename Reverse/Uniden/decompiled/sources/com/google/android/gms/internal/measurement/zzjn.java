package com.google.android.gms.internal.measurement;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public enum zzjn {
    DOUBLE(0, zzjp.SCALAR, zzkd.DOUBLE),
    FLOAT(1, zzjp.SCALAR, zzkd.FLOAT),
    INT64(2, zzjp.SCALAR, zzkd.LONG),
    UINT64(3, zzjp.SCALAR, zzkd.LONG),
    INT32(4, zzjp.SCALAR, zzkd.INT),
    FIXED64(5, zzjp.SCALAR, zzkd.LONG),
    FIXED32(6, zzjp.SCALAR, zzkd.INT),
    BOOL(7, zzjp.SCALAR, zzkd.BOOLEAN),
    STRING(8, zzjp.SCALAR, zzkd.STRING),
    MESSAGE(9, zzjp.SCALAR, zzkd.MESSAGE),
    BYTES(10, zzjp.SCALAR, zzkd.BYTE_STRING),
    UINT32(11, zzjp.SCALAR, zzkd.INT),
    ENUM(12, zzjp.SCALAR, zzkd.ENUM),
    SFIXED32(13, zzjp.SCALAR, zzkd.INT),
    SFIXED64(14, zzjp.SCALAR, zzkd.LONG),
    SINT32(15, zzjp.SCALAR, zzkd.INT),
    SINT64(16, zzjp.SCALAR, zzkd.LONG),
    GROUP(17, zzjp.SCALAR, zzkd.MESSAGE),
    DOUBLE_LIST(18, zzjp.VECTOR, zzkd.DOUBLE),
    FLOAT_LIST(19, zzjp.VECTOR, zzkd.FLOAT),
    INT64_LIST(20, zzjp.VECTOR, zzkd.LONG),
    UINT64_LIST(21, zzjp.VECTOR, zzkd.LONG),
    INT32_LIST(22, zzjp.VECTOR, zzkd.INT),
    FIXED64_LIST(23, zzjp.VECTOR, zzkd.LONG),
    FIXED32_LIST(24, zzjp.VECTOR, zzkd.INT),
    BOOL_LIST(25, zzjp.VECTOR, zzkd.BOOLEAN),
    STRING_LIST(26, zzjp.VECTOR, zzkd.STRING),
    MESSAGE_LIST(27, zzjp.VECTOR, zzkd.MESSAGE),
    BYTES_LIST(28, zzjp.VECTOR, zzkd.BYTE_STRING),
    UINT32_LIST(29, zzjp.VECTOR, zzkd.INT),
    ENUM_LIST(30, zzjp.VECTOR, zzkd.ENUM),
    SFIXED32_LIST(31, zzjp.VECTOR, zzkd.INT),
    SFIXED64_LIST(32, zzjp.VECTOR, zzkd.LONG),
    SINT32_LIST(33, zzjp.VECTOR, zzkd.INT),
    SINT64_LIST(34, zzjp.VECTOR, zzkd.LONG),
    DOUBLE_LIST_PACKED(35, zzjp.PACKED_VECTOR, zzkd.DOUBLE),
    FLOAT_LIST_PACKED(36, zzjp.PACKED_VECTOR, zzkd.FLOAT),
    INT64_LIST_PACKED(37, zzjp.PACKED_VECTOR, zzkd.LONG),
    UINT64_LIST_PACKED(38, zzjp.PACKED_VECTOR, zzkd.LONG),
    INT32_LIST_PACKED(39, zzjp.PACKED_VECTOR, zzkd.INT),
    FIXED64_LIST_PACKED(40, zzjp.PACKED_VECTOR, zzkd.LONG),
    FIXED32_LIST_PACKED(41, zzjp.PACKED_VECTOR, zzkd.INT),
    BOOL_LIST_PACKED(42, zzjp.PACKED_VECTOR, zzkd.BOOLEAN),
    UINT32_LIST_PACKED(43, zzjp.PACKED_VECTOR, zzkd.INT),
    ENUM_LIST_PACKED(44, zzjp.PACKED_VECTOR, zzkd.ENUM),
    SFIXED32_LIST_PACKED(45, zzjp.PACKED_VECTOR, zzkd.INT),
    SFIXED64_LIST_PACKED(46, zzjp.PACKED_VECTOR, zzkd.LONG),
    SINT32_LIST_PACKED(47, zzjp.PACKED_VECTOR, zzkd.INT),
    SINT64_LIST_PACKED(48, zzjp.PACKED_VECTOR, zzkd.LONG),
    GROUP_LIST(49, zzjp.VECTOR, zzkd.MESSAGE),
    MAP(50, zzjp.MAP, zzkd.VOID);

    private static final zzjn[] zzaz;
    private final int zzbb;

    public final int zza() {
        return this.zzbb;
    }

    static {
        zzjn[] zzjnVarArrValues = values();
        zzaz = new zzjn[zzjnVarArrValues.length];
        for (zzjn zzjnVar : zzjnVarArrValues) {
            zzaz[zzjnVar.zzbb] = zzjnVar;
        }
    }

    zzjn(int i, zzjp zzjpVar, zzkd zzkdVar) {
        this.zzbb = i;
        int iOrdinal = zzjpVar.ordinal();
        if (iOrdinal == 1 || iOrdinal == 3) {
            zzkdVar.zza();
        }
        if (zzjpVar == zzjp.SCALAR) {
            int i2 = zzjq.zza[zzkdVar.ordinal()];
        }
    }
}
