package com.google.android.gms.maps.internal;

import android.content.Context;
import android.os.IBinder;
import android.os.IInterface;
import android.os.RemoteException;
import android.util.Log;
import com.google.android.gms.common.GooglePlayServicesNotAvailableException;
import com.google.android.gms.common.GooglePlayServicesUtil;
import com.google.android.gms.common.internal.Preconditions;
import com.google.android.gms.dynamic.ObjectWrapper;
import com.google.android.gms.dynamite.DynamiteModule;
import com.google.android.gms.maps.MapsInitializer;
import com.google.android.gms.maps.model.RuntimeRemoteException;
import java.util.Objects;

/* JADX INFO: compiled from: com.google.android.gms:play-services-maps@@19.0.0 */
/* JADX INFO: loaded from: classes2.dex */
public final class zzcc {
    private static final String zza = "zzcc";
    private static Context zzb;
    private static zzf zzc;

    public static zzf zza(Context context, MapsInitializer.Renderer renderer) throws GooglePlayServicesNotAvailableException {
        Preconditions.checkNotNull(context);
        Log.d(zza, "preferredRenderer: ".concat(String.valueOf(String.valueOf(renderer))));
        zzf zzfVar = zzc;
        if (zzfVar != null) {
            return zzfVar;
        }
        int iIsGooglePlayServicesAvailable = GooglePlayServicesUtil.isGooglePlayServicesAvailable(context, 13400000);
        if (iIsGooglePlayServicesAvailable != 0) {
            throw new GooglePlayServicesNotAvailableException(iIsGooglePlayServicesAvailable);
        }
        zzf zzfVarZzd = zzd(context, renderer);
        zzc = zzfVarZzd;
        try {
            if (zzfVarZzd.zzd() == 2) {
                try {
                    zzc.zzm(ObjectWrapper.wrap(zzc(context, renderer)));
                } catch (RemoteException e) {
                    throw new RuntimeRemoteException(e);
                } catch (UnsatisfiedLinkError unused) {
                    Log.w(zza, "Caught UnsatisfiedLinkError attempting to load the LATEST renderer's native library. Attempting to use the LEGACY renderer instead.");
                    zzb = null;
                    zzc = zzd(context, MapsInitializer.Renderer.LEGACY);
                }
            }
            try {
                zzc.zzk(ObjectWrapper.wrap(((Context) Objects.requireNonNull(zzc(context, renderer))).getResources()), 19000000);
                return zzc;
            } catch (RemoteException e2) {
                throw new RuntimeRemoteException(e2);
            }
        } catch (RemoteException e3) {
            throw new RuntimeRemoteException(e3);
        }
    }

    private static Context zzb(Exception exc, Context context) {
        Log.e(zza, "Failed to load maps module, use pre-Chimera", exc);
        return GooglePlayServicesUtil.getRemoteContext(context);
    }

    /* JADX WARN: Code duplicated, block: B:10:0x001a  */
    private static Context zzc(Context context, MapsInitializer.Renderer renderer) {
        Context contextZzb;
        String str = "com.google.android.gms.maps_legacy_dynamite";
        Context context2 = zzb;
        if (context2 != null) {
            return context2;
        }
        try {
            Class.forName("com.google.android.gms.maps.internal.UseLegacyRendererAsDefault");
            if (renderer == null) {
                str = "com.google.android.gms.maps_dynamite";
            } else {
                int iOrdinal = renderer.ordinal();
                if (iOrdinal != 0) {
                    if (iOrdinal != 1) {
                        str = "com.google.android.gms.maps_dynamite";
                    } else {
                        str = "com.google.android.gms.maps_core_dynamite";
                    }
                }
            }
        } catch (ClassNotFoundException unused) {
            if (renderer != MapsInitializer.Renderer.LEGACY) {
            }
        }
        try {
            contextZzb = DynamiteModule.load(context, DynamiteModule.PREFER_REMOTE, str).getModuleContext();
        } catch (Exception e) {
            if (str.equals("com.google.android.gms.maps_dynamite")) {
                contextZzb = zzb(e, context);
            } else {
                try {
                    Log.d(zza, "Attempting to load maps_dynamite again.");
                    contextZzb = DynamiteModule.load(context, DynamiteModule.PREFER_REMOTE, "com.google.android.gms.maps_dynamite").getModuleContext();
                } catch (Exception e2) {
                    contextZzb = zzb(e2, context);
                }
            }
        }
        zzb = contextZzb;
        return contextZzb;
    }

    private static zzf zzd(Context context, MapsInitializer.Renderer renderer) {
        Log.i(zza, "Making Creator dynamically");
        try {
            IBinder iBinder = (IBinder) zze(((ClassLoader) Preconditions.checkNotNull(zzc(context, renderer).getClassLoader())).loadClass("com.google.android.gms.maps.internal.CreatorImpl"));
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface("com.google.android.gms.maps.internal.ICreator");
            return iInterfaceQueryLocalInterface instanceof zzf ? (zzf) iInterfaceQueryLocalInterface : new zze(iBinder);
        } catch (ClassNotFoundException e) {
            throw new IllegalStateException("Unable to find dynamic class com.google.android.gms.maps.internal.CreatorImpl", e);
        }
    }

    private static Object zze(Class cls) {
        try {
            return cls.newInstance();
        } catch (IllegalAccessException e) {
            throw new IllegalStateException("Unable to call the default constructor of ".concat(String.valueOf(cls.getName())), e);
        } catch (InstantiationException e2) {
            throw new IllegalStateException("Unable to instantiate the dynamic class ".concat(String.valueOf(cls.getName())), e2);
        }
    }
}
