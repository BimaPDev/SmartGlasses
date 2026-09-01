package com.fasterxml.jackson.core.async;

import java.io.IOException;

/* JADX INFO: loaded from: classes.dex */
public interface ByteArrayFeeder extends NonBlockingInputFeeder {
    void feedInput(byte[] bArr, int i, int i2) throws IOException;
}
