package com.google.android.gms.libs.identity;

import android.os.Parcel;
import android.os.Parcelable;
import android.os.Process;
import androidx.constraintlayout.widget.ConstraintLayout;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelWriter;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.measurement.api.AppMeasurementSdk;
import com.google.firebase.sessions.settings.RemoteSettings;
import java.util.Arrays;
import java.util.List;
import kotlin.Deprecated;
import kotlin.DeprecationLevel;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import org.checkerframework.dataflow.qual.Pure;

/* JADX INFO: renamed from: com.google.android.gms.internal.location.zze, reason: from Kotlin metadata */
/* JADX INFO: compiled from: com.google.android.gms:play-services-location@@21.2.0 */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000|\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\u000b\n\u0002\b\u0010\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0011\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0007\n\u0002\u0010\u0000\n\u0002\b\t\n\u0002\u0010\t\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0007\u0018\u0000 W2\u00020\u0001:\u0001WBQ\b\u0017\u0012\b\b\u0001\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0001\u0010\u0004\u001a\u00020\u0005\u0012\n\b\u0003\u0010\u0006\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0003\u0010\u0007\u001a\u0004\u0018\u00010\u0005\u0012\u0010\b\u0003\u0010\b\u001a\n\u0012\u0004\u0012\u00020\n\u0018\u00010\t\u0012\n\b\u0003\u0010\u000b\u001a\u0004\u0018\u00010\u0000¢\u0006\u0002\u0010\fBa\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\r\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u0007\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u000e\u001a\u0004\u0018\u00010\u0003\u0012\u000e\u0010\b\u001a\n\u0012\u0004\u0012\u00020\n\u0018\u00010\t\u0012\b\u0010\u000f\u001a\u0004\u0018\u00010\u0010\u0012\b\u0010\u000b\u001a\u0004\u0018\u00010\u0000¢\u0006\u0002\u0010\u0011J\u000e\u00106\u001a\u0002072\u0006\u0010\u001d\u001a\u00020\u001aJ)\u00108\u001a\u00020\"2\u0006\u0010\u001d\u001a\u00020\u001a2\u0012\u00109\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00050:\"\u00020\u0005H\u0007¢\u0006\u0002\u0010;J)\u0010<\u001a\u00020\"2\u0006\u0010\u001d\u001a\u00020\u001a2\u0012\u00109\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00050:\"\u00020\u0005H\u0007¢\u0006\u0002\u0010;J<\u0010=\u001a\u00020\u00002\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\u00052\u000e\b\u0002\u0010\b\u001a\b\u0012\u0004\u0012\u00020\n0\t2\n\b\u0002\u0010\u000b\u001a\u0004\u0018\u000107H\u0007J)\u0010>\u001a\u00020?2\u0006\u0010\u001d\u001a\u00020\u001a2\u0012\u00109\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00050:\"\u00020\u0005H\u0007¢\u0006\u0002\u0010@J\u0010\u0010A\u001a\u00020?2\u0006\u0010\u001d\u001a\u00020\u001aH\u0007J\u0010\u0010B\u001a\u00020?2\u0006\u0010\u001d\u001a\u00020\u001aH\u0007J)\u0010C\u001a\u00020?2\u0006\u0010\u001d\u001a\u00020\u001a2\u0012\u00109\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00050:\"\u00020\u0005H\u0007¢\u0006\u0002\u0010@J\u0010\u0010D\u001a\u00020?2\u0006\u0010\u001d\u001a\u00020\u001aH\u0007J\u0013\u0010E\u001a\u00020\"2\b\u0010F\u001a\u0004\u0018\u00010GH\u0096\u0002J\b\u0010H\u001a\u00020\u0000H\u0007J\n\u0010I\u001a\u0004\u0018\u00010\u0000H\u0007J\b\u0010J\u001a\u00020\u0003H\u0016J&\u0010K\u001a\u00020\u00002\u0006\u0010\u001d\u001a\u00020\u001a2\b\u0010L\u001a\u0004\u0018\u00010\u00002\n\b\u0002\u0010M\u001a\u0004\u0018\u00010\u0005H\u0007J\u0010\u0010N\u001a\u00020\"2\u0006\u0010O\u001a\u00020\nH\u0007J\u0018\u0010N\u001a\u00020\"2\u0006\u0010\u001c\u001a\u00020\u00052\u0006\u0010P\u001a\u00020QH\u0007J\b\u0010R\u001a\u00020\u0005H\u0016J\u0018\u0010S\u001a\u00020?2\u0006\u0010T\u001a\u00020U2\u0006\u0010V\u001a\u00020\u0003H\u0016R\u0012\u0010\u0012\u001a\u0004\u0018\u00010\u0003X\u0082\u000e¢\u0006\u0004\n\u0002\u0010\u0013R\u0010\u0010\u0014\u001a\u0004\u0018\u00010\u0010X\u0082\u000e¢\u0006\u0002\n\u0000R\u0018\u0010\u0006\u001a\u0004\u0018\u00010\u00058GX\u0087\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0016R\u001c\u0010\b\u001a\b\u0012\u0004\u0012\u00020\n0\t8GX\u0087\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u0018R,\u0010\u000e\u001a\u001d\u0012\u0013\u0012\u00110\u001a¢\u0006\f\b\u001b\u0012\b\b\u001c\u0012\u0004\b\b(\u001d\u0012\u0004\u0012\u00020\u00030\u00198G¢\u0006\u0006\u001a\u0004\b\u001e\u0010\u001fR,\u0010\u000f\u001a\u001d\u0012\u0013\u0012\u00110\u001a¢\u0006\f\b\u001b\u0012\b\b\u001c\u0012\u0004\b\b(\u001d\u0012\u0004\u0012\u00020\u00100\u00198G¢\u0006\u0006\u001a\u0004\b \u0010\u001fR\u0012\u0010\u000b\u001a\u0004\u0018\u00010\u00008\u0002X\u0083\u0004¢\u0006\u0002\n\u0000R-\u0010!\u001a\u001d\u0012\u0013\u0012\u00110\u001a¢\u0006\f\b\u001b\u0012\b\b\u001c\u0012\u0004\b\b(\u001d\u0012\u0004\u0012\u00020\"0\u00198Ç\u0002¢\u0006\u0006\u001a\u0004\b!\u0010\u001fR\u0011\u0010#\u001a\u00020\"8G¢\u0006\u0006\u001a\u0004\b#\u0010$R\u0011\u0010%\u001a\u00020\"8G¢\u0006\u0006\u001a\u0004\b%\u0010$R\u0011\u0010&\u001a\u00020\"8G¢\u0006\u0006\u001a\u0004\b&\u0010$R\u0011\u0010'\u001a\u00020\"8G¢\u0006\u0006\u001a\u0004\b'\u0010$R\u0011\u0010(\u001a\u00020\"8G¢\u0006\u0006\u001a\u0004\b(\u0010$R-\u0010)\u001a\u001d\u0012\u0013\u0012\u00110\u001a¢\u0006\f\b\u001b\u0012\b\b\u001c\u0012\u0004\b\b(\u001d\u0012\u0004\u0012\u00020\"0\u00198Ç\u0002¢\u0006\u0006\u001a\u0004\b)\u0010\u001fR\u0018\u0010\u0007\u001a\u0004\u0018\u00010\u00058GX\u0087\u0004¢\u0006\b\n\u0000\u001a\u0004\b*\u0010\u0016R\u0016\u0010\u0004\u001a\u00020\u00058GX\u0087\u0004¢\u0006\b\n\u0000\u001a\u0004\b+\u0010\u0016R\u0013\u0010\r\u001a\u00020\u00038G¢\u0006\b\n\u0000\u001a\u0004\b,\u0010-R\u0011\u0010.\u001a\u00020\u00008G¢\u0006\u0006\u001a\u0004\b/\u00100R\u0016\u0010\u0002\u001a\u00020\u00038GX\u0087\u0004¢\u0006\b\n\u0000\u001a\u0004\b1\u0010-R\u0011\u00102\u001a\u0002038G¢\u0006\u0006\u001a\u0004\b4\u00105¨\u0006X"}, m491d2 = {"Lcom/google/android/gms/libs/identity/ClientIdentity;", "Lcom/google/android/gms/common/internal/safeparcel/AbstractSafeParcelable;", "uid", "", "packageName", "", "attributionTag", "listenerId", "clientFeatures", "", "Lcom/google/android/gms/common/Feature;", "impersonator", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Lcom/google/android/gms/libs/identity/ClientIdentity;)V", "pid", "clientSdkVersion", "clientType", "Lcom/google/android/gms/libs/identity/ClientType;", "(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/util/List;Lcom/google/android/gms/libs/identity/ClientType;Lcom/google/android/gms/libs/identity/ClientIdentity;)V", "_clientSdkVersion", "Ljava/lang/Integer;", "_clientType", "getAttributionTag", "()Ljava/lang/String;", "getClientFeatures", "()Ljava/util/List;", "Lkotlin/Function1;", "Landroid/content/Context;", "Lkotlin/ParameterName;", AppMeasurementSdk.ConditionalUserProperty.NAME, "context", "getClientSdkVersion", "()Lkotlin/jvm/functions/Function1;", "getClientType", "isFirstParty", "", "isImpersonatedIdentity", "()Z", "isMyProcess", "isMyUid", "isMyUser", "isSystemServer", "isZeroParty", "getListenerId", "getPackageName", "getPid", "()I", "realIdentity", "getRealIdentity", "()Lcom/google/android/gms/libs/identity/ClientIdentity;", "getUid", "userHandle", "Landroid/os/UserHandle;", "getUserHandle", "()Landroid/os/UserHandle;", "asImpersonator", "Lcom/google/android/gms/libs/identity/Impersonator;", "checkAnyPermissions", "permissions", "", "(Landroid/content/Context;[Ljava/lang/String;)Z", "checkPermissions", "copy", "enforceAnyPermissions", "", "(Landroid/content/Context;[Ljava/lang/String;)V", "enforceFirstParty", "enforcePackageName", "enforcePermissions", "enforceZeroParty", "equals", "other", "", "forAggregation", "getImpersonator", "hashCode", "impersonate", "impersonatee", "impersonateeListenerId", "supportsFeature", "feature", "version", "", "toString", "writeToParcel", "dest", "Landroid/os/Parcel;", "flags", "Companion", "java.com.google.android.gms.libs.identity_identity"}, m492k = 1, m493mv = {1, 9, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
@SafeParcelable.Class(creator = "ClientIdentityCreator")
@SafeParcelable.Reserved({2, 5})
public final class ClientIdentity extends AbstractSafeParcelable {

    @SafeParcelable.Field(getter = "getUid", m130id = 1)
    private final int zzb;

    @SafeParcelable.Field(getter = "getPackageName", m130id = 3)
    private final String zzc;

    @SafeParcelable.Field(getter = "getAttributionTag", m130id = 4)
    private final String zzd;

    @SafeParcelable.Field(getter = "getListenerId", m130id = 6)
    private final String zze;

    @SafeParcelable.Field(getter = "getClientFeatures", m130id = 8)
    private final List zzf;

    @SafeParcelable.Field(getter = "getImpersonator", m130id = 7)
    private final ClientIdentity zzg;
    public static final zzd zza = new zzd(null);
    public static final Parcelable.Creator<ClientIdentity> CREATOR = new zzf();

    static {
        Process.myUid();
        Process.myPid();
    }

    @Deprecated(level = DeprecationLevel.ERROR, message = "only for Parcelable.Creator")
    @SafeParcelable.Constructor
    public ClientIdentity(@SafeParcelable.Param(m131id = 1) int i, @SafeParcelable.Param(m131id = 3) String packageName, @SafeParcelable.Param(m131id = 4) String str, @SafeParcelable.Param(m131id = 6) String str2, @SafeParcelable.Param(m131id = 8) List list, @SafeParcelable.Param(m131id = 7) ClientIdentity clientIdentity) {
        Intrinsics.checkNotNullParameter(packageName, "packageName");
        if (clientIdentity != null && clientIdentity.zza()) {
            throw new IllegalArgumentException("Failed requirement.");
        }
        this.zzb = i;
        this.zzc = packageName;
        this.zzd = str;
        if (str2 == null) {
            str2 = clientIdentity != null ? clientIdentity.zze : null;
        }
        this.zze = str2;
        if (list == null) {
            list = clientIdentity != null ? clientIdentity.zzf : null;
            if (list == null) {
                list = zzex.zzi();
                Intrinsics.checkNotNullExpressionValue(list, "of(...)");
            }
        }
        Intrinsics.checkNotNullParameter(list, "<this>");
        zzex zzexVarZzj = zzex.zzj(list);
        Intrinsics.checkNotNullExpressionValue(zzexVarZzj, "copyOf(...)");
        this.zzf = zzexVarZzj;
        this.zzg = clientIdentity;
    }

    public final boolean equals(Object other) {
        if (other instanceof ClientIdentity) {
            ClientIdentity clientIdentity = (ClientIdentity) other;
            if (this.zzb == clientIdentity.zzb && Intrinsics.areEqual(this.zzc, clientIdentity.zzc) && Intrinsics.areEqual(this.zzd, clientIdentity.zzd) && Intrinsics.areEqual(this.zze, clientIdentity.zze) && Intrinsics.areEqual(this.zzg, clientIdentity.zzg) && Intrinsics.areEqual(this.zzf, clientIdentity.zzf)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Integer.valueOf(this.zzb), this.zzc, this.zzd, this.zze, this.zzg});
    }

    public final String toString() {
        int length = this.zzc.length() + 18;
        String str = this.zzd;
        StringBuilder sb = new StringBuilder(length + (str != null ? str.length() : 0));
        sb.append(this.zzb);
        sb.append(RemoteSettings.FORWARD_SLASH_STRING);
        sb.append(this.zzc);
        String str2 = this.zzd;
        if (str2 != null) {
            sb.append("[");
            if (StringsKt.startsWith$default(str2, this.zzc, false, 2, (Object) null)) {
                sb.append((CharSequence) str2, this.zzc.length(), str2.length());
            } else {
                sb.append(str2);
            }
            sb.append("]");
        }
        if (this.zze != null) {
            sb.append(RemoteSettings.FORWARD_SLASH_STRING);
            String str3 = this.zze;
            sb.append(Integer.toHexString(str3 != null ? str3.hashCode() : 0));
        }
        String string = sb.toString();
        Intrinsics.checkNotNullExpressionValue(string, "toString(...)");
        return string;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel dest, int flags) {
        Intrinsics.checkNotNullParameter(dest, "dest");
        int i = this.zzb;
        int iBeginObjectHeader = SafeParcelWriter.beginObjectHeader(dest);
        SafeParcelWriter.writeInt(dest, 1, i);
        SafeParcelWriter.writeString(dest, 3, this.zzc, false);
        SafeParcelWriter.writeString(dest, 4, this.zzd, false);
        SafeParcelWriter.writeString(dest, 6, this.zze, false);
        SafeParcelWriter.writeParcelable(dest, 7, this.zzg, flags, false);
        SafeParcelWriter.writeTypedList(dest, 8, this.zzf, false);
        SafeParcelWriter.finishObjectHeader(dest, iBeginObjectHeader);
    }

    @Pure
    public final boolean zza() {
        return this.zzg != null;
    }
}
