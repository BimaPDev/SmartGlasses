package com.fasterxml.jackson.core.p003io;

import com.fasterxml.jackson.core.util.ByteArrayBuilder;
import com.fasterxml.jackson.core.util.TextBuffer;
import java.util.Arrays;

/* JADX INFO: loaded from: classes.dex */
public final class JsonStringEncoder {
    private static final int INITIAL_BYTE_BUFFER_SIZE = 200;
    private static final int INITIAL_CHAR_BUFFER_SIZE = 120;
    private static final int SURR1_FIRST = 55296;
    private static final int SURR1_LAST = 56319;
    private static final int SURR2_FIRST = 56320;
    private static final int SURR2_LAST = 57343;

    /* JADX INFO: renamed from: HC */
    private static final char[] f188HC = CharTypes.copyHexChars();

    /* JADX INFO: renamed from: HB */
    private static final byte[] f187HB = CharTypes.copyHexBytes();
    private static final JsonStringEncoder instance = new JsonStringEncoder();

    private char[] _qbuf() {
        return new char[]{'\\', 0, '0', '0', 0, 0};
    }

    public static JsonStringEncoder getInstance() {
        return instance;
    }

    public char[] quoteAsString(String str) {
        int i_appendNamed;
        char[] cArrFinishCurrentSegment = new char[INITIAL_CHAR_BUFFER_SIZE];
        int[] iArr = CharTypes.get7BitOutputEscapes();
        int length = iArr.length;
        int length2 = str.length();
        TextBuffer textBufferFromInitial = null;
        int i = 0;
        int i2 = 0;
        char[] cArr_qbuf = null;
        loop0: while (i < length2) {
            while (true) {
                char cCharAt = str.charAt(i);
                if (cCharAt >= length || iArr[cCharAt] == 0) {
                    if (i2 >= cArrFinishCurrentSegment.length) {
                        if (textBufferFromInitial == null) {
                            textBufferFromInitial = TextBuffer.fromInitial(cArrFinishCurrentSegment);
                        }
                        cArrFinishCurrentSegment = textBufferFromInitial.finishCurrentSegment();
                        i2 = 0;
                    }
                    int i3 = i2 + 1;
                    cArrFinishCurrentSegment[i2] = cCharAt;
                    i++;
                    if (i >= length2) {
                        i2 = i3;
                        break loop0;
                    }
                    i2 = i3;
                }
            }
            if (cArr_qbuf == null) {
                cArr_qbuf = _qbuf();
            }
            int i4 = i + 1;
            char cCharAt2 = str.charAt(i);
            int i5 = iArr[cCharAt2];
            if (i5 < 0) {
                i_appendNamed = _appendNumeric(cCharAt2, cArr_qbuf);
            } else {
                i_appendNamed = _appendNamed(i5, cArr_qbuf);
            }
            int i6 = i2 + i_appendNamed;
            if (i6 > cArrFinishCurrentSegment.length) {
                int length3 = cArrFinishCurrentSegment.length - i2;
                if (length3 > 0) {
                    System.arraycopy(cArr_qbuf, 0, cArrFinishCurrentSegment, i2, length3);
                }
                if (textBufferFromInitial == null) {
                    textBufferFromInitial = TextBuffer.fromInitial(cArrFinishCurrentSegment);
                }
                cArrFinishCurrentSegment = textBufferFromInitial.finishCurrentSegment();
                int i7 = i_appendNamed - length3;
                System.arraycopy(cArr_qbuf, length3, cArrFinishCurrentSegment, 0, i7);
                i2 = i7;
            } else {
                System.arraycopy(cArr_qbuf, 0, cArrFinishCurrentSegment, i2, i_appendNamed);
                i2 = i6;
            }
            i = i4;
        }
        if (textBufferFromInitial == null) {
            return Arrays.copyOfRange(cArrFinishCurrentSegment, 0, i2);
        }
        textBufferFromInitial.setCurrentLength(i2);
        return textBufferFromInitial.contentsAsArray();
    }

