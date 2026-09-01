package com.uniden.rtach.p005ui.adapter;

import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.widget.ImageView;
import android.widget.NumberPicker;
import androidx.constraintlayout.widget.ConstraintLayout;
import com.uniden.rtach.data.model.RadarSettingsModel;
import java.util.List;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.Boxing;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;

/* JADX INFO: compiled from: RadarItemSettingAdapter.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, m491d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
@DebugMetadata(m503c = "com.uniden.rtach.ui.adapter.RadarItemSettingAdapter$ItemViewHolder$updateDropDownUI$1", m504f = "RadarItemSettingAdapter.kt", m505i = {}, m506l = {}, m507m = "invokeSuspend", m508n = {}, m509s = {})
final class RadarItemSettingAdapter$ItemViewHolder$updateDropDownUI$1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
    final /* synthetic */ ImageView $arrowImage;
    final /* synthetic */ RadarSettingsModel $item;
    final /* synthetic */ NumberPicker $itemSettingPicker;
    final /* synthetic */ int $position;
    final /* synthetic */ ConstraintLayout $rlPicker;
    final /* synthetic */ List<String> $settingValues;
    int label;
    final /* synthetic */ RadarItemSettingAdapter.ItemViewHolder this$0;
    final /* synthetic */ RadarItemSettingAdapter this$1;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    RadarItemSettingAdapter$ItemViewHolder$updateDropDownUI$1(ConstraintLayout constraintLayout, RadarItemSettingAdapter.ItemViewHolder itemViewHolder, RadarItemSettingAdapter radarItemSettingAdapter, int i, RadarSettingsModel radarSettingsModel, NumberPicker numberPicker, List<String> list, ImageView imageView, Continuation<? super RadarItemSettingAdapter$ItemViewHolder$updateDropDownUI$1> continuation) {
        super(2, continuation);
        this.$rlPicker = constraintLayout;
        this.this$0 = itemViewHolder;
        this.this$1 = radarItemSettingAdapter;
        this.$position = i;
        this.$item = radarSettingsModel;
        this.$itemSettingPicker = numberPicker;
        this.$settingValues = list;
        this.$arrowImage = imageView;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        return new RadarItemSettingAdapter$ItemViewHolder$updateDropDownUI$1(this.$rlPicker, this.this$0, this.this$1, this.$position, this.$item, this.$itemSettingPicker, this.$settingValues, this.$arrowImage, continuation);
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
        return ((RadarItemSettingAdapter$ItemViewHolder$updateDropDownUI$1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    /* JADX WARN: Type inference fix 'apply assigned field type' failed
    java.lang.UnsupportedOperationException: ArgType.getObject(), call class: class jadx.core.dex.instructions.args.ArgType$PrimitiveArg
    	at jadx.core.dex.instructions.args.ArgType.getObject(ArgType.java:596)
    	at jadx.core.dex.attributes.nodes.ClassTypeVarsAttr.getTypeVarsMapFor(ClassTypeVarsAttr.java:35)
    	at jadx.core.dex.nodes.utils.TypeUtils.replaceClassGenerics(TypeUtils.java:177)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.insertExplicitUseCast(FixTypesVisitor.java:397)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.tryFieldTypeWithNewCasts(FixTypesVisitor.java:359)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.applyFieldType(FixTypesVisitor.java:309)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.visit(FixTypesVisitor.java:94)
     */
    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Object invokeSuspend(Object obj) {
        IntrinsicsKt.getCOROUTINE_SUSPENDED();
        if (this.label == 0) {
            ResultKt.throwOnFailure(obj);
            if (this.$rlPicker.getVisibility() != 0) {
                this.this$1.selectedIndex = this.$position;
                if (this.this$1.selectedIndex != this.this$1.previousIndex) {
                    RadarItemSettingAdapter radarItemSettingAdapter = this.this$1;
                    int i = radarItemSettingAdapter.previousIndex;
                    Bundle bundle = new Bundle();
                    bundle.putInt("KEY_CHANGED_POPUP", this.this$1.previousIndex);
                    Unit unit = Unit.INSTANCE;
                    radarItemSettingAdapter.notifyItemChanged(i, bundle);
                }
                RadarItemSettingAdapter radarItemSettingAdapter2 = this.this$1;
                radarItemSettingAdapter2.previousIndex = radarItemSettingAdapter2.selectedIndex;
                Handler handler = new Handler(Looper.getMainLooper());
                final RadarItemSettingAdapter.ItemViewHolder itemViewHolder = this.this$0;
                final int i2 = this.$position;
                final RadarSettingsModel radarSettingsModel = this.$item;
                final NumberPicker numberPicker = this.$itemSettingPicker;
                final List<String> list = this.$settingValues;
                final ConstraintLayout constraintLayout = this.$rlPicker;
                final ImageView imageView = this.$arrowImage;
                Boxing.boxBoolean(handler.postDelayed(new Runnable() { // from class: com.uniden.rtach.ui.adapter.RadarItemSettingAdapter$ItemViewHolder$updateDropDownUI$1$$ExternalSyntheticLambda0
                    @Override // java.lang.Runnable
                    public final void run() {
                        RadarItemSettingAdapter$ItemViewHolder$updateDropDownUI$1.invokeSuspend$lambda$1(itemViewHolder, i2, radarSettingsModel, numberPicker, list, constraintLayout, imageView);
                    }
                }, 0L));
            } else {
                RadarItemSettingAdapter.ItemViewHolder itemViewHolder2 = this.this$0;
                ConstraintLayout rlPicker = itemViewHolder2.getBinding().rlPicker;
                Intrinsics.checkNotNullExpressionValue(rlPicker, "rlPicker");
                ImageView arrowImage = this.this$0.getBinding().arrowImage;
                Intrinsics.checkNotNullExpressionValue(arrowImage, "arrowImage");
                itemViewHolder2.slideUp(rlPicker, arrowImage);
            }
            return Unit.INSTANCE;
        }
        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void invokeSuspend$lambda$1(RadarItemSettingAdapter.ItemViewHolder itemViewHolder, int i, RadarSettingsModel radarSettingsModel, NumberPicker numberPicker, List list, ConstraintLayout constraintLayout, ImageView imageView) {
        itemViewHolder.setPickerData(i, radarSettingsModel, numberPicker, list);
        itemViewHolder.slidDown(constraintLayout, imageView);
    }
}
