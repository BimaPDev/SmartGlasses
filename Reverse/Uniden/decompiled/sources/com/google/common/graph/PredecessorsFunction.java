package com.google.common.graph;

import com.google.errorprone.annotations.DoNotMock;

/* JADX INFO: loaded from: classes2.dex */
@DoNotMock("Implement with a lambda, or use GraphBuilder to build a Graph with the desired edges")
@ElementTypesAreNonnullByDefault
public interface PredecessorsFunction<N> {
    Iterable<? extends N> predecessors(N n);
}
