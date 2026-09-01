package com.fasterxml.jackson.databind.util;

import java.util.Iterator;
import java.util.NoSuchElementException;

/* JADX INFO: loaded from: classes.dex */
public class ArrayIterator<T> implements Iterator<T>, Iterable<T> {

    /* JADX INFO: renamed from: _a */
    private final T[] f206_a;
    private int _index = 0;

    @Override // java.lang.Iterable
    public Iterator<T> iterator() {
        return this;
    }

    public ArrayIterator(T[] tArr) {
        this.f206_a = tArr;
    }

    @Override // java.util.Iterator
    public boolean hasNext() {
        return this._index < this.f206_a.length;
    }

    @Override // java.util.Iterator
    public T next() {
        int i = this._index;
        T[] tArr = this.f206_a;
        if (i >= tArr.length) {
            throw new NoSuchElementException();
        }
        this._index = i + 1;
        return tArr[i];
    }

    @Override // java.util.Iterator
    public void remove() {
        throw new UnsupportedOperationException();
    }
}
