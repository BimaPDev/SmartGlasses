package com.google.android.gms.measurement.internal;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import com.google.android.gms.internal.measurement.zzpn;
import java.util.Objects;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzp extends BroadcastReceiver {
    private final zzhy zza;

    public zzp(zzhy zzhyVar) {
        this.zza = zzhyVar;
    }

    @Override // android.content.BroadcastReceiver
    public final void onReceive(Context context, Intent intent) {
        if (intent == null) {
            this.zza.zzj().zzu().zza("App receiver called with null intent");
            return;
        }
        String action = intent.getAction();
        if (action == null) {
            this.zza.zzj().zzu().zza("App receiver called with null action");
            return;
        }
        action.hashCode();
        if (action.equals("com.google.android.gms.measurement.TRIGGERS_AVAILABLE")) {
            final zzhy zzhyVar = this.zza;
            if (zzpn.zza() && zzhyVar.zzf().zzf(null, zzbh.zzci)) {
                zzhyVar.zzj().zzp().zza("App receiver notified triggers are available");
                zzhyVar.zzl().zzb(new Runnable() { // from class: com.google.android.gms.measurement.internal.zzr
                    @Override // java.lang.Runnable
                    public final void run() {
                        zzhy zzhyVar2 = zzhyVar;
                        if (!zzhyVar2.zzt().zzw()) {
                            zzhyVar2.zzj().zzu().zza("registerTrigger called but app not eligible");
                            return;
                        }
                        final zzjq zzjqVarZzp = zzhyVar2.zzp();
                        Objects.requireNonNull(zzjqVarZzp);
                        new Thread(new Runnable() { // from class: com.google.android.gms.measurement.internal.zzs
                            @Override // java.lang.Runnable
                            public final void run() {
                                zzjqVarZzp.zzap();
                            }
                        }).start();
                    }
                });
                return;
            }
            return;
        }
        this.zza.zzj().zzu().zza("App receiver called with unknown action");
    }
}
