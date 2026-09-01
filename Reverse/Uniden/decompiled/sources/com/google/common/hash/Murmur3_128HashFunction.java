package com.google.common.hash;

import com.google.common.primitives.UnsignedBytes;
import com.google.errorprone.annotations.Immutable;
import java.io.Serializable;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import javax.annotation.CheckForNull;

/* JADX INFO: loaded from: classes2.dex */
@Immutable
@ElementTypesAreNonnullByDefault
final class Murmur3_128HashFunction extends AbstractHashFunction implements Serializable {
    private static final long serialVersionUID = 0;
    private final int seed;
    static final HashFunction MURMUR3_128 = new Murmur3_128HashFunction(0);
    static final HashFunction GOOD_FAST_HASH_128 = new Murmur3_128HashFunction(Hashing.GOOD_FAST_HASH_SEED);

    @Override // com.google.common.hash.HashFunction
    public int bits() {
        return 128;
    }

    Murmur3_128HashFunction(int i) {
        this.seed = i;
    }

    @Override // com.google.common.hash.HashFunction
    public Hasher newHasher() {
        return new Murmur3_128Hasher(this.seed);
    }

    public String toString() {
        return new StringBuilder(32).append("Hashing.murmur3_128(").append(this.seed).append(")").toString();
    }

    public boolean equals(@CheckForNull Object obj) {
        return (obj instanceof Murmur3_128HashFunction) && this.seed == ((Murmur3_128HashFunction) obj).seed;
    }

    public int hashCode() {
        return getClass().hashCode() ^ this.seed;
    }

    private static final class Murmur3_128Hasher extends AbstractStreamingHasher {

        /* JADX INFO: renamed from: C1 */
        private static final long f330C1 = -8663945395140668459L;

        /* JADX INFO: renamed from: C2 */
        private static final long f331C2 = 5545529020109919103L;
        private static final int CHUNK_SIZE = 16;

        /* JADX INFO: renamed from: h1 */
        private long f332h1;

        /* JADX INFO: renamed from: h2 */
        private long f333h2;
        private int length;

        private static long fmix64(long j) {
            long j2 = (j ^ (j >>> 33)) * (-49064778989728563L);
            long j3 = (j2 ^ (j2 >>> 33)) * (-4265267296055464877L);
            return j3 ^ (j3 >>> 33);
        }

        Murmur3_128Hasher(int i) {
            super(16);
            long j = i;
            this.f332h1 = j;
            this.f333h2 = j;
            this.length = 0;
        }

        @Override // com.google.common.hash.AbstractStreamingHasher
        protected void process(ByteBuffer byteBuffer) {
            bmix64(byteBuffer.getLong(), byteBuffer.getLong());
            this.length += 16;
        }

        private void bmix64(long j, long j2) {
            long jMixK1 = mixK1(j) ^ this.f332h1;
            this.f332h1 = jMixK1;
            long jRotateLeft = Long.rotateLeft(jMixK1, 27);
            long j3 = this.f333h2;
            this.f332h1 = ((jRotateLeft + j3) * 5) + 1390208809;
            long jMixK2 = mixK2(j2) ^ j3;
            this.f333h2 = jMixK2;
            this.f333h2 = ((Long.rotateLeft(jMixK2, 31) + this.f332h1) * 5) + 944331445;
        }

