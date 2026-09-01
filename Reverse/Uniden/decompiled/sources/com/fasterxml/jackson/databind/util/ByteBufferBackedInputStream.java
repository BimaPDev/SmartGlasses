package com.fasterxml.jackson.databind.util;

import java.io.IOException;
import java.io.InputStream;
import java.nio.ByteBuffer;

/* JADX INFO: loaded from: classes.dex */
public class ByteBufferBackedInputStream extends InputStream {

    /* JADX INFO: renamed from: _b */
    protected final ByteBuffer f207_b;

    public ByteBufferBackedInputStream(ByteBuffer byteBuffer) {
        this.f207_b = byteBuffer;
    }

    @Override // java.io.InputStream
    public int available() {
        return this.f207_b.remaining();
    }

    @Override // java.io.InputStream
    public int read() throws IOException {
        if (this.f207_b.hasRemaining()) {
            return this.f207_b.get() & 255;
        }
        return -1;
    }

    @Override // java.io.InputStream
    public int read(byte[] bArr, int i, int i2) throws IOException {
        if (!this.f207_b.hasRemaining()) {
            return -1;
        }
        int iMin = Math.min(i2, this.f207_b.remaining());
        this.f207_b.get(bArr, i, iMin);
        return iMin;
    }
}
