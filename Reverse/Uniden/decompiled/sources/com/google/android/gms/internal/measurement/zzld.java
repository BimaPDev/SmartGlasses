package com.google.android.gms.internal.measurement;

import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.TreeMap;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
final class zzld {
    private static final char[] zza;

    static String zza(zzlc zzlcVar, String str) {
        StringBuilder sb = new StringBuilder();
        sb.append("# ").append(str);
        zza(zzlcVar, sb, 0);
        return sb.toString();
    }

    static {
        char[] cArr = new char[80];
        zza = cArr;
        Arrays.fill(cArr, ' ');
    }

    private static void zza(int i, StringBuilder sb) {
        while (i > 0) {
            char[] cArr = zza;
            int length = i > cArr.length ? cArr.length : i;
            sb.append(cArr, 0, length);
            i -= length;
        }
    }

    static void zza(StringBuilder sb, int i, String str, Object obj) {
        if (obj instanceof List) {
            Iterator it = ((List) obj).iterator();
            while (it.hasNext()) {
                zza(sb, i, str, it.next());
            }
            return;
        }
        if (obj instanceof Map) {
            Iterator it2 = ((Map) obj).entrySet().iterator();
            while (it2.hasNext()) {
                zza(sb, i, str, (Map.Entry) it2.next());
            }
            return;
        }
        sb.append('\n');
        zza(i, sb);
        if (!str.isEmpty()) {
            StringBuilder sb2 = new StringBuilder();
            sb2.append(Character.toLowerCase(str.charAt(0)));
            for (int i2 = 1; i2 < str.length(); i2++) {
                char cCharAt = str.charAt(i2);
                if (Character.isUpperCase(cCharAt)) {
                    sb2.append("_");
                }
                sb2.append(Character.toLowerCase(cCharAt));
            }
            str = sb2.toString();
        }
        sb.append(str);
        if (obj instanceof String) {
            sb.append(": \"").append(zzmg.zza(zzik.zza((String) obj))).append('\"');
            return;
        }
        if (obj instanceof zzik) {
            sb.append(": \"").append(zzmg.zza((zzik) obj)).append('\"');
            return;
        }
        if (obj instanceof zzjt) {
            sb.append(" {");
            zza((zzjt) obj, sb, i + 2);
            sb.append("\n");
            zza(i, sb);
            sb.append("}");
            return;
        }
        if (obj instanceof Map.Entry) {
            sb.append(" {");
            Map.Entry entry = (Map.Entry) obj;
            int i3 = i + 2;
            zza(sb, i3, "key", entry.getKey());
            zza(sb, i3, "value", entry.getValue());
            sb.append("\n");
            zza(i, sb);
            sb.append("}");
            return;
        }
        sb.append(": ").append(obj);
    }

