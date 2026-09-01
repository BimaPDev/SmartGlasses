package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.zzjo;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
final class zzjm<T extends zzjo<T>> {
    private static final zzjm<?> zzb = new zzjm<>(true);
    final zzlv<T, Object> zza;
    private boolean zzc;
    private boolean zzd;

    static int zza(zzms zzmsVar, int i, Object obj) {
        int iZzi = zzjc.zzi(i);
        if (zzmsVar == zzms.zzj) {
            zzjv.zza((zzlc) obj);
            iZzi <<= 1;
        }
        return iZzi + zza(zzmsVar, obj);
    }

    public static <T extends zzjo<T>> zzjm<T> zzb() {
        return (zzjm<T>) zzb;
    }

    public final boolean zzf() {
        return this.zzc;
    }

    private static int zza(zzms zzmsVar, Object obj) {
        switch (zzjl.zzb[zzmsVar.ordinal()]) {
            case 1:
                return zzjc.zza(((Double) obj).doubleValue());
            case 2:
                return zzjc.zza(((Float) obj).floatValue());
            case 3:
                return zzjc.zzd(((Long) obj).longValue());
            case 4:
                return zzjc.zzg(((Long) obj).longValue());
            case 5:
                return zzjc.zzf(((Integer) obj).intValue());
            case 6:
                return zzjc.zzc(((Long) obj).longValue());
            case 7:
                return zzjc.zze(((Integer) obj).intValue());
            case 8:
                return zzjc.zza(((Boolean) obj).booleanValue());
            case 9:
                return zzjc.zzb((zzlc) obj);
            case 10:
                if (obj instanceof zzkg) {
                    return zzjc.zza((zzkg) obj);
                }
                return zzjc.zzc((zzlc) obj);
            case 11:
                if (obj instanceof zzik) {
                    return zzjc.zzb((zzik) obj);
                }
                return zzjc.zzb((String) obj);
            case 12:
                if (obj instanceof zzik) {
                    return zzjc.zzb((zzik) obj);
                }
                return zzjc.zza((byte[]) obj);
            case 13:
                return zzjc.zzj(((Integer) obj).intValue());
            case 14:
                return zzjc.zzg(((Integer) obj).intValue());
            case 15:
                return zzjc.zze(((Long) obj).longValue());
            case 16:
                return zzjc.zzh(((Integer) obj).intValue());
            case 17:
                return zzjc.zzf(((Long) obj).longValue());
            case 18:
                if (obj instanceof zzjy) {
                    return zzjc.zzd(((zzjy) obj).zza());
                }
                return zzjc.zzd(((Integer) obj).intValue());
            default:
                throw new RuntimeException("There is no way to get here, but the compiler thinks otherwise.");
        }
    }

    public static int zza(zzjo<?> zzjoVar, Object obj) {
        zzms zzmsVarZzb = zzjoVar.zzb();
        int iZza = zzjoVar.zza();
        if (zzjoVar.zze()) {
            List list = (List) obj;
            int size = list.size();
            int i = 0;
            if (!zzjoVar.zzd()) {
                int iZza2 = 0;
                while (i < size) {
                    iZza2 += zza(zzmsVarZzb, iZza, list.get(i));
                    i++;
                }
                return iZza2;
            }
            if (list.isEmpty()) {
                return 0;
            }
            int iZza3 = 0;
            while (i < size) {
                iZza3 += zza(zzmsVarZzb, list.get(i));
                i++;
            }
            return zzjc.zzi(iZza) + iZza3 + zzjc.zzj(iZza3);
        }
        return zza(zzmsVarZzb, iZza, obj);
    }

    public final int zza() {
        int iZza = this.zza.zza();
        int iZza2 = 0;
        for (int i = 0; i < iZza; i++) {
            iZza2 += zza((Map.Entry) this.zza.zza(i));
        }
        Iterator it = this.zza.zzb().iterator();
        while (it.hasNext()) {
            iZza2 += zza((Map.Entry) it.next());
        }
        return iZza2;
    }

    private static int zza(Map.Entry<T, Object> entry) {
        T key = entry.getKey();
        Object value = entry.getValue();
        if (key.zzc() == zzmz.MESSAGE && !key.zze() && !key.zzd()) {
            if (value instanceof zzkg) {
                return zzjc.zza(entry.getKey().zza(), (zzkg) value);
            }
            return zzjc.zzb(entry.getKey().zza(), (zzlc) value);
        }
        return zza((zzjo<?>) key, value);
    }

