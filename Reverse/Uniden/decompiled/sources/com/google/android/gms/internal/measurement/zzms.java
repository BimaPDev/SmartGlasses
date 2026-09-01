package com.google.android.gms.internal.measurement;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public class zzms {
    public static final zzms zza;
    public static final zzms zzb;
    public static final zzms zzc;
    public static final zzms zzd;
    public static final zzms zze;
    public static final zzms zzf;
    public static final zzms zzg;
    public static final zzms zzh;
    public static final zzms zzi;
    public static final zzms zzj;
    public static final zzms zzk;
    public static final zzms zzl;
    public static final zzms zzm;
    public static final zzms zzn;
    public static final zzms zzo;
    public static final zzms zzp;
    public static final zzms zzq;
    public static final zzms zzr;
    private static final /* synthetic */ zzms[] zzs;
    private final zzmz zzt;
    private final int zzu;

    public final int zza() {
        return this.zzu;
    }

    public final zzmz zzb() {
        return this.zzt;
    }

    static {
        zzms zzmsVar = new zzms("DOUBLE", 0, zzmz.DOUBLE, 1);
        zza = zzmsVar;
        zzms zzmsVar2 = new zzms("FLOAT", 1, zzmz.FLOAT, 5);
        zzb = zzmsVar2;
        zzms zzmsVar3 = new zzms("INT64", 2, zzmz.LONG, 0);
        zzc = zzmsVar3;
        zzms zzmsVar4 = new zzms("UINT64", 3, zzmz.LONG, 0);
        zzd = zzmsVar4;
        zzms zzmsVar5 = new zzms("INT32", 4, zzmz.INT, 0);
        zze = zzmsVar5;
        zzms zzmsVar6 = new zzms("FIXED64", 5, zzmz.LONG, 1);
        zzf = zzmsVar6;
        zzms zzmsVar7 = new zzms("FIXED32", 6, zzmz.INT, 5);
        zzg = zzmsVar7;
        zzms zzmsVar8 = new zzms("BOOL", 7, zzmz.BOOLEAN, 0);
        zzh = zzmsVar8;
        int i = 2;
        zzmy zzmyVar = null;
        zzmv zzmvVar = new zzmv("STRING", zzmz.STRING);
        zzi = zzmvVar;
        zzmu zzmuVar = new zzmu("GROUP", zzmz.MESSAGE);
        zzj = zzmuVar;
        zzmx zzmxVar = new zzmx("MESSAGE", zzmz.MESSAGE);
        zzk = zzmxVar;
        zzmw zzmwVar = new zzmw("BYTES", zzmz.BYTE_STRING);
        zzl = zzmwVar;
        zzms zzmsVar9 = new zzms("UINT32", 12, zzmz.INT, 0);
        zzm = zzmsVar9;
        zzms zzmsVar10 = new zzms("ENUM", 13, zzmz.ENUM, 0);
        zzn = zzmsVar10;
        zzms zzmsVar11 = new zzms("SFIXED32", 14, zzmz.INT, 5);
        zzo = zzmsVar11;
        zzms zzmsVar12 = new zzms("SFIXED64", 15, zzmz.LONG, 1);
        zzp = zzmsVar12;
        zzms zzmsVar13 = new zzms("SINT32", 16, zzmz.INT, 0);
        zzq = zzmsVar13;
        zzms zzmsVar14 = new zzms("SINT64", 17, zzmz.LONG, 0);
        zzr = zzmsVar14;
        zzs = new zzms[]{zzmsVar, zzmsVar2, zzmsVar3, zzmsVar4, zzmsVar5, zzmsVar6, zzmsVar7, zzmsVar8, zzmvVar, zzmuVar, zzmxVar, zzmwVar, zzmsVar9, zzmsVar10, zzmsVar11, zzmsVar12, zzmsVar13, zzmsVar14};
    }

    private zzms(String str, int i, zzmz zzmzVar, int i2) {
        super(str, i);
        this.zzt = zzmzVar;
        this.zzu = i2;
    }

    public static zzms[] values() {
        return (zzms[]) zzs.clone();
    }
}
