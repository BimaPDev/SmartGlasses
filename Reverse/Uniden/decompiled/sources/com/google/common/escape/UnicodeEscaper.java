package com.google.common.escape;

import com.google.common.base.Preconditions;
import javax.annotation.CheckForNull;

/* JADX INFO: loaded from: classes2.dex */
@ElementTypesAreNonnullByDefault
public abstract class UnicodeEscaper extends Escaper {
    private static final int DEST_PAD = 32;

    @CheckForNull
    protected abstract char[] escape(int i);

    protected UnicodeEscaper() {
    }

    @Override // com.google.common.escape.Escaper
    public String escape(String str) {
        Preconditions.checkNotNull(str);
        int length = str.length();
        int iNextEscapeIndex = nextEscapeIndex(str, 0, length);
        return iNextEscapeIndex == length ? str : escapeSlow(str, iNextEscapeIndex);
    }

    protected int nextEscapeIndex(CharSequence charSequence, int i, int i2) {
        while (i < i2) {
            int iCodePointAt = codePointAt(charSequence, i, i2);
            if (iCodePointAt < 0 || escape(iCodePointAt) != null) {
                break;
            }
            i += Character.isSupplementaryCodePoint(iCodePointAt) ? 2 : 1;
        }
        return i;
    }

    protected final String escapeSlow(String str, int i) {
        int length = str.length();
        char[] cArrCharBufferFromThreadLocal = Platform.charBufferFromThreadLocal();
        int i2 = 0;
        int length2 = 0;
        while (i < length) {
            int iCodePointAt = codePointAt(str, i, length);
            if (iCodePointAt < 0) {
                throw new IllegalArgumentException("Trailing high surrogate at end of input");
            }
            char[] cArrEscape = escape(iCodePointAt);
            int i3 = (Character.isSupplementaryCodePoint(iCodePointAt) ? 2 : 1) + i;
            if (cArrEscape != null) {
                int i4 = i - i2;
                int i5 = length2 + i4;
                int length3 = cArrEscape.length + i5;
                if (cArrCharBufferFromThreadLocal.length < length3) {
                    cArrCharBufferFromThreadLocal = growBuffer(cArrCharBufferFromThreadLocal, length2, length3 + (length - i) + 32);
                }
                if (i4 > 0) {
                    str.getChars(i2, i, cArrCharBufferFromThreadLocal, length2);
                    length2 = i5;
                }
                if (cArrEscape.length > 0) {
                    System.arraycopy(cArrEscape, 0, cArrCharBufferFromThreadLocal, length2, cArrEscape.length);
                    length2 += cArrEscape.length;
                }
                i2 = i3;
            }
            i = nextEscapeIndex(str, i3, length);
        }
        int i6 = length - i2;
        if (i6 > 0) {
            int i7 = i6 + length2;
            if (cArrCharBufferFromThreadLocal.length < i7) {
                cArrCharBufferFromThreadLocal = growBuffer(cArrCharBufferFromThreadLocal, length2, i7);
            }
            str.getChars(i2, length, cArrCharBufferFromThreadLocal, length2);
            length2 = i7;
        }
        return new String(cArrCharBufferFromThreadLocal, 0, length2);
    }

    protected static int codePointAt(CharSequence charSequence, int i, int i2) {
        Preconditions.checkNotNull(charSequence);
        if (i < i2) {
            int i3 = i + 1;
            char cCharAt = charSequence.charAt(i);
            if (cCharAt < 55296 || cCharAt > 57343) {
                return cCharAt;
            }
            if (cCharAt > 56319) {
                String strValueOf = String.valueOf(charSequence);
                throw new IllegalArgumentException(new StringBuilder(String.valueOf(strValueOf).length() + 88).append("Unexpected low surrogate character '").append(cCharAt).append("' with value ").append((int) cCharAt).append(" at index ").append(i).append(" in '").append(strValueOf).append("'").toString());
            }
            if (i3 == i2) {
                return -cCharAt;
            }
            char cCharAt2 = charSequence.charAt(i3);
            if (Character.isLowSurrogate(cCharAt2)) {
                return Character.toCodePoint(cCharAt, cCharAt2);
            }
            String strValueOf2 = String.valueOf(charSequence);
            throw new IllegalArgumentException(new StringBuilder(String.valueOf(strValueOf2).length() + 89).append("Expected low surrogate but got char '").append(cCharAt2).append("' with value ").append((int) cCharAt2).append(" at index ").append(i3).append(" in '").append(strValueOf2).append("'").toString());
        }
        throw new IndexOutOfBoundsException("Index exceeds specified range");
    }

    private static char[] growBuffer(char[] cArr, int i, int i2) {
        if (i2 < 0) {
            throw new AssertionError("Cannot increase internal buffer any further");
        }
        char[] cArr2 = new char[i2];
        if (i > 0) {
            System.arraycopy(cArr, 0, cArr2, 0, i);
        }
        return cArr2;
    }
}
