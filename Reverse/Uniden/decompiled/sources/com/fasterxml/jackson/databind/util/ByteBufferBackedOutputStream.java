package com.fasterxml.jackson.databind.util;

import java.io.IOException;
import java.io.OutputStream;
import java.nio.ByteBuffer;

/* JADX INFO: loaded from: classes.dex */
public class ByteBufferBackedOutputStream extends OutputStream {

    /* JADX INFO: renamed from: _b */
    protected final ByteBuffer f208_b;

    public ByteBufferBackedOutputStream(ByteBuffer byteBuffer) {
        this.f208_b = byteBuffer;
    }

    @Override // java.io.OutputStream
    public void write(int i) throws IOException {
        this.f208_b.put((byte) i);
    }

    @Override // java.io.OutputStream
    public void write(byte[] bArr, int i, int i2) throws IOException {
        this.f208_b.put(bArr, i, i2);
    }
}