    public char[] quoteAsString(CharSequence charSequence) {
        int i_appendNamed;
        if (charSequence instanceof String) {
            return quoteAsString((String) charSequence);
        }
        char[] cArrFinishCurrentSegment = new char[INITIAL_CHAR_BUFFER_SIZE];
        int[] iArr = CharTypes.get7BitOutputEscapes();
        int length = iArr.length;
        int length2 = charSequence.length();
        TextBuffer textBufferFromInitial = null;
        char[] cArr_qbuf = null;
        int i = 0;
        int i2 = 0;
        loop0: while (i < length2) {
            while (true) {
                char cCharAt = charSequence.charAt(i);
                if (cCharAt >= length || iArr[cCharAt] == 0) {
                    if (i2 >= cArrFinishCurrentSegment.length) {
                        if (textBufferFromInitial == null) {
                            textBufferFromInitial = TextBuffer.fromInitial(cArrFinishCurrentSegment);
                        }
                        cArrFinishCurrentSegment = textBufferFromInitial.finishCurrentSegment();
                        i2 = 0;
                    }
                    int i3 = i2 + 1;
                    cArrFinishCurrentSegment[i2] = cCharAt;
                    i++;
                    if (i >= length2) {
                        i2 = i3;
                        break loop0;
                    }
                    i2 = i3;
                }
            }
            if (cArr_qbuf == null) {
                cArr_qbuf = _qbuf();
            }
            int i4 = i + 1;
            char cCharAt2 = charSequence.charAt(i);
            int i5 = iArr[cCharAt2];
            if (i5 < 0) {
                i_appendNamed = _appendNumeric(cCharAt2, cArr_qbuf);
            } else {
                i_appendNamed = _appendNamed(i5, cArr_qbuf);
            }
            int i6 = i2 + i_appendNamed;
            if (i6 > cArrFinishCurrentSegment.length) {
                int length3 = cArrFinishCurrentSegment.length - i2;
                if (length3 > 0) {
                    System.arraycopy(cArr_qbuf, 0, cArrFinishCurrentSegment, i2, length3);
                }
                if (textBufferFromInitial == null) {
                    textBufferFromInitial = TextBuffer.fromInitial(cArrFinishCurrentSegment);
                }
                cArrFinishCurrentSegment = textBufferFromInitial.finishCurrentSegment();
                int i7 = i_appendNamed - length3;
                System.arraycopy(cArr_qbuf, length3, cArrFinishCurrentSegment, 0, i7);
                i2 = i7;
            } else {
                System.arraycopy(cArr_qbuf, 0, cArrFinishCurrentSegment, i2, i_appendNamed);
                i2 = i6;
            }
            i = i4;
        }
        if (textBufferFromInitial == null) {
            return Arrays.copyOfRange(cArrFinishCurrentSegment, 0, i2);
        }
        textBufferFromInitial.setCurrentLength(i2);
        return textBufferFromInitial.contentsAsArray();
    }

    public void quoteAsString(CharSequence charSequence, StringBuilder sb) {
        int i_appendNamed;
        int[] iArr = CharTypes.get7BitOutputEscapes();
        int length = iArr.length;
        int length2 = charSequence.length();
        char[] cArr_qbuf = null;
        int i = 0;
        while (i < length2) {
            do {
                char cCharAt = charSequence.charAt(i);
                if (cCharAt >= length || iArr[cCharAt] == 0) {
                    sb.append(cCharAt);
                    i++;
                } else {
                    if (cArr_qbuf == null) {
                        cArr_qbuf = _qbuf();
                    }
                    int i2 = i + 1;
                    char cCharAt2 = charSequence.charAt(i);
                    int i3 = iArr[cCharAt2];
                    if (i3 < 0) {
                        i_appendNamed = _appendNumeric(cCharAt2, cArr_qbuf);
                    } else {
                        i_appendNamed = _appendNamed(i3, cArr_qbuf);
                    }
                    sb.append(cArr_qbuf, 0, i_appendNamed);
                    i = i2;
                }
            } while (i < length2);
            return;
        }
    }

