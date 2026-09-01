package com.google.common.graph;

import com.google.common.base.Preconditions;
import com.google.common.collect.ImmutableList;
import com.google.common.collect.UnmodifiableIterator;
import java.util.Collection;
import java.util.Objects;

/* JADX INFO: loaded from: classes2.dex */
@ElementTypesAreNonnullByDefault
final class StandardMutableNetwork<N, E> extends StandardNetwork<N, E> implements MutableNetwork<N, E> {
    StandardMutableNetwork(NetworkBuilder<? super N, ? super E> networkBuilder) {
        super(networkBuilder);
    }

    @Override // com.google.common.graph.MutableNetwork
    public boolean addNode(N n) {
        Preconditions.checkNotNull(n, "node");
        if (containsNode(n)) {
            return false;
        }
        addNodeInternal(n);
        return true;
    }

    private NetworkConnections<N, E> addNodeInternal(N n) {
        NetworkConnections<N, E> networkConnectionsNewConnections = newConnections();
        Preconditions.checkState(this.nodeConnections.put(n, networkConnectionsNewConnections) == null);
        return networkConnectionsNewConnections;
    }

    @Override // com.google.common.graph.MutableNetwork
    public boolean addEdge(N n, N n2, E e) {
        Preconditions.checkNotNull(n, "nodeU");
        Preconditions.checkNotNull(n2, "nodeV");
        Preconditions.checkNotNull(e, "edge");
        if (containsEdge(e)) {
            EndpointPair<N> endpointPairIncidentNodes = incidentNodes(e);
            EndpointPair endpointPairM389of = EndpointPair.m389of(this, n, n2);
            Preconditions.checkArgument(endpointPairIncidentNodes.equals(endpointPairM389of), "Edge %s already exists between the following nodes: %s, so it cannot be reused to connect the following nodes: %s.", e, endpointPairIncidentNodes, endpointPairM389of);
            return false;
        }
        NetworkConnections<N, E> networkConnectionsAddNodeInternal = this.nodeConnections.get(n);
        if (!allowsParallelEdges()) {
            Preconditions.checkArgument(networkConnectionsAddNodeInternal == null || !networkConnectionsAddNodeInternal.successors().contains(n2), "Nodes %s and %s are already connected by a different edge. To construct a graph that allows parallel edges, call allowsParallelEdges(true) on the Builder.", n, n2);
        }
        boolean zEquals = n.equals(n2);
        if (!allowsSelfLoops()) {
            Preconditions.checkArgument(!zEquals, "Cannot add self-loop edge on node %s, as self-loops are not allowed. To construct a graph that allows self-loops, call allowsSelfLoops(true) on the Builder.", n);
        }
        if (networkConnectionsAddNodeInternal == null) {
            networkConnectionsAddNodeInternal = addNodeInternal(n);
        }
        networkConnectionsAddNodeInternal.addOutEdge(e, n2);
        NetworkConnections<N, E> networkConnectionsAddNodeInternal2 = this.nodeConnections.get(n2);
        if (networkConnectionsAddNodeInternal2 == null) {
            networkConnectionsAddNodeInternal2 = addNodeInternal(n2);
        }
        networkConnectionsAddNodeInternal2.addInEdge(e, n, zEquals);
        this.edgeToReferenceNode.put(e, n);
        return true;
    }

    @Override // com.google.common.graph.MutableNetwork
    public boolean addEdge(EndpointPair<N> endpointPair, E e) {
        validateEndpoints(endpointPair);
        return addEdge(endpointPair.nodeU(), endpointPair.nodeV(), e);
    }

    @Override // com.google.common.graph.MutableNetwork
    public boolean removeNode(N n) {
        Preconditions.checkNotNull(n, "node");
        NetworkConnections<N, E> networkConnections = this.nodeConnections.get(n);
        if (networkConnections == null) {
            return false;
        }
        UnmodifiableIterator<E> it = ImmutableList.copyOf((Collection) networkConnections.incidentEdges()).iterator();
        while (it.hasNext()) {
            removeEdge(it.next());
        }
        this.nodeConnections.remove(n);
        return true;
    }

    @Override // com.google.common.graph.MutableNetwork
    public boolean removeEdge(E e) {
        Preconditions.checkNotNull(e, "edge");
        N n = this.edgeToReferenceNode.get(e);
        boolean z = false;
        if (n == null) {
            return false;
        }
        NetworkConnections networkConnections = (NetworkConnections) Objects.requireNonNull(this.nodeConnections.get(n));
        Object objAdjacentNode = networkConnections.adjacentNode(e);
        NetworkConnections networkConnections2 = (NetworkConnections) Objects.requireNonNull(this.nodeConnections.get(objAdjacentNode));
        networkConnections.removeOutEdge(e);
        if (allowsSelfLoops() && n.equals(objAdjacentNode)) {
            z = true;
        }
        networkConnections2.removeInEdge(e, z);
        this.edgeToReferenceNode.remove(e);
        return true;
    }

    private NetworkConnections<N, E> newConnections() {
        if (isDirected()) {
            if (allowsParallelEdges()) {
                return DirectedMultiNetworkConnections.m386of();
            }
            return DirectedNetworkConnections.m387of();
        }
        if (allowsParallelEdges()) {
            return UndirectedMultiNetworkConnections.m392of();
        }
        return UndirectedNetworkConnections.m393of();
    }
}
