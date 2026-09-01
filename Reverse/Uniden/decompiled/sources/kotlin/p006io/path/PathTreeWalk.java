package kotlin.p006io.path;

import androidx.constraintlayout.widget.ConstraintLayout;
import java.nio.file.FileSystemLoopException;
import java.nio.file.Files;
import java.nio.file.LinkOption;
import java.nio.file.Path;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.ArraysKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.RestrictedSuspendLambda;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.InlineMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.sequences.Sequence;
import kotlin.sequences.SequenceScope;
import kotlin.sequences.SequencesKt;

/* JADX INFO: compiled from: PathTreeWalk.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000V\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010(\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010 \n\u0002\b\u0002\b\u0001\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\u001d\u0012\u0006\u0010\u0003\u001a\u00020\u0002\u0012\u000e\u0010\u0004\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00060\u0005¢\u0006\u0002\u0010\u0007J\u000e\u0010\u0014\u001a\b\u0012\u0004\u0012\u00020\u00020\u0015H\u0002J\u000e\u0010\u0016\u001a\b\u0012\u0004\u0012\u00020\u00020\u0015H\u0002J\u000f\u0010\u0017\u001a\b\u0012\u0004\u0012\u00020\u00020\u0015H\u0096\u0002JB\u0010\u0018\u001a\u00020\u0019*\b\u0012\u0004\u0012\u00020\u00020\u001a2\u0006\u0010\u001b\u001a\u00020\u001c2\u0006\u0010\u001d\u001a\u00020\u001e2\u0018\u0010\u001f\u001a\u0014\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u001c0!\u0012\u0004\u0012\u00020\u00190 H\u0082H¢\u0006\u0002\u0010\"R\u0014\u0010\b\u001a\u00020\t8BX\u0082\u0004¢\u0006\u0006\u001a\u0004\b\n\u0010\u000bR\u0014\u0010\f\u001a\u00020\t8BX\u0082\u0004¢\u0006\u0006\u001a\u0004\b\r\u0010\u000bR\u0014\u0010\u000e\u001a\u00020\t8BX\u0082\u0004¢\u0006\u0006\u001a\u0004\b\u000e\u0010\u000bR\u001a\u0010\u000f\u001a\b\u0012\u0004\u0012\u00020\u00100\u00058BX\u0082\u0004¢\u0006\u0006\u001a\u0004\b\u0011\u0010\u0012R\u0018\u0010\u0004\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00060\u0005X\u0082\u0004¢\u0006\u0004\n\u0002\u0010\u0013R\u000e\u0010\u0003\u001a\u00020\u0002X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006#"}, m491d2 = {"Lkotlin/io/path/PathTreeWalk;", "Lkotlin/sequences/Sequence;", "Ljava/nio/file/Path;", "start", "options", "", "Lkotlin/io/path/PathWalkOption;", "(Ljava/nio/file/Path;[Lkotlin/io/path/PathWalkOption;)V", "followLinks", "", "getFollowLinks", "()Z", "includeDirectories", "getIncludeDirectories", "isBFS", "linkOptions", "Ljava/nio/file/LinkOption;", "getLinkOptions", "()[Ljava/nio/file/LinkOption;", "[Lkotlin/io/path/PathWalkOption;", "bfsIterator", "", "dfsIterator", "iterator", "yieldIfNeeded", "", "Lkotlin/sequences/SequenceScope;", "node", "Lkotlin/io/path/PathNode;", "entriesReader", "Lkotlin/io/path/DirectoryEntriesReader;", "entriesAction", "Lkotlin/Function1;", "", "(Lkotlin/sequences/SequenceScope;Lkotlin/io/path/PathNode;Lkotlin/io/path/DirectoryEntriesReader;Lkotlin/jvm/functions/Function1;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "kotlin-stdlib-jdk7"}, m492k = 1, m493mv = {1, 9, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class PathTreeWalk implements Sequence<Path> {
    private final PathWalkOption[] options;
    private final Path start;

    public PathTreeWalk(Path start, PathWalkOption[] options) {
        Intrinsics.checkNotNullParameter(start, "start");
        Intrinsics.checkNotNullParameter(options, "options");
        this.start = start;
        this.options = options;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final boolean getFollowLinks() {
        return ArraysKt.contains(this.options, PathWalkOption.FOLLOW_LINKS);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final LinkOption[] getLinkOptions() {
        return LinkFollowing.INSTANCE.toLinkOptions(getFollowLinks());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final boolean getIncludeDirectories() {
        return ArraysKt.contains(this.options, PathWalkOption.INCLUDE_DIRECTORIES);
    }

    private final boolean isBFS() {
        return ArraysKt.contains(this.options, PathWalkOption.BREADTH_FIRST);
    }

    @Override // kotlin.sequences.Sequence
    public Iterator<Path> iterator() {
        return isBFS() ? bfsIterator() : dfsIterator();
    }

    private final Object yieldIfNeeded(SequenceScope<? super Path> sequenceScope, PathNode pathNode, DirectoryEntriesReader directoryEntriesReader, Function1<? super List<PathNode>, Unit> function1, Continuation<? super Unit> continuation) throws FileSystemLoopException {
        Path path = pathNode.getPath();
        if (pathNode.getParent() != null) {
            PathsKt.checkFileName(path);
        }
        LinkOption[] linkOptions = getLinkOptions();
        LinkOption[] linkOptionArr = (LinkOption[]) Arrays.copyOf(linkOptions, linkOptions.length);
        if (Files.isDirectory(path, (LinkOption[]) Arrays.copyOf(linkOptionArr, linkOptionArr.length))) {
            if (!PathTreeWalkKt.createsCycle(pathNode)) {
                if (getIncludeDirectories()) {
                    InlineMarker.mark(0);
                    sequenceScope.yield(path, continuation);
                    InlineMarker.mark(1);
                }
                LinkOption[] linkOptions2 = getLinkOptions();
                LinkOption[] linkOptionArr2 = (LinkOption[]) Arrays.copyOf(linkOptions2, linkOptions2.length);
                if (Files.isDirectory(path, (LinkOption[]) Arrays.copyOf(linkOptionArr2, linkOptionArr2.length))) {
                    function1.invoke(directoryEntriesReader.readEntries(pathNode));
                }
            } else {
                throw new FileSystemLoopException(path.toString());
            }
        } else if (Files.exists(path, (LinkOption[]) Arrays.copyOf(new LinkOption[]{LinkOption.NOFOLLOW_LINKS}, 1))) {
            InlineMarker.mark(0);
            sequenceScope.yield(path, continuation);
            InlineMarker.mark(1);
            return Unit.INSTANCE;
        }
        return Unit.INSTANCE;
    }

    /* JADX INFO: renamed from: kotlin.io.path.PathTreeWalk$dfsIterator$1 */
    /* JADX INFO: compiled from: PathTreeWalk.kt */
    @Metadata(m490d1 = {"\u0000\u000e\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\b\u0012\u0004\u0012\u00020\u00030\u0002H\u008a@"}, m491d2 = {"<anonymous>", "", "Lkotlin/sequences/SequenceScope;", "Ljava/nio/file/Path;"}, m492k = 3, m493mv = {1, 9, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    @DebugMetadata(m503c = "kotlin.io.path.PathTreeWalk$dfsIterator$1", m504f = "PathTreeWalk.kt", m505i = {0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3}, m506l = {192, 198, 211, 217}, m507m = "invokeSuspend", m508n = {"$this$iterator", "stack", "entriesReader", "startNode", "this_$iv", "path$iv", "$this$iterator", "stack", "entriesReader", "$this$iterator", "stack", "entriesReader", "pathNode", "this_$iv", "path$iv", "$this$iterator", "stack", "entriesReader"}, m509s = {"L$0", "L$1", "L$2", "L$3", "L$4", "L$5", "L$0", "L$1", "L$2", "L$0", "L$1", "L$2", "L$3", "L$4", "L$5", "L$0", "L$1", "L$2"})
    static final class C22411 extends RestrictedSuspendLambda implements Function2<SequenceScope<? super Path>, Continuation<? super Unit>, Object> {
        private /* synthetic */ Object L$0;
        Object L$1;
        Object L$2;
        Object L$3;
        Object L$4;
        Object L$5;
        int label;

        C22411(Continuation<? super C22411> continuation) {
            super(2, continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            C22411 c22411 = PathTreeWalk.this.new C22411(continuation);
            c22411.L$0 = obj;
            return c22411;
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(SequenceScope<? super Path> sequenceScope, Continuation<? super Unit> continuation) {
            return ((C22411) create(sequenceScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        /* JADX WARN: Code duplicated, block: B:41:0x015b  */
        /* JADX WARN: Code duplicated, block: B:45:0x0180  */
        /* JADX WARN: Code duplicated, block: B:50:0x01a1  */
        /* JADX WARN: Code duplicated, block: B:52:0x01a7  */
        /* JADX WARN: Code duplicated, block: B:54:0x01be A[RETURN] */
        /* JADX WARN: Code duplicated, block: B:55:0x01bf  */
        /* JADX WARN: Code duplicated, block: B:57:0x01d7 A[PHI: r2 r6 r9 r10 r11 r12 r13
          0x01d7: PHI (r2v14 kotlin.io.path.DirectoryEntriesReader) = (r2v11 kotlin.io.path.DirectoryEntriesReader), (r2v16 kotlin.io.path.DirectoryEntriesReader) binds: [B:51:0x01a5, B:56:0x01cb] A[DONT_GENERATE, DONT_INLINE]
          0x01d7: PHI (r6v21 kotlin.collections.ArrayDeque) = (r6v19 kotlin.collections.ArrayDeque), (r6v23 kotlin.collections.ArrayDeque) binds: [B:51:0x01a5, B:56:0x01cb] A[DONT_GENERATE, DONT_INLINE]
          0x01d7: PHI (r9v10 kotlin.sequences.SequenceScope) = (r9v8 kotlin.sequences.SequenceScope), (r9v12 kotlin.sequences.SequenceScope) binds: [B:51:0x01a5, B:56:0x01cb] A[DONT_GENERATE, DONT_INLINE]
          0x01d7: PHI (r10v6 kotlin.io.path.PathTreeWalk$dfsIterator$1) = (r10v5 kotlin.io.path.PathTreeWalk$dfsIterator$1), (r10v7 kotlin.io.path.PathTreeWalk$dfsIterator$1) binds: [B:51:0x01a5, B:56:0x01cb] A[DONT_GENERATE, DONT_INLINE]
          0x01d7: PHI (r11v30 kotlin.io.path.PathNode) = (r11v21 kotlin.io.path.PathNode), (r11v32 kotlin.io.path.PathNode) binds: [B:51:0x01a5, B:56:0x01cb] A[DONT_GENERATE, DONT_INLINE]
          0x01d7: PHI (r12v14 kotlin.io.path.PathTreeWalk) = (r12v11 kotlin.io.path.PathTreeWalk), (r12v24 kotlin.io.path.PathTreeWalk) binds: [B:51:0x01a5, B:56:0x01cb] A[DONT_GENERATE, DONT_INLINE]
          0x01d7: PHI (r13v8 java.nio.file.Path) = (r13v6 java.nio.file.Path), (r13v10 java.nio.file.Path) binds: [B:51:0x01a5, B:56:0x01cb] A[DONT_GENERATE, DONT_INLINE]] */
        /* JADX WARN: Code duplicated, block: B:59:0x01ef  */
        /* JADX WARN: Code duplicated, block: B:60:0x01ff  */
        /* JADX WARN: Code duplicated, block: B:73:0x019b A[SYNTHETIC] */
        /* JADX WARN: Code duplicated, block: B:75:0x016e A[SYNTHETIC] */
        /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:58:0x01ed -> B:39:0x0151). Please report as a decompilation issue!!! */
        /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:59:0x01ef -> B:39:0x0151). Please report as a decompilation issue!!! */
        /*  JADX ERROR: JadxOverflowException in pass: RegionMakerVisitor
            jadx.core.utils.exceptions.JadxOverflowException: Regions stack size limit reached
            	at jadx.core.utils.ErrorsCounter.addError(ErrorsCounter.java:59)
            	at jadx.core.utils.ErrorsCounter.error(ErrorsCounter.java:31)
            	at jadx.core.dex.attributes.nodes.NotificationAttrNode.addError(NotificationAttrNode.java:19)
            */
        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final java.lang.Object invokeSuspend(java.lang.Object r19) {
            /*
                Method dump skipped, instruction units count: 571
                To view this dump add '--comments-level debug' option
            */
            throw new UnsupportedOperationException("Method not decompiled: kotlin.p006io.path.PathTreeWalk.C22411.invokeSuspend(java.lang.Object):java.lang.Object");
        }
    }

    private final Iterator<Path> dfsIterator() {
        return SequencesKt.iterator(new C22411(null));
    }

    /* JADX INFO: renamed from: kotlin.io.path.PathTreeWalk$bfsIterator$1 */
    /* JADX INFO: compiled from: PathTreeWalk.kt */
    @Metadata(m490d1 = {"\u0000\u000e\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\b\u0012\u0004\u0012\u00020\u00030\u0002H\u008a@"}, m491d2 = {"<anonymous>", "", "Lkotlin/sequences/SequenceScope;", "Ljava/nio/file/Path;"}, m492k = 3, m493mv = {1, 9, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    @DebugMetadata(m503c = "kotlin.io.path.PathTreeWalk$bfsIterator$1", m504f = "PathTreeWalk.kt", m505i = {0, 0, 0, 0, 0, 0, 1, 1, 1}, m506l = {192, 198}, m507m = "invokeSuspend", m508n = {"$this$iterator", "queue", "entriesReader", "pathNode", "this_$iv", "path$iv", "$this$iterator", "queue", "entriesReader"}, m509s = {"L$0", "L$1", "L$2", "L$3", "L$4", "L$5", "L$0", "L$1", "L$2"})
    static final class C22401 extends RestrictedSuspendLambda implements Function2<SequenceScope<? super Path>, Continuation<? super Unit>, Object> {
        private /* synthetic */ Object L$0;
        Object L$1;
        Object L$2;
        Object L$3;
        Object L$4;
        Object L$5;
        int label;

        C22401(Continuation<? super C22401> continuation) {
            super(2, continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            C22401 c22401 = PathTreeWalk.this.new C22401(continuation);
            c22401.L$0 = obj;
            return c22401;
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(SequenceScope<? super Path> sequenceScope, Continuation<? super Unit> continuation) {
            return ((C22401) create(sequenceScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        /* JADX WARN: Code duplicated, block: B:13:0x008a  */
        /* JADX WARN: Code duplicated, block: B:15:0x009c  */
        /* JADX WARN: Code duplicated, block: B:20:0x00bd  */
        /* JADX WARN: Code duplicated, block: B:22:0x00c3  */
        /* JADX WARN: Code duplicated, block: B:24:0x00da A[RETURN] */
        /* JADX WARN: Code duplicated, block: B:25:0x00db  */
        /* JADX WARN: Code duplicated, block: B:27:0x00eb A[PHI: r1 r5 r6 r7 r8 r9 r15
          0x00eb: PHI (r1v3 kotlin.io.path.DirectoryEntriesReader) = (r1v5 kotlin.io.path.DirectoryEntriesReader), (r1v6 kotlin.io.path.DirectoryEntriesReader) binds: [B:26:0x00e3, B:21:0x00c1] A[DONT_GENERATE, DONT_INLINE]
          0x00eb: PHI (r5v2 kotlin.collections.ArrayDeque) = (r5v4 kotlin.collections.ArrayDeque), (r5v5 kotlin.collections.ArrayDeque) binds: [B:26:0x00e3, B:21:0x00c1] A[DONT_GENERATE, DONT_INLINE]
          0x00eb: PHI (r6v4 kotlin.sequences.SequenceScope) = (r6v6 kotlin.sequences.SequenceScope), (r6v7 kotlin.sequences.SequenceScope) binds: [B:26:0x00e3, B:21:0x00c1] A[DONT_GENERATE, DONT_INLINE]
          0x00eb: PHI (r7v2 kotlin.io.path.PathNode) = (r7v6 kotlin.io.path.PathNode), (r7v12 kotlin.io.path.PathNode) binds: [B:26:0x00e3, B:21:0x00c1] A[DONT_GENERATE, DONT_INLINE]
          0x00eb: PHI (r8v3 kotlin.io.path.PathTreeWalk) = (r8v11 kotlin.io.path.PathTreeWalk), (r8v12 kotlin.io.path.PathTreeWalk) binds: [B:26:0x00e3, B:21:0x00c1] A[DONT_GENERATE, DONT_INLINE]
          0x00eb: PHI (r9v2 java.nio.file.Path) = (r9v4 java.nio.file.Path), (r9v5 java.nio.file.Path) binds: [B:26:0x00e3, B:21:0x00c1] A[DONT_GENERATE, DONT_INLINE]
          0x00eb: PHI (r15v4 kotlin.io.path.PathTreeWalk$bfsIterator$1) = (r15v5 kotlin.io.path.PathTreeWalk$bfsIterator$1), (r15v6 kotlin.io.path.PathTreeWalk$bfsIterator$1) binds: [B:26:0x00e3, B:21:0x00c1] A[DONT_GENERATE, DONT_INLINE]] */
        /* JADX WARN: Code duplicated, block: B:29:0x0103  */
        /* JADX WARN: Code duplicated, block: B:30:0x010e  */
        /* JADX WARN: Code duplicated, block: B:32:0x0118  */
        /* JADX WARN: Code duplicated, block: B:39:0x012b A[SYNTHETIC] */
        /* JADX WARN: Code duplicated, block: B:40:0x00b7 A[SYNTHETIC] */
        /* JADX WARN: Code duplicated, block: B:42:0x0142 A[SYNTHETIC] */
        /* JADX WARN: Code duplicated, block: B:44:0x0080 A[SYNTHETIC] */
        /* JADX WARN: Code duplicated, block: B:45:0x0080 A[SYNTHETIC] */
        /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:28:0x0101 -> B:11:0x0080). Please report as a decompilation issue!!! */
        /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:29:0x0103 -> B:11:0x0080). Please report as a decompilation issue!!! */
        /*  JADX ERROR: JadxOverflowException in pass: RegionMakerVisitor
            jadx.core.utils.exceptions.JadxOverflowException: Regions count limit reached at block B:32:0x0118
            	at jadx.core.utils.ErrorsCounter.addError(ErrorsCounter.java:59)
            	at jadx.core.utils.ErrorsCounter.error(ErrorsCounter.java:31)
            	at jadx.core.dex.attributes.nodes.NotificationAttrNode.addError(NotificationAttrNode.java:19)
            */
        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final java.lang.Object invokeSuspend(java.lang.Object r15) {
            /*
                Method dump skipped, instruction units count: 326
                To view this dump add '--comments-level debug' option
            */
            throw new UnsupportedOperationException("Method not decompiled: kotlin.p006io.path.PathTreeWalk.C22401.invokeSuspend(java.lang.Object):java.lang.Object");
        }
    }

    private final Iterator<Path> bfsIterator() {
        return SequencesKt.iterator(new C22401(null));
    }
}
