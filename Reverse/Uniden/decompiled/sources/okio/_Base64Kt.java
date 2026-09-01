package okio;

import androidx.constraintlayout.widget.ConstraintLayout;
import com.google.common.base.Ascii;
import java.util.Arrays;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: -Base64.kt */
/* JADX INFO: loaded from: classes3.dex */
@Metadata(m490d1 = {"\u0000\u0012\n\u0000\n\u0002\u0010\u0012\n\u0002\b\b\n\u0002\u0010\u000e\n\u0002\b\u0003\u001a\u000e\u0010\t\u001a\u0004\u0018\u00010\u0001*\u00020\nH\u0000\u001a\u0016\u0010\u000b\u001a\u00020\n*\u00020\u00012\b\b\u0002\u0010\f\u001a\u00020\u0001H\u0000\"\u001c\u0010\u0000\u001a\u00020\u00018\u0000X\u0081\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u0002\u0010\u0003\u001a\u0004\b\u0004\u0010\u0005\"\u001c\u0010\u0006\u001a\u00020\u00018\u0000X\u0081\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u0007\u0010\u0003\u001a\u0004\b\b\u0010\u0005¨\u0006\r"}, m491d2 = {"BASE64", "", "getBASE64$annotations", "()V", "getBASE64", "()[B", "BASE64_URL_SAFE", "getBASE64_URL_SAFE$annotations", "getBASE64_URL_SAFE", "decodeBase64ToArray", "", "encodeBase64", "map", "okio"}, m492k = 2, m493mv = {1, 5, 1}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class _Base64Kt {
    private static final byte[] BASE64 = ByteString.INSTANCE.encodeUtf8("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/").getData();
    private static final byte[] BASE64_URL_SAFE = ByteString.INSTANCE.encodeUtf8("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_").getData();

    public static final byte[] getBASE64() {
        return BASE64;
    }

    public static /* synthetic */ void getBASE64$annotations() {
    }

    public static final byte[] getBASE64_URL_SAFE() {
        return BASE64_URL_SAFE;
    }

    public static /* synthetic */ void getBASE64_URL_SAFE$annotations() {
    }

    /* JADX WARN: Code duplicated, block: B:55:0x00a3 A[LOOP:1: B:16:0x003a->B:55:0x00a3, LOOP_END] */
    /* JADX WARN: Code duplicated, block: B:79:0x00a1 A[SYNTHETIC] */
    public static final byte[] decodeBase64ToArray(String str) {
        int i;
        int i2;
        char cCharAt;
        Intrinsics.checkNotNullParameter(str, "<this>");
        int length = str.length();
        while (length > 0 && ((cCharAt = str.charAt(length - 1)) == '=' || cCharAt == '\n' || cCharAt == '\r' || cCharAt == ' ' || cCharAt == '\t')) {
            length--;
        }
        int i3 = (int) ((((long) length) * 6) / 8);
        byte[] bArr = new byte[i3];
        int i4 = 0;
        int i5 = 0;
        if (length > 0) {
            int i6 = 0;
            i = 0;
            while (true) {
                int i7 = i4 + 1;
                char cCharAt2 = str.charAt(i4);
                if ('A' <= cCharAt2 && cCharAt2 <= 'Z') {
                    i2 = cCharAt2 - 'A';
                } else if ('a' <= cCharAt2 && cCharAt2 <= 'z') {
                    i2 = cCharAt2 - 'G';
                } else if ('0' <= cCharAt2 && cCharAt2 <= '9') {
                    i2 = cCharAt2 + 4;
                } else if (cCharAt2 == '+' || cCharAt2 == '-') {
                    i2 = 62;
                } else {
                    if (cCharAt2 == '/' || cCharAt2 == '_') {
                        i2 = 63;
                    } else if (cCharAt2 != '\n' && cCharAt2 != '\r' && cCharAt2 != ' ' && cCharAt2 != '\t') {
                        return null;
                    }
                    if (i7 >= length) {
                        i4 = i6;
                        break;
                    }
                    i4 = i7;
                }
                int i8 = i2 | (i << 6);
                i6++;
                if (i6 % 4 == 0) {
                    bArr[i5] = (byte) (i8 >> 16);
                    int i9 = i5 + 2;
                    bArr[i5 + 1] = (byte) (i8 >> 8);
                    i5 += 3;
                    bArr[i9] = (byte) i8;
                }
                i = i8;
                if (i7 >= length) {
                    i4 = i6;
                    break;
                }
                i4 = i7;
            }
        } else {
            i = 0;
        }
        int i10 = i4 % 4;
        if (i10 == 1) {
            return null;
        }
        if (i10 == 2) {
            bArr[i5] = (byte) ((i << 12) >> 16);
            i5++;
        } else if (i10 == 3) {
            int i11 = i << 6;
            int i12 = i5 + 1;
            bArr[i5] = (byte) (i11 >> 16);
            i5 += 2;
            bArr[i12] = (byte) (i11 >> 8);
        }
        if (i5 == i3) {
            return bArr;
        }
        byte[] bArrCopyOf = Arrays.copyOf(bArr, i5);
        Intrinsics.checkNotNullExpressionValue(bArrCopyOf, "java.util.Arrays.copyOf(this, newSize)");
        return bArrCopyOf;
    }

    public static /* synthetic */ String encodeBase64$default(byte[] bArr, byte[] bArr2, int i, Object obj) {
        if ((i & 1) != 0) {
            bArr2 = BASE64;
        }
        return encodeBase64(bArr, bArr2);
    }

    public static final String encodeBase64(byte[] bArr, byte[] map) {
        Intrinsics.checkNotNullParameter(bArr, "<this>");
        Intrinsics.checkNotNullParameter(map, "map");
        byte[] bArr2 = new byte[((bArr.length + 2) / 3) * 4];
        int length = bArr.length - (bArr.length % 3);
        int i = 0;
        int i2 = 0;
        while (i < length) {
            byte b = bArr[i];
            int i3 = i + 2;
            byte b2 = bArr[i + 1];
            i += 3;
            byte b3 = bArr[i3];
            bArr2[i2] = map[(b & 255) >> 2];
            bArr2[i2 + 1] = map[((b & 3) << 4) | ((b2 & 255) >> 4)];
            int i4 = i2 + 3;
            bArr2[i2 + 2] = map[((b2 & Ascii.f290SI) << 2) | ((b3 & 255) >> 6)];
            i2 += 4;
            bArr2[i4] = map[b3 & Utf8.REPLACEMENT_BYTE];
        }
        int length2 = bArr.length - length;
        if (length2 == 1) {
            byte b4 = bArr[i];
            bArr2[i2] = map[(b4 & 255) >> 2];
            bArr2[i2 + 1] = map[(b4 & 3) << 4];
            byte b5 = (byte) 61;
            bArr2[i2 + 2] = b5;
            bArr2[i2 + 3] = b5;
        } else if (length2 == 2) {
            int i5 = i + 1;
            byte b6 = bArr[i];
            byte b7 = bArr[i5];
            bArr2[i2] = map[(b6 & 255) >> 2];
            bArr2[i2 + 1] = map[((b6 & 3) << 4) | ((b7 & 255) >> 4)];
            bArr2[i2 + 2] = map[(b7 & Ascii.f290SI) << 2];
            bArr2[i2 + 3] = (byte) 61;
        }
        return _JvmPlatformKt.toUtf8String(bArr2);
    }
}
