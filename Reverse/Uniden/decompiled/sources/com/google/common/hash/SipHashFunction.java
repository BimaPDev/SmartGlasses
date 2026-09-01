package com.google.common.hash;

import com.google.common.base.Preconditions;
import com.google.errorprone.annotations.Immutable;
import java.io.Serializable;
import java.nio.ByteBuffer;
import javax.annotation.CheckForNull;

/* JADX INFO: loaded from: classes2.dex */
@Immutable
@ElementTypesAreNonnullByDefault
final class SipHashFunction extends AbstractHashFunction implements Serializable {
    static final HashFunction SIP_HASH_24 = new SipHashFunction(2, 4, 506097522914230528L, 1084818905618843912L);
    private static final long serialVersionUID = 0;

    /* JADX INFO: renamed from: c */
    private final int f337c;

    /* JADX INFO: renamed from: d */
    private final int f338d;

    /* JADX INFO: renamed from: k0 */
    private final long f339k0;

    /* JADX INFO: renamed from: k1 */
    private final long f340k1;

    @Override // com.google.common.hash.HashFunction
    public int bits() {
        return 64;
    }

    SipHashFunction(int i, int i2, long j, long j2) {
        Preconditions.checkArgument(i > 0, "The number of SipRound iterations (c=%s) during Compression must be positive.", i);
        Preconditions.checkArgument(i2 > 0, "The number of SipRound iterations (d=%s) during Finalization must be positive.", i2);
        this.f337c = i;
        this.f338d = i2;
        this.f339k0 = j;
        this.f340k1 = j2;
    }

    @Override // com.google.common.hash.HashFunction
    public Hasher newHasher() {
        return new SipHasher(this.f337c, this.f338d, this.f339k0, this.f340k1);
    }

    public String toString() {
        int i = this.f337c;
        int i2 = this.f338d;
        long j = this.f339k0;
        return new StringBuilder(81).append("Hashing.sipHash").append(i).append(i2).append("(").append(j).append(", ").append(this.f340k1).append(")").toString();
    }

    public boolean equals(@CheckForNull Object obj) {
        if (!(obj instanceof SipHashFunction)) {
            return false;
        }
        SipHashFunction sipHashFunction = (SipHashFunction) obj;
        return this.f337c == sipHashFunction.f337c && this.f338d == sipHashFunction.f338d && this.f339k0 == sipHashFunction.f339k0 && this.f340k1 == sipHashFunction.f340k1;
    }

    public int hashCode() {
        return (int) ((((long) ((getClass().hashCode() ^ this.f337c) ^ this.f338d)) ^ this.f339k0) ^ this.f340k1);
    }

    private static final class SipHasher extends AbstractStreamingHasher {
        private static final int CHUNK_SIZE = 8;

        /* JADX INFO: renamed from: b */
        private long f341b;

        /* JADX INFO: renamed from: c */
        private final int f342c;

        /* JADX INFO: renamed from: d */
        private final int f343d;
        private long finalM;

        /* JADX INFO: renamed from: v0 */
        private long f344v0;

        /* JADX INFO: renamed from: v1 */
        private long f345v1;

        /* JADX INFO: renamed from: v2 */
        private long f346v2;

        /* JADX INFO: renamed from: v3 */
        private long f347v3;

        SipHasher(int i, int i2, long j, long j2) {
            super(8);
            this.f341b = 0L;
            this.finalM = 0L;
            this.f342c = i;
            this.f343d = i2;
            this.f344v0 = 8317987319222330741L ^ j;
            this.f345v1 = 7237128888997146477L ^ j2;
            this.f346v2 = 7816392313619706465L ^ j;
            this.f347v3 = 8387220255154660723L ^ j2;
        }

        @Override // com.google.common.hash.AbstractStreamingHasher
        protected void process(ByteBuffer byteBuffer) {
            this.f341b += 8;
            processM(byteBuffer.getLong());
        }

        @Override // com.google.common.hash.AbstractStreamingHasher
        protected void processRemaining(ByteBuffer byteBuffer) {
            this.f341b += (long) byteBuffer.remaining();
            int i = 0;
            while (byteBuffer.hasRemaining()) {
                this.finalM ^= (((long) byteBuffer.get()) & 255) << i;
                i += 8;
            }
        }

        @Override // com.google.common.hash.AbstractStreamingHasher
        protected HashCode makeHash() {
            long j = this.finalM ^ (this.f341b << 56);
            this.finalM = j;
            processM(j);
            this.f346v2 ^= 255;
            sipRound(this.f343d);
            return HashCode.fromLong(((this.f344v0 ^ this.f345v1) ^ this.f346v2) ^ this.f347v3);
        }

        private void processM(long j) {
            this.f347v3 ^= j;
            sipRound(this.f342c);
            this.f344v0 = j ^ this.f344v0;
        }

        private void sipRound(int i) {
            for (int i2 = 0; i2 < i; i2++) {
                long j = this.f344v0;
                long j2 = this.f345v1;
                this.f344v0 = j + j2;
                this.f346v2 += this.f347v3;
                this.f345v1 = Long.rotateLeft(j2, 13);
                long jRotateLeft = Long.rotateLeft(this.f347v3, 16);
                long j3 = this.f345v1;
                long j4 = this.f344v0;
                this.f345v1 = j3 ^ j4;
                this.f347v3 = jRotateLeft ^ this.f346v2;
                long jRotateLeft2 = Long.rotateLeft(j4, 32);
                long j5 = this.f346v2;
                long j6 = this.f345v1;
                this.f346v2 = j5 + j6;
                this.f344v0 = jRotateLeft2 + this.f347v3;
                this.f345v1 = Long.rotateLeft(j6, 17);
                long jRotateLeft3 = Long.rotateLeft(this.f347v3, 21);
                long j7 = this.f345v1;
                long j8 = this.f346v2;
                this.f345v1 = j7 ^ j8;
                this.f347v3 = jRotateLeft3 ^ this.f344v0;
                this.f346v2 = Long.rotateLeft(j8, 32);
            }
        }
    }
}
