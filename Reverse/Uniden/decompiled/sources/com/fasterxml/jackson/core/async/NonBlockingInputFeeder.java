package com.fasterxml.jackson.core.async;

/* JADX INFO: loaded from: classes.dex */
public interface NonBlockingInputFeeder {
    void endOfInput();

    boolean needMoreInput();
}
