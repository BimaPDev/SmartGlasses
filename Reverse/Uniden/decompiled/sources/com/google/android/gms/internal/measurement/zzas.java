package com.google.android.gms.internal.measurement;

import com.google.common.base.Ascii;
import com.google.firebase.analytics.FirebaseAnalytics;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzas implements zzaq, Iterable<zzaq> {
    private final String zza;

    public final int hashCode() {
        return this.zza.hashCode();
    }

    @Override // com.google.android.gms.internal.measurement.zzaq
    public final String zzf() {
        return this.zza;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:101:0x0156  */
    /* JADX WARN: Code duplicated, block: B:102:0x015e  */
    /* JADX WARN: Code duplicated, block: B:105:0x0168  */
    /* JADX WARN: Code duplicated, block: B:106:0x0170  */
    /* JADX WARN: Code duplicated, block: B:109:0x017e  */
    /* JADX WARN: Code duplicated, block: B:110:0x0182  */
    /* JADX WARN: Code duplicated, block: B:113:0x0191  */
    /* JADX WARN: Code duplicated, block: B:116:0x0198  */
    /* JADX WARN: Code duplicated, block: B:118:0x01a0  */
    /* JADX WARN: Code duplicated, block: B:120:0x01b0  */
    /* JADX WARN: Code duplicated, block: B:121:0x01b9  */
    /* JADX WARN: Code duplicated, block: B:125:0x01d2  */
    /* JADX WARN: Code duplicated, block: B:128:0x01f9  */
    /* JADX WARN: Code duplicated, block: B:130:0x0211  */
    /* JADX WARN: Code duplicated, block: B:132:0x0227  */
    /* JADX WARN: Code duplicated, block: B:135:0x0239 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:136:0x023a  */
    /* JADX WARN: Code duplicated, block: B:138:0x023e  */
    /* JADX WARN: Code duplicated, block: B:141:0x0290  */
    /* JADX WARN: Code duplicated, block: B:143:0x02a2  */
    /* JADX WARN: Code duplicated, block: B:144:0x02bb  */
    /* JADX WARN: Code duplicated, block: B:147:0x02c3  */
    /* JADX WARN: Code duplicated, block: B:148:0x02db  */
    /* JADX WARN: Code duplicated, block: B:151:0x030a  */
    /* JADX WARN: Code duplicated, block: B:153:0x031c  */
    /* JADX WARN: Code duplicated, block: B:155:0x0328  */
    /* JADX WARN: Code duplicated, block: B:157:0x0334  */
    /* JADX WARN: Code duplicated, block: B:158:0x0339  */
    /* JADX WARN: Code duplicated, block: B:160:0x034e  */
    /* JADX WARN: Code duplicated, block: B:161:0x0365  */
    /* JADX WARN: Code duplicated, block: B:164:0x036e  */
    /* JADX WARN: Code duplicated, block: B:166:0x0374  */
    /* JADX WARN: Code duplicated, block: B:173:0x039d  */
    /* JADX WARN: Code duplicated, block: B:176:0x03a4  */
    /* JADX WARN: Code duplicated, block: B:178:0x03a8 A[LOOP:0: B:177:0x03a6->B:178:0x03a8, LOOP_END] */
    /* JADX WARN: Code duplicated, block: B:181:0x03bb  */
    /* JADX WARN: Code duplicated, block: B:183:0x03cd  */
    /* JADX WARN: Code duplicated, block: B:184:0x03e1  */
    /* JADX WARN: Code duplicated, block: B:187:0x03ea  */
    /* JADX WARN: Code duplicated, block: B:188:0x03f5  */
    /* JADX WARN: Code duplicated, block: B:191:0x0406  */
    /* JADX WARN: Code duplicated, block: B:192:0x0419  */
    /* JADX WARN: Code duplicated, block: B:195:0x0426  */
    /* JADX WARN: Code duplicated, block: B:196:0x0431  */
    /* JADX WARN: Code duplicated, block: B:199:0x044c  */
    /* JADX WARN: Code duplicated, block: B:201:0x045e  */
    /* JADX WARN: Code duplicated, block: B:202:0x0461  */
    /* JADX WARN: Code duplicated, block: B:205:0x047e  */
    /* JADX WARN: Code duplicated, block: B:207:0x0493  */
    /* JADX WARN: Code duplicated, block: B:209:0x0496  */
    /* JADX WARN: Code duplicated, block: B:211:0x04aa  */
    /* JADX WARN: Code duplicated, block: B:213:0x04c0  */
    /* JADX WARN: Code duplicated, block: B:215:0x04d2  */
    /* JADX WARN: Code duplicated, block: B:216:0x04d9  */
    /* JADX WARN: Code duplicated, block: B:219:0x04ef  */
    /* JADX WARN: Code duplicated, block: B:220:0x04f2  */
    /* JADX WARN: Code duplicated, block: B:223:0x050b  */
    /* JADX WARN: Code duplicated, block: B:224:0x050e  */
    /* JADX WARN: Code duplicated, block: B:227:0x0522  */
    /* JADX WARN: Code duplicated, block: B:229:0x0536  */
    /* JADX WARN: Code duplicated, block: B:231:0x0547  */
    /* JADX WARN: Code duplicated, block: B:232:0x0556  */
    /* JADX WARN: Code duplicated, block: B:235:0x056c  */
    /* JADX WARN: Code duplicated, block: B:237:0x057b  */
    /* JADX WARN: Code duplicated, block: B:239:0x0587  */
    /* JADX WARN: Code duplicated, block: B:241:0x059e  */
    /* JADX WARN: Code duplicated, block: B:243:0x05aa A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:244:0x05ab  */
    /* JADX WARN: Code duplicated, block: B:247:0x05b9 A[LOOP:1: B:245:0x05b3->B:247:0x05b9, LOOP_END] */
    /* JADX WARN: Code duplicated, block: B:250:0x05d7  */
    /* JADX WARN: Code duplicated, block: B:252:0x05e7  */
    /* JADX WARN: Code duplicated, block: B:253:0x0600  */
    /* JADX WARN: Code duplicated, block: B:263:0x061d  */
    /* JADX WARN: Code duplicated, block: B:265:0x0633  */
    /* JADX WARN: Code duplicated, block: B:267:0x063d  */
    /* JADX WARN: Code duplicated, block: B:269:0x0660  */
    /* JADX WARN: Code duplicated, block: B:271:0x0663  */
    /* JADX WARN: Code duplicated, block: B:43:0x00bb A[PHI: r19
      0x00bb: PHI (r19v21 byte) = 
      (r19v0 byte)
      (r19v0 byte)
      (r19v5 byte)
      (r19v0 byte)
      (r19v6 byte)
      (r19v0 byte)
      (r19v7 byte)
      (r19v0 byte)
      (r19v8 byte)
      (r19v0 byte)
      (r19v9 byte)
      (r19v0 byte)
      (r19v10 byte)
      (r19v0 byte)
      (r19v11 byte)
      (r19v0 byte)
      (r19v12 byte)
      (r19v0 byte)
      (r19v13 byte)
      (r19v0 byte)
      (r19v14 byte)
      (r19v0 byte)
      (r19v15 byte)
      (r19v0 byte)
      (r19v16 byte)
      (r19v0 byte)
      (r19v17 byte)
     binds: [B:42:0x00b8, B:95:0x0145, B:97:0x0149, B:91:0x0139, B:93:0x013d, B:87:0x012f, B:89:0x0132, B:83:0x0125, B:85:0x0128, B:79:0x011b, B:81:0x011e, B:75:0x0111, B:77:0x0114, B:71:0x0107, B:73:0x010a, B:67:0x00fb, B:69:0x00fe, B:63:0x00f1, B:65:0x00f4, B:59:0x00e7, B:61:0x00ea, B:55:0x00dd, B:57:0x00e0, B:51:0x00d3, B:53:0x00d6, B:47:0x00c9, B:49:0x00cc] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Code duplicated, block: B:44:0x00bd A[PHI: r4 r19
      0x00bd: PHI (r4v49 java.lang.String) = (r4v5 java.lang.String), (r4v6 java.lang.String), (r4v50 java.lang.String) binds: [B:103:0x0164, B:99:0x0153, B:43:0x00bb] A[DONT_GENERATE, DONT_INLINE]
      0x00bd: PHI (r19v20 byte) = (r19v0 byte), (r19v0 byte), (r19v21 byte) binds: [B:103:0x0164, B:99:0x0153, B:43:0x00bb] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Code duplicated, block: B:46:0x00c5  */
    /* JADX WARN: Code duplicated, block: B:49:0x00cc  */
    /* JADX WARN: Code duplicated, block: B:50:0x00cf  */
    /* JADX WARN: Code duplicated, block: B:53:0x00d6  */
    /* JADX WARN: Code duplicated, block: B:54:0x00d9  */
    /* JADX WARN: Code duplicated, block: B:57:0x00e0  */
    /* JADX WARN: Code duplicated, block: B:58:0x00e3  */
    /* JADX WARN: Code duplicated, block: B:61:0x00ea  */
    /* JADX WARN: Code duplicated, block: B:62:0x00ed  */
    /* JADX WARN: Code duplicated, block: B:65:0x00f4  */
    /* JADX WARN: Code duplicated, block: B:66:0x00f7  */
    /* JADX WARN: Code duplicated, block: B:69:0x00fe  */
    /* JADX WARN: Code duplicated, block: B:70:0x0101  */
    /* JADX WARN: Code duplicated, block: B:73:0x010a  */
    /* JADX WARN: Code duplicated, block: B:74:0x010d  */
    /* JADX WARN: Code duplicated, block: B:77:0x0114  */
    /* JADX WARN: Code duplicated, block: B:78:0x0117  */
    /* JADX WARN: Code duplicated, block: B:81:0x011e  */
    /* JADX WARN: Code duplicated, block: B:82:0x0121  */
    /* JADX WARN: Code duplicated, block: B:85:0x0128  */
    /* JADX WARN: Code duplicated, block: B:86:0x012b  */
    /* JADX WARN: Code duplicated, block: B:89:0x0132  */
    /* JADX WARN: Code duplicated, block: B:90:0x0135  */
    /* JADX WARN: Code duplicated, block: B:93:0x013d  */
    /* JADX WARN: Code duplicated, block: B:94:0x0141  */
    /* JADX WARN: Code duplicated, block: B:97:0x0149  */
    /* JADX WARN: Code duplicated, block: B:98:0x014d  */
    /* JADX WARN: Multi-variable type inference failed */
    @Override // com.google.android.gms.internal.measurement.zzaq
    public final zzaq zza(String str, zzh zzhVar, List<zzaq> list) {
        String str2;
        byte b;
        String str3;
        String str4;
        String str5;
        String str6;
        zzaq zzaqVarZza;
        double dDoubleValue;
        int i;
        int iZza;
        StringBuilder sb;
        int i2;
        String strZzf;
        Matcher matcher;
        String strZzf2;
        double dDoubleValue2;
        double dZza;
        String strZzf3;
        Matcher matcher2;
        String str7;
        double dDoubleValue3;
        double dZza2;
        double dMin;
        double length;
        double dZza3;
        double dMin2;
        String str8;
        ArrayList arrayList;
        String strZzf4;
        long jZzc;
        String[] strArrSplit;
        int length2;
        int i3;
        boolean zIsEmpty;
        String str9;
        int iZza2;
        int length3;
        String strZzf5;
        zzaq zzaqVarZza2;
        String str10;
        int iIndexOf;
        zzh zzhVar2;
        String strZzf6;
        if (!"charAt".equals(str) && !"concat".equals(str) && !"hasOwnProperty".equals(str) && !"indexOf".equals(str) && !"lastIndexOf".equals(str) && !"match".equals(str) && !"replace".equals(str) && !FirebaseAnalytics.Event.SEARCH.equals(str) && !"slice".equals(str) && !"split".equals(str) && !"substring".equals(str) && !"toLowerCase".equals(str) && !"toLocaleLowerCase".equals(str) && !"toString".equals(str) && !"toUpperCase".equals(str)) {
            str2 = "toLocaleUpperCase";
            if (!str2.equals(str)) {
                if (!"trim".equals(str)) {
                    throw new IllegalArgumentException(String.format("%s is not a String function", str));
                }
            }
            str.hashCode();
            b = -1;
            switch (str.hashCode()) {
                case -1789698943:
                    str3 = "charAt";
                    str4 = r4;
                    str5 = "toString";
                    str6 = "toLocaleLowerCase";
                    if (str.equals(str4)) {
                        b = 0;
                    }
                    break;
                case -1776922004:
                    str3 = "charAt";
                    str5 = "toString";
                    str4 = r4;
                    if (str.equals(str5)) {
                        b = 1;
                    }
                    str6 = "toLocaleLowerCase";
                    break;
                case -1464939364:
                    str3 = "charAt";
                    if (str.equals("toLocaleLowerCase")) {
                        str4 = r4;
                        str5 = "toString";
                        b = 2;
                    } else {
                        str4 = "hasOwnProperty";
                        str5 = "toString";
                    }
                    str6 = "toLocaleLowerCase";
                    break;
                case -1361633751:
                    str3 = "charAt";
                    if (str.equals(str3)) {
                        str4 = r4;
                        str5 = "toString";
                        b = 3;
                    } else {
                        str4 = "hasOwnProperty";
                        str5 = "toString";
                    }
                    str6 = "toLocaleLowerCase";
                    break;
                case -1354795244:
                    if (str.equals("concat")) {
                        b = 4;
                    }
                    str3 = "charAt";
                    str4 = "hasOwnProperty";
                    str5 = "toString";
                    str6 = "toLocaleLowerCase";
                    break;
                case -1137582698:
                    if (str.equals("toLowerCase")) {
                        b = 5;
                    }
                    str3 = "charAt";
                    str4 = "hasOwnProperty";
                    str5 = "toString";
                    str6 = "toLocaleLowerCase";
                    break;
                case -906336856:
                    if (str.equals(FirebaseAnalytics.Event.SEARCH)) {
                        b = 6;
                    }
                    str3 = "charAt";
                    str4 = "hasOwnProperty";
                    str5 = "toString";
                    str6 = "toLocaleLowerCase";
                    break;
                case -726908483:
                    if (str.equals(str2)) {
                        b = 7;
                    }
                    str3 = "charAt";
                    str4 = "hasOwnProperty";
                    str5 = "toString";
                    str6 = "toLocaleLowerCase";
                    break;
                case -467511597:
                    if (str.equals("lastIndexOf")) {
                        b = 8;
                    }
                    str3 = "charAt";
                    str4 = "hasOwnProperty";
                    str5 = "toString";
                    str6 = "toLocaleLowerCase";
                    break;
                case -399551817:
                    if (str.equals("toUpperCase")) {
                        b = 9;
                    }
                    str3 = "charAt";
                    str4 = "hasOwnProperty";
                    str5 = "toString";
                    str6 = "toLocaleLowerCase";
                    break;
                case 3568674:
                    if (str.equals("trim")) {
                        b = 10;
                    }
                    str3 = "charAt";
                    str4 = "hasOwnProperty";
                    str5 = "toString";
                    str6 = "toLocaleLowerCase";
                    break;
                case 103668165:
                    if (str.equals("match")) {
                        b = Ascii.f294VT;
                    }
                    str3 = "charAt";
                    str4 = "hasOwnProperty";
                    str5 = "toString";
                    str6 = "toLocaleLowerCase";
                    break;
                case 109526418:
                    if (str.equals("slice")) {
                        b = Ascii.f283FF;
                    }
                    str3 = "charAt";
                    str4 = "hasOwnProperty";
                    str5 = "toString";
                    str6 = "toLocaleLowerCase";
                    break;
                case 109648666:
                    if (str.equals("split")) {
                        b = Ascii.f281CR;
                    }
                    str3 = "charAt";
                    str4 = "hasOwnProperty";
                    str5 = "toString";
                    str6 = "toLocaleLowerCase";
                    break;
                case 530542161:
                    if (str.equals("substring")) {
                        b = Ascii.f291SO;
                    }
                    str3 = "charAt";
                    str4 = "hasOwnProperty";
                    str5 = "toString";
                    str6 = "toLocaleLowerCase";
                    break;
                case 1094496948:
                    if (str.equals("replace")) {
                        b = Ascii.f290SI;
                    }
                    str3 = "charAt";
                    str4 = "hasOwnProperty";
                    str5 = "toString";
                    str6 = "toLocaleLowerCase";
                    break;
                case 1943291465:
                    if (str.equals("indexOf")) {
                        b = Ascii.DLE;
                    }
                    str3 = "charAt";
                    str4 = "hasOwnProperty";
                    str5 = "toString";
                    str6 = "toLocaleLowerCase";
                    break;
                default:
                    str3 = "charAt";
                    str4 = "hasOwnProperty";
                    str5 = "toString";
                    str6 = "toLocaleLowerCase";
                    break;
            }
            switch (b) {
                case 0:
                    zzg.zza(str4, 1, list);
                    String str11 = this.zza;
                    zzaqVarZza = zzhVar.zza(list.get(0));
                    if ("length".equals(zzaqVarZza.zzf())) {
                        return zzag.zzh;
                    }
                    dDoubleValue = zzaqVarZza.zze().doubleValue();
                    if (dDoubleValue != Math.floor(dDoubleValue) && (i = (int) dDoubleValue) >= 0 && i < str11.length()) {
                        return zzag.zzh;
                    }
                    return zzag.zzi;
                case 1:
                    zzg.zza(str5, 0, list);
                    return this;
                case 2:
                    zzg.zza(str6, 0, list);
                    return new zzas(this.zza.toLowerCase());
                case 3:
                    zzg.zzc(str3, 1, list);
                    if (list.isEmpty()) {
                        iZza = 0;
                    } else {
                        iZza = (int) zzg.zza(zzhVar.zza(list.get(0)).zze().doubleValue());
                    }
                    String str12 = this.zza;
                    if (iZza >= 0 || iZza >= str12.length()) {
                        return zzaq.zzj;
                    }
                    return new zzas(String.valueOf(str12.charAt(iZza)));
                case 4:
                    if (list.isEmpty()) {
                        return this;
                    }
                    sb = new StringBuilder(this.zza);
                    for (i2 = 0; i2 < list.size(); i2++) {
                        sb.append(zzhVar.zza(list.get(i2)).zzf());
                    }
                    return new zzas(sb.toString());
                case 5:
                    zzg.zza("toLowerCase", 0, list);
                    return new zzas(this.zza.toLowerCase(Locale.ENGLISH));
                case 6:
                    zzg.zzc(FirebaseAnalytics.Event.SEARCH, 1, list);
                    if (!list.isEmpty()) {
                        strZzf = zzhVar.zza(list.get(0)).zzf();
                    } else {
                        strZzf = zzaq.zzc.zzf();
                    }
                    matcher = Pattern.compile(strZzf).matcher(this.zza);
                    if (matcher.find()) {
                        return new zzai(Double.valueOf(matcher.start()));
                    }
                    return new zzai(Double.valueOf(-1.0d));
                case 7:
                    zzg.zza(str2, 0, list);
                    return new zzas(this.zza.toUpperCase());
                case 8:
                    zzg.zzc("lastIndexOf", 2, list);
                    String str13 = this.zza;
                    if (list.size() <= 0) {
                        strZzf2 = zzaq.zzc.zzf();
                    } else {
                        strZzf2 = zzhVar.zza(list.get(0)).zzf();
                    }
                    if (list.size() < 2) {
                        dDoubleValue2 = Double.NaN;
                    } else {
                        dDoubleValue2 = zzhVar.zza(list.get(1)).zze().doubleValue();
                    }
                    if (Double.isNaN(dDoubleValue2)) {
                        dZza = Double.POSITIVE_INFINITY;
                    } else {
                        dZza = zzg.zza(dDoubleValue2);
                    }
                    return new zzai(Double.valueOf(str13.lastIndexOf(strZzf2, (int) dZza)));
                case 9:
                    zzg.zza("toUpperCase", 0, list);
                    return new zzas(this.zza.toUpperCase(Locale.ENGLISH));
                case 10:
                    zzg.zza("toUpperCase", 0, list);
                    return new zzas(this.zza.trim());
                case 11:
                    zzg.zzc("match", 1, list);
                    String str14 = this.zza;
                    if (list.size() <= 0) {
                        strZzf3 = "";
                    } else {
                        strZzf3 = zzhVar.zza(list.get(0)).zzf();
                    }
                    matcher2 = Pattern.compile(strZzf3).matcher(str14);
                    if (matcher2.find()) {
                        return new zzaf(new zzas(matcher2.group()));
                    }
                    return zzaq.zzd;
                case 12:
                    zzg.zzc("slice", 2, list);
                    str7 = this.zza;
                    if (list.isEmpty()) {
                        dDoubleValue3 = 0.0d;
                    } else {
                        dDoubleValue3 = zzhVar.zza(list.get(0)).zze().doubleValue();
                    }
                    dZza2 = zzg.zza(dDoubleValue3);
                    if (dZza2 < 0.0d) {
                        dMin = Math.max(((double) str7.length()) + dZza2, 0.0d);
                    } else {
                        dMin = Math.min(dZza2, str7.length());
                    }
                    int i4 = (int) dMin;
                    if (list.size() > 1) {
                        length = zzhVar.zza(list.get(1)).zze().doubleValue();
                    } else {
                        length = str7.length();
                    }
                    dZza3 = zzg.zza(length);
                    if (dZza3 < 0.0d) {
                        dMin2 = Math.max(((double) str7.length()) + dZza3, 0.0d);
                    } else {
                        dMin2 = Math.min(dZza3, str7.length());
                    }
                    return new zzas(str7.substring(i4, Math.max(0, ((int) dMin2) - i4) + i4));
                case 13:
                    zzg.zzc("split", 2, list);
                    str8 = this.zza;
                    if (str8.length() == 0) {
                        return new zzaf(this);
                    }
                    arrayList = new ArrayList();
                    if (list.isEmpty()) {
                        arrayList.add(this);
                    } else {
                        strZzf4 = zzhVar.zza(list.get(0)).zzf();
                        if (list.size() > 1) {
                            jZzc = zzg.zzc(zzhVar.zza(list.get(1)).zze().doubleValue());
                        } else {
                            jZzc = 2147483647L;
                        }
                        if (jZzc == 0) {
                            return new zzaf();
                        }
                        strArrSplit = str8.split(Pattern.quote(strZzf4), ((int) jZzc) + 1);
                        length2 = strArrSplit.length;
                        if (strZzf4.isEmpty() || strArrSplit.length <= 0) {
                            i3 = 0;
                        } else {
                            zIsEmpty = strArrSplit[0].isEmpty();
                            if (strArrSplit[strArrSplit.length - 1].isEmpty()) {
                                i3 = zIsEmpty;
                                length2 = strArrSplit.length - 1;
                                i3 = zIsEmpty;
                            }
                        }
                        i3 = zIsEmpty;
                        if (strArrSplit.length > jZzc) {
                            length2--;
                        }
                        while (i3 < length2) {
                            arrayList.add(new zzas(strArrSplit[i3]));
                            i3++;
                        }
                    }
                    return new zzaf(arrayList);
                case 14:
                    zzg.zzc("substring", 2, list);
                    str9 = this.zza;
                    if (list.isEmpty()) {
                        iZza2 = 0;
                    } else {
                        iZza2 = (int) zzg.zza(zzhVar.zza(list.get(0)).zze().doubleValue());
                    }
                    if (list.size() > 1) {
                        length3 = (int) zzg.zza(zzhVar.zza(list.get(1)).zze().doubleValue());
                    } else {
                        length3 = str9.length();
                    }
                    int iMin = Math.min(Math.max(iZza2, 0), str9.length());
                    int iMin2 = Math.min(Math.max(length3, 0), str9.length());
                    return new zzas(str9.substring(Math.min(iMin, iMin2), Math.max(iMin, iMin2)));
                case 15:
                    zzg.zzc("replace", 2, list);
                    strZzf5 = zzaq.zzc.zzf();
                    zzaqVarZza2 = zzaq.zzc;
                    if (!list.isEmpty()) {
                        strZzf5 = zzhVar.zza(list.get(0)).zzf();
                        if (list.size() > 1) {
                            zzaqVarZza2 = zzhVar.zza(list.get(1));
                        }
                    }
                    str10 = this.zza;
                    iIndexOf = str10.indexOf(strZzf5);
                    if (iIndexOf < 0) {
                        return this;
                    }
                    if (zzaqVarZza2 instanceof zzal) {
                        zzaqVarZza2 = ((zzal) zzaqVarZza2).zza(zzhVar, Arrays.asList(new zzas(strZzf5), new zzai(Double.valueOf(iIndexOf)), this));
                    }
                    return new zzas(str10.substring(0, iIndexOf) + zzaqVarZza2.zzf() + str10.substring(iIndexOf + strZzf5.length()));
                case 16:
                    zzg.zzc("indexOf", 2, list);
                    String str15 = this.zza;
                    if (list.size() <= 0) {
                        strZzf6 = zzaq.zzc.zzf();
                        zzhVar2 = zzhVar;
                    } else {
                        zzhVar2 = zzhVar;
                        strZzf6 = zzhVar2.zza(list.get(0)).zzf();
                    }
                    return new zzai(Double.valueOf(str15.indexOf(strZzf6, (int) zzg.zza(list.size() >= 2 ? zzhVar2.zza(list.get(1)).zze().doubleValue() : 0.0d))));
                default:
                    throw new IllegalArgumentException("Command not supported");
            }
        }
        str2 = "toLocaleUpperCase";
        str.hashCode();
        b = -1;
        switch (str.hashCode()) {
            case -1789698943:
                str3 = "charAt";
                str4 = r4;
                str5 = "toString";
                str6 = "toLocaleLowerCase";
                if (str.equals(str4)) {
                    b = 0;
                }
                break;
            case -1776922004:
                str3 = "charAt";
                str5 = "toString";
                str4 = r4;
                if (str.equals(str5)) {
                    b = 1;
                }
                str6 = "toLocaleLowerCase";
                break;
            case -1464939364:
                str3 = "charAt";
                if (str.equals("toLocaleLowerCase")) {
                    str4 = "hasOwnProperty";
                    str5 = "toString";
                } else {
                    str4 = r4;
                    str5 = "toString";
                    b = 2;
                }
                str6 = "toLocaleLowerCase";
                break;
            case -1361633751:
                str3 = "charAt";
                if (str.equals(str3)) {
                    str4 = "hasOwnProperty";
                    str5 = "toString";
                } else {
                    str4 = r4;
                    str5 = "toString";
                    b = 3;
                }
                str6 = "toLocaleLowerCase";
                break;
            case -1354795244:
                if (str.equals("concat")) {
                    b = 4;
                }
                str3 = "charAt";
                str4 = "hasOwnProperty";
                str5 = "toString";
                str6 = "toLocaleLowerCase";
                break;
            case -1137582698:
                if (str.equals("toLowerCase")) {
                    b = 5;
                }
                str3 = "charAt";
                str4 = "hasOwnProperty";
                str5 = "toString";
                str6 = "toLocaleLowerCase";
                break;
            case -906336856:
                if (str.equals(FirebaseAnalytics.Event.SEARCH)) {
                    b = 6;
                }
                str3 = "charAt";
                str4 = "hasOwnProperty";
                str5 = "toString";
                str6 = "toLocaleLowerCase";
                break;
            case -726908483:
                if (str.equals(str2)) {
                    b = 7;
                }
                str3 = "charAt";
                str4 = "hasOwnProperty";
                str5 = "toString";
                str6 = "toLocaleLowerCase";
                break;
            case -467511597:
                if (str.equals("lastIndexOf")) {
                    b = 8;
                }
                str3 = "charAt";
                str4 = "hasOwnProperty";
                str5 = "toString";
                str6 = "toLocaleLowerCase";
                break;
            case -399551817:
                if (str.equals("toUpperCase")) {
                    b = 9;
                }
                str3 = "charAt";
                str4 = "hasOwnProperty";
                str5 = "toString";
                str6 = "toLocaleLowerCase";
                break;
            case 3568674:
                if (str.equals("trim")) {
                    b = 10;
                }
                str3 = "charAt";
                str4 = "hasOwnProperty";
                str5 = "toString";
                str6 = "toLocaleLowerCase";
                break;
            case 103668165:
                if (str.equals("match")) {
                    b = Ascii.f294VT;
                }
                str3 = "charAt";
                str4 = "hasOwnProperty";
                str5 = "toString";
                str6 = "toLocaleLowerCase";
                break;
            case 109526418:
                if (str.equals("slice")) {
                    b = Ascii.f283FF;
                }
                str3 = "charAt";
                str4 = "hasOwnProperty";
                str5 = "toString";
                str6 = "toLocaleLowerCase";
                break;
            case 109648666:
                if (str.equals("split")) {
                    b = Ascii.f281CR;
                }
                str3 = "charAt";
                str4 = "hasOwnProperty";
                str5 = "toString";
                str6 = "toLocaleLowerCase";
                break;
            case 530542161:
                if (str.equals("substring")) {
                    b = Ascii.f291SO;
                }
                str3 = "charAt";
                str4 = "hasOwnProperty";
                str5 = "toString";
                str6 = "toLocaleLowerCase";
                break;
            case 1094496948:
                if (str.equals("replace")) {
                    b = Ascii.f290SI;
                }
                str3 = "charAt";
                str4 = "hasOwnProperty";
                str5 = "toString";
                str6 = "toLocaleLowerCase";
                break;
            case 1943291465:
                if (str.equals("indexOf")) {
                    b = Ascii.DLE;
                }
                str3 = "charAt";
                str4 = "hasOwnProperty";
                str5 = "toString";
                str6 = "toLocaleLowerCase";
                break;
            default:
                str3 = "charAt";
                str4 = "hasOwnProperty";
                str5 = "toString";
                str6 = "toLocaleLowerCase";
                break;
        }
        switch (b) {
            case 0:
                zzg.zza(str4, 1, list);
                String str16 = this.zza;
                zzaqVarZza = zzhVar.zza(list.get(0));
                if ("length".equals(zzaqVarZza.zzf())) {
                    return zzag.zzh;
                }
                dDoubleValue = zzaqVarZza.zze().doubleValue();
                if (dDoubleValue != Math.floor(dDoubleValue)) {
                    break;
                }
                return zzag.zzi;
            case 1:
                zzg.zza(str5, 0, list);
                return this;
            case 2:
                zzg.zza(str6, 0, list);
                return new zzas(this.zza.toLowerCase());
            case 3:
                zzg.zzc(str3, 1, list);
                if (list.isEmpty()) {
                    iZza = (int) zzg.zza(zzhVar.zza(list.get(0)).zze().doubleValue());
                } else {
                    iZza = 0;
                }
                String str17 = this.zza;
                if (iZza >= 0) {
                    break;
                }
                return zzaq.zzj;
            case 4:
                if (list.isEmpty()) {
                    return this;
                }
                sb = new StringBuilder(this.zza);
                while (i2 < list.size()) {
                    sb.append(zzhVar.zza(list.get(i2)).zzf());
                }
                return new zzas(sb.toString());
            case 5:
                zzg.zza("toLowerCase", 0, list);
                return new zzas(this.zza.toLowerCase(Locale.ENGLISH));
            case 6:
                zzg.zzc(FirebaseAnalytics.Event.SEARCH, 1, list);
                if (!list.isEmpty()) {
                    strZzf = zzhVar.zza(list.get(0)).zzf();
                } else {
                    strZzf = zzaq.zzc.zzf();
                }
                matcher = Pattern.compile(strZzf).matcher(this.zza);
                if (matcher.find()) {
                    return new zzai(Double.valueOf(matcher.start()));
                }
                return new zzai(Double.valueOf(-1.0d));
            case 7:
                zzg.zza(str2, 0, list);
                return new zzas(this.zza.toUpperCase());
            case 8:
                zzg.zzc("lastIndexOf", 2, list);
                String str18 = this.zza;
                if (list.size() <= 0) {
                    strZzf2 = zzaq.zzc.zzf();
                } else {
                    strZzf2 = zzhVar.zza(list.get(0)).zzf();
                }
                if (list.size() < 2) {
                    dDoubleValue2 = Double.NaN;
                } else {
                    dDoubleValue2 = zzhVar.zza(list.get(1)).zze().doubleValue();
                }
                if (Double.isNaN(dDoubleValue2)) {
                    dZza = Double.POSITIVE_INFINITY;
                } else {
                    dZza = zzg.zza(dDoubleValue2);
                }
                return new zzai(Double.valueOf(str18.lastIndexOf(strZzf2, (int) dZza)));
            case 9:
                zzg.zza("toUpperCase", 0, list);
                return new zzas(this.zza.toUpperCase(Locale.ENGLISH));
            case 10:
                zzg.zza("toUpperCase", 0, list);
                return new zzas(this.zza.trim());
            case 11:
                zzg.zzc("match", 1, list);
                String str19 = this.zza;
                if (list.size() <= 0) {
                    strZzf3 = "";
                } else {
                    strZzf3 = zzhVar.zza(list.get(0)).zzf();
                }
                matcher2 = Pattern.compile(strZzf3).matcher(str19);
                if (matcher2.find()) {
                    return new zzaf(new zzas(matcher2.group()));
                }
                return zzaq.zzd;
            case 12:
                zzg.zzc("slice", 2, list);
                str7 = this.zza;
                if (list.isEmpty()) {
                    dDoubleValue3 = zzhVar.zza(list.get(0)).zze().doubleValue();
                } else {
                    dDoubleValue3 = 0.0d;
                }
                dZza2 = zzg.zza(dDoubleValue3);
                if (dZza2 < 0.0d) {
                    dMin = Math.max(((double) str7.length()) + dZza2, 0.0d);
                } else {
                    dMin = Math.min(dZza2, str7.length());
                }
                int i5 = (int) dMin;
                if (list.size() > 1) {
                    length = zzhVar.zza(list.get(1)).zze().doubleValue();
                } else {
                    length = str7.length();
                }
                dZza3 = zzg.zza(length);
                if (dZza3 < 0.0d) {
                    dMin2 = Math.max(((double) str7.length()) + dZza3, 0.0d);
                } else {
                    dMin2 = Math.min(dZza3, str7.length());
                }
                return new zzas(str7.substring(i5, Math.max(0, ((int) dMin2) - i5) + i5));
            case 13:
                zzg.zzc("split", 2, list);
                str8 = this.zza;
                if (str8.length() == 0) {
                    return new zzaf(this);
                }
                arrayList = new ArrayList();
                if (list.isEmpty()) {
                    arrayList.add(this);
                } else {
                    strZzf4 = zzhVar.zza(list.get(0)).zzf();
                    if (list.size() > 1) {
                        jZzc = zzg.zzc(zzhVar.zza(list.get(1)).zze().doubleValue());
                    } else {
                        jZzc = 2147483647L;
                    }
                    if (jZzc == 0) {
                        return new zzaf();
                    }
                    strArrSplit = str8.split(Pattern.quote(strZzf4), ((int) jZzc) + 1);
                    length2 = strArrSplit.length;
                    if (strZzf4.isEmpty()) {
                        i3 = 0;
                    } else {
                        i3 = 0;
                    }
                    i3 = zIsEmpty;
                    if (strArrSplit.length > jZzc) {
                        length2--;
                    }
                    while (i3 < length2) {
                        arrayList.add(new zzas(strArrSplit[i3]));
                        i3++;
                    }
                }
                return new zzaf(arrayList);
            case 14:
                zzg.zzc("substring", 2, list);
                str9 = this.zza;
                if (list.isEmpty()) {
                    iZza2 = (int) zzg.zza(zzhVar.zza(list.get(0)).zze().doubleValue());
                } else {
                    iZza2 = 0;
                }
                if (list.size() > 1) {
                    length3 = (int) zzg.zza(zzhVar.zza(list.get(1)).zze().doubleValue());
                } else {
                    length3 = str9.length();
                }
                int iMin3 = Math.min(Math.max(iZza2, 0), str9.length());
                int iMin4 = Math.min(Math.max(length3, 0), str9.length());
                return new zzas(str9.substring(Math.min(iMin3, iMin4), Math.max(iMin3, iMin4)));
            case 15:
                zzg.zzc("replace", 2, list);
                strZzf5 = zzaq.zzc.zzf();
                zzaqVarZza2 = zzaq.zzc;
                if (!list.isEmpty()) {
                    strZzf5 = zzhVar.zza(list.get(0)).zzf();
                    if (list.size() > 1) {
                        zzaqVarZza2 = zzhVar.zza(list.get(1));
                    }
                }
                str10 = this.zza;
                iIndexOf = str10.indexOf(strZzf5);
                if (iIndexOf < 0) {
                    return this;
                }
                if (zzaqVarZza2 instanceof zzal) {
                    zzaqVarZza2 = ((zzal) zzaqVarZza2).zza(zzhVar, Arrays.asList(new zzas(strZzf5), new zzai(Double.valueOf(iIndexOf)), this));
                }
                return new zzas(str10.substring(0, iIndexOf) + zzaqVarZza2.zzf() + str10.substring(iIndexOf + strZzf5.length()));
            case 16:
                zzg.zzc("indexOf", 2, list);
                String str110 = this.zza;
                if (list.size() <= 0) {
                    strZzf6 = zzaq.zzc.zzf();
                    zzhVar2 = zzhVar;
                } else {
                    zzhVar2 = zzhVar;
                    strZzf6 = zzhVar2.zza(list.get(0)).zzf();
                }
                return new zzai(Double.valueOf(str110.indexOf(strZzf6, (int) zzg.zza(list.size() >= 2 ? zzhVar2.zza(list.get(1)).zze().doubleValue() : 0.0d))));
            default:
                throw new IllegalArgumentException("Command not supported");
        }
    }

    @Override // com.google.android.gms.internal.measurement.zzaq
    public final zzaq zzc() {
        return new zzas(this.zza);
    }

    @Override // com.google.android.gms.internal.measurement.zzaq
    public final Boolean zzd() {
        return Boolean.valueOf(!this.zza.isEmpty());
    }

    @Override // com.google.android.gms.internal.measurement.zzaq
    public final Double zze() {
        if (this.zza.isEmpty()) {
            return Double.valueOf(0.0d);
        }
        try {
            return Double.valueOf(this.zza);
        } catch (NumberFormatException unused) {
            return Double.valueOf(Double.NaN);
        }
    }

    public final String toString() {
        return "\"" + this.zza + "\"";
    }

    @Override // com.google.android.gms.internal.measurement.zzaq
    public final Iterator<zzaq> zzh() {
        return new zzav(this);
    }

    @Override // java.lang.Iterable
    public final Iterator<zzaq> iterator() {
        return new zzau(this);
    }

    public zzas(String str) {
        if (str == null) {
            throw new IllegalArgumentException("StringValue cannot be null.");
        }
        this.zza = str;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof zzas) {
            return this.zza.equals(((zzas) obj).zza);
        }
        return false;
    }
}
