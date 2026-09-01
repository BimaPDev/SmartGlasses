package com.google.common.hash;

import com.google.common.base.Charsets;
import com.google.common.base.Preconditions;
import com.google.common.primitives.Ints;
import com.google.common.primitives.UnsignedBytes;
import com.google.errorprone.annotations.Immutable;
import java.io.Serializable;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.charset.Charset;
import javax.annotation.CheckForNull;

/* JADX INFO: loaded from: classes2.dex */
@Immutable
@ElementTypesAreNonnullByDefault
final class Murmur3_32HashFunction extends AbstractHashFunction implements Serializable {

    /* JADX INFO: renamed from: C1 */
    private static final int f334C1 = -862048943;

    /* JADX INFO: renamed from: C2 */
    private static final int f335C2 = 461845907;
    private static final int CHUNK_SIZE = 4;
    private static final long serialVersionUID = 0;
    private final int seed;
    private final boolean supplementaryPlaneFix;
    static final HashFunction MURMUR3_32 = new Murmur3_32HashFunction(0, false);
    static final HashFunction MURMUR3_32_FIXED = new Murmur3_32HashFunction(0, true);
    static final HashFunction GOOD_FAST_HASH_32 = new Murmur3_32HashFunction(Hashing.GOOD_FAST_HASH_SEED, true);

