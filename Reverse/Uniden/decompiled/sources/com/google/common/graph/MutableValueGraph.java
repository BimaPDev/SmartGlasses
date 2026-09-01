package com.google.common.graph;

import javax.annotation.CheckForNull;

/* JADX INFO: loaded from: classes2.dex */
@ElementTypesAreNonnullByDefault
public interface MutableValueGraph<N, V> extends ValueGraph<N, V> {
    boolean addNode(N n);

    @CheckForNull
    V putEdgeValue(EndpointPair<N> endpointPair, V v);

    @CheckForNull
    V putEdgeValue(N n, N n2, V v);

    @CheckForNull
    V removeEdge(EndpointPair<N> endpointPair);

    @CheckForNull
    V removeEdge(N n, N n2);

    boolean removeNode(N n);
}
