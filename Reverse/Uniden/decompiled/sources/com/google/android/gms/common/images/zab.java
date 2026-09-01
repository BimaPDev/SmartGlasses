package com.google.android.gms.common.images;

import android.net.Uri;
import android.os.SystemClock;
import com.google.android.gms.common.images.ImageManager.ImageReceiver;
import com.google.android.gms.common.internal.Asserts;

/* JADX INFO: compiled from: com.google.android.gms:play-services-base@@18.4.0 */
/* JADX INFO: loaded from: classes2.dex */
final class zab implements Runnable {
    final /* synthetic */ ImageManager zaa;
    private final zag zab;

    public zab(ImageManager imageManager, zag zagVar) {
        this.zaa = imageManager;
        this.zab = zagVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        Asserts.checkMainThread("LoadImageRunnable must be executed on the main thread");
        ImageManager.ImageReceiver imageReceiver = (ImageManager.ImageReceiver) this.zaa.zah.get(this.zab);
        if (imageReceiver != null) {
            ImageManager imageManager = this.zaa;
            imageManager.zah.remove(this.zab);
            imageReceiver.zac(this.zab);
        }
        zag zagVar = this.zab;
        zad zadVar = zagVar.zaa;
        Uri uri = zadVar.zaa;
        if (uri == null) {
            ImageManager imageManager2 = this.zaa;
            zagVar.zab(imageManager2.zad, imageManager2.zag, true);
            return;
        }
        Long l = (Long) this.zaa.zaj.get(uri);
        if (l != null) {
            if (SystemClock.elapsedRealtime() - l.longValue() < 3600000) {
                zag zagVar2 = this.zab;
                ImageManager imageManager3 = this.zaa;
                zagVar2.zab(imageManager3.zad, imageManager3.zag, true);
                return;
            } else {
                ImageManager imageManager4 = this.zaa;
                imageManager4.zaj.remove(zadVar.zaa);
            }
        }
        this.zab.zaa(null, false, true, false);
        ImageManager imageManager5 = this.zaa;
        ImageManager.ImageReceiver imageReceiver2 = (ImageManager.ImageReceiver) imageManager5.zai.get(zadVar.zaa);
        if (imageReceiver2 == null) {
            ImageManager.ImageReceiver imageReceiver3 = this.zaa.new ImageReceiver(zadVar.zaa);
            ImageManager imageManager6 = this.zaa;
            imageManager6.zai.put(zadVar.zaa, imageReceiver3);
            imageReceiver2 = imageReceiver3;
        }
        imageReceiver2.zab(this.zab);
        zag zagVar3 = this.zab;
        if (!(zagVar3 instanceof zaf)) {
            this.zaa.zah.put(zagVar3, imageReceiver2);
        }
        synchronized (ImageManager.zaa) {
            if (!ImageManager.zab.contains(zadVar.zaa)) {
                ImageManager.zab.add(zadVar.zaa);
                imageReceiver2.zad();
            }
        }
    }
}