    public byte[] quoteAsUTF8(String str) {
        int i;
        int i2;
        int i3;
        int length = str.length();
        byte[] bArrFinishCurrentSegment = new byte[200];
        ByteArrayBuilder byteArrayBuilderFromInitial = null;
        int i4 = 0;
        int i_appendByte = 0;
        loop0: while (i4 < length) {
            int[] iArr = CharTypes.get7BitOutputEscapes();
            while (true) {
                char cCharAt = str.charAt(i4);
                if (cCharAt > 127 || iArr[cCharAt] != 0) {
                    break;
                }
                if (i_appendByte >= bArrFinishCurrentSegment.length) {
                    if (byteArrayBuilderFromInitial == null) {
                        byteArrayBuilderFromInitial = ByteArrayBuilder.fromInitial(bArrFinishCurrentSegment, i_appendByte);
                    }
                    bArrFinishCurrentSegment = byteArrayBuilderFromInitial.finishCurrentSegment();
                    i_appendByte = 0;
                }
                int i5 = i_appendByte + 1;
                bArrFinishCurrentSegment[i_appendByte] = (byte) cCharAt;
                i4++;
                if (i4 >= length) {
                    i_appendByte = i5;
                    break loop0;
                }
                i_appendByte = i5;
            }
            if (byteArrayBuilderFromInitial == null) {
                byteArrayBuilderFromInitial = ByteArrayBuilder.fromInitial(bArrFinishCurrentSegment, i_appendByte);
            }
            if (i_appendByte >= bArrFinishCurrentSegment.length) {
                bArrFinishCurrentSegment = byteArrayBuilderFromInitial.finishCurrentSegment();
                i_appendByte = 0;
            }
            int i6 = i4 + 1;
            char cCharAt2 = str.charAt(i4);
            if (cCharAt2 <= 127) {
                i_appendByte = _appendByte(cCharAt2, iArr[cCharAt2], byteArrayBuilderFromInitial, i_appendByte);
                bArrFinishCurrentSegment = byteArrayBuilderFromInitial.getCurrentSegment();
            } else {
                if (cCharAt2 <= 2047) {
                    i3 = i_appendByte + 1;
                    bArrFinishCurrentSegment[i_appendByte] = (byte) ((cCharAt2 >> 6) | 192);
                    i2 = (cCharAt2 & '?') | 128;
                } else {
                    if (cCharAt2 < 55296 || cCharAt2 > 57343) {
                        int i7 = i_appendByte + 1;
                        bArrFinishCurrentSegment[i_appendByte] = (byte) ((cCharAt2 >> '\f') | 224);
                        if (i7 >= bArrFinishCurrentSegment.length) {
                            bArrFinishCurrentSegment = byteArrayBuilderFromInitial.finishCurrentSegment();
                            i7 = 0;
                        }
                        bArrFinishCurrentSegment[i7] = (byte) (((cCharAt2 >> 6) & 63) | 128);
                        i = i7 + 1;
                        i2 = (cCharAt2 & '?') | 128;
                    } else {
                        if (cCharAt2 > 56319) {
                            _illegal(cCharAt2);
                        }
                        if (i6 >= length) {
                            _illegal(cCharAt2);
                        }
                        int i8 = i4 + 2;
                        int i_convert = _convert(cCharAt2, str.charAt(i6));
                        if (i_convert > 1114111) {
                            _illegal(i_convert);
                        }
                        int i9 = i_appendByte + 1;
                        bArrFinishCurrentSegment[i_appendByte] = (byte) ((i_convert >> 18) | 240);
                        if (i9 >= bArrFinishCurrentSegment.length) {
                            bArrFinishCurrentSegment = byteArrayBuilderFromInitial.finishCurrentSegment();
                            i9 = 0;
                        }
                        int i10 = i9 + 1;
                        bArrFinishCurrentSegment[i9] = (byte) (((i_convert >> 12) & 63) | 128);
                        if (i10 >= bArrFinishCurrentSegment.length) {
                            bArrFinishCurrentSegment = byteArrayBuilderFromInitial.finishCurrentSegment();
                            i10 = 0;
                        }
                        int i11 = i10 + 1;
                        bArrFinishCurrentSegment[i10] = (byte) (((i_convert >> 6) & 63) | 128);
                        i2 = (i_convert & 63) | 128;
                        i = i11;
                        i6 = i8;
                    }
                    i3 = i;
                }
                if (i3 >= bArrFinishCurrentSegment.length) {
                    bArrFinishCurrentSegment = byteArrayBuilderFromInitial.finishCurrentSegment();
                    i3 = 0;
                }
                bArrFinishCurrentSegment[i3] = (byte) i2;
                i_appendByte = i3 + 1;
            }
            i4 = i6;
        }
        if (byteArrayBuilderFromInitial == null) {
            return Arrays.copyOfRange(bArrFinishCurrentSegment, 0, i_appendByte);
        }
        return byteArrayBuilderFromInitial.completeAndCoalesce(i_appendByte);
    }

