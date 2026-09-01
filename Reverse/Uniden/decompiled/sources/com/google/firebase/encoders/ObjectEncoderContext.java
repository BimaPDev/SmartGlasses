package com.google.firebase.encoders;

import java.io.IOException;

/* JADX INFO: loaded from: classes2.dex */
public interface ObjectEncoderContext {
    ObjectEncoderContext add(FieldDescriptor fieldDescriptor, double d) throws IOException;

    ObjectEncoderContext add(FieldDescriptor fieldDescriptor, float f) throws IOException;

    ObjectEncoderContext add(FieldDescriptor fieldDescriptor, int i) throws IOException;

    ObjectEncoderContext add(FieldDescriptor fieldDescriptor, long j) throws IOException;

    ObjectEncoderContext add(FieldDescriptor fieldDescriptor, Object obj) throws IOException;

    ObjectEncoderContext add(FieldDescriptor fieldDescriptor, boolean z) throws IOException;

    @Deprecated
    ObjectEncoderContext add(String str, double d) throws IOException;

    @Deprecated
    ObjectEncoderContext add(String str, int i) throws IOException;

    @Deprecated
    ObjectEncoderContext add(String str, long j) throws IOException;

    @Deprecated
    ObjectEncoderContext add(String str, Object obj) throws IOException;

    @Deprecated
    ObjectEncoderContext add(String str, boolean z) throws IOException;

    ObjectEncoderContext inline(Object obj) throws IOException;

    ObjectEncoderContext nested(FieldDescriptor fieldDescriptor) throws IOException;

    ObjectEncoderContext nested(String str) throws IOException;
}
