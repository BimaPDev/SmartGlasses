package com.google.android.gms.common;

import com.google.android.gms.internal.common.zzag;
import com.google.errorprone.annotations.RestrictedInheritance;
import java.util.HashMap;

/* JADX INFO: compiled from: com.google.android.gms:play-services-basement@@18.3.0 */
/* JADX INFO: loaded from: classes2.dex */
@RestrictedInheritance(allowedOnPath = ".*javatests/com/google/android/gmscore/integ/client/common/robolectric/.*", explanation = "Sub classing of GMS Core's APIs are restricted to testing fakes.", link = "go/gmscore-restrictedinheritance")
public class GmsSignatureVerifier {
    private static final zzab zza;
    private static final zzab zzb;
    private static final HashMap zzc;

    static {
        zzz zzzVar = new zzz();
        zzzVar.zzd("com.google.android.gms");
        zzzVar.zza(204200000L);
        zzzVar.zzc(zzag.zzn(zzn.zzd.zzf(), zzn.zzb.zzf()));
        zzzVar.zzb(zzag.zzn(zzn.zzc.zzf(), zzn.zza.zzf()));
        zza = zzzVar.zze();
        zzz zzzVar2 = new zzz();
        zzzVar2.zzd("com.android.vending");
        zzzVar2.zza(82240000L);
        zzzVar2.zzc(zzag.zzm(zzn.zzd.zzf()));
        zzzVar2.zzb(zzag.zzm(zzn.zzc.zzf()));
        zzb = zzzVar2.zze();
        zzc = new HashMap();
    }
}
