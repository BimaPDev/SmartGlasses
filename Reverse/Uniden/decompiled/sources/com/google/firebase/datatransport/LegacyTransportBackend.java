package com.google.firebase.datatransport;

import java.lang.annotation.ElementType;
import java.lang.annotation.Target;
import javax.inject.Qualifier;

/* JADX INFO: loaded from: classes2.dex */
@Target({ElementType.PARAMETER, ElementType.METHOD, ElementType.FIELD})
@Qualifier
public @interface LegacyTransportBackend {
}
