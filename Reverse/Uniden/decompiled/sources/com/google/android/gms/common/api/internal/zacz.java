package com.google.android.gms.common.api.internal;

import android.os.Looper;
import android.os.Message;
import android.util.Log;
import com.google.android.gms.common.api.PendingResult;
import com.google.android.gms.common.api.Status;
import com.google.android.gms.common.internal.Preconditions;

/* JADX INFO: compiled from: com.google.android.gms:play-services-base@@18.4.0 */
/* JADX INFO: loaded from: classes2.dex */
final class zacz extends com.google.android.gms.internal.base.zau {
    final /* synthetic */ zada zaa;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public zacz(zada zadaVar, Looper looper) {
        super(looper);
        this.zaa = zadaVar;
    }

    @Override // android.os.Handler
    public final void handleMessage(Message message) {
        int i = message.what;
        if (i != 0) {
            if (i == 1) {
                RuntimeException runtimeException = (RuntimeException) message.obj;
                Log.e("TransformedResultImpl", "Runtime exception on the transformation worker thread: ".concat(String.valueOf(runtimeException.getMessage())));
                throw runtimeException;
            }
            Log.e("TransformedResultImpl", "TransformationResultHandler received unknown message type: " + message.what);
            return;
        }
        PendingResult pendingResult = (PendingResult) message.obj;
        synchronized (this.zaa.zae) {
            zada zadaVar = (zada) Preconditions.checkNotNull(this.zaa.zab);
            if (pendingResult == null) {
                zadaVar.zaj(new Status(13, "Transform returned null"));
            } else if (pendingResult instanceof zacp) {
                zadaVar.zaj(((zacp) pendingResult).zaa());
            } else {
                zadaVar.zai(pendingResult);
            }
        }
    }
}
