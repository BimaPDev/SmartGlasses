package androidx.privacysandbox.ads.adservices.customaudience;

import androidx.constraintlayout.widget.ConstraintLayout;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: JoinCustomAudienceRequest.kt */
/* JADX INFO: loaded from: classes.dex */
@Metadata(m490d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\u0018\u00002\u00020\u0001B\r\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004J\u0013\u0010\u0007\u001a\u00020\b2\b\u0010\t\u001a\u0004\u0018\u00010\u0001H\u0096\u0002J\b\u0010\n\u001a\u00020\u000bH\u0016J\b\u0010\f\u001a\u00020\rH\u0016R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0005\u0010\u0006¨\u0006\u000e"}, m491d2 = {"Landroidx/privacysandbox/ads/adservices/customaudience/JoinCustomAudienceRequest;", "", "customAudience", "Landroidx/privacysandbox/ads/adservices/customaudience/CustomAudience;", "(Landroidx/privacysandbox/ads/adservices/customaudience/CustomAudience;)V", "getCustomAudience", "()Landroidx/privacysandbox/ads/adservices/customaudience/CustomAudience;", "equals", "", "other", "hashCode", "", "toString", "", "ads-adservices_release"}, m492k = 1, m493mv = {1, 8, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class JoinCustomAudienceRequest {
    private final CustomAudience customAudience;

    public final CustomAudience getCustomAudience() {
        return this.customAudience;
    }

    public JoinCustomAudienceRequest(CustomAudience customAudience) {
        Intrinsics.checkNotNullParameter(customAudience, "customAudience");
        this.customAudience = customAudience;
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (other instanceof JoinCustomAudienceRequest) {
            return Intrinsics.areEqual(this.customAudience, ((JoinCustomAudienceRequest) other).customAudience);
        }
        return false;
    }

    public int hashCode() {
        return this.customAudience.hashCode();
    }

    public String toString() {
        return "JoinCustomAudience: customAudience=" + this.customAudience;
    }
}
