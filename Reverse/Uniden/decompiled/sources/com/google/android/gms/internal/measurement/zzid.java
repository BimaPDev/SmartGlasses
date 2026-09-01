package com.google.android.gms.internal.measurement;

import android.R;
import com.google.android.gms.internal.measurement.zzib;
import com.google.android.gms.internal.measurement.zzid;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collection;
import java.util.List;
import java.util.RandomAccess;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public abstract class zzid<MessageType extends zzib<MessageType, BuilderType>, BuilderType extends zzid<MessageType, BuilderType>> implements zzlb {
    @Override // 
    /* JADX INFO: renamed from: zza, reason: merged with bridge method [inline-methods] */
    public abstract BuilderType zzb(zziw zziwVar, zzjg zzjgVar) throws IOException;

    @Override // 
    /* JADX INFO: renamed from: zzaf, reason: merged with bridge method [inline-methods] */
    public abstract BuilderType clone();

    public BuilderType zza(byte[] bArr, int i, int i2) throws zzkb {
        try {
            zziw zziwVarZza = zziw.zza(bArr, 0, i2, false);
            zzb(zziwVarZza, zzjg.zza);
            zziwVarZza.zzc(0);
            return this;
        } catch (zzkb e) {
            throw e;
        } catch (IOException e2) {
            throw new RuntimeException(zza("byte array"), e2);
        }
    }

    public BuilderType zza(byte[] bArr, int i, int i2, zzjg zzjgVar) throws zzkb {
        try {
            zziw zziwVarZza = zziw.zza(bArr, 0, i2, false);
            zzb(zziwVarZza, zzjgVar);
            zziwVarZza.zzc(0);
            return this;
        } catch (zzkb e) {
            throw e;
        } catch (IOException e2) {
            throw new RuntimeException(zza("byte array"), e2);
        }
    }

    @Override // com.google.android.gms.internal.measurement.zzlb
    public final /* synthetic */ zzlb zza(byte[] bArr) throws zzkb {
        return zza(bArr, 0, bArr.length);
    }

    @Override // com.google.android.gms.internal.measurement.zzlb
    public final /* synthetic */ zzlb zza(byte[] bArr, zzjg zzjgVar) throws zzkb {
        return zza(bArr, 0, bArr.length, zzjgVar);
    }

    private final String zza(String str) {
        return "Reading " + getClass().getName() + " from a " + str + " threw an IOException (should never happen).";
    }

    protected static <T> void zza(Iterable<T> iterable, List<? super T> list) {
        zzjv.zza(iterable);
        if (iterable instanceof zzkj) {
            List<?> listZza = ((zzkj) iterable).zza();
            zzkj zzkjVar = (zzkj) list;
            int size = list.size();
            for (Object obj : listZza) {
                if (obj == null) {
                    String str = "Element at index " + (zzkjVar.size() - size) + " is null.";
                    for (int size2 = zzkjVar.size() - 1; size2 >= size; size2--) {
                        zzkjVar.remove(size2);
                    }
                    throw new NullPointerException(str);
                }
                if (obj instanceof zzik) {
                    zzkjVar.zza((zzik) obj);
                } else if (obj instanceof byte[]) {
                    zzkjVar.zza(zzik.zza((byte[]) obj));
                } else {
                    zzkjVar.add((String) obj);
                }
            }
            return;
        }
        if (iterable instanceof zzlo) {
            list.addAll((Collection) iterable);
            return;
        }
        if (iterable instanceof Collection) {
            int size3 = ((Collection) iterable).size();
            if (list instanceof ArrayList) {
                ((ArrayList) list).ensureCapacity(list.size() + size3);
            }
            if (list instanceof zzlp) {
                ((zzlp) list).zzb(list.size() + size3);
            }
        }
        int size4 = list.size();
        if ((iterable instanceof List) && (iterable instanceof RandomAccess)) {
            List list2 = (List) iterable;
            int size5 = list2.size();
            for (int i = 0; i < size5; i++) {
                R r = (Object) list2.get(i);
                if (r == null) {
                    zza(list, size4);
                }
                list.add(r);
            }
            return;
        }
        for (Object obj2 : iterable) {
            if (obj2 == null) {
                zza(list, size4);
            }
            list.add(obj2);
        }
    }

    private static void zza(List<?> list, int i) {
        String str = "Element at index " + (list.size() - i) + " is null.";
        for (int size = list.size() - 1; size >= i; size--) {
            list.remove(size);
        }
        throw new NullPointerException(str);
    }
}
