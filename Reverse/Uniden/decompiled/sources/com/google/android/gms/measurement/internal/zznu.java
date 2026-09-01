package com.google.android.gms.measurement.internal;

import android.content.Context;
import android.net.Uri;
import android.text.TextUtils;
import com.google.android.gms.common.util.Clock;
import com.google.android.gms.internal.measurement.zzpu;
import java.util.HashMap;
import org.checkerframework.dataflow.qual.Pure;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zznu extends zzns {
    @Override // com.google.android.gms.measurement.internal.zzja, com.google.android.gms.measurement.internal.zzjc
    @Pure
    public final /* bridge */ /* synthetic */ Context zza() {
        return super.zza();
    }

    @Override // com.google.android.gms.measurement.internal.zzja, com.google.android.gms.measurement.internal.zzjc
    @Pure
    public final /* bridge */ /* synthetic */ Clock zzb() {
        return super.zzb();
    }

    @Override // com.google.android.gms.measurement.internal.zzns
    public final /* bridge */ /* synthetic */ zzt zzg() {
        return super.zzg();
    }

    @Override // com.google.android.gms.measurement.internal.zzja, com.google.android.gms.measurement.internal.zzjc
    @Pure
    public final /* bridge */ /* synthetic */ zzab zzd() {
        return super.zzd();
    }

    @Override // com.google.android.gms.measurement.internal.zzja
    @Pure
    public final /* bridge */ /* synthetic */ zzag zze() {
        return super.zze();
    }

    @Override // com.google.android.gms.measurement.internal.zzns
    public final /* bridge */ /* synthetic */ zzal zzh() {
        return super.zzh();
    }

    @Override // com.google.android.gms.measurement.internal.zzja
    @Pure
    public final /* bridge */ /* synthetic */ zzaz zzf() {
        return super.zzf();
    }

    @Override // com.google.android.gms.measurement.internal.zzja
    @Pure
    public final /* bridge */ /* synthetic */ zzgh zzi() {
        return super.zzi();
    }

    @Override // com.google.android.gms.measurement.internal.zzja, com.google.android.gms.measurement.internal.zzjc
    @Pure
    public final /* bridge */ /* synthetic */ zzgo zzj() {
        return super.zzj();
    }

    @Override // com.google.android.gms.measurement.internal.zzja
    @Pure
    public final /* bridge */ /* synthetic */ zzha zzk() {
        return super.zzk();
    }

    @Override // com.google.android.gms.measurement.internal.zzns
    public final /* bridge */ /* synthetic */ zzhl zzm() {
        return super.zzm();
    }

    @Override // com.google.android.gms.measurement.internal.zzja, com.google.android.gms.measurement.internal.zzjc
    @Pure
    public final /* bridge */ /* synthetic */ zzhv zzl() {
        return super.zzl();
    }

    @Override // com.google.android.gms.measurement.internal.zzns
    public final /* bridge */ /* synthetic */ zzmw zzn() {
        return super.zzn();
    }

    public final zznw zza(String str) {
        zzg zzgVarZze;
        if (zzpu.zza() && zze().zza(zzbh.zzbx)) {
            zzq();
            if (zzos.zzf(str)) {
                zzj().zzp().zza("sgtm feature flag enabled.");
                zzg zzgVarZze2 = zzh().zze(str);
                if (zzgVarZze2 == null) {
                    return new zznw(zzb(str), zznt.GOOGLE_ANALYTICS);
                }
                String strZzad = zzgVarZze2.zzad();
                com.google.android.gms.internal.measurement.zzfr.zzd zzdVarZzc = zzm().zzc(str);
                if (zzdVarZzc == null || (zzgVarZze = zzh().zze(str)) == null || ((!zzdVarZzc.zzq() || zzdVarZzc.zzh().zza() != 100) && !zzq().zzd(str, zzgVarZze.zzam()) && (!zze().zza(zzbh.zzbz) ? TextUtils.isEmpty(strZzad) || strZzad.hashCode() % 100 >= zzdVarZzc.zzh().zza() : TextUtils.isEmpty(strZzad) || Math.abs(strZzad.hashCode() % 100) >= zzdVarZzc.zzh().zza()))) {
                    return new zznw(zzb(str), zznt.GOOGLE_ANALYTICS);
                }
                zznw zznwVar = null;
                if (zzgVarZze2.zzat()) {
                    zzj().zzp().zza("sgtm upload enabled in manifest.");
                    com.google.android.gms.internal.measurement.zzfr.zzd zzdVarZzc2 = zzm().zzc(zzgVarZze2.zzac());
                    if (zzdVarZzc2 != null && zzdVarZzc2.zzq()) {
                        String strZze = zzdVarZzc2.zzh().zze();
                        if (!TextUtils.isEmpty(strZze)) {
                            String strZzd = zzdVarZzc2.zzh().zzd();
                            zzj().zzp().zza("sgtm configured with upload_url, server_info", strZze, TextUtils.isEmpty(strZzd) ? "Y" : "N");
                            if (TextUtils.isEmpty(strZzd)) {
                                zznwVar = new zznw(strZze, zznt.SGTM);
                            } else {
                                HashMap map = new HashMap();
                                map.put("x-sgtm-server-info", strZzd);
                                if (!TextUtils.isEmpty(zzgVarZze2.zzam())) {
                                    map.put("x-gtm-server-preview", zzgVarZze2.zzam());
                                }
                                zznwVar = new zznw(strZze, map, zznt.SGTM);
                            }
                        }
                    }
                }
                if (zznwVar != null) {
                    return zznwVar;
                }
            }
        }
        return new zznw(zzb(str), zznt.GOOGLE_ANALYTICS);
    }

    @Override // com.google.android.gms.measurement.internal.zzns
    public final /* bridge */ /* synthetic */ zznu zzo() {
        return super.zzo();
    }

    @Override // com.google.android.gms.measurement.internal.zzns
    /* JADX INFO: renamed from: g_ */
    public final /* bridge */ /* synthetic */ zzoo mo147g_() {
        return super.mo147g_();
    }

    @Override // com.google.android.gms.measurement.internal.zzja
    @Pure
    public final /* bridge */ /* synthetic */ zzos zzq() {
        return super.zzq();
    }

    public final String zza(zzg zzgVar) {
        Uri.Builder builder = new Uri.Builder();
        String strZzah = zzgVar.zzah();
        if (TextUtils.isEmpty(strZzah)) {
            strZzah = zzgVar.zzaa();
        }
        builder.scheme(zzbh.zze.zza(null)).encodedAuthority(zzbh.zzf.zza(null)).path("config/app/" + strZzah).appendQueryParameter("platform", "android").appendQueryParameter("gmp_version", "106000").appendQueryParameter("runtime_version", "0");
        return builder.build().toString();
    }

    private final String zzb(String str) {
        String strZzf = zzm().zzf(str);
        if (!TextUtils.isEmpty(strZzf)) {
            Uri uri = Uri.parse(zzbh.zzq.zza(null));
            Uri.Builder builderBuildUpon = uri.buildUpon();
            builderBuildUpon.authority(strZzf + "." + uri.getAuthority());
            return builderBuildUpon.build().toString();
        }
        return zzbh.zzq.zza(null);
    }

    zznu(zznv zznvVar) {
        super(zznvVar);
    }

    @Override // com.google.android.gms.measurement.internal.zzja
    public final /* bridge */ /* synthetic */ void zzr() {
        super.zzr();
    }

    @Override // com.google.android.gms.measurement.internal.zzja
    public final /* bridge */ /* synthetic */ void zzs() {
        super.zzs();
    }

    @Override // com.google.android.gms.measurement.internal.zzja
    public final /* bridge */ /* synthetic */ void zzt() {
        super.zzt();
    }
}