    /* JADX WARN: Code duplicated, block: B:48:0x00dd  */
    /* JADX WARN: Code duplicated, block: B:58:0x00e6 A[SYNTHETIC] */
    public byte[] encodeAsUTF8(String str) {
        int i;
        int i2;
        int length = str.length();
        int length2 = 200;
        byte[] bArrFinishCurrentSegment = new byte[200];
        ByteArrayBuilder byteArrayBuilderFromInitial = null;
        int i3 = 0;
        int i4 = 0;
        loop0: while (i3 < length) {
            int i5 = i3 + 1;
            char cCharAt = str.charAt(i3);
            while (cCharAt <= 127) {
                if (i4 >= length2) {
                    if (byteArrayBuilderFromInitial == null) {
                        byteArrayBuilderFromInitial = ByteArrayBuilder.fromInitial(bArrFinishCurrentSegment, i4);
                    }
                    byte[] bArrFinishCurrentSegment2 = byteArrayBuilderFromInitial.finishCurrentSegment();
                    i4 = 0;
                    bArrFinishCurrentSegment = bArrFinishCurrentSegment2;
                    length2 = bArrFinishCurrentSegment2.length;
                }
                int i6 = i4 + 1;
                bArrFinishCurrentSegment[i4] = (byte) cCharAt;
                if (i5 >= length) {
                    i4 = i6;
                    break loop0;
                }
                char cCharAt2 = str.charAt(i5);
                i5++;
                cCharAt = cCharAt2;
                i4 = i6;
            }
            if (byteArrayBuilderFromInitial == null) {
                byteArrayBuilderFromInitial = ByteArrayBuilder.fromInitial(bArrFinishCurrentSegment, i4);
            }
            if (i4 >= length2) {
                bArrFinishCurrentSegment = byteArrayBuilderFromInitial.finishCurrentSegment();
                length2 = bArrFinishCurrentSegment.length;
                i4 = 0;
            }
            if (cCharAt < 2048) {
                i = i4 + 1;
                bArrFinishCurrentSegment[i4] = (byte) ((cCharAt >> 6) | 192);
            } else {
                if (cCharAt < 55296 || cCharAt > 57343) {
                    int i7 = i4 + 1;
                    bArrFinishCurrentSegment[i4] = (byte) ((cCharAt >> '\f') | 224);
                    if (i7 >= length2) {
                        bArrFinishCurrentSegment = byteArrayBuilderFromInitial.finishCurrentSegment();
                        length2 = bArrFinishCurrentSegment.length;
                        i7 = 0;
                    }
                    bArrFinishCurrentSegment[i7] = (byte) (((cCharAt >> 6) & 63) | 128);
                    i = i7 + 1;
                } else {
                    if (cCharAt > 56319) {
                        _illegal(cCharAt);
                    }
                    if (i5 >= length) {
                        _illegal(cCharAt);
                    }
                    int i8 = i5 + 1;
                    int i_convert = _convert(cCharAt, str.charAt(i5));
                    if (i_convert > 1114111) {
                        _illegal(i_convert);
                    }
                    int i9 = i4 + 1;
                    bArrFinishCurrentSegment[i4] = (byte) ((i_convert >> 18) | 240);
                    if (i9 >= length2) {
                        bArrFinishCurrentSegment = byteArrayBuilderFromInitial.finishCurrentSegment();
                        length2 = bArrFinishCurrentSegment.length;
                        i9 = 0;
                    }
                    int i10 = i9 + 1;
                    bArrFinishCurrentSegment[i9] = (byte) (((i_convert >> 12) & 63) | 128);
                    if (i10 >= length2) {
                        byte[] bArrFinishCurrentSegment3 = byteArrayBuilderFromInitial.finishCurrentSegment();
                        i10 = 0;
                        bArrFinishCurrentSegment = bArrFinishCurrentSegment3;
                        length2 = bArrFinishCurrentSegment3.length;
                    }
                    int i11 = i10 + 1;
                    bArrFinishCurrentSegment[i10] = (byte) (((i_convert >> 6) & 63) | 128);
                    i2 = i_convert;
                    i3 = i8;
                    i = i11;
                }
                if (i >= length2) {
                    byte[] bArrFinishCurrentSegment4 = byteArrayBuilderFromInitial.finishCurrentSegment();
                    i = 0;
                    bArrFinishCurrentSegment = bArrFinishCurrentSegment4;
                    length2 = bArrFinishCurrentSegment4.length;
                }
                bArrFinishCurrentSegment[i] = (byte) ((i2 & 63) | 128);
                i4 = i + 1;
            }
            i2 = cCharAt;
            i3 = i5;
            if (i >= length2) {
                byte[] bArrFinishCurrentSegment5 = byteArrayBuilderFromInitial.finishCurrentSegment();
                i = 0;
                bArrFinishCurrentSegment = bArrFinishCurrentSegment5;
                length2 = bArrFinishCurrentSegment5.length;
            }
            bArrFinishCurrentSegment[i] = (byte) ((i2 & 63) | 128);
            i4 = i + 1;
        }
        if (byteArrayBuilderFromInitial == null) {
            return Arrays.copyOfRange(bArrFinishCurrentSegment, 0, i4);
        }
        return byteArrayBuilderFromInitial.completeAndCoalesce(i4);
    }

