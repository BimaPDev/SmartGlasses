package com.bumptech.glide.load;

import com.bumptech.glide.load.engine.bitmap_recycle.ArrayPool;
import java.io.IOException;
import java.io.InputStream;
import java.nio.ByteBuffer;

/* JADX INFO: loaded from: classes.dex */
public interface ImageHeaderParser {
    public static final int UNKNOWN_ORIENTATION = -1;

    int getOrientation(InputStream inputStream, ArrayPool arrayPool) throws IOException;

    int getOrientation(ByteBuffer byteBuffer, ArrayPool arrayPool) throws IOException;

    ImageType getType(InputStream inputStream) throws IOException;

    ImageType getType(ByteBuffer byteBuffer) throws IOException;

    public enum ImageType {
        GIF(true),
        JPEG(false),
        RAW(false),
        PNG_A(true),
        PNG(false),
        WEBP_A(true),
        WEBP(false),
        ANIMATED_WEBP(true),
        AVIF(true),
        ANIMATED_AVIF(true),
        UNKNOWN(false);

        private final boolean hasAlpha;

        public boolean hasAlpha() {
            return this.hasAlpha;
        }

        ImageType(boolean z) {
            this.hasAlpha = z;
        }

        public boolean isWebp() {
            int i = C09241.$SwitchMap$com$bumptech$glide$load$ImageHeaderParser$ImageType[ordinal()];
            return i == 1 || i == 2 || i == 3;
        }
    }

    /* JADX INFO: renamed from: com.bumptech.glide.load.ImageHeaderParser$1 */
    static /* synthetic */ class C09241 {
        static final /* synthetic */ int[] $SwitchMap$com$bumptech$glide$load$ImageHeaderParser$ImageType;

        static {
            int[] iArr = new int[ImageType.values().length];
            $SwitchMap$com$bumptech$glide$load$ImageHeaderParser$ImageType = iArr;
            try {
                iArr[ImageType.WEBP.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                $SwitchMap$com$bumptech$glide$load$ImageHeaderParser$ImageType[ImageType.WEBP_A.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                $SwitchMap$com$bumptech$glide$load$ImageHeaderParser$ImageType[ImageType.ANIMATED_WEBP.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
        }
    }
}
