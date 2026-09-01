package com.google.common.cache;

import javax.annotation.CheckForNull;

/* JADX INFO: loaded from: classes2.dex */
@ElementTypesAreNonnullByDefault
interface ReferenceEntry<K, V> {
    long getAccessTime();

    int getHash();

    @CheckForNull
    K getKey();

    @CheckForNull
    ReferenceEntry<K, V> getNext();

    ReferenceEntry<K, V> getNextInAccessQueue();

    ReferenceEntry<K, V> getNextInWriteQueue();

    ReferenceEntry<K, V> getPreviousInAccessQueue();

    ReferenceEntry<K, V> getPreviousInWriteQueue();

    @CheckForNull
    LocalCache.ValueReference<K, V> getValueReference();

    long getWriteTime();

    void setAccessTime(long j);

    void setNextInAccessQueue(ReferenceEntry<K, V> referenceEntry);

    void setNextInWriteQueue(ReferenceEntry<K, V> referenceEntry);

    void setPreviousInAccessQueue(ReferenceEntry<K, V> referenceEntry);

    void setPreviousInWriteQueue(ReferenceEntry<K, V> referenceEntry);

    void setValueReference(LocalCache.ValueReference<K, V> valueReference);

    void setWriteTime(long j);
}
