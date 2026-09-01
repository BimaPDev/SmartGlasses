package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.zzjt;
import com.google.android.gms.internal.measurement.zzjt.zzb;
import java.io.IOException;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@22.1.2 */
/* JADX INFO: loaded from: classes2.dex */
public abstract class zzjt<MessageType extends zzjt<MessageType, BuilderType>, BuilderType extends zzb<MessageType, BuilderType>> extends zzib<MessageType, BuilderType> {
    private static Map<Class<?>, zzjt<?, ?>> zzc = new ConcurrentHashMap();
    private int zzd = -1;
    protected zzmj zzb = zzmj.zzc();

    /* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@22.1.2 */
    protected static class zza<T extends zzjt<T, ?>> extends zzif<T> {
        public zza(T t) {
        }
    }

    /* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@22.1.2 */
    public static abstract class zzb<MessageType extends zzjt<MessageType, BuilderType>, BuilderType extends zzb<MessageType, BuilderType>> extends zzid<MessageType, BuilderType> {
        protected MessageType zza;
        private final MessageType zzb;

        @Override // com.google.android.gms.internal.measurement.zzid
        /* JADX INFO: renamed from: zzaf */
        public final /* synthetic */ zzid clone() {
            return (zzb) clone();
        }

        @Override // com.google.android.gms.internal.measurement.zzle
        public final /* synthetic */ zzlc zzck() {
            return this.zzb;
        }

        @Override // com.google.android.gms.internal.measurement.zzid
        /* JADX INFO: renamed from: zza */
        public final /* synthetic */ zzid zzb(zziw zziwVar, zzjg zzjgVar) throws IOException {
            return (zzb) zzb(zziwVar, zzjgVar);
        }

        @Override // com.google.android.gms.internal.measurement.zzid
        public final /* synthetic */ zzid zza(byte[] bArr, int i, int i2) throws zzkb {
            return zzb(bArr, 0, i2, zzjg.zza);
        }

        @Override // com.google.android.gms.internal.measurement.zzid
        public final /* synthetic */ zzid zza(byte[] bArr, int i, int i2, zzjg zzjgVar) throws zzkb {
            return zzb(bArr, 0, i2, zzjgVar);
        }

        public final BuilderType zza(MessageType messagetype) {
            if (this.zzb.equals(messagetype)) {
                return this;
            }
            if (!this.zza.zzco()) {
                zzal();
            }
            zza(this.zza, messagetype);
            return this;
        }

        /* JADX INFO: Access modifiers changed from: private */
        @Override // com.google.android.gms.internal.measurement.zzid
        /* JADX INFO: renamed from: zzc, reason: merged with bridge method [inline-methods] */
        public final BuilderType zzb(zziw zziwVar, zzjg zzjgVar) throws IOException {
            if (!this.zza.zzco()) {
                zzal();
            }
            try {
                zzlq.zza().zza(this.zza).zza(this.zza, zzjb.zza(zziwVar), zzjgVar);
                return this;
            } catch (RuntimeException e) {
                if (e.getCause() instanceof IOException) {
                    throw ((IOException) e.getCause());
                }
                throw e;
            }
        }

        private final BuilderType zzb(byte[] bArr, int i, int i2, zzjg zzjgVar) throws zzkb {
            if (!this.zza.zzco()) {
                zzal();
            }
            try {
                zzlq.zza().zza(this.zza).zza(this.zza, bArr, 0, i2, new zzij(zzjgVar));
                return this;
            } catch (zzkb e) {
                throw e;
            } catch (IOException e2) {
                throw new RuntimeException("Reading from byte array should not throw IOException.", e2);
            } catch (IndexOutOfBoundsException unused) {
                throw zzkb.zzi();
            }
        }

        @Override // com.google.android.gms.internal.measurement.zzlb
        /* JADX INFO: renamed from: zzag, reason: merged with bridge method [inline-methods] */
        public final MessageType zzai() {
            MessageType messagetype = (MessageType) zzaj();
            if (zzjt.zza(messagetype, true)) {
                return messagetype;
            }
            throw new zzmh(messagetype);
        }

        @Override // com.google.android.gms.internal.measurement.zzlb
        /* JADX INFO: renamed from: zzah, reason: merged with bridge method [inline-methods] */
        public MessageType zzaj() {
            if (!this.zza.zzco()) {
                return this.zza;
            }
            this.zza.zzcl();
            return this.zza;
        }

        @Override // com.google.android.gms.internal.measurement.zzid
        public /* synthetic */ Object clone() throws CloneNotSupportedException {
            zzb zzbVar = (zzb) this.zzb.zza(zze.zze, null, null);
            zzbVar.zza = (MessageType) zzaj();
            return zzbVar;
        }