    /* JADX INFO: Access modifiers changed from: private */
    public static long charToThreeUtf8Bytes(char c) {
        return ((long) (c >>> '\f')) | 224 | ((long) ((((c >>> 6) & 63) | 128) << 8)) | ((long) (((c & '?') | 128) << 16));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static long charToTwoUtf8Bytes(char c) {
        return ((long) (c >>> 6)) | 192 | ((long) (((c & '?') | 128) << 8));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static long codePointToFourUtf8Bytes(int i) {
        return ((long) (i >>> 18)) | 240 | ((((long) ((i >>> 12) & 63)) | 128) << 8) | ((((long) ((i >>> 6) & 63)) | 128) << 16) | ((((long) (i & 63)) | 128) << 24);
    }

    @Override // com.google.common.hash.HashFunction
    public int bits() {
        return 32;
    }

    Murmur3_32HashFunction(int i, boolean z) {
        this.seed = i;
        this.supplementaryPlaneFix = z;
    }

    @Override // com.google.common.hash.HashFunction
    public Hasher newHasher() {
        return new Murmur3_32Hasher(this.seed);
    }

    public String toString() {
        return new StringBuilder(31).append("Hashing.murmur3_32(").append(this.seed).append(")").toString();
    }

    public boolean equals(@CheckForNull Object obj) {
        if (!(obj instanceof Murmur3_32HashFunction)) {
            return false;
        }
        Murmur3_32HashFunction murmur3_32HashFunction = (Murmur3_32HashFunction) obj;
        return this.seed == murmur3_32HashFunction.seed && this.supplementaryPlaneFix == murmur3_32HashFunction.supplementaryPlaneFix;
    }

    public int hashCode() {
        return getClass().hashCode() ^ this.seed;
    }

    @Override // com.google.common.hash.AbstractHashFunction, com.google.common.hash.HashFunction
    public HashCode hashInt(int i) {
        return fmix(mixH1(this.seed, mixK1(i)), 4);
    }

    @Override // com.google.common.hash.AbstractHashFunction, com.google.common.hash.HashFunction
    public HashCode hashLong(long j) {
        return fmix(mixH1(mixH1(this.seed, mixK1((int) j)), mixK1((int) (j >>> 32))), 8);
    }

    @Override // com.google.common.hash.AbstractHashFunction, com.google.common.hash.HashFunction
    public HashCode hashUnencodedChars(CharSequence charSequence) {
        int iMixK1 = this.seed;
        for (int i = 1; i < charSequence.length(); i += 2) {
            iMixK1 = mixH1(iMixK1, mixK1(charSequence.charAt(i - 1) | (charSequence.charAt(i) << 16)));
        }
        if ((charSequence.length() & 1) == 1) {
            iMixK1 ^= mixK1(charSequence.charAt(charSequence.length() - 1));
        }
        return fmix(iMixK1, charSequence.length() * 2);
    }

    @Override // com.google.common.hash.AbstractHashFunction, com.google.common.hash.HashFunction
    public HashCode hashString(CharSequence charSequence, Charset charset) {
        if (Charsets.UTF_8.equals(charset)) {
            int length = charSequence.length();
            int iMixH1 = this.seed;
            int i = 0;
            int i2 = 0;
            int i3 = 0;
            while (true) {
                int i4 = i2 + 4;
                if (i4 > length) {
                    break;
                }
                char cCharAt = charSequence.charAt(i2);
                char cCharAt2 = charSequence.charAt(i2 + 1);
                char cCharAt3 = charSequence.charAt(i2 + 2);
                char cCharAt4 = charSequence.charAt(i2 + 3);
                if (cCharAt >= 128 || cCharAt2 >= 128 || cCharAt3 >= 128 || cCharAt4 >= 128) {
                    break;
                }
                iMixH1 = mixH1(iMixH1, mixK1((cCharAt2 << '\b') | cCharAt | (cCharAt3 << 16) | (cCharAt4 << 24)));
                i3 += 4;
                i2 = i4;
            }
            long jCharToThreeUtf8Bytes = 0;
            while (i2 < length) {
                char cCharAt5 = charSequence.charAt(i2);
                if (cCharAt5 < 128) {
                    jCharToThreeUtf8Bytes |= ((long) cCharAt5) << i;
                    i += 8;
                    i3++;
                } else if (cCharAt5 < 2048) {
                    jCharToThreeUtf8Bytes |= charToTwoUtf8Bytes(cCharAt5) << i;
                    i += 16;
                    i3 += 2;
                } else if (cCharAt5 < 55296 || cCharAt5 > 57343) {
                    jCharToThreeUtf8Bytes |= charToThreeUtf8Bytes(cCharAt5) << i;
                    i += 24;
                    i3 += 3;
                } else {
                    int iCodePointAt = Character.codePointAt(charSequence, i2);
                    if (iCodePointAt == cCharAt5) {
                        return hashBytes(charSequence.toString().getBytes(charset));
                    }
                    i2++;
                    jCharToThreeUtf8Bytes |= codePointToFourUtf8Bytes(iCodePointAt) << i;
                    if (this.supplementaryPlaneFix) {
                        i += 32;
                    }
                    i3 += 4;
                }
                if (i >= 32) {
                    iMixH1 = mixH1(iMixH1, mixK1((int) jCharToThreeUtf8Bytes));
                    jCharToThreeUtf8Bytes >>>= 32;
                    i -= 32;
                }
                i2++;
            }
            return fmix(mixK1((int) jCharToThreeUtf8Bytes) ^ iMixH1, i3);
        }
        return hashBytes(charSequence.toString().getBytes(charset));
    }

    @Override // com.google.common.hash.AbstractHashFunction, com.google.common.hash.HashFunction
    public HashCode hashBytes(byte[] bArr, int i, int i2) {
        Preconditions.checkPositionIndexes(i, i + i2, bArr.length);
        int iMixH1 = this.seed;
        int i3 = 0;
        int i4 = 0;
        while (true) {
            int i5 = i4 + 4;
            if (i5 > i2) {
                break;
            }
            iMixH1 = mixH1(iMixH1, mixK1(getIntLittleEndian(bArr, i4 + i)));
            i4 = i5;
        }
        int i6 = i4;
        int i7 = 0;
        while (i6 < i2) {
            i3 ^= UnsignedBytes.toInt(bArr[i + i6]) << i7;
            i6++;
            i7 += 8;
        }
        return fmix(mixK1(i3) ^ iMixH1, i2);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static int getIntLittleEndian(byte[] bArr, int i) {
        return Ints.fromBytes(bArr[i + 3], bArr[i + 2], bArr[i + 1], bArr[i]);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static int mixK1(int i) {
        return Integer.rotateLeft(i * f334C1, 15) * f335C2;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static int mixH1(int i, int i2) {
        return (Integer.rotateLeft(i ^ i2, 13) * 5) - 430675100;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static HashCode fmix(int i, int i2) {
        int i3 = i ^ i2;
        int i4 = (i3 ^ (i3 >>> 16)) * (-2048144789);
        int i5 = (i4 ^ (i4 >>> 13)) * (-1028477387);
        return HashCode.fromInt(i5 ^ (i5 >>> 16));
    }

    private static final class Murmur3_32Hasher extends AbstractHasher {
        private long buffer;

        /* JADX INFO: renamed from: h1 */
        private int f336h1;
        private int shift;
        private int length = 0;
        private boolean isDone = false;

        Murmur3_32Hasher(int i) {
            this.f336h1 = i;
        }

        private void update(int i, long j) {
            long j2 = this.buffer;
            int i2 = this.shift;
            long j3 = ((j & 4294967295L) << i2) | j2;
            this.buffer = j3;
            int i3 = i2 + (i * 8);
            this.shift = i3;
            this.length += i;
            if (i3 >= 32) {
                this.f336h1 = Murmur3_32HashFunction.mixH1(this.f336h1, Murmur3_32HashFunction.mixK1((int) j3));
                this.buffer >>>= 32;
                this.shift -= 32;
            }
        }

        @Override // com.google.common.hash.Hasher, com.google.common.hash.PrimitiveSink
        public Hasher putByte(byte b) {
            update(1, b & 255);
            return this;
        }

        @Override // com.google.common.hash.AbstractHasher, com.google.common.hash.Hasher, com.google.common.hash.PrimitiveSink
        public Hasher putBytes(byte[] bArr, int i, int i2) {
            Preconditions.checkPositionIndexes(i, i + i2, bArr.length);
            int i3 = 0;
            while (true) {
                int i4 = i3 + 4;
                if (i4 > i2) {
                    break;
                }
                update(4, Murmur3_32HashFunction.getIntLittleEndian(bArr, i3 + i));
                i3 = i4;
            }
            while (i3 < i2) {
                putByte(bArr[i + i3]);
                i3++;
            }
            return this;
        }

        @Override // com.google.common.hash.AbstractHasher, com.google.common.hash.Hasher, com.google.common.hash.PrimitiveSink
        public Hasher putBytes(ByteBuffer byteBuffer) {
            ByteOrder byteOrderOrder = byteBuffer.order();
            byteBuffer.order(ByteOrder.LITTLE_ENDIAN);
            while (byteBuffer.remaining() >= 4) {
                putInt(byteBuffer.getInt());
            }
            while (byteBuffer.hasRemaining()) {
                putByte(byteBuffer.get());
            }
            byteBuffer.order(byteOrderOrder);
            return this;
        }

        @Override // com.google.common.hash.AbstractHasher, com.google.common.hash.Hasher, com.google.common.hash.PrimitiveSink
        public Hasher putInt(int i) {
            update(4, i);
            return this;
        }

        @Override // com.google.common.hash.AbstractHasher, com.google.common.hash.Hasher, com.google.common.hash.PrimitiveSink
        public Hasher putLong(long j) {
            update(4, (int) j);
            update(4, j >>> 32);
            return this;
        }

        @Override // com.google.common.hash.AbstractHasher, com.google.common.hash.Hasher, com.google.common.hash.PrimitiveSink
        public Hasher putChar(char c) {
            update(2, c);
            return this;
        }

        @Override // com.google.common.hash.AbstractHasher, com.google.common.hash.Hasher, com.google.common.hash.PrimitiveSink
        public Hasher putString(CharSequence charSequence, Charset charset) {
            if (Charsets.UTF_8.equals(charset)) {
                int length = charSequence.length();
                int i = 0;
                while (true) {
                    int i2 = i + 4;
                    if (i2 > length) {
                        break;
                    }
                    char cCharAt = charSequence.charAt(i);
                    char cCharAt2 = charSequence.charAt(i + 1);
                    char cCharAt3 = charSequence.charAt(i + 2);
                    char cCharAt4 = charSequence.charAt(i + 3);
                    if (cCharAt >= 128 || cCharAt2 >= 128 || cCharAt3 >= 128 || cCharAt4 >= 128) {
                        break;
                    }
                    update(4, (cCharAt2 << '\b') | cCharAt | (cCharAt3 << 16) | (cCharAt4 << 24));
                    i = i2;
                }
                while (i < length) {
                    char cCharAt5 = charSequence.charAt(i);
                    if (cCharAt5 < 128) {
                        update(1, cCharAt5);
                    } else if (cCharAt5 < 2048) {
                        update(2, Murmur3_32HashFunction.charToTwoUtf8Bytes(cCharAt5));
                    } else if (cCharAt5 < 55296 || cCharAt5 > 57343) {
                        update(3, Murmur3_32HashFunction.charToThreeUtf8Bytes(cCharAt5));
                    } else {
                        int iCodePointAt = Character.codePointAt(charSequence, i);
                        if (iCodePointAt != cCharAt5) {
                            i++;
                            update(4, Murmur3_32HashFunction.codePointToFourUtf8Bytes(iCodePointAt));
                        } else {
                            putBytes(charSequence.subSequence(i, length).toString().getBytes(charset));
                            return this;
                        }
                    }
                    i++;
                }
                return this;
            }
            return super.putString(charSequence, charset);
        }

        @Override // com.google.common.hash.Hasher
        public HashCode hash() {
            Preconditions.checkState(!this.isDone);
            this.isDone = true;
            int iMixK1 = this.f336h1 ^ Murmur3_32HashFunction.mixK1((int) this.buffer);
            this.f336h1 = iMixK1;
            return Murmur3_32HashFunction.fmix(iMixK1, this.length);
        }
    }
}
