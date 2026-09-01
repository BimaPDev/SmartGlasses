package com.google.common.collect;

import java.util.Collection;
import java.util.List;
import java.util.Map;
import javax.annotation.CheckForNull;

/* JADX INFO: loaded from: classes2.dex */
@ElementTypesAreNonnullByDefault
public interface ListMultimap<K, V> extends Multimap<K, V> {
    Map<K, Collection<V>> asMap();

    boolean equals(@CheckForNull Object obj);

    @Override // 
    List<V> get(@ParametricNullness K k);

    @Override // 
    List<V> removeAll(@CheckForNull Object obj);

    @Override // 
    List<V> replaceValues(@ParametricNullness K k, Iterable<? extends V> iterable);
}