        protected zzb(MessageType messagetype) {
            this.zzb = messagetype;
            if (messagetype.zzco()) {
                throw new IllegalArgumentException("Default instance must be immutable.");
            }
            this.zza = (MessageType) messagetype.zzce();
        }

        protected final void zzak() {
            if (this.zza.zzco()) {
                return;
            }
            zzal();
        }

        protected void zzal() {
            MessageType messagetype = (MessageType) this.zzb.zzce();
            zza(messagetype, this.zza);
            this.zza = messagetype;
        }

        private static <MessageType> void zza(MessageType messagetype, MessageType messagetype2) {
            zzlq.zza().zza(messagetype).zza(messagetype, messagetype2);
        }

        @Override // com.google.android.gms.internal.measurement.zzle
        public final boolean zzcn() {
            return zzjt.zza(this.zza, false);
        }
    }

    /* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@22.1.2 */
    static final class zzc implements zzjo<zzc> {
        @Override // java.lang.Comparable
        public final /* synthetic */ int compareTo(Object obj) {
            throw new NoSuchMethodError();
        }

        @Override // com.google.android.gms.internal.measurement.zzjo
        public final int zza() {
            throw new NoSuchMethodError();
        }

        @Override // com.google.android.gms.internal.measurement.zzjo
        public final zzlb zza(zzlb zzlbVar, zzlc zzlcVar) {
            throw new NoSuchMethodError();
        }

        @Override // com.google.android.gms.internal.measurement.zzjo
        public final zzlh zza(zzlh zzlhVar, zzlh zzlhVar2) {
            throw new NoSuchMethodError();
        }

        @Override // com.google.android.gms.internal.measurement.zzjo
        public final zzms zzb() {
            throw new NoSuchMethodError();
        }

        @Override // com.google.android.gms.internal.measurement.zzjo
        public final zzmz zzc() {
            throw new NoSuchMethodError();
        }

        @Override // com.google.android.gms.internal.measurement.zzjo
        public final boolean zzd() {
            throw new NoSuchMethodError();
        }

        @Override // com.google.android.gms.internal.measurement.zzjo
        public final boolean zze() {
            throw new NoSuchMethodError();
        }
    }

    /* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@22.1.2 */
    public static abstract class zzd<MessageType extends zzd<MessageType, BuilderType>, BuilderType> extends zzjt<MessageType, BuilderType> implements zzle {
        protected zzjm<zzc> zzc = zzjm.zzb();

        final zzjm<zzc> zza() {
            if (this.zzc.zzf()) {
                this.zzc = (zzjm) this.zzc.clone();
            }
            return this.zzc;
        }
    }

    /* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@22.1.2 */
    public static class zzf<ContainingType extends zzlc, Type> extends zzjh<ContainingType, Type> {
    }

    private final int zza() {
        return zzlq.zza().zza(this).zzb(this);
    }

    protected abstract Object zza(int i, Object obj, Object obj2);

    @Override // com.google.android.gms.internal.measurement.zzib
    final int zzby() {
        return this.zzd & Integer.MAX_VALUE;
    }

    final void zzcm() {
        this.zzd &= Integer.MAX_VALUE;
    }

    final boolean zzco() {
        return (this.zzd & Integer.MIN_VALUE) != 0;
    }

    private final int zzb(zzlu<?> zzluVar) {
        if (zzluVar == null) {
            return zzlq.zza().zza(this).zza(this);
        }
        return zzluVar.zza(this);
    }

    @Override // com.google.android.gms.internal.measurement.zzlc
    public final int zzcb() {
        return zza((zzlu) null);
    }

    /* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-base@@22.1.2 */
    public static final enum zze {
        public static final int zza = 1;
        public static final int zzb = 2;
        public static final int zzc = 3;
        public static final int zzd = 4;
        public static final int zze = 5;
        public static final int zzf = 6;
        public static final int zzg = 7;
        private static final /* synthetic */ int[] zzh = {1, 2, 3, 4, 5, 6, 7};

        public static int[] zza() {
            return (int[]) zzh.clone();
        }
    }

    @Override // com.google.android.gms.internal.measurement.zzib
    final int zza(zzlu zzluVar) {
        if (zzco()) {
            int iZzb = zzb(zzluVar);
            if (iZzb >= 0) {
                return iZzb;
            }
            throw new IllegalStateException("serialized size must be non-negative, was " + iZzb);
        }
        if (zzby() != Integer.MAX_VALUE) {
            return zzby();
        }
        int iZzb2 = zzb(zzluVar);
        zzc(iZzb2);
        return iZzb2;
    }

    public int hashCode() {
        if (zzco()) {
            return zza();
        }
        if (this.zza == 0) {
            this.zza = zza();
        }
        return this.zza;
    }

    protected final <MessageType extends zzjt<MessageType, BuilderType>, BuilderType extends zzb<MessageType, BuilderType>> BuilderType zzcc() {
        return (BuilderType) zza(zze.zze, (Object) null, (Object) null);
    }