    public final int hashCode() {
        return this.zza.hashCode();
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final /* synthetic */ Object clone() throws CloneNotSupportedException {
        zzjm zzjmVar = new zzjm();
        int iZza = this.zza.zza();
        for (int i = 0; i < iZza; i++) {
            Map.Entry<K, Object> entryZza = this.zza.zza(i);
            zzjmVar.zzb((zzjo) entryZza.getKey(), entryZza.getValue());
        }
        Iterator it = this.zza.zzb().iterator();
        while (it.hasNext()) {
            Map.Entry entry = (Map.Entry) it.next();
            zzjmVar.zzb((zzjo) entry.getKey(), entry.getValue());
        }
        zzjmVar.zzd = this.zzd;
        return zzjmVar;
    }

    private static Object zza(Object obj) {
        if (obj instanceof zzlh) {
            return ((zzlh) obj).clone();
        }
        if (!(obj instanceof byte[])) {
            return obj;
        }
        byte[] bArr = (byte[]) obj;
        byte[] bArr2 = new byte[bArr.length];
        System.arraycopy(bArr, 0, bArr2, 0, bArr.length);
        return bArr2;
    }

    private final Object zza(T t) {
        Object obj = this.zza.get(t);
        if (!(obj instanceof zzkg)) {
            return obj;
        }
        throw new NoSuchMethodError();
    }

    final Iterator<Map.Entry<T, Object>> zzc() {
        if (this.zza.isEmpty()) {
            return Collections.emptyIterator();
        }
        if (this.zzd) {
            return new zzki(this.zza.zzc().iterator());
        }
        return this.zza.zzc().iterator();
    }

    public final Iterator<Map.Entry<T, Object>> zzd() {
        if (this.zza.isEmpty()) {
            return Collections.emptyIterator();
        }
        if (this.zzd) {
            return new zzki(this.zza.entrySet().iterator());
        }
        return this.zza.entrySet().iterator();
    }

    private zzjm() {
        this.zza = new zzly();
    }

    private zzjm(zzlv<T, Object> zzlvVar) {
        this.zza = zzlvVar;
        zze();
    }

    private zzjm(boolean z) {
        this(new zzly());
        zze();
    }

    public final void zze() {
        if (this.zzc) {
            return;
        }
        int iZza = this.zza.zza();
        for (int i = 0; i < iZza; i++) {
            Object value = this.zza.zza(i).getValue();
            if (value instanceof zzjt) {
                ((zzjt) value).zzcl();
            }
        }
        Iterator it = this.zza.zzb().iterator();
        while (it.hasNext()) {
            Object value2 = ((Map.Entry) it.next()).getValue();
            if (value2 instanceof zzjt) {
                ((zzjt) value2).zzcl();
            }
        }
        this.zza.zzd();
        this.zzc = true;
    }

    public final void zza(zzjm<T> zzjmVar) {
        int iZza = zzjmVar.zza.zza();
        for (int i = 0; i < iZza; i++) {
            zzb((Map.Entry) zzjmVar.zza.zza(i));
        }
        Iterator it = zzjmVar.zza.zzb().iterator();
        while (it.hasNext()) {
            zzb((Map.Entry) it.next());
        }
    }

    private final void zzb(Map.Entry<T, Object> entry) {
        zzlc zzlcVarZzai;
        T key = entry.getKey();
        Object value = entry.getValue();
        boolean z = value instanceof zzkg;
        if (key.zze()) {
            if (z) {
                throw new IllegalStateException("Lazy fields can not be repeated");
            }
            Object objZza = zza((zzjo) key);
            List list = (List) value;
            int size = list.size();
            if (objZza == null) {
                objZza = new ArrayList(size);
            }
            List list2 = (List) objZza;
            for (int i = 0; i < size; i++) {
                list2.add(zza(list.get(i)));
            }
            this.zza.put(key, objZza);
            return;
        }
        if (key.zzc() != zzmz.MESSAGE) {
            if (z) {
                throw new IllegalStateException("Lazy fields must be message-valued");
            }
            this.zza.put(key, zza(value));
            return;
        }
        Object objZza2 = zza((zzjo) key);
        if (objZza2 == null) {
            this.zza.put(key, zza(value));
            if (z) {
                this.zzd = true;
                return;
            }
            return;
        }
        if (z) {
            throw new NoSuchMethodError();
        }
        if (objZza2 instanceof zzlh) {
            zzlcVarZzai = key.zza((zzlh) objZza2, (zzlh) value);
        } else {
            zzlcVarZzai = key.zza(((zzlc) objZza2).zzcj(), (zzlc) value).zzai();
        }
        this.zza.put(key, zzlcVarZzai);
    }

    private final void zzb(T t, Object obj) {
        if (t.zze()) {
            if (!(obj instanceof List)) {
                throw new IllegalArgumentException("Wrong object type used with protocol message reflection.");
            }
            List list = (List) obj;
            int size = list.size();
            ArrayList arrayList = new ArrayList(size);
            for (int i = 0; i < size; i++) {
                Object obj2 = list.get(i);
                zzc(t, obj2);
                arrayList.add(obj2);
            }
            obj = arrayList;
        } else {
            zzc(t, obj);
        }
        if (obj instanceof zzkg) {
            this.zzd = true;
        }
        this.zza.put(t, obj);
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:32:? A[RETURN, SYNTHETIC] */
    private static void zzc(T t, Object obj) {
        boolean z;
        zzms zzmsVarZzb = t.zzb();
        zzjv.zza(obj);
        switch (zzjl.zza[zzmsVarZzb.zzb().ordinal()]) {
            case 1:
                z = obj instanceof Integer;
                if (z) {
                    return;
                }
                throw new IllegalArgumentException(String.format("Wrong object type used with protocol message reflection.\nField number: %d, field java type: %s, value type: %s\n", Integer.valueOf(t.zza()), t.zzb().zzb(), obj.getClass().getName()));
            case 2:
                z = obj instanceof Long;
                if (z) {
                    return;
                }
                throw new IllegalArgumentException(String.format("Wrong object type used with protocol message reflection.\nField number: %d, field java type: %s, value type: %s\n", Integer.valueOf(t.zza()), t.zzb().zzb(), obj.getClass().getName()));
            case 3:
                z = obj instanceof Float;
                if (z) {
                    return;
                }
                throw new IllegalArgumentException(String.format("Wrong object type used with protocol message reflection.\nField number: %d, field java type: %s, value type: %s\n", Integer.valueOf(t.zza()), t.zzb().zzb(), obj.getClass().getName()));
            case 4:
                z = obj instanceof Double;
                if (z) {
                    return;
                }
                throw new IllegalArgumentException(String.format("Wrong object type used with protocol message reflection.\nField number: %d, field java type: %s, value type: %s\n", Integer.valueOf(t.zza()), t.zzb().zzb(), obj.getClass().getName()));
            case 5:
                z = obj instanceof Boolean;
                if (z) {
                    return;
                }
                throw new IllegalArgumentException(String.format("Wrong object type used with protocol message reflection.\nField number: %d, field java type: %s, value type: %s\n", Integer.valueOf(t.zza()), t.zzb().zzb(), obj.getClass().getName()));
            case 6:
                z = obj instanceof String;
                if (z) {
                    return;
                }
                throw new IllegalArgumentException(String.format("Wrong object type used with protocol message reflection.\nField number: %d, field java type: %s, value type: %s\n", Integer.valueOf(t.zza()), t.zzb().zzb(), obj.getClass().getName()));
            case 7:
                if ((obj instanceof zzik) || (obj instanceof byte[])) {
                    return;
                }
                throw new IllegalArgumentException(String.format("Wrong object type used with protocol message reflection.\nField number: %d, field java type: %s, value type: %s\n", Integer.valueOf(t.zza()), t.zzb().zzb(), obj.getClass().getName()));
            case 8:
                if ((obj instanceof Integer) || (obj instanceof zzjy)) {
                    return;
                }
                throw new IllegalArgumentException(String.format("Wrong object type used with protocol message reflection.\nField number: %d, field java type: %s, value type: %s\n", Integer.valueOf(t.zza()), t.zzb().zzb(), obj.getClass().getName()));
            case 9:
                if ((obj instanceof zzlc) || (obj instanceof zzkg)) {
                    return;
                }
                throw new IllegalArgumentException(String.format("Wrong object type used with protocol message reflection.\nField number: %d, field java type: %s, value type: %s\n", Integer.valueOf(t.zza()), t.zzb().zzb(), obj.getClass().getName()));
            default:
                throw new IllegalArgumentException(String.format("Wrong object type used with protocol message reflection.\nField number: %d, field java type: %s, value type: %s\n", Integer.valueOf(t.zza()), t.zzb().zzb(), obj.getClass().getName()));
        }
    }

    static void zza(zzjc zzjcVar, zzms zzmsVar, int i, Object obj) throws IOException {
        if (zzmsVar == zzms.zzj) {
            zzlc zzlcVar = (zzlc) obj;
            zzjv.zza(zzlcVar);
            zzjcVar.zzc(i, 3);
            zzlcVar.zza(zzjcVar);
            zzjcVar.zzc(i, 4);
        }
        zzjcVar.zzc(i, zzmsVar.zza());
        switch (zzjl.zzb[zzmsVar.ordinal()]) {
            case 1:
                zzjcVar.zzb(((Double) obj).doubleValue());
                break;
            case 2:
                zzjcVar.zzb(((Float) obj).floatValue());
                break;
            case 3:
                zzjcVar.zzb(((Long) obj).longValue());
                break;
            case 4:
                zzjcVar.zzb(((Long) obj).longValue());
                break;
            case 5:
                zzjcVar.zzb(((Integer) obj).intValue());
                break;
            case 6:
                zzjcVar.zza(((Long) obj).longValue());
                break;
            case 7:
                zzjcVar.zza(((Integer) obj).intValue());
                break;
            case 8:
                zzjcVar.zzb(((Boolean) obj).booleanValue());
                break;
            case 9:
                ((zzlc) obj).zza(zzjcVar);
                break;
            case 10:
                zzjcVar.zza((zzlc) obj);
                break;
            case 11:
                if (obj instanceof zzik) {
                    zzjcVar.zza((zzik) obj);
                } else {
                    zzjcVar.zza((String) obj);
                }
                break;
            case 12:
                if (obj instanceof zzik) {
                    zzjcVar.zza((zzik) obj);
                } else {
                    byte[] bArr = (byte[]) obj;
                    zzjcVar.zzb(bArr, 0, bArr.length);
                }
                break;
            case 13:
                zzjcVar.zzc(((Integer) obj).intValue());
                break;
            case 14:
                zzjcVar.zza(((Integer) obj).intValue());
                break;
            case 15:
                zzjcVar.zza(((Long) obj).longValue());
                break;
            case 16:
                zzjcVar.zzk(((Integer) obj).intValue());
                break;
            case 17:
                zzjcVar.zzh(((Long) obj).longValue());
                break;
            case 18:
                if (obj instanceof zzjy) {
                    zzjcVar.zzb(((zzjy) obj).zza());
                } else {
                    zzjcVar.zzb(((Integer) obj).intValue());
                }
                break;
        }
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof zzjm) {
            return this.zza.equals(((zzjm) obj).zza);
        }
        return false;
    }

    public final boolean zzg() {
        int iZza = this.zza.zza();
        for (int i = 0; i < iZza; i++) {
            if (!zzc(this.zza.zza(i))) {
                return false;
            }
        }
        Iterator it = this.zza.zzb().iterator();
        while (it.hasNext()) {
            if (!zzc((Map.Entry) it.next())) {
                return false;
            }
        }
        return true;
    }

    private static <T extends zzjo<T>> boolean zzc(Map.Entry<T, Object> entry) {
        T key = entry.getKey();
        if (key.zzc() != zzmz.MESSAGE) {
            return true;
        }
        if (key.zze()) {
            List list = (List) entry.getValue();
            int size = list.size();
            for (int i = 0; i < size; i++) {
                if (!zzb(list.get(i))) {
                    return false;
                }
            }
            return true;
        }
        return zzb(entry.getValue());
    }

    private static boolean zzb(Object obj) {
        if (obj instanceof zzle) {
            return ((zzle) obj).zzcn();
        }
        if (obj instanceof zzkg) {
            return true;
        }
        throw new IllegalArgumentException("Wrong object type used with protocol message reflection.");
    }
}
