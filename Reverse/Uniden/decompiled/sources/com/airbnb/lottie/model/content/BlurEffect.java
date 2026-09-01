package com.airbnb.lottie.model.content;

import com.airbnb.lottie.model.animatable.AnimatableFloatValue;

/* JADX INFO: loaded from: classes.dex */
public class BlurEffect {
    final AnimatableFloatValue blurriness;

    public AnimatableFloatValue getBlurriness() {
        return this.blurriness;
    }

    public BlurEffect(AnimatableFloatValue animatableFloatValue) {
        this.blurriness = animatableFloatValue;
    }
}
