package com.uniden.rtach.helper;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import androidx.constraintlayout.widget.ConstraintLayout;
import com.google.android.gms.common.internal.ServiceSpecificExtraArgs;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: ConnectivityReceiver.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010#\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\t\b\u0016\u0018\u0000 \u00182\u00020\u0001:\u0002\u0017\u0018B\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u0018\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u0010H\u0016J\b\u0010\u0011\u001a\u00020\fH\u0002J\u0012\u0010\u0012\u001a\u00020\f2\b\u0010\u0013\u001a\u0004\u0018\u00010\u0006H\u0002J\u000e\u0010\u0014\u001a\u00020\f2\u0006\u0010\u0015\u001a\u00020\u0006J\u000e\u0010\u0016\u001a\u00020\f2\u0006\u0010\u0015\u001a\u00020\u0006R \u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005X\u0084\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0007\u0010\b\"\u0004\b\t\u0010\n¨\u0006\u0019"}, m491d2 = {"Lcom/uniden/rtach/helper/ConnectivityReceiver;", "Landroid/content/BroadcastReceiver;", "<init>", "()V", "listeners", "", "Lcom/uniden/rtach/helper/ConnectivityReceiver$ConnectivityReceiverListener;", "getListeners", "()Ljava/util/Set;", "setListeners", "(Ljava/util/Set;)V", "onReceive", "", "context", "Landroid/content/Context;", "intent", "Landroid/content/Intent;", "notifyStateToAll", "notifyState", ServiceSpecificExtraArgs.CastExtraArgs.LISTENER, "addListener", "l", "removeListener", "ConnectivityReceiverListener", "Companion", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public class ConnectivityReceiver extends BroadcastReceiver {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private static Boolean connected;
    private static ConnectivityReceiverListener connectivityReceiverListener;
    private Set<ConnectivityReceiverListener> listeners = new HashSet();

    /* JADX INFO: compiled from: ConnectivityReceiver.kt */
    @Metadata(m490d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\bf\u0018\u00002\u00020\u0001J\b\u0010\u0002\u001a\u00020\u0003H&J\b\u0010\u0004\u001a\u00020\u0003H&¨\u0006\u0005"}, m491d2 = {"Lcom/uniden/rtach/helper/ConnectivityReceiver$ConnectivityReceiverListener;", "", "networkAvailable", "", "networkUnavailable", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    public interface ConnectivityReceiverListener {
        void networkAvailable();

        void networkUnavailable();
    }

    protected final Set<ConnectivityReceiverListener> getListeners() {
        return this.listeners;
    }

    protected final void setListeners(Set<ConnectivityReceiverListener> set) {
        Intrinsics.checkNotNullParameter(set, "<set-?>");
        this.listeners = set;
    }

    public ConnectivityReceiver() {
        connected = null;
    }

    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        boolean z;
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(intent, "intent");
        try {
            if (intent.getExtras() == null) {
                return;
            }
            Object systemService = context.getSystemService("connectivity");
            Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.net.ConnectivityManager");
            NetworkInfo activeNetworkInfo = ((ConnectivityManager) systemService).getActiveNetworkInfo();
            if (activeNetworkInfo == null || activeNetworkInfo.getState() != NetworkInfo.State.CONNECTED) {
                intent.getBooleanExtra("noConnectivity", false);
                z = false;
            } else {
                z = true;
            }
            connected = Boolean.valueOf(z);
            notifyStateToAll();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private final void notifyStateToAll() {
        try {
            Iterator<ConnectivityReceiverListener> it = this.listeners.iterator();
            while (it.hasNext()) {
                notifyState(it.next());
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private final void notifyState(ConnectivityReceiverListener listener) {
        Boolean bool = connected;
        if (bool == null || listener == null) {
            return;
        }
        if (Intrinsics.areEqual((Object) bool, (Object) true)) {
            listener.networkAvailable();
        } else {
            listener.networkUnavailable();
        }
    }

    public final void addListener(ConnectivityReceiverListener l) {
        Intrinsics.checkNotNullParameter(l, "l");
        try {
            this.listeners.add(l);
            notifyState(l);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public final void removeListener(ConnectivityReceiverListener l) {
        Intrinsics.checkNotNullParameter(l, "l");
        this.listeners.remove(l);
    }

    /* JADX INFO: compiled from: ConnectivityReceiver.kt */
    @Metadata(m490d1 = {"\u0000\u001c\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0002\b\u0006\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003R\u001c\u0010\u0004\u001a\u0004\u0018\u00010\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0006\u0010\u0007\"\u0004\b\b\u0010\tR\u001e\u0010\n\u001a\u0004\u0018\u00010\u000bX\u0086\u000e¢\u0006\u0010\n\u0002\u0010\u0010\u001a\u0004\b\f\u0010\r\"\u0004\b\u000e\u0010\u000f¨\u0006\u0011"}, m491d2 = {"Lcom/uniden/rtach/helper/ConnectivityReceiver$Companion;", "", "<init>", "()V", "connectivityReceiverListener", "Lcom/uniden/rtach/helper/ConnectivityReceiver$ConnectivityReceiverListener;", "getConnectivityReceiverListener", "()Lcom/uniden/rtach/helper/ConnectivityReceiver$ConnectivityReceiverListener;", "setConnectivityReceiverListener", "(Lcom/uniden/rtach/helper/ConnectivityReceiver$ConnectivityReceiverListener;)V", "connected", "", "getConnected", "()Ljava/lang/Boolean;", "setConnected", "(Ljava/lang/Boolean;)V", "Ljava/lang/Boolean;", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final ConnectivityReceiverListener getConnectivityReceiverListener() {
            return ConnectivityReceiver.connectivityReceiverListener;
        }

        public final void setConnectivityReceiverListener(ConnectivityReceiverListener connectivityReceiverListener) {
            ConnectivityReceiver.connectivityReceiverListener = connectivityReceiverListener;
        }

        public final Boolean getConnected() {
            return ConnectivityReceiver.connected;
        }

        public final void setConnected(Boolean bool) {
            ConnectivityReceiver.connected = bool;
        }
    }
}
