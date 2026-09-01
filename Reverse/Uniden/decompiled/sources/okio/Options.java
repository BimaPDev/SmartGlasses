package okio;

import androidx.constraintlayout.widget.ConstraintLayout;
import com.google.firebase.analytics.FirebaseAnalytics;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.RandomAccess;
import kotlin.Metadata;
import kotlin.collections.AbstractList;
import kotlin.collections.ArraysKt;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.JvmStatic;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: Options.kt */
/* JADX INFO: loaded from: classes3.dex */
@Metadata(m490d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0011\n\u0000\n\u0002\u0010\u0015\n\u0002\b\u0005\n\u0002\u0010\b\n\u0002\b\b\u0018\u0000 \u00152\b\u0012\u0004\u0012\u00020\u00020\u00012\u00060\u0003j\u0002`\u0004:\u0001\u0015B\u001f\b\u0002\u0012\u000e\u0010\u0005\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00020\u0006\u0012\u0006\u0010\u0007\u001a\u00020\b¢\u0006\u0002\u0010\tJ\u0011\u0010\u0013\u001a\u00020\u00022\u0006\u0010\u0014\u001a\u00020\u000eH\u0096\u0002R\u001e\u0010\u0005\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00020\u0006X\u0080\u0004¢\u0006\n\n\u0002\u0010\f\u001a\u0004\b\n\u0010\u000bR\u0014\u0010\r\u001a\u00020\u000e8VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\u000f\u0010\u0010R\u0014\u0010\u0007\u001a\u00020\bX\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0012¨\u0006\u0016"}, m491d2 = {"Lokio/Options;", "Lkotlin/collections/AbstractList;", "Lokio/ByteString;", "Ljava/util/RandomAccess;", "Lkotlin/collections/RandomAccess;", "byteStrings", "", "trie", "", "([Lokio/ByteString;[I)V", "getByteStrings$okio", "()[Lokio/ByteString;", "[Lokio/ByteString;", "size", "", "getSize", "()I", "getTrie$okio", "()[I", "get", FirebaseAnalytics.Param.INDEX, "Companion", "okio"}, m492k = 1, m493mv = {1, 5, 1}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class Options extends AbstractList<ByteString> implements RandomAccess {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private final ByteString[] byteStrings;
    private final int[] trie;

    public /* synthetic */ Options(ByteString[] byteStringArr, int[] iArr, DefaultConstructorMarker defaultConstructorMarker) {
        this(byteStringArr, iArr);
    }

    @JvmStatic
    /* JADX INFO: renamed from: of */
    public static final Options m529of(ByteString... byteStringArr) {
        return INSTANCE.m530of(byteStringArr);
    }

    /* JADX INFO: renamed from: getByteStrings$okio, reason: from getter */
    public final ByteString[] getByteStrings() {
        return this.byteStrings;
    }

    /* JADX INFO: renamed from: getTrie$okio, reason: from getter */
    public final int[] getTrie() {
        return this.trie;
    }

    @Override // kotlin.collections.AbstractCollection, java.util.Collection
    public final /* bridge */ boolean contains(Object obj) {
        if (obj instanceof ByteString) {
            return contains((ByteString) obj);
        }
        return false;
    }

    public /* bridge */ boolean contains(ByteString byteString) {
        return super.contains(byteString);
    }

    @Override // kotlin.collections.AbstractList, java.util.List
    public final /* bridge */ int indexOf(Object obj) {
        if (obj instanceof ByteString) {
            return indexOf((ByteString) obj);
        }
        return -1;
    }

    public /* bridge */ int indexOf(ByteString byteString) {
        return super.indexOf(byteString);
    }

    @Override // kotlin.collections.AbstractList, java.util.List
    public final /* bridge */ int lastIndexOf(Object obj) {
        if (obj instanceof ByteString) {
            return lastIndexOf((ByteString) obj);
        }
        return -1;
    }

    public /* bridge */ int lastIndexOf(ByteString byteString) {
        return super.lastIndexOf(byteString);
    }

    private Options(ByteString[] byteStringArr, int[] iArr) {
        this.byteStrings = byteStringArr;
        this.trie = iArr;
    }

    @Override // kotlin.collections.AbstractList, kotlin.collections.AbstractCollection
    public int getSize() {
        return this.byteStrings.length;
    }

    @Override // kotlin.collections.AbstractList, java.util.List
    public ByteString get(int index) {
        return this.byteStrings[index];
    }

    /* JADX INFO: compiled from: Options.kt */
    @Metadata(m490d1 = {"\u0000>\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\t\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\u0010\u0011\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002JT\u0010\b\u001a\u00020\t2\b\b\u0002\u0010\n\u001a\u00020\u00042\u0006\u0010\u000b\u001a\u00020\u00052\b\b\u0002\u0010\f\u001a\u00020\r2\f\u0010\u000e\u001a\b\u0012\u0004\u0012\u00020\u00100\u000f2\b\b\u0002\u0010\u0011\u001a\u00020\r2\b\b\u0002\u0010\u0012\u001a\u00020\r2\f\u0010\u0013\u001a\b\u0012\u0004\u0012\u00020\r0\u000fH\u0002J!\u0010\u0014\u001a\u00020\u00152\u0012\u0010\u000e\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00100\u0016\"\u00020\u0010H\u0007¢\u0006\u0002\u0010\u0017R\u0018\u0010\u0003\u001a\u00020\u0004*\u00020\u00058BX\u0082\u0004¢\u0006\u0006\u001a\u0004\b\u0006\u0010\u0007¨\u0006\u0018"}, m491d2 = {"Lokio/Options$Companion;", "", "()V", "intCount", "", "Lokio/Buffer;", "getIntCount", "(Lokio/Buffer;)J", "buildTrieRecursive", "", "nodeOffset", "node", "byteStringOffset", "", "byteStrings", "", "Lokio/ByteString;", "fromIndex", "toIndex", "indexes", "of", "Lokio/Options;", "", "([Lokio/ByteString;)Lokio/Options;", "okio"}, m492k = 1, m493mv = {1, 5, 1}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        @JvmStatic
        /* JADX INFO: renamed from: of */
        public final Options m530of(ByteString... byteStrings) throws IOException {
            Intrinsics.checkNotNullParameter(byteStrings, "byteStrings");
            DefaultConstructorMarker defaultConstructorMarker = null;
            int i = 0;
            if (byteStrings.length == 0) {
                return new Options(new ByteString[0], new int[]{0, -1}, defaultConstructorMarker);
            }
            List mutableList = ArraysKt.toMutableList(byteStrings);
            CollectionsKt.sort(mutableList);
            ArrayList arrayList = new ArrayList(byteStrings.length);
            for (ByteString byteString : byteStrings) {
                arrayList.add(-1);
            }
            Object[] array = arrayList.toArray(new Integer[0]);
            if (array != null) {
                Integer[] numArr = (Integer[]) array;
                List listMutableListOf = CollectionsKt.mutableListOf(Arrays.copyOf(numArr, numArr.length));
                int length = byteStrings.length;
                int i2 = 0;
                int i3 = 0;
                while (i2 < length) {
                    listMutableListOf.set(CollectionsKt.binarySearch$default(mutableList, byteStrings[i2], 0, 0, 6, (Object) null), Integer.valueOf(i3));
                    i2++;
                    i3++;
                }
                if (!(((ByteString) mutableList.get(0)).size() > 0)) {
                    throw new IllegalArgumentException("the empty byte string is not a supported option".toString());
                }
                int i4 = 0;
                while (i4 < mutableList.size()) {
                    ByteString byteString2 = (ByteString) mutableList.get(i4);
                    int i5 = i4 + 1;
                    int i6 = i5;
                    while (i6 < mutableList.size()) {
                        ByteString byteString3 = (ByteString) mutableList.get(i6);
                        if (!byteString3.startsWith(byteString2)) {
                            break;
                        }
                        if (!(byteString3.size() != byteString2.size())) {
                            throw new IllegalArgumentException(Intrinsics.stringPlus("duplicate option: ", byteString3).toString());
                        }
                        if (((Number) listMutableListOf.get(i6)).intValue() > ((Number) listMutableListOf.get(i4)).intValue()) {
                            mutableList.remove(i6);
                            listMutableListOf.remove(i6);
                        } else {
                            i6++;
                        }
                    }
                    i4 = i5;
                }
                Buffer buffer = new Buffer();
                buildTrieRecursive$default(this, 0L, buffer, 0, mutableList, 0, 0, listMutableListOf, 53, null);
                int[] iArr = new int[(int) getIntCount(buffer)];
                while (!buffer.exhausted()) {
                    iArr[i] = buffer.readInt();
                    i++;
                }
                Object[] objArrCopyOf = Arrays.copyOf(byteStrings, byteStrings.length);
                Intrinsics.checkNotNullExpressionValue(objArrCopyOf, "java.util.Arrays.copyOf(this, size)");
                return new Options((ByteString[]) objArrCopyOf, iArr, defaultConstructorMarker);
            }
            throw new NullPointerException("null cannot be cast to non-null type kotlin.Array<T>");
        }

        static /* synthetic */ void buildTrieRecursive$default(Companion companion, long j, Buffer buffer, int i, List list, int i2, int i3, List list2, int i4, Object obj) throws IOException {
            companion.buildTrieRecursive((i4 & 1) != 0 ? 0L : j, buffer, (i4 & 4) != 0 ? 0 : i, list, (i4 & 16) != 0 ? 0 : i2, (i4 & 32) != 0 ? list.size() : i3, list2);
        }

        private final void buildTrieRecursive(long nodeOffset, Buffer node, int byteStringOffset, List<? extends ByteString> byteStrings, int fromIndex, int toIndex, List<Integer> indexes) throws IOException {
            int i;
            int i2;
            int i3;
            int i4;
            int i5 = byteStringOffset;
            if (!(fromIndex < toIndex)) {
                throw new IllegalArgumentException("Failed requirement.".toString());
            }
            if (fromIndex < toIndex) {
                int i6 = fromIndex;
                while (true) {
                    int i7 = i6 + 1;
                    if (!(byteStrings.get(i6).size() >= i5)) {
                        throw new IllegalArgumentException("Failed requirement.".toString());
                    }
                    if (i7 >= toIndex) {
                        break;
                    } else {
                        i6 = i7;
                    }
                }
            }
            ByteString byteString = byteStrings.get(fromIndex);
            ByteString byteString2 = byteStrings.get(toIndex - 1);
            if (i5 == byteString.size()) {
                int iIntValue = indexes.get(fromIndex).intValue();
                int i8 = fromIndex + 1;
                ByteString byteString3 = byteStrings.get(i8);
                i = i8;
                i2 = iIntValue;
                byteString = byteString3;
            } else {
                i = fromIndex;
                i2 = -1;
            }
            if (byteString.getByte(i5) != byteString2.getByte(i5)) {
                int i9 = i + 1;
                int i10 = 1;
                if (i9 < toIndex) {
                    while (true) {
                        int i11 = i9 + 1;
                        if (byteStrings.get(i9 - 1).getByte(i5) != byteStrings.get(i9).getByte(i5)) {
                            i10++;
                        }
                        if (i11 >= toIndex) {
                            break;
                        } else {
                            i9 = i11;
                        }
                    }
                }
                long intCount = nodeOffset + getIntCount(node) + ((long) 2) + ((long) (i10 * 2));
                node.writeInt(i10);
                node.writeInt(i2);
                if (i < toIndex) {
                    int i12 = i;
                    while (true) {
                        int i13 = i12 + 1;
                        byte b = byteStrings.get(i12).getByte(i5);
                        if (i12 == i || b != byteStrings.get(i12 - 1).getByte(i5)) {
                            node.writeInt(b & 255);
                        }
                        if (i13 >= toIndex) {
                            break;
                        } else {
                            i12 = i13;
                        }
                    }
                }
                Buffer buffer = new Buffer();
                while (i < toIndex) {
                    byte b2 = byteStrings.get(i).getByte(i5);
                    int i14 = i + 1;
                    if (i14 >= toIndex) {
                        i4 = toIndex;
                        break;
                    }
                    int i15 = i14;
                    while (true) {
                        int i16 = i15 + 1;
                        if (b2 != byteStrings.get(i15).getByte(i5)) {
                            i4 = i15;
                            break;
                        } else {
                            if (i16 >= toIndex) {
                                i4 = toIndex;
                                break;
                            }
                            i15 = i16;
                        }
                    }
                    if (i14 == i4 && i5 + 1 == byteStrings.get(i).size()) {
                        node.writeInt(indexes.get(i).intValue());
                    } else {
                        node.writeInt(((int) (intCount + getIntCount(buffer))) * (-1));
                        buildTrieRecursive(intCount, buffer, i5 + 1, byteStrings, i, i4, indexes);
                    }
                    i = i4;
                    buffer = buffer;
                }
                node.writeAll(buffer);
                return;
            }
            int iMin = Math.min(byteString.size(), byteString2.size());
            if (i5 < iMin) {
                int i17 = i5;
                int i18 = 0;
                while (true) {
                    int i19 = i17 + 1;
                    if (byteString.getByte(i17) != byteString2.getByte(i17)) {
                        break;
                    }
                    i18++;
                    if (i19 >= iMin) {
                        break;
                    } else {
                        i17 = i19;
                    }
                }
                i3 = i18;
            } else {
                i3 = 0;
            }
            long intCount2 = nodeOffset + getIntCount(node) + ((long) 2) + ((long) i3) + 1;
            node.writeInt(-i3);
            node.writeInt(i2);
            int i20 = i5 + i3;
            if (i5 < i20) {
                while (true) {
                    int i21 = i5 + 1;
                    node.writeInt(byteString.getByte(i5) & 255);
                    if (i21 >= i20) {
                        break;
                    } else {
                        i5 = i21;
                    }
                }
            }
            if (i + 1 == toIndex) {
                if (!(i20 == byteStrings.get(i).size())) {
                    throw new IllegalStateException("Check failed.".toString());
                }
                node.writeInt(indexes.get(i).intValue());
            } else {
                Buffer buffer2 = new Buffer();
                node.writeInt(((int) (getIntCount(buffer2) + intCount2)) * (-1));
                buildTrieRecursive(intCount2, buffer2, i20, byteStrings, i, toIndex, indexes);
                node.writeAll(buffer2);
            }
        }

        private final long getIntCount(Buffer buffer) {
            return buffer.size() / ((long) 4);
        }
    }
}
