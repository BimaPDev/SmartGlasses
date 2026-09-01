package com.fasterxml.jackson.databind;

import java.io.IOException;

/* JADX INFO: loaded from: classes.dex */
public abstract class KeyDeserializer {

    public static abstract class None extends KeyDeserializer {
    }

    public abstract Object deserializeKey(String str, DeserializationContext deserializationContext) throws IOException;
}
