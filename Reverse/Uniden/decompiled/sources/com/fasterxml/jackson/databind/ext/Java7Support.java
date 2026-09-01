package com.fasterxml.jackson.databind.ext;

import com.fasterxml.jackson.databind.PropertyName;
import com.fasterxml.jackson.databind.introspect.Annotated;
import com.fasterxml.jackson.databind.introspect.AnnotatedParameter;
import com.fasterxml.jackson.databind.util.ClassUtil;

/* JADX INFO: loaded from: classes.dex */
public abstract class Java7Support {
    private static final Java7Support IMPL;

    public static Java7Support instance() {
        return IMPL;
    }

    public abstract PropertyName findConstructorName(AnnotatedParameter annotatedParameter);

    public abstract Boolean findTransient(Annotated annotated);

    public abstract Boolean hasCreatorAnnotation(Annotated annotated);

    static {
        Java7Support java7Support;
        try {
            java7Support = (Java7Support) ClassUtil.createInstance(Class.forName("com.fasterxml.jackson.databind.ext.Java7SupportImpl"), false);
        } catch (Throwable unused) {
            java7Support = null;
        }
        IMPL = java7Support;
    }
}
