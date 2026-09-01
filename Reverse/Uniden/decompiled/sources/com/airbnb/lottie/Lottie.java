package com.airbnb.lottie;

/* JADX INFO: loaded from: classes.dex */
public class Lottie {
    private Lottie() {
    }

    public static void initialize(LottieConfig lottieConfig) {
        C0883L.setFetcher(lottieConfig.networkFetcher);
        C0883L.setCacheProvider(lottieConfig.cacheProvider);
        C0883L.setTraceEnabled(lottieConfig.enableSystraceMarkers);
        C0883L.setNetworkCacheEnabled(lottieConfig.enableNetworkCache);
        C0883L.setDisablePathInterpolatorCache(lottieConfig.disablePathInterpolatorCache);
    }
}