        /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
        @Override // com.google.common.hash.AbstractStreamingHasher
        protected void processRemaining(ByteBuffer byteBuffer) {
            long j;
            long j2;
            long j3;
            long j4;
            long j5;
            long j6;
            long j7;
            this.length += byteBuffer.remaining();
            long j8 = 0;
            switch (byteBuffer.remaining()) {
                case 1:
                    j = 0;
                    j7 = j ^ ((long) UnsignedBytes.toInt(byteBuffer.get(0)));
                    this.f332h1 = mixK1(j7) ^ this.f332h1;
                    this.f333h2 ^= mixK2(j8);
                    return;
                case 2:
                    j2 = 0;
                    j = j2 ^ (((long) UnsignedBytes.toInt(byteBuffer.get(1))) << 8);
                    j7 = j ^ ((long) UnsignedBytes.toInt(byteBuffer.get(0)));
                    this.f332h1 = mixK1(j7) ^ this.f332h1;
                    this.f333h2 ^= mixK2(j8);
                    return;
                case 3:
                    j3 = 0;
                    j2 = j3 ^ (((long) UnsignedBytes.toInt(byteBuffer.get(2))) << 16);
                    j = j2 ^ (((long) UnsignedBytes.toInt(byteBuffer.get(1))) << 8);
                    j7 = j ^ ((long) UnsignedBytes.toInt(byteBuffer.get(0)));
                    this.f332h1 = mixK1(j7) ^ this.f332h1;
                    this.f333h2 ^= mixK2(j8);
                    return;
                case 4:
                    j4 = 0;
                    j3 = j4 ^ (((long) UnsignedBytes.toInt(byteBuffer.get(3))) << 24);
                    j2 = j3 ^ (((long) UnsignedBytes.toInt(byteBuffer.get(2))) << 16);
                    j = j2 ^ (((long) UnsignedBytes.toInt(byteBuffer.get(1))) << 8);
                    j7 = j ^ ((long) UnsignedBytes.toInt(byteBuffer.get(0)));
                    this.f332h1 = mixK1(j7) ^ this.f332h1;
                    this.f333h2 ^= mixK2(j8);
                    return;
                case 5:
                    j5 = 0;
                    j4 = j5 ^ (((long) UnsignedBytes.toInt(byteBuffer.get(4))) << 32);
                    j3 = j4 ^ (((long) UnsignedBytes.toInt(byteBuffer.get(3))) << 24);
                    j2 = j3 ^ (((long) UnsignedBytes.toInt(byteBuffer.get(2))) << 16);
                    j = j2 ^ (((long) UnsignedBytes.toInt(byteBuffer.get(1))) << 8);
                    j7 = j ^ ((long) UnsignedBytes.toInt(byteBuffer.get(0)));
                    this.f332h1 = mixK1(j7) ^ this.f332h1;
                    this.f333h2 ^= mixK2(j8);
                    return;
                case 6:
                    j6 = 0;
                    j5 = j6 ^ (((long) UnsignedBytes.toInt(byteBuffer.get(5))) << 40);
                    j4 = j5 ^ (((long) UnsignedBytes.toInt(byteBuffer.get(4))) << 32);
                    j3 = j4 ^ (((long) UnsignedBytes.toInt(byteBuffer.get(3))) << 24);
                    j2 = j3 ^ (((long) UnsignedBytes.toInt(byteBuffer.get(2))) << 16);
                    j = j2 ^ (((long) UnsignedBytes.toInt(byteBuffer.get(1))) << 8);
                    j7 = j ^ ((long) UnsignedBytes.toInt(byteBuffer.get(0)));
                    this.f332h1 = mixK1(j7) ^ this.f332h1;
                    this.f333h2 ^= mixK2(j8);
                    return;
                case 7:
                    j6 = ((long) UnsignedBytes.toInt(byteBuffer.get(6))) << 48;
                    j5 = j6 ^ (((long) UnsignedBytes.toInt(byteBuffer.get(5))) << 40);
                    j4 = j5 ^ (((long) UnsignedBytes.toInt(byteBuffer.get(4))) << 32);
                    j3 = j4 ^ (((long) UnsignedBytes.toInt(byteBuffer.get(3))) << 24);
                    j2 = j3 ^ (((long) UnsignedBytes.toInt(byteBuffer.get(2))) << 16);
                    j = j2 ^ (((long) UnsignedBytes.toInt(byteBuffer.get(1))) << 8);
                    j7 = j ^ ((long) UnsignedBytes.toInt(byteBuffer.get(0)));
                    this.f332h1 = mixK1(j7) ^ this.f332h1;
                    this.f333h2 ^= mixK2(j8);
                    return;
                case 8:
                    j7 = byteBuffer.getLong();
                    this.f332h1 = mixK1(j7) ^ this.f332h1;
                    this.f333h2 ^= mixK2(j8);
                    return;
                case 9:
                    j8 ^= (long) UnsignedBytes.toInt(byteBuffer.get(8));
                    j7 = byteBuffer.getLong();
                    this.f332h1 = mixK1(j7) ^ this.f332h1;
                    this.f333h2 ^= mixK2(j8);
                    return;
                case 10:
                    j8 ^= ((long) UnsignedBytes.toInt(byteBuffer.get(9))) << 8;
                    j8 ^= (long) UnsignedBytes.toInt(byteBuffer.get(8));
                    j7 = byteBuffer.getLong();
                    this.f332h1 = mixK1(j7) ^ this.f332h1;
                    this.f333h2 ^= mixK2(j8);
                    return;
                case 11:
                    j8 ^= ((long) UnsignedBytes.toInt(byteBuffer.get(10))) << 16;
                    j8 ^= ((long) UnsignedBytes.toInt(byteBuffer.get(9))) << 8;
                    j8 ^= (long) UnsignedBytes.toInt(byteBuffer.get(8));
                    j7 = byteBuffer.getLong();
                    this.f332h1 = mixK1(j7) ^ this.f332h1;
                    this.f333h2 ^= mixK2(j8);
                    return;
                case 12:
                    j8 ^= ((long) UnsignedBytes.toInt(byteBuffer.get(11))) << 24;
                    j8 ^= ((long) UnsignedBytes.toInt(byteBuffer.get(10))) << 16;
                    j8 ^= ((long) UnsignedBytes.toInt(byteBuffer.get(9))) << 8;
                    j8 ^= (long) UnsignedBytes.toInt(byteBuffer.get(8));
                    j7 = byteBuffer.getLong();
                    this.f332h1 = mixK1(j7) ^ this.f332h1;
                    this.f333h2 ^= mixK2(j8);
                    return;
                case 13:
                    j8 ^= ((long) UnsignedBytes.toInt(byteBuffer.get(12))) << 32;
                    j8 ^= ((long) UnsignedBytes.toInt(byteBuffer.get(11))) << 24;
                    j8 ^= ((long) UnsignedBytes.toInt(byteBuffer.get(10))) << 16;
                    j8 ^= ((long) UnsignedBytes.toInt(byteBuffer.get(9))) << 8;
                    j8 ^= (long) UnsignedBytes.toInt(byteBuffer.get(8));
                    j7 = byteBuffer.getLong();
                    this.f332h1 = mixK1(j7) ^ this.f332h1;
                    this.f333h2 ^= mixK2(j8);
                    return;
                case 14:
                    j8 ^= ((long) UnsignedBytes.toInt(byteBuffer.get(13))) << 40;
                    j8 ^= ((long) UnsignedBytes.toInt(byteBuffer.get(12))) << 32;
                    j8 ^= ((long) UnsignedBytes.toInt(byteBuffer.get(11))) << 24;
                    j8 ^= ((long) UnsignedBytes.toInt(byteBuffer.get(10))) << 16;
                    j8 ^= ((long) UnsignedBytes.toInt(byteBuffer.get(9))) << 8;
                    j8 ^= (long) UnsignedBytes.toInt(byteBuffer.get(8));
                    j7 = byteBuffer.getLong();
                    this.f332h1 = mixK1(j7) ^ this.f332h1;
                    this.f333h2 ^= mixK2(j8);
                    return;
                case 15:
                    j8 = ((long) UnsignedBytes.toInt(byteBuffer.get(14))) << 48;
                    j8 ^= ((long) UnsignedBytes.toInt(byteBuffer.get(13))) << 40;
                    j8 ^= ((long) UnsignedBytes.toInt(byteBuffer.get(12))) << 32;
                    j8 ^= ((long) UnsignedBytes.toInt(byteBuffer.get(11))) << 24;
                    j8 ^= ((long) UnsignedBytes.toInt(byteBuffer.get(10))) << 16;
                    j8 ^= ((long) UnsignedBytes.toInt(byteBuffer.get(9))) << 8;
                    j8 ^= (long) UnsignedBytes.toInt(byteBuffer.get(8));
                    j7 = byteBuffer.getLong();
                    this.f332h1 = mixK1(j7) ^ this.f332h1;
                    this.f333h2 ^= mixK2(j8);
                    return;
                default:
                    throw new AssertionError("Should never get here.");
            }
        }

        @Override // com.google.common.hash.AbstractStreamingHasher
        protected HashCode makeHash() {
            long j = this.f332h1;
            int i = this.length;
            long j2 = j ^ ((long) i);
            long j3 = this.f333h2 ^ ((long) i);
            long j4 = j2 + j3;
            this.f332h1 = j4;
            this.f333h2 = j3 + j4;
            this.f332h1 = fmix64(j4);
            long jFmix64 = fmix64(this.f333h2);
            long j5 = this.f332h1 + jFmix64;
            this.f332h1 = j5;
            this.f333h2 = jFmix64 + j5;
            return HashCode.fromBytesNoCopy(ByteBuffer.wrap(new byte[16]).order(ByteOrder.LITTLE_ENDIAN).putLong(this.f332h1).putLong(this.f333h2).array());
        }

        private static long mixK1(long j) {
            return Long.rotateLeft(j * f330C1, 31) * f331C2;
        }

        private static long mixK2(long j) {
            return Long.rotateLeft(j * f331C2, 33) * f330C1;
        }
    }
}
