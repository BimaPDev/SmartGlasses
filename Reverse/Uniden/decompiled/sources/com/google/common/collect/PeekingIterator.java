package com.google.common.collect;

import com.google.errorprone.annotations.DoNotMock;
import java.util.Iterator;

/* JADX INFO: loaded from: classes2.dex */
@DoNotMock("Use Iterators.peekingIterator")
@ElementTypesAreNonnullByDefault
public interface PeekingIterator<E> extends Iterator<E> {
    @Override // java.util.Iterator
    @ParametricNullness
    E next();

    @ParametricNullness
    E peek();

    @Override // java.util.Iterator
    void remove();
}