    /* JADX WARN: Code duplicated, block: B:48:0x00dd  */
    /* JADX WARN: Code duplicated, block: B:58:0x00e6 A[SYNTHETIC] */
    public byte[] encodeAsUTF8(CharSequence charSequence) {
        int i;
        int i2;
        int length = charSequence.length();
        int length2 = 200;
        byte[] bArrFinishCurrentSegment = new byte[200];
        ByteArrayBuilder byteArrayBuilderFromInitial = null;
        int i3 = 0;
        int i4 = 0;
        loop0: while (i3 < length) {
            int i5 = i3 + 1;
            char cCharAt = charSequence.charAt(i3);
            while (cCharAt <= 127) {
                if (i4 >= length2) {
                    if (byteArrayBuilderFromInitial == null) {
                        byteArrayBuilderFromInitial = ByteArrayBuilder.fromInitial(bArrFinishCurrentSegment, i4);
                    }
                    byte[] bArrFinishCurrentSegment2 = byteArrayBuilderFromInitial.finishCurrentSegment();
                    i4 = 0;
                    bArrFinishCurrentSegment = bArrFinishCurrentSegment2;
                    length2 = bArrFinishCurrentSegment2.length;
                }
                int i6 = i4 + 1;
                bArrFinishCurrentSegment[i4] = (byte) cCharAt;
                if (i5 >= length) {
                    i4 = i6;
                    break loop0;
                }
                char cCharAt2 = charSequence.charAt(i5);
                i5++;
                cCharAt = cCharAt2;
                i4 = i6;
            }
            if (byteArrayBuilderFromInitial == null) {
                byteArrayBuilderFromInitial = ByteArrayBuilder.fromInitial(bArrFinishCurrentSegment, i4);
            }
            if (i4 >= length2) {
                bArrFinishCurrentSegment = byteArrayBuilderFromInitial.finishCurrentSegment();
                length2 = bArrFinishCurrentSegment.length;
                i4 = 0;
            }
            if (cCharAt < 2048) {
                i = i4 + 1;
                bArrFinishCurrentSegment[i4] = (byte) ((cCharAt >> 6) | 192);
            } else {
                if (cCharAt < 55296 || cCharAt > 57343) {
                    int i7 = i4 + 1;
                    bArrFinishCurrentSegment[i4] = (byte) ((cCharAt >> '\f') | 224);
                    if (i7 >= length2) {
                        bArrFinishCurrentSegment = byteArrayBuilderFromInitial.finishCurrentSegment();
                        length2 = bArrFinishCurrentSegment.length;
                        i7 = 0;
                    }
                    bArrFinishCurrentSegment[i7] = (byte) (((cCharAt >> 6) & 63) | 128);
                    i = i7 + 1;
                } else {
                    if (cCharAt > 56319) {
                        _illegal(cCharAt);
                    }
                    if (i5 >= length) {
                        _illegal(cCharAt);
                    }
                    int i8 = i5 + 1;
                    int i_convert = _convert(cCharAt, charSequence.charAt(i5));
                    if (i_convert > 1114111) {
                        _illegal(i_convert);
                    }
                    int i9 = i4 + 1;
                    bArrFinishCurrentSegment[i4] = (byte) ((i_convert >> 18) | 240);
                    if (i9 >= length2) {
                        bArrFinishCurrentSegment = byteArrayBuilderFromInitial.finishCurrentSegment();
                        length2 = bArrFinishCurrentSegment.length;
                        i9 = 0;
                    }
                    int i10 = i9 + 1;
                    bArrFinishCurrentSegment[i9] = (byte) (((i_convert >> 12) & 63) | 128);
                    if (i10 >= length2) {
                        byte[] bArrFinishCurrentSegment3 = byteArrayBuilderFromInitial.finishCurrentSegment();
                        i10 = 0;
                        bArrFinishCurrentSegment = bArrFinishCurrentSegment3;
                        length2 = bArrFinishCurrentSegment3.length;
                    }
                    int i11 = i10 + 1;
                    bArrFinishCurrentSegment[i10] = (byte) (((i_convert >> 6) & 63) | 128);
                    i2 = i_convert;
                    i3 = i8;
                    i = i11;
                }
                if (i >= length2) {
                    byte[] bArrFinishCurrentSegment4 = byteArrayBuilderFromInitial.finishCurrentSegment();
                    i = 0;
                    bArrFinishCurrentSegment = bArrFinishCurrentSegment4;
                    length2 = bArrFinishCurrentSegment4.length;
                }
                bArrFinishCurrentSegment[i] = (byte) ((i2 & 63) | 128);
                i4 = i + 1;
            }
            i2 = cCharAt;
            i3 = i5;
            if (i >= length2) {
                byte[] bArrFinishCurrentSegment5 = byteArrayBuilderFromInitial.finishCurrentSegment();
                i = 0;
                bArrFinishCurrentSegment = bArrFinishCurrentSegment5;
                length2 = bArrFinishCurrentSegment5.length;
            }
            bArrFinishCurrentSegment[i] = (byte) ((i2 & 63) | 128);
            i4 = i + 1;
        }
        if (byteArrayBuilderFromInitial == null) {
            return Arrays.copyOfRange(bArrFinishCurrentSegment, 0, i4);
        }
        return byteArrayBuilderFromInitial.completeAndCoalesce(i4);
    }