    /* JADX WARN: Code duplicated, block: B:100:0x0212  */
    /* JADX WARN: Code duplicated, block: B:56:0x0167  */
    /* JADX WARN: Code duplicated, block: B:58:0x0182  */
    /* JADX WARN: Code duplicated, block: B:60:0x018a  */
    /* JADX WARN: Code duplicated, block: B:62:0x018e  */
    /* JADX WARN: Code duplicated, block: B:65:0x0199  */
    /* JADX WARN: Code duplicated, block: B:67:0x019d  */
    /* JADX WARN: Code duplicated, block: B:70:0x01a8  */
    /* JADX WARN: Code duplicated, block: B:72:0x01ac  */
    /* JADX WARN: Code duplicated, block: B:75:0x01ba  */
    /* JADX WARN: Code duplicated, block: B:77:0x01be  */
    /* JADX WARN: Code duplicated, block: B:80:0x01d0  */
    /* JADX WARN: Code duplicated, block: B:82:0x01d4  */
    /* JADX WARN: Code duplicated, block: B:83:0x01db  */
    /* JADX WARN: Code duplicated, block: B:85:0x01df  */
    /* JADX WARN: Code duplicated, block: B:88:0x01e8  */
    /* JADX WARN: Code duplicated, block: B:98:0x0204  */
    private static void zza(zzlc zzlcVar, StringBuilder sb, int i) {
        int i2;
        int i3;
        Method method;
        Method method2;
        Object objZza;
        boolean zEquals;
        Method method3;
        Method method4;
        HashSet hashSet = new HashSet();
        HashMap map = new HashMap();
        TreeMap treeMap = new TreeMap();
        Method[] declaredMethods = zzlcVar.getClass().getDeclaredMethods();
        int length = declaredMethods.length;
        int i4 = 0;
        while (true) {
            i2 = 3;
            if (i4 >= length) {
                break;
            }
            Method method5 = declaredMethods[i4];
            if (!Modifier.isStatic(method5.getModifiers()) && method5.getName().length() >= 3) {
                if (method5.getName().startsWith("set")) {
                    hashSet.add(method5.getName());
                } else if (Modifier.isPublic(method5.getModifiers()) && method5.getParameterTypes().length == 0) {
                    if (method5.getName().startsWith("has")) {
                        map.put(method5.getName(), method5);
                    } else if (method5.getName().startsWith("get")) {
                        treeMap.put(method5.getName(), method5);
                    }
                }
            }
            i4++;
        }
        for (Map.Entry entry : treeMap.entrySet()) {
            String strSubstring = ((String) entry.getKey()).substring(i2);
            if (strSubstring.endsWith("List") && !strSubstring.endsWith("OrBuilderList") && !strSubstring.equals("List") && (method4 = (Method) entry.getValue()) != null && method4.getReturnType().equals(List.class)) {
                zza(sb, i, strSubstring.substring(0, strSubstring.length() - 4), zzjt.zza(method4, zzlcVar, new Object[0]));
                i2 = 3;
            } else {
                if (strSubstring.endsWith("Map") && !strSubstring.equals("Map") && (method3 = (Method) entry.getValue()) != null && method3.getReturnType().equals(Map.class) && !method3.isAnnotationPresent(Deprecated.class) && Modifier.isPublic(method3.getModifiers())) {
                    i3 = 3;
                    zza(sb, i, strSubstring.substring(0, strSubstring.length() - 3), zzjt.zza(method3, zzlcVar, new Object[0]));
                } else {
                    i3 = 3;
                    if (hashSet.contains("set" + strSubstring)) {
                        if (!strSubstring.endsWith("Bytes")) {
                            method = (Method) entry.getValue();
                            method2 = (Method) map.get("has" + strSubstring);
                            if (method != null) {
                                objZza = zzjt.zza(method, zzlcVar, new Object[0]);
                                if (method2 == null) {
                                    if (objZza instanceof Boolean) {
                                        if (((Boolean) objZza).booleanValue()) {
                                            zza(sb, i, strSubstring, objZza);
                                        }
                                    } else if (objZza instanceof Integer) {
                                        if (((Integer) objZza).intValue() != 0) {
                                            zza(sb, i, strSubstring, objZza);
                                        }
                                    } else if (objZza instanceof Float) {
                                        if (Float.floatToRawIntBits(((Float) objZza).floatValue()) != 0) {
                                            zza(sb, i, strSubstring, objZza);
                                        }
                                    } else if (objZza instanceof Double) {
                                        if (objZza instanceof String) {
                                            zEquals = objZza.equals("");
                                        } else if (objZza instanceof zzik) {
                                            zEquals = objZza.equals(zzik.zza);
                                        } else if (objZza instanceof zzlc) {
                                            zza(sb, i, strSubstring, objZza);
                                        } else {
                                            zza(sb, i, strSubstring, objZza);
                                        }
                                        if (!zEquals) {
                                            zza(sb, i, strSubstring, objZza);
                                        }
                                    } else if (Double.doubleToRawLongBits(((Double) objZza).doubleValue()) != 0) {
                                        zza(sb, i, strSubstring, objZza);
                                    }
                                } else if (((Boolean) zzjt.zza(method2, zzlcVar, new Object[0])).booleanValue()) {
                                    zza(sb, i, strSubstring, objZza);
                                }
                            }
                        } else if (!treeMap.containsKey("get" + strSubstring.substring(0, strSubstring.length() - 5))) {
                            method = (Method) entry.getValue();
                            method2 = (Method) map.get("has" + strSubstring);
                            if (method != null) {
                                objZza = zzjt.zza(method, zzlcVar, new Object[0]);
                                if (method2 == null) {
                                    if (objZza instanceof Boolean) {
                                        if (((Boolean) objZza).booleanValue()) {
                                            zza(sb, i, strSubstring, objZza);
                                        }
                                    } else if (objZza instanceof Integer) {
                                        if (((Integer) objZza).intValue() != 0) {
                                            zza(sb, i, strSubstring, objZza);
                                        }
                                    } else if (objZza instanceof Float) {
                                        if (Float.floatToRawIntBits(((Float) objZza).floatValue()) != 0) {
                                            zza(sb, i, strSubstring, objZza);
                                        }
                                    } else if (objZza instanceof Double) {
                                        if (objZza instanceof String) {
                                            zEquals = objZza.equals("");
                                        } else if (objZza instanceof zzik) {
                                            zEquals = objZza.equals(zzik.zza);
                                        } else if ((objZza instanceof zzlc) ? !(objZza instanceof Enum) || ((Enum) objZza).ordinal() != 0 : objZza != ((zzlc) objZza).zzck()) {
                                            zza(sb, i, strSubstring, objZza);
                                        }
                                        if (!zEquals) {
                                            zza(sb, i, strSubstring, objZza);
                                        }
                                    } else if (Double.doubleToRawLongBits(((Double) objZza).doubleValue()) != 0) {
                                        zza(sb, i, strSubstring, objZza);
                                    }
                                } else if (((Boolean) zzjt.zza(method2, zzlcVar, new Object[0])).booleanValue()) {
                                    zza(sb, i, strSubstring, objZza);
                                }
                            }
                        }
                    }
                }
                i2 = i3;
            }
        }
        if (zzlcVar instanceof zzjt.zzd) {
            Iterator<Map.Entry<T, Object>> itZzd = ((zzjt.zzd) zzlcVar).zzc.zzd();
            if (itZzd.hasNext()) {
                throw new NoSuchMethodError();
            }
        }
        zzjt zzjtVar = (zzjt) zzlcVar;
        if (zzjtVar.zzb != null) {
            zzjtVar.zzb.zza(sb, i);
        }
    }
}
