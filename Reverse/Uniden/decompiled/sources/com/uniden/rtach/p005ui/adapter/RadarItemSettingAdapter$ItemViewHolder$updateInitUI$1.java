package com.uniden.rtach.p005ui.adapter;

import android.util.Log;
import android.widget.ImageView;
import android.widget.NumberPicker;
import androidx.constraintlayout.widget.ConstraintLayout;
import com.uniden.rtach.data.model.RadarSettingsModel;
import com.uniden.rtach.databinding.ItemSettingMenuBinding;
import java.util.List;
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
@DebugMetadata(m503c = "com.uniden.rtach.ui.adapter.RadarItemSettingAdapter$ItemViewHolder$updateInitUI$1", m504f = "RadarItemSettingAdapter.kt", m505i = {}, m506l = {}, m507m = "invokeSuspend", m508n = {}, m509s = {})
final class RadarItemSettingAdapter$ItemViewHolder$updateInitUI$1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
    final /* synthetic */ ItemSettingMenuBinding $binding;
    final /* synthetic */ RadarSettingsModel $item;
    final /* synthetic */ int $position;
    final /* synthetic */ List<String> $settingValues;
    int label;
    final /* synthetic */ RadarItemSettingAdapter this$0;
    final /* synthetic */ RadarItemSettingAdapter.ItemViewHolder this$1;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    RadarItemSettingAdapter$ItemViewHolder$updateInitUI$1(RadarSettingsModel radarSettingsModel, RadarItemSettingAdapter radarItemSettingAdapter, List<String> list, int i, ItemSettingMenuBinding itemSettingMenuBinding, RadarItemSettingAdapter.ItemViewHolder itemViewHolder, Continuation<? super RadarItemSettingAdapter$ItemViewHolder$updateInitUI$1> continuation) {
        super(2, continuation);
        this.$item = radarSettingsModel;
        this.this$0 = radarItemSettingAdapter;
        this.$settingValues = list;
        this.$position = i;
        this.$binding = itemSettingMenuBinding;
        this.this$1 = itemViewHolder;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        return new RadarItemSettingAdapter$ItemViewHolder$updateInitUI$1(this.$item, this.this$0, this.$settingValues, this.$position, this.$binding, this.this$1, continuation);
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
        return ((RadarItemSettingAdapter$ItemViewHolder$updateInitUI$1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Object invokeSuspend(Object obj) {
        IntrinsicsKt.getCOROUTINE_SUSPENDED();
        if (this.label == 0) {
            ResultKt.throwOnFailure(obj);
            if (this.$item.getSpeedUnit().length() > 0) {
                this.this$0.writeValue = this.$settingValues.indexOf(String.valueOf(this.$item.getSelected_value()));
            } else {
                this.this$0.writeValue = this.$item.getSelected_value();
            }
            Log.d("TAG_I", "selected_value -> " + this.$item.getWrite_index() + ':' + this.$item.getSelected_value() + ':' + this.$settingValues + " : " + this.$item.getItem());
            if (this.this$0.selectedIndex == this.$position) {
                ConstraintLayout rlPicker = this.$binding.rlPicker;
                Intrinsics.checkNotNullExpressionValue(rlPicker, "rlPicker");
                if (rlPicker.getVisibility() == 0) {
                    RadarItemSettingAdapter.ItemViewHolder itemViewHolder = this.this$1;
                    int i = this.$position;
                    RadarSettingsModel radarSettingsModel = this.$item;
                    NumberPicker itemSettingPicker = this.$binding.itemSettingPicker;
                    Intrinsics.checkNotNullExpressionValue(itemSettingPicker, "itemSettingPicker");
                    itemViewHolder.setPickerData(i, radarSettingsModel, itemSettingPicker, this.$settingValues);
                }
            } else {
                RadarItemSettingAdapter.ItemViewHolder itemViewHolder2 = this.this$1;
                ConstraintLayout rlPicker2 = this.$binding.rlPicker;
                Intrinsics.checkNotNullExpressionValue(rlPicker2, "rlPicker");
                ImageView arrowImage = this.$binding.arrowImage;
                Intrinsics.checkNotNullExpressionValue(arrowImage, "arrowImage");
                itemViewHolder2.slideUp(rlPicker2, arrowImage);
            }
            return Unit.INSTANCE;
        }
        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
    }
}
