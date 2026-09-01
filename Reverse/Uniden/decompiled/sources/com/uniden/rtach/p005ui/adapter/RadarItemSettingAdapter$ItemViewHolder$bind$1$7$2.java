package com.uniden.rtach.p005ui.adapter;

import android.widget.ImageView;
import android.widget.NumberPicker;
import androidx.constraintlayout.widget.ConstraintLayout;
import com.uniden.rtach.data.model.RadarSettingsModel;
import java.util.ArrayList;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;

/* JADX INFO: compiled from: RadarItemSettingAdapter.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, m491d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
@DebugMetadata(m503c = "com.uniden.rtach.ui.adapter.RadarItemSettingAdapter$ItemViewHolder$bind$1$7$2", m504f = "RadarItemSettingAdapter.kt", m505i = {}, m506l = {}, m507m = "invokeSuspend", m508n = {}, m509s = {})
final class RadarItemSettingAdapter$ItemViewHolder$bind$1$7$2 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
    final /* synthetic */ int $position;
    int label;
    final /* synthetic */ RadarItemSettingAdapter.ItemViewHolder this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    RadarItemSettingAdapter$ItemViewHolder$bind$1$7$2(RadarItemSettingAdapter.ItemViewHolder itemViewHolder, int i, Continuation<? super RadarItemSettingAdapter$ItemViewHolder$bind$1$7$2> continuation) {
        super(2, continuation);
        this.this$0 = itemViewHolder;
        this.$position = i;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        return new RadarItemSettingAdapter$ItemViewHolder$bind$1$7$2(this.this$0, this.$position, continuation);
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
        return ((RadarItemSettingAdapter$ItemViewHolder$bind$1$7$2) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Object invokeSuspend(Object obj) {
        RadarSettingsModel radarSettingsModel;
        IntrinsicsKt.getCOROUTINE_SUSPENDED();
        if (this.label == 0) {
            ResultKt.throwOnFailure(obj);
            RadarItemSettingAdapter.ItemViewHolder itemViewHolder = this.this$0;
            int i = this.$position;
            RadarSettingsModel radarSettingsModel2 = itemViewHolder.settingItem;
            ArrayList arrayList = null;
            if (radarSettingsModel2 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                radarSettingsModel = null;
            } else {
                radarSettingsModel = radarSettingsModel2;
            }
            NumberPicker itemSettingPicker = this.this$0.getBinding().itemSettingPicker;
            Intrinsics.checkNotNullExpressionValue(itemSettingPicker, "itemSettingPicker");
            ConstraintLayout rlPicker = this.this$0.getBinding().rlPicker;
            Intrinsics.checkNotNullExpressionValue(rlPicker, "rlPicker");
            ImageView arrowImage = this.this$0.getBinding().arrowImage;
            Intrinsics.checkNotNullExpressionValue(arrowImage, "arrowImage");
            ArrayList arrayList2 = this.this$0.settingValues;
            if (arrayList2 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("settingValues");
            } else {
                arrayList = arrayList2;
            }
            itemViewHolder.updateDropDownUI(i, radarSettingsModel, itemSettingPicker, rlPicker, arrowImage, arrayList);
            return Unit.INSTANCE;
        }
        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
    }
}