    private int _appendNumeric(int i, char[] cArr) {
        cArr[1] = 'u';
        char[] cArr2 = f188HC;
        cArr[4] = cArr2[i >> 4];
        cArr[5] = cArr2[i & 15];
        return 6;
    }

    private int _appendNamed(int i, char[] cArr) {
        cArr[1] = (char) i;
        return 2;
    }

    private int _appendByte(int i, int i2, ByteArrayBuilder byteArrayBuilder, int i3) {
        byteArrayBuilder.setCurrentSegmentLength(i3);
        byteArrayBuilder.append(92);
        if (i2 < 0) {
            byteArrayBuilder.append(117);
            if (i > 255) {
                byte[] bArr = f187HB;
                byteArrayBuilder.append(bArr[i >> 12]);
                byteArrayBuilder.append(bArr[(i >> 8) & 15]);
                i &= 255;
            } else {
                byteArrayBuilder.append(48);
                byteArrayBuilder.append(48);
            }
            byte[] bArr2 = f187HB;
            byteArrayBuilder.append(bArr2[i >> 4]);
            byteArrayBuilder.append(bArr2[i & 15]);
        } else {
            byteArrayBuilder.append((byte) i2);
        }
        return byteArrayBuilder.getCurrentSegmentLength();
    }

    private static int _convert(int i, int i2) {
        if (i2 < 56320 || i2 > 57343) {
            throw new IllegalArgumentException("Broken surrogate pair: first char 0x" + Integer.toHexString(i) + ", second 0x" + Integer.toHexString(i2) + "; illegal combination");
        }
        return ((i - 55296) << 10) + 65536 + (i2 - 56320);
    }

    private static void _illegal(int i) {
        throw new IllegalArgumentException(UTF8Writer.illegalSurrogateDesc(i));
    }
}
