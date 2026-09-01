package androidx.privacysandbox.ads.adservices.topics;

import androidx.constraintlayout.widget.ConstraintLayout;
import java.util.HashSet;
import java.util.List;
import java.util.Objects;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: GetTopicsResponse.kt */
/* JADX INFO: loaded from: classes.dex */
@Metadata(m490d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\u0018\u00002\u00020\u0001B\u0013\u0012\f\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003¢\u0006\u0002\u0010\u0005J\u0013\u0010\b\u001a\u00020\t2\b\u0010\n\u001a\u0004\u0018\u00010\u0001H\u0096\u0002J\b\u0010\u000b\u001a\u00020\fH\u0016J\b\u0010\r\u001a\u00020\u000eH\u0016R\u0017\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007¨\u0006\u000f"}, m491d2 = {"Landroidx/privacysandbox/ads/adservices/topics/GetTopicsResponse;", "", "topics", "", "Landroidx/privacysandbox/ads/adservices/topics/Topic;", "(Ljava/util/List;)V", "getTopics", "()Ljava/util/List;", "equals", "", "other", "hashCode", "", "toString", "", "ads-adservices_release"}, m492k = 1, m493mv = {1, 8, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class GetTopicsResponse {
    private final List<Topic> topics;

    public final List<Topic> getTopics() {
        return this.topics;
    }

    public GetTopicsResponse(List<Topic> topics) {
        Intrinsics.checkNotNullParameter(topics, "topics");
        this.topics = topics;
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof GetTopicsResponse)) {
            return false;
        }
        GetTopicsResponse getTopicsResponse = (GetTopicsResponse) other;
        if (this.topics.size() != getTopicsResponse.topics.size()) {
            return false;
        }
        return Intrinsics.areEqual(new HashSet(this.topics), new HashSet(getTopicsResponse.topics));
    }

    public int hashCode() {
        return Objects.hash(this.topics);
    }

    public String toString() {
        return "Topics=" + this.topics;
    }
}