    protected final <MessageType extends zzjt<MessageType, BuilderType>, BuilderType extends zzb<MessageType, BuilderType>> BuilderType zza(MessageType messagetype) {
        return (BuilderType) zzcc().zza(messagetype);
    }

    public final BuilderType zzcd() {
        return (BuilderType) ((zzb) zza(zze.zze, (Object) null, (Object) null)).zza(this);
    }

    static <T extends zzjt<?, ?>> T zza(Class<T> cls) {
        zzjt<?, ?> zzjtVar = zzc.get(cls);
        if (zzjtVar == null) {
            try {
                Class.forName(cls.getName(), true, cls.getClassLoader());
                zzjtVar = zzc.get(cls);
            } catch (ClassNotFoundException e) {
                throw new IllegalStateException("Class initialization cannot fail.", e);
            }
        }
        if (zzjtVar == null) {
            zzjtVar = (T) ((zzjt) zzml.zza(cls)).zza(zze.zzf, (Object) null, (Object) null);
            if (zzjtVar == null) {
                throw new IllegalStateException();
            }
            zzc.put((Class<?>) cls, zzjtVar);
        }
        return (T) zzjtVar;
    }

    final MessageType zzce() {
        return (MessageType) zza(zze.zzd, (Object) null, (Object) null);
    }

    protected static zzka zzcf() {
        return zzjw.zzd();
    }

    protected static zzjz zzcg() {
        return zzkn.zzd();
    }

    protected static zzjz zza(zzjz zzjzVar) {
        return zzjzVar.zza(zzjzVar.size() << 1);
    }

    protected static <E> zzkc<E> zzch() {
        return zzlp.zzd();
    }

    protected static <E> zzkc<E> zza(zzkc<E> zzkcVar) {
        return zzkcVar.zza(zzkcVar.size() << 1);
    }

    @Override // com.google.android.gms.internal.measurement.zzlc
    public final /* synthetic */ zzlb zzci() {
        return (zzb) zza(zze.zze, (Object) null, (Object) null);
    }

    @Override // com.google.android.gms.internal.measurement.zzlc
    public final /* synthetic */ zzlb zzcj() {
        return ((zzb) zza(zze.zze, (Object) null, (Object) null)).zza(this);
    }

    @Override // com.google.android.gms.internal.measurement.zzle
    public final /* synthetic */ zzlc zzck() {
        return (zzjt) zza(zze.zzf, (Object) null, (Object) null);
    }

    static Object zza(Method method, Object obj, Object... objArr) {
        try {
            return method.invoke(obj, objArr);
        } catch (IllegalAccessException e) {
            throw new RuntimeException("Couldn't use Java reflection to implement protocol message reflection.", e);
        } catch (InvocationTargetException e2) {
            Throwable cause = e2.getCause();
            if (cause instanceof RuntimeException) {
                throw ((RuntimeException) cause);
            }
            if (cause instanceof Error) {
                throw ((Error) cause);
            }
            throw new RuntimeException("Unexpected exception thrown by generated accessor method.", cause);
        }
    }

    protected static Object zza(zzlc zzlcVar, String str, Object[] objArr) {
        return new zzls(zzlcVar, str, objArr);
    }

    public String toString() {
        return zzld.zza(this, super.toString());
    }

    protected final void zzcl() {
        zzlq.zza().zza(this).zzd(this);
        zzcm();
    }

    protected static <T extends zzjt<?, ?>> void zza(Class<T> cls, T t) {
        t.zzcm();
        zzc.put(cls, t);
    }

    @Override // com.google.android.gms.internal.measurement.zzib
    final void zzc(int i) {
        if (i < 0) {
            throw new IllegalStateException("serialized size must be non-negative, was " + i);
        }
        this.zzd = (i & Integer.MAX_VALUE) | (this.zzd & Integer.MIN_VALUE);
    }

    @Override // com.google.android.gms.internal.measurement.zzlc
    public final void zza(zzjc zzjcVar) throws IOException {
        zzlq.zza().zza(this).zza(this, zzjf.zza(zzjcVar));
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && getClass() == obj.getClass()) {
            return zzlq.zza().zza(this).zzb(this, (zzjt) obj);
        }
        return false;
    }

    @Override // com.google.android.gms.internal.measurement.zzle
    public final boolean zzcn() {
        return zza(this, true);
    }

    protected static final <T extends zzjt<T, ?>> boolean zza(T t, boolean z) {
        byte bByteValue = ((Byte) t.zza(zze.zza, null, null)).byteValue();
        if (bByteValue == 1) {
            return true;
        }
        if (bByteValue == 0) {
            return false;
        }
        boolean zZze = zzlq.zza().zza(t).zze(t);
        if (z) {
            t.zza(zze.zzb, zZze ? t : null, null);
        }
        return zZze;
    }
}
