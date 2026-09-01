package com.uniden.rtach.p005ui.adapter;

import android.app.AlertDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.SharedPreferences;
import android.os.Bundle;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.widget.EditText;
import android.widget.ImageView;
import android.widget.NumberPicker;
import android.widget.SeekBar;
import android.widget.TextView;
import androidx.appcompat.widget.SwitchCompat;
import androidx.constraintlayout.core.motion.utils.TypedValues;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.recyclerview.widget.DiffUtil;
import androidx.recyclerview.widget.RecyclerView;
import com.uniden.rtach.C2074R;
import com.uniden.rtach.data.model.Limit;
import com.uniden.rtach.data.model.RadarSettingsCategoryModel;
import com.uniden.rtach.data.model.RadarSettingsModel;
import com.uniden.rtach.data.model.RadarSettingsTitleModel;
import com.uniden.rtach.data.sharedpref.StoreUserData;
import com.uniden.rtach.databinding.ItemSettingCategoryHeaderBinding;
import com.uniden.rtach.databinding.ItemSettingMenuBinding;
import com.uniden.rtach.helper.BluetoothManager;
import com.uniden.rtach.helper.Constant;
import com.uniden.rtach.helper.Utils;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.ArraysKt;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Regex;
import kotlin.text.StringsKt;
import kotlinx.coroutines.BuildersKt__Builders_commonKt;
import kotlinx.coroutines.CoroutineScopeKt;
import kotlinx.coroutines.Dispatchers;

/* JADX INFO: compiled from: RadarItemSettingAdapter.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000^\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0007\n\u0002\u0010!\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\u0000\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\t\u0018\u0000 32\b\u0012\u0004\u0012\u00020\u00020\u0001:\u0003345B+\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u0012\f\u0010\u0005\u001a\b\u0012\u0004\u0012\u00020\u00070\u0006\u0012\f\u0010\b\u001a\b\u0012\u0004\u0012\u00020\t0\u0006¢\u0006\u0004\b\n\u0010\u000bJ\u0016\u0010 \u001a\u00020\u00142\f\u0010\u0010\u001a\b\u0012\u0004\u0012\u00020\u00120\u0006H\u0002J\u001c\u0010!\u001a\b\u0012\u0004\u0012\u00020\"0\u00062\f\u0010\u0010\u001a\b\u0012\u0004\u0012\u00020\u00120\u0006H\u0002J\u000e\u0010#\u001a\u00020\"2\u0006\u0010$\u001a\u00020\u0014J*\u0010%\u001a\b\u0012\u0004\u0012\u00020\u00120\u00062\f\u0010\b\u001a\b\u0012\u0004\u0012\u00020\t0\u00062\f\u0010\u0005\u001a\b\u0012\u0004\u0012\u00020\u00070\u0006H\u0002J\u0010\u0010&\u001a\u00020\u00142\u0006\u0010$\u001a\u00020\u0014H\u0016J\u0018\u0010'\u001a\u00020\u00022\u0006\u0010(\u001a\u00020)2\u0006\u0010*\u001a\u00020\u0014H\u0016J\b\u0010+\u001a\u00020\u0014H\u0016J\u0018\u0010,\u001a\u00020-2\u0006\u0010.\u001a\u00020\u00022\u0006\u0010$\u001a\u00020\u0014H\u0016J&\u0010,\u001a\u00020-2\u0006\u0010.\u001a\u00020\u00022\u0006\u0010$\u001a\u00020\u00142\f\u0010/\u001a\b\u0012\u0004\u0012\u00020\"0\u0006H\u0016J\"\u00100\u001a\u00020-2\f\u00101\u001a\b\u0012\u0004\u0012\u00020\u00070\u00062\f\u00102\u001a\b\u0012\u0004\u0012\u00020\u00070\u0006R\u001a\u0010\u0003\u001a\u00020\u0004X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\f\u0010\r\"\u0004\b\u000e\u0010\u000fR\u0014\u0010\b\u001a\b\u0012\u0004\u0012\u00020\t0\u0006X\u0082\u000e¢\u0006\u0002\n\u0000R\u0014\u0010\u0010\u001a\b\u0012\u0004\u0012\u00020\u00120\u0011X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0013\u001a\u00020\u0014X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0015\u001a\u00020\u0014X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0016\u001a\u00020\u0014X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0017\u001a\u00020\tX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0018\u001a\u00020\u0019X\u0082\u0004¢\u0006\u0002\n\u0000R\u001a\u0010\u001a\u001a\u00020\u001bX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u001c\u0010\u001d\"\u0004\b\u001e\u0010\u001f¨\u00066"}, m491d2 = {"Lcom/uniden/rtach/ui/adapter/RadarItemSettingAdapter;", "Landroidx/recyclerview/widget/RecyclerView$Adapter;", "Landroidx/recyclerview/widget/RecyclerView$ViewHolder;", "context", "Landroid/content/Context;", "itemList", "", "Lcom/uniden/rtach/data/model/RadarSettingsModel;", "categories", "", "<init>", "(Landroid/content/Context;Ljava/util/List;Ljava/util/List;)V", "getContext", "()Landroid/content/Context;", "setContext", "(Landroid/content/Context;)V", "categoryList", "", "Lcom/uniden/rtach/data/model/RadarSettingsCategoryModel;", "selectedIndex", "", "writeValue", "previousIndex", "writeStr", "regexLetter", "Lkotlin/text/Regex;", "sharedPrefs", "Lcom/uniden/rtach/data/sharedpref/StoreUserData;", "getSharedPrefs", "()Lcom/uniden/rtach/data/sharedpref/StoreUserData;", "setSharedPrefs", "(Lcom/uniden/rtach/data/sharedpref/StoreUserData;)V", "getTotalItemsCount", "getFlattenCategoryList", "", "getItem", "position", "makeCategoryList", "getItemViewType", "onCreateViewHolder", "parent", "Landroid/view/ViewGroup;", "viewType", "getItemCount", "onBindViewHolder", "", "holder", "payloads", "updateData", "oldList", "newList", "Companion", "HeaderViewHolder", "ItemViewHolder", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class RadarItemSettingAdapter extends RecyclerView.Adapter<RecyclerView.ViewHolder> {
    private static final int VIEW_TYPE_HEADER = 0;
    private static final int VIEW_TYPE_ITEM = 1;
    private List<String> categories;
    private List<RadarSettingsCategoryModel> categoryList;
    private Context context;
    private int previousIndex;
    private final Regex regexLetter;
    private int selectedIndex;
    private StoreUserData sharedPrefs;
    private String writeStr;
    private int writeValue;

    public final Context getContext() {
        return this.context;
    }

    public final StoreUserData getSharedPrefs() {
        return this.sharedPrefs;
    }

    public final void setContext(Context context) {
        Intrinsics.checkNotNullParameter(context, "<set-?>");
        this.context = context;
    }

    public final void setSharedPrefs(StoreUserData storeUserData) {
        Intrinsics.checkNotNullParameter(storeUserData, "<set-?>");
        this.sharedPrefs = storeUserData;
    }

    public RadarItemSettingAdapter(Context context, List<RadarSettingsModel> itemList, List<String> categories) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(itemList, "itemList");
        Intrinsics.checkNotNullParameter(categories, "categories");
        this.context = context;
        this.categories = categories;
        this.categoryList = new ArrayList();
        this.selectedIndex = -1;
        this.previousIndex = -1;
        this.writeStr = "";
        this.regexLetter = new Regex("[a-zA-Z]");
        SharedPreferences sharedPreferences = this.context.getSharedPreferences(StoreUserData.INSTANCE.getPrefName(this.context), 0);
        Intrinsics.checkNotNullExpressionValue(sharedPreferences, "getSharedPreferences(...)");
        this.sharedPrefs = new StoreUserData(sharedPreferences);
        List<RadarSettingsCategoryModel> listMakeCategoryList = makeCategoryList(this.categories, itemList);
        this.categoryList.clear();
        this.categoryList.addAll(listMakeCategoryList);
    }

    private final int getTotalItemsCount(List<RadarSettingsCategoryModel> categoryList) {
        return getFlattenCategoryList(categoryList).size();
    }

    private final List<Object> getFlattenCategoryList(List<RadarSettingsCategoryModel> categoryList) {
        ArrayList arrayList = new ArrayList();
        for (RadarSettingsCategoryModel radarSettingsCategoryModel : categoryList) {
            arrayList.add(radarSettingsCategoryModel.getTitle());
            arrayList.addAll(radarSettingsCategoryModel.getItemList());
        }
        return arrayList;
    }

    public final Object getItem(int position) {
        return getFlattenCategoryList(this.categoryList).get(position);
    }

    private final List<RadarSettingsCategoryModel> makeCategoryList(List<String> categories, List<RadarSettingsModel> itemList) {
        ArrayList arrayList = new ArrayList();
        for (String str : categories) {
            ArrayList arrayList2 = new ArrayList();
            for (Object obj : itemList) {
                if (Intrinsics.areEqual(((RadarSettingsModel) obj).getCategory(), str)) {
                    arrayList2.add(obj);
                }
            }
            ArrayList arrayList3 = arrayList2;
            if (!arrayList3.isEmpty()) {
                arrayList.add(new RadarSettingsCategoryModel(new RadarSettingsTitleModel(str), arrayList3));
            }
        }
        return arrayList;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public int getItemViewType(int position) {
        return !(getFlattenCategoryList(this.categoryList).get(position) instanceof RadarSettingsTitleModel) ? 1 : 0;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public RecyclerView.ViewHolder onCreateViewHolder(ViewGroup parent, int viewType) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        if (viewType == 0) {
            ItemSettingCategoryHeaderBinding itemSettingCategoryHeaderBindingInflate = ItemSettingCategoryHeaderBinding.inflate(LayoutInflater.from(parent.getContext()), parent, false);
            Intrinsics.checkNotNullExpressionValue(itemSettingCategoryHeaderBindingInflate, "inflate(...)");
            return new HeaderViewHolder(this, itemSettingCategoryHeaderBindingInflate);
        }
        ItemSettingMenuBinding itemSettingMenuBindingInflate = ItemSettingMenuBinding.inflate(LayoutInflater.from(parent.getContext()), parent, false);
        Intrinsics.checkNotNullExpressionValue(itemSettingMenuBindingInflate, "inflate(...)");
        return new ItemViewHolder(this, itemSettingMenuBindingInflate);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public int getItemCount() {
        return getTotalItemsCount(this.categoryList);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public void onBindViewHolder(RecyclerView.ViewHolder holder, int position) {
        Intrinsics.checkNotNullParameter(holder, "holder");
        Object obj = getFlattenCategoryList(this.categoryList).get(position);
        if (obj instanceof RadarSettingsTitleModel) {
            ((HeaderViewHolder) holder).bind((RadarSettingsTitleModel) obj, position);
            return;
        }
        if (obj instanceof RadarSettingsModel) {
            try {
                ((ItemViewHolder) holder).bind((RadarSettingsModel) obj, position);
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public void onBindViewHolder(RecyclerView.ViewHolder holder, int position, List<? extends Object> payloads) {
        Intrinsics.checkNotNullParameter(holder, "holder");
        Intrinsics.checkNotNullParameter(payloads, "payloads");
        Object obj = getFlattenCategoryList(this.categoryList).get(position);
        if (obj instanceof RadarSettingsTitleModel) {
            if (payloads.isEmpty()) {
                ((HeaderViewHolder) holder).bind((RadarSettingsTitleModel) obj, position);
                return;
            } else {
                ((HeaderViewHolder) holder).update((RadarSettingsTitleModel) obj);
                return;
            }
        }
        if (obj instanceof RadarSettingsModel) {
            if (payloads.isEmpty()) {
                try {
                    ((ItemViewHolder) holder).bind((RadarSettingsModel) obj, position);
                    return;
                } catch (Exception e) {
                    e.printStackTrace();
                    return;
                }
            }
            Object obj2 = payloads.get(0);
            Intrinsics.checkNotNull(obj2, "null cannot be cast to non-null type android.os.Bundle");
            Bundle bundle = (Bundle) obj2;
            if (bundle.containsKey("KEY_SELECTED_VALUE")) {
                ((ItemViewHolder) holder).update((RadarSettingsModel) obj, position, true);
            } else if (bundle.containsKey("KEY_CHANGED_POPUP")) {
                ((ItemViewHolder) holder).updatePopup(position);
            }
        }
    }

    public final void updateData(List<RadarSettingsModel> oldList, List<RadarSettingsModel> newList) {
        Intrinsics.checkNotNullParameter(oldList, "oldList");
        Intrinsics.checkNotNullParameter(newList, "newList");
        List<RadarSettingsCategoryModel> listMakeCategoryList = makeCategoryList(this.categories, newList);
        final List<Object> flattenCategoryList = getFlattenCategoryList(this.categoryList);
        final List<Object> flattenCategoryList2 = getFlattenCategoryList(listMakeCategoryList);
        DiffUtil.DiffResult diffResultCalculateDiff = DiffUtil.calculateDiff(new DiffUtil.Callback() { // from class: com.uniden.rtach.ui.adapter.RadarItemSettingAdapter$updateData$diffCallback$1
            @Override // androidx.recyclerview.widget.DiffUtil.Callback
            public int getOldListSize() {
                return flattenCategoryList.size();
            }

            @Override // androidx.recyclerview.widget.DiffUtil.Callback
            public int getNewListSize() {
                return flattenCategoryList2.size();
            }

            @Override // androidx.recyclerview.widget.DiffUtil.Callback
            public boolean areItemsTheSame(int oldItemPosition, int newItemPosition) {
                Object obj = flattenCategoryList.get(oldItemPosition);
                Object obj2 = flattenCategoryList2.get(newItemPosition);
                if (obj.getClass() != obj2.getClass()) {
                    return false;
                }
                if ((obj instanceof RadarSettingsTitleModel) && (obj2 instanceof RadarSettingsTitleModel)) {
                    return Intrinsics.areEqual(((RadarSettingsTitleModel) obj).getTitle(), ((RadarSettingsTitleModel) obj2).getTitle());
                }
                if ((obj instanceof RadarSettingsModel) && (obj2 instanceof RadarSettingsModel)) {
                    return Intrinsics.areEqual(((RadarSettingsModel) obj).getItem(), ((RadarSettingsModel) obj2).getItem());
                }
                return false;
            }

            @Override // androidx.recyclerview.widget.DiffUtil.Callback
            public boolean areContentsTheSame(int oldItemPosition, int newItemPosition) {
                Object obj = flattenCategoryList.get(oldItemPosition);
                Object obj2 = flattenCategoryList2.get(newItemPosition);
                if (obj.getClass() != obj2.getClass()) {
                    return false;
                }
                if ((obj instanceof RadarSettingsTitleModel) && (obj2 instanceof RadarSettingsTitleModel)) {
                    return Intrinsics.areEqual(((RadarSettingsTitleModel) obj).getTitle(), ((RadarSettingsTitleModel) obj2).getTitle());
                }
                if (!(obj instanceof RadarSettingsModel) || !(obj2 instanceof RadarSettingsModel)) {
                    return false;
                }
                RadarSettingsModel radarSettingsModel = (RadarSettingsModel) obj;
                if (radarSettingsModel.getSpeedUnit() == null || Intrinsics.areEqual(radarSettingsModel.getSpeedUnit(), "")) {
                    RadarSettingsModel radarSettingsModel2 = (RadarSettingsModel) obj2;
                    if (radarSettingsModel.getSelected_value() != radarSettingsModel2.getSelected_value() || !Intrinsics.areEqual(radarSettingsModel.getValues(), radarSettingsModel2.getValues())) {
                        return false;
                    }
                } else {
                    RadarSettingsModel radarSettingsModel3 = (RadarSettingsModel) obj2;
                    if (radarSettingsModel.getSelected_value() != radarSettingsModel3.getSelected_value() || !Intrinsics.areEqual(radarSettingsModel.getValues(), radarSettingsModel3.getValues()) || !Intrinsics.areEqual(radarSettingsModel.getSpeedUnit(), this.getSharedPrefs().getSpeedUnit())) {
                        return false;
                    }
                }
                return true;
            }

            @Override // androidx.recyclerview.widget.DiffUtil.Callback
            public Object getChangePayload(int oldItemPosition, int newItemPosition) {
                if (oldItemPosition >= flattenCategoryList.size() || newItemPosition >= flattenCategoryList2.size()) {
                    return null;
                }
                Object obj = flattenCategoryList.get(oldItemPosition);
                Object obj2 = flattenCategoryList2.get(newItemPosition);
                Bundle bundle = new Bundle();
                if (obj.getClass() != obj2.getClass()) {
                    bundle.putInt("KEY_OBJECT", newItemPosition);
                } else if ((obj instanceof RadarSettingsTitleModel) && (obj2 instanceof RadarSettingsTitleModel)) {
                    bundle.putInt("KEY_TITLE", newItemPosition);
                } else if ((obj instanceof RadarSettingsModel) && (obj2 instanceof RadarSettingsModel)) {
                    bundle.putInt("KEY_SELECTED_VALUE", newItemPosition);
                }
                if (bundle.isEmpty()) {
                    return null;
                }
                return bundle;
            }
        });
        Intrinsics.checkNotNullExpressionValue(diffResultCalculateDiff, "calculateDiff(...)");
        this.categoryList.clear();
        this.categoryList.addAll(listMakeCategoryList);
        diffResultCalculateDiff.dispatchUpdatesTo(this);
    }

    /* JADX INFO: compiled from: RadarItemSettingAdapter.kt */
    @Metadata(m490d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\b\u0086\u0004\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0016\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\rJ\u000e\u0010\u000e\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000bR\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007¨\u0006\u000f"}, m491d2 = {"Lcom/uniden/rtach/ui/adapter/RadarItemSettingAdapter$HeaderViewHolder;", "Landroidx/recyclerview/widget/RecyclerView$ViewHolder;", "binding", "Lcom/uniden/rtach/databinding/ItemSettingCategoryHeaderBinding;", "<init>", "(Lcom/uniden/rtach/ui/adapter/RadarItemSettingAdapter;Lcom/uniden/rtach/databinding/ItemSettingCategoryHeaderBinding;)V", "getBinding", "()Lcom/uniden/rtach/databinding/ItemSettingCategoryHeaderBinding;", "bind", "", "item", "Lcom/uniden/rtach/data/model/RadarSettingsTitleModel;", "position", "", "update", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    public final class HeaderViewHolder extends RecyclerView.ViewHolder {
        private final ItemSettingCategoryHeaderBinding binding;
        final /* synthetic */ RadarItemSettingAdapter this$0;

        public final ItemSettingCategoryHeaderBinding getBinding() {
            return this.binding;
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public HeaderViewHolder(RadarItemSettingAdapter radarItemSettingAdapter, ItemSettingCategoryHeaderBinding binding) {
            super(binding.getRoot());
            Intrinsics.checkNotNullParameter(binding, "binding");
            this.this$0 = radarItemSettingAdapter;
            this.binding = binding;
        }

        public final void bind(RadarSettingsTitleModel item, int position) {
            Intrinsics.checkNotNullParameter(item, "item");
            this.binding.setItemRadarTitle(item);
        }

        public final void update(RadarSettingsTitleModel item) {
            Intrinsics.checkNotNullParameter(item, "item");
            this.binding.categoryText.setText(item.getTitle());
        }
    }

    /* JADX INFO: compiled from: RadarItemSettingAdapter.kt */
    @Metadata(m490d1 = {"\u0000n\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0086\u0004\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0018\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\t2\u0006\u0010\u0012\u001a\u00020\u0013H\u0007J\u001e\u0010\u0014\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\t2\u0006\u0010\u0012\u001a\u00020\u00132\u0006\u0010\u0015\u001a\u00020\u0016J\u000e\u0010\u0017\u001a\u00020\u00102\u0006\u0010\u0012\u001a\u00020\u0013J.\u0010\u0018\u001a\u00020\u00102\u0006\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0012\u001a\u00020\u00132\u0006\u0010\u0011\u001a\u00020\t2\f\u0010\n\u001a\b\u0012\u0004\u0012\u00020\f0\u0019H\u0002J.\u0010\u001a\u001a\u00020\u00102\u0006\u0010\u0012\u001a\u00020\u00132\u0006\u0010\u0011\u001a\u00020\t2\u0006\u0010\u001b\u001a\u00020\u001c2\f\u0010\n\u001a\b\u0012\u0004\u0012\u00020\f0\u0019H\u0002J\u0018\u0010\u001d\u001a\u00020\u00102\u0006\u0010\u001e\u001a\u00020\u001c2\u0006\u0010\u001f\u001a\u00020\u0013H\u0002J>\u0010 \u001a\u00020\u00102\u0006\u0010\u0012\u001a\u00020\u00132\u0006\u0010\u0011\u001a\u00020\t2\u0006\u0010\u001b\u001a\u00020\u001c2\u0006\u0010!\u001a\u00020\"2\u0006\u0010#\u001a\u00020$2\f\u0010\n\u001a\b\u0012\u0004\u0012\u00020\f0\u0019H\u0002J\u0018\u0010%\u001a\u00020\u00102\u0006\u0010&\u001a\u00020'2\u0006\u0010(\u001a\u00020\tH\u0002J\u0016\u0010)\u001a\u00020\u00102\u0006\u0010&\u001a\u00020'2\u0006\u0010\u0011\u001a\u00020\tJ\u0018\u0010*\u001a\u00020\u00102\u0006\u0010+\u001a\u00020,2\u0006\u0010#\u001a\u00020$H\u0002J\u0018\u0010-\u001a\u00020\u00102\u0006\u0010+\u001a\u00020,2\u0006\u0010#\u001a\u00020$H\u0002R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007R\u000e\u0010\b\u001a\u00020\tX\u0082.¢\u0006\u0002\n\u0000R \u0010\n\u001a\u0012\u0012\u0004\u0012\u00020\f0\rj\b\u0012\u0004\u0012\u00020\f`\u000bX\u0082.¢\u0006\u0004\n\u0002\u0010\u000e¨\u0006."}, m491d2 = {"Lcom/uniden/rtach/ui/adapter/RadarItemSettingAdapter$ItemViewHolder;", "Landroidx/recyclerview/widget/RecyclerView$ViewHolder;", "binding", "Lcom/uniden/rtach/databinding/ItemSettingMenuBinding;", "<init>", "(Lcom/uniden/rtach/ui/adapter/RadarItemSettingAdapter;Lcom/uniden/rtach/databinding/ItemSettingMenuBinding;)V", "getBinding", "()Lcom/uniden/rtach/databinding/ItemSettingMenuBinding;", "settingItem", "Lcom/uniden/rtach/data/model/RadarSettingsModel;", "settingValues", "Lkotlin/collections/ArrayList;", "", "Ljava/util/ArrayList;", "Ljava/util/ArrayList;", "bind", "", "item", "position", "", "update", "isUpdate", "", "updatePopup", "updateInitUI", "", "setPickerData", "itemSettingPicker", "Landroid/widget/NumberPicker;", "setPickerTextColor", "picker", TypedValues.Custom.S_COLOR, "updateDropDownUI", "rlPicker", "Landroidx/constraintlayout/widget/ConstraintLayout;", "arrowImage", "Landroid/widget/ImageView;", "showSettingItemDialog", "context", "Landroid/content/Context;", "radarItem", "showSeekBarDialog", "slidDown", "view", "Landroid/view/View;", "slideUp", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    public final class ItemViewHolder extends RecyclerView.ViewHolder {
        private final ItemSettingMenuBinding binding;
        private RadarSettingsModel settingItem;
        private ArrayList<String> settingValues;
        final /* synthetic */ RadarItemSettingAdapter this$0;

        public final ItemSettingMenuBinding getBinding() {
            return this.binding;
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public ItemViewHolder(RadarItemSettingAdapter radarItemSettingAdapter, ItemSettingMenuBinding binding) {
            super(binding.getRoot());
            Intrinsics.checkNotNullParameter(binding, "binding");
            this.this$0 = radarItemSettingAdapter;
            this.binding = binding;
        }

        public final void bind(RadarSettingsModel item, final int position) {
            Intrinsics.checkNotNullParameter(item, "item");
            final RadarItemSettingAdapter radarItemSettingAdapter = this.this$0;
            try {
                update(item, position, false);
                this.binding.txtSetItem.setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.adapter.RadarItemSettingAdapter$ItemViewHolder$$ExternalSyntheticLambda8
                    @Override // android.view.View.OnClickListener
                    public final void onClick(View view) {
                        RadarItemSettingAdapter.ItemViewHolder.bind$lambda$9$lambda$0(this.f$0, radarItemSettingAdapter, view);
                    }
                });
                this.binding.itemSettingPicker.setOnValueChangedListener(new NumberPicker.OnValueChangeListener() { // from class: com.uniden.rtach.ui.adapter.RadarItemSettingAdapter$ItemViewHolder$$ExternalSyntheticLambda9
                    @Override // android.widget.NumberPicker.OnValueChangeListener
                    public final void onValueChange(NumberPicker numberPicker, int i, int i2) {
                        RadarItemSettingAdapter.ItemViewHolder.bind$lambda$9$lambda$1(this.f$0, radarItemSettingAdapter, numberPicker, i, i2);
                    }
                });
                this.binding.itemSettingPicker.setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.adapter.RadarItemSettingAdapter$ItemViewHolder$$ExternalSyntheticLambda10
                    @Override // android.view.View.OnClickListener
                    public final void onClick(View view) {
                        RadarItemSettingAdapter.ItemViewHolder.bind$lambda$9$lambda$2(this.f$0, view);
                    }
                });
                this.binding.imgButton.setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.adapter.RadarItemSettingAdapter$ItemViewHolder$$ExternalSyntheticLambda11
                    @Override // android.view.View.OnClickListener
                    public final void onClick(View view) {
                        RadarItemSettingAdapter.ItemViewHolder.bind$lambda$9$lambda$3(this.f$0, view);
                    }
                });
                this.binding.switchSetting.setOnTouchListener(new View.OnTouchListener() { // from class: com.uniden.rtach.ui.adapter.RadarItemSettingAdapter$ItemViewHolder$$ExternalSyntheticLambda12
                    @Override // android.view.View.OnTouchListener
                    public final boolean onTouch(View view, MotionEvent motionEvent) {
                        return RadarItemSettingAdapter.ItemViewHolder.bind$lambda$9$lambda$5(this.f$0, radarItemSettingAdapter, position, view, motionEvent);
                    }
                });
                this.binding.llItemSettingChange.setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.adapter.RadarItemSettingAdapter$ItemViewHolder$$ExternalSyntheticLambda1
                    @Override // android.view.View.OnClickListener
                    public final void onClick(View view) {
                        RadarItemSettingAdapter.ItemViewHolder.bind$lambda$9$lambda$6(radarItemSettingAdapter, this, view);
                    }
                });
                this.binding.llDataSublist.setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.adapter.RadarItemSettingAdapter$ItemViewHolder$$ExternalSyntheticLambda2
                    @Override // android.view.View.OnClickListener
                    public final void onClick(View view) {
                        RadarItemSettingAdapter.ItemViewHolder.bind$lambda$9$lambda$8(this.f$0, radarItemSettingAdapter, position, view);
                    }
                });
                ConstraintLayout rlPicker = this.binding.rlPicker;
                Intrinsics.checkNotNullExpressionValue(rlPicker, "rlPicker");
                ImageView arrowImage = this.binding.arrowImage;
                Intrinsics.checkNotNullExpressionValue(arrowImage, "arrowImage");
                slideUp(rlPicker, arrowImage);
            } catch (Exception e) {
                e.printStackTrace();
            }
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final void bind$lambda$9$lambda$0(ItemViewHolder this$0, RadarItemSettingAdapter this$1, View view) {
            Intrinsics.checkNotNullParameter(this$0, "this$0");
            Intrinsics.checkNotNullParameter(this$1, "this$1");
            RadarSettingsModel radarSettingsModel = this$0.settingItem;
            RadarSettingsModel radarSettingsModel2 = null;
            if (radarSettingsModel == null) {
                Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                radarSettingsModel = null;
            }
            if (radarSettingsModel.getSpeedUnit().length() == 0) {
                int i = this$1.writeValue;
                ArrayList<String> arrayList = this$0.settingValues;
                if (arrayList == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("settingValues");
                    arrayList = null;
                }
                if (i > arrayList.size()) {
                    this$1.writeValue = this$0.binding.itemSettingPicker.getValue();
                    StringBuilder sb = new StringBuilder("BTreqSETC:");
                    RadarSettingsModel radarSettingsModel3 = this$0.settingItem;
                    if (radarSettingsModel3 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                    } else {
                        radarSettingsModel2 = radarSettingsModel3;
                    }
                    this$1.writeStr = sb.append(radarSettingsModel2.getWrite_index()).append('=').append(this$1.writeValue).toString();
                }
            }
            Log.d("TAG_I", "Final:- " + this$1.writeStr);
            BluetoothManager.INSTANCE.getInstance(this$1.getContext()).writeCharacteristic(this$1.writeStr);
            ConstraintLayout rlPicker = this$0.binding.rlPicker;
            Intrinsics.checkNotNullExpressionValue(rlPicker, "rlPicker");
            ImageView arrowImage = this$0.binding.arrowImage;
            Intrinsics.checkNotNullExpressionValue(arrowImage, "arrowImage");
            this$0.slideUp(rlPicker, arrowImage);
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final void bind$lambda$9$lambda$1(ItemViewHolder this$0, RadarItemSettingAdapter this$1, NumberPicker numberPicker, int i, int i2) {
            Intrinsics.checkNotNullParameter(this$0, "this$0");
            Intrinsics.checkNotNullParameter(this$1, "this$1");
            RadarSettingsModel radarSettingsModel = this$0.settingItem;
            RadarSettingsModel radarSettingsModel2 = null;
            if (radarSettingsModel == null) {
                Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                radarSettingsModel = null;
            }
            if (radarSettingsModel.getSpeedUnit().length() <= 0) {
                this$1.writeValue = i2;
            } else {
                String str = numberPicker.getDisplayedValues()[i2];
                Intrinsics.checkNotNullExpressionValue(str, "get(...)");
                String string = StringsKt.trim((CharSequence) StringsKt.replace$default(StringsKt.replace$default(str, "km/h", "", false, 4, (Object) null), "mph", "", false, 4, (Object) null)).toString();
                this$1.writeValue = StringsKt.toIntOrNull(string) != null ? Integer.parseInt(string) : 0;
            }
            StringBuilder sb = new StringBuilder("BTreqSETC:");
            RadarSettingsModel radarSettingsModel3 = this$0.settingItem;
            if (radarSettingsModel3 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("settingItem");
            } else {
                radarSettingsModel2 = radarSettingsModel3;
            }
            this$1.writeStr = sb.append(radarSettingsModel2.getWrite_index()).append('=').append(this$1.writeValue).toString();
            Log.d("TAG_I", this$1.writeStr);
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final void bind$lambda$9$lambda$2(ItemViewHolder this$0, View view) {
            Intrinsics.checkNotNullParameter(this$0, "this$0");
            ArrayList<String> arrayList = this$0.settingValues;
            if (arrayList == null) {
                Intrinsics.throwUninitializedPropertyAccessException("settingValues");
                arrayList = null;
            }
            String str = arrayList.get(this$0.binding.itemSettingPicker.getValue());
            Intrinsics.checkNotNullExpressionValue(str, "get(...)");
            Log.d("PickerClick", "Clicked value: " + str);
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final void bind$lambda$9$lambda$3(ItemViewHolder this$0, View view) {
            Intrinsics.checkNotNullParameter(this$0, "this$0");
            if (this$0.binding.rlPicker.getVisibility() == 0) {
                ConstraintLayout rlPicker = this$0.binding.rlPicker;
                Intrinsics.checkNotNullExpressionValue(rlPicker, "rlPicker");
                ImageView arrowImage = this$0.binding.arrowImage;
                Intrinsics.checkNotNullExpressionValue(arrowImage, "arrowImage");
                this$0.slideUp(rlPicker, arrowImage);
            }
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final boolean bind$lambda$9$lambda$5(ItemViewHolder this$0, RadarItemSettingAdapter this$1, int i, View view, MotionEvent motionEvent) {
            Intrinsics.checkNotNullParameter(this$0, "this$0");
            Intrinsics.checkNotNullParameter(this$1, "this$1");
            if (motionEvent.getAction() == 1) {
                int i2 = !this$0.binding.switchSetting.isChecked() ? 1 : 0;
                BluetoothManager companion = BluetoothManager.INSTANCE.getInstance(this$1.getContext());
                StringBuilder sb = new StringBuilder("BTreqSETC:");
                RadarSettingsModel radarSettingsModel = this$0.settingItem;
                if (radarSettingsModel == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                    radarSettingsModel = null;
                }
                companion.writeCharacteristic(sb.append(radarSettingsModel.getWrite_index()).append('=').append(i2).toString());
                this$1.selectedIndex = i;
                if (this$1.selectedIndex != this$1.previousIndex) {
                    int i3 = this$1.previousIndex;
                    Bundle bundle = new Bundle();
                    bundle.putInt("KEY_CHANGED_POPUP", this$1.previousIndex);
                    Unit unit = Unit.INSTANCE;
                    this$1.notifyItemChanged(i3, bundle);
                }
                this$1.previousIndex = this$1.selectedIndex;
            }
            return true;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final void bind$lambda$9$lambda$6(RadarItemSettingAdapter this$0, ItemViewHolder this$1, View view) {
            Intrinsics.checkNotNullParameter(this$0, "this$0");
            Intrinsics.checkNotNullParameter(this$1, "this$1");
            StringBuilder sb = new StringBuilder("BTreqSETC:");
            RadarSettingsModel radarSettingsModel = this$1.settingItem;
            RadarSettingsModel radarSettingsModel2 = null;
            if (radarSettingsModel == null) {
                Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                radarSettingsModel = null;
            }
            this$0.writeStr = sb.append(radarSettingsModel.getWrite_index()).append("=1").toString();
            Context context = this$0.getContext();
            RadarSettingsModel radarSettingsModel3 = this$1.settingItem;
            if (radarSettingsModel3 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("settingItem");
            } else {
                radarSettingsModel2 = radarSettingsModel3;
            }
            this$1.showSettingItemDialog(context, radarSettingsModel2);
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final void bind$lambda$9$lambda$8(ItemViewHolder this$0, RadarItemSettingAdapter this$1, int i, View view) {
            Intrinsics.checkNotNullParameter(this$0, "this$0");
            Intrinsics.checkNotNullParameter(this$1, "this$1");
            RadarSettingsModel radarSettingsModel = this$0.settingItem;
            RadarSettingsModel radarSettingsModel2 = null;
            if (radarSettingsModel == null) {
                Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                radarSettingsModel = null;
            }
            if (radarSettingsModel.getByte_value() == 2) {
                Context context = this$1.getContext();
                RadarSettingsModel radarSettingsModel3 = this$0.settingItem;
                if (radarSettingsModel3 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                } else {
                    radarSettingsModel2 = radarSettingsModel3;
                }
                this$0.showSeekBarDialog(context, radarSettingsModel2);
                this$1.selectedIndex = i;
                if (this$1.selectedIndex != this$1.previousIndex) {
                    int i2 = this$1.previousIndex;
                    Bundle bundle = new Bundle();
                    bundle.putInt("KEY_CHANGED_POPUP", this$1.previousIndex);
                    Unit unit = Unit.INSTANCE;
                    this$1.notifyItemChanged(i2, bundle);
                }
                this$1.previousIndex = this$1.selectedIndex;
                return;
            }
            SwitchCompat switchSetting = this$0.binding.switchSetting;
            Intrinsics.checkNotNullExpressionValue(switchSetting, "switchSetting");
            if (switchSetting.getVisibility() == 0) {
                return;
            }
            BuildersKt__Builders_commonKt.launch$default(CoroutineScopeKt.CoroutineScope(Dispatchers.getMain()), null, null, new RadarItemSettingAdapter$ItemViewHolder$bind$1$7$2(this$0, i, null), 3, null);
        }

        /* JADX WARN: Code duplicated, block: B:22:0x0073  */
        /* JADX WARN: Code duplicated, block: B:233:0x0491  */
        /* JADX WARN: Code duplicated, block: B:24:0x0077  */
        /* JADX WARN: Code duplicated, block: B:254:0x04e1  */
        /* JADX WARN: Code duplicated, block: B:271:0x051b  */
        /* JADX WARN: Code duplicated, block: B:297:0x0583  */
        /* JADX WARN: Code duplicated, block: B:45:0x00e4  */
        /* JADX WARN: Code duplicated, block: B:47:0x00e8  */
        /* JADX WARN: Code duplicated, block: B:50:0x00f4  */
        /* JADX WARN: Code duplicated, block: B:56:0x0112  */
        /* JADX WARN: Code duplicated, block: B:58:0x0116  */
        /* JADX WARN: Code duplicated, block: B:61:0x0122  */
        /* JADX WARN: Code duplicated, block: B:67:0x0140  */
        /* JADX WARN: Code duplicated, block: B:69:0x0146  */
        public final void update(RadarSettingsModel item, int position, boolean isUpdate) {
            RadarSettingsModel radarSettingsModel;
            RadarSettingsModel radarSettingsModel2;
            Limit limit;
            RadarSettingsModel radarSettingsModel3;
            RadarSettingsModel radarSettingsModel4;
            ArrayList<String> arrayList;
            RadarSettingsModel radarSettingsModel5;
            String string;
            String string2;
            int i;
            boolean z;
            int i2;
            int i3;
            String mph;
            boolean z2;
            Intrinsics.checkNotNullParameter(item, "item");
            final ItemSettingMenuBinding itemSettingMenuBinding = this.binding;
            RadarItemSettingAdapter radarItemSettingAdapter = this.this$0;
            this.settingItem = item;
            if (item == null) {
                Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                radarSettingsModel = null;
            } else {
                radarSettingsModel = item;
            }
            if (radarSettingsModel.getConflict_radars().length() <= 0) {
                radarSettingsModel2 = this.settingItem;
                if (radarSettingsModel2 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                    radarSettingsModel2 = null;
                }
                limit = radarSettingsModel2.getLimit();
            } else {
                RadarSettingsModel radarSettingsModel6 = this.settingItem;
                if (radarSettingsModel6 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                    radarSettingsModel6 = null;
                }
                if (radarSettingsModel6.getConflict_limit() == null) {
                    radarSettingsModel2 = this.settingItem;
                    if (radarSettingsModel2 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                        radarSettingsModel2 = null;
                    }
                    limit = radarSettingsModel2.getLimit();
                } else {
                    RadarSettingsModel radarSettingsModel7 = this.settingItem;
                    if (radarSettingsModel7 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                        radarSettingsModel7 = null;
                    }
                    if (StringsKt.split$default((CharSequence) radarSettingsModel7.getConflict_radars(), new String[]{","}, false, 0, 6, (Object) null).contains(StringsKt.substringBefore$default(radarItemSettingAdapter.getSharedPrefs().getDeviceName(), "@", (String) null, 2, (Object) null))) {
                        RadarSettingsModel radarSettingsModel8 = this.settingItem;
                        if (radarSettingsModel8 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                            radarSettingsModel8 = null;
                        }
                        limit = radarSettingsModel8.getConflict_limit();
                    } else {
                        radarSettingsModel2 = this.settingItem;
                        if (radarSettingsModel2 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                            radarSettingsModel2 = null;
                        }
                        limit = radarSettingsModel2.getLimit();
                    }
                }
            }
            RadarSettingsModel radarSettingsModel9 = this.settingItem;
            if (radarSettingsModel9 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                radarSettingsModel9 = null;
            }
            if (radarSettingsModel9.getConflict_radars().length() <= 0) {
                radarSettingsModel3 = this.settingItem;
                if (radarSettingsModel3 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                    radarSettingsModel3 = null;
                }
                if (radarSettingsModel3.getWrite_index() == 48 || radarItemSettingAdapter.getSharedPrefs().isMrcdOn()) {
                    radarSettingsModel4 = this.settingItem;
                    if (radarSettingsModel4 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                        radarSettingsModel4 = null;
                    }
                    if (radarSettingsModel4.getWrite_index() != 64 && !radarItemSettingAdapter.getSharedPrefs().isGpsOn()) {
                        RadarSettingsModel radarSettingsModel10 = this.settingItem;
                        if (radarSettingsModel10 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                            radarSettingsModel10 = null;
                        }
                        arrayList = new ArrayList<>(radarSettingsModel10.getConflict_values());
                    } else {
                        radarSettingsModel5 = this.settingItem;
                        if (radarSettingsModel5 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                            radarSettingsModel5 = null;
                        }
                        arrayList = new ArrayList<>(radarSettingsModel5.getValues());
                    }
                } else {
                    RadarSettingsModel radarSettingsModel11 = this.settingItem;
                    if (radarSettingsModel11 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                        radarSettingsModel11 = null;
                    }
                    arrayList = new ArrayList<>(radarSettingsModel11.getConflict_values());
                }
            } else {
                RadarSettingsModel radarSettingsModel12 = this.settingItem;
                if (radarSettingsModel12 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                    radarSettingsModel12 = null;
                }
                if (radarSettingsModel12.getConflict_values() == null) {
                    radarSettingsModel3 = this.settingItem;
                    if (radarSettingsModel3 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                        radarSettingsModel3 = null;
                    }
                    if (radarSettingsModel3.getWrite_index() == 48) {
                        radarSettingsModel4 = this.settingItem;
                        if (radarSettingsModel4 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                            radarSettingsModel4 = null;
                        }
                        if (radarSettingsModel4.getWrite_index() != 64) {
                            radarSettingsModel5 = this.settingItem;
                            if (radarSettingsModel5 == null) {
                                Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                                radarSettingsModel5 = null;
                            }
                            arrayList = new ArrayList<>(radarSettingsModel5.getValues());
                        } else {
                            radarSettingsModel5 = this.settingItem;
                            if (radarSettingsModel5 == null) {
                                Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                                radarSettingsModel5 = null;
                            }
                            arrayList = new ArrayList<>(radarSettingsModel5.getValues());
                        }
                    } else {
                        radarSettingsModel4 = this.settingItem;
                        if (radarSettingsModel4 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                            radarSettingsModel4 = null;
                        }
                        if (radarSettingsModel4.getWrite_index() != 64) {
                            radarSettingsModel5 = this.settingItem;
                            if (radarSettingsModel5 == null) {
                                Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                                radarSettingsModel5 = null;
                            }
                            arrayList = new ArrayList<>(radarSettingsModel5.getValues());
                        } else {
                            radarSettingsModel5 = this.settingItem;
                            if (radarSettingsModel5 == null) {
                                Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                                radarSettingsModel5 = null;
                            }
                            arrayList = new ArrayList<>(radarSettingsModel5.getValues());
                        }
                    }
                } else {
                    RadarSettingsModel radarSettingsModel13 = this.settingItem;
                    if (radarSettingsModel13 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                        radarSettingsModel13 = null;
                    }
                    if (StringsKt.split$default((CharSequence) radarSettingsModel13.getConflict_radars(), new String[]{","}, false, 0, 6, (Object) null).contains(StringsKt.substringBefore$default(radarItemSettingAdapter.getSharedPrefs().getDeviceName(), "@", (String) null, 2, (Object) null))) {
                        RadarSettingsModel radarSettingsModel14 = this.settingItem;
                        if (radarSettingsModel14 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                            radarSettingsModel14 = null;
                        }
                        arrayList = new ArrayList<>(radarSettingsModel14.getConflict_values());
                    } else {
                        radarSettingsModel3 = this.settingItem;
                        if (radarSettingsModel3 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                            radarSettingsModel3 = null;
                        }
                        if (radarSettingsModel3.getWrite_index() == 48) {
                            radarSettingsModel4 = this.settingItem;
                            if (radarSettingsModel4 == null) {
                                Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                                radarSettingsModel4 = null;
                            }
                            if (radarSettingsModel4.getWrite_index() != 64) {
                                radarSettingsModel5 = this.settingItem;
                                if (radarSettingsModel5 == null) {
                                    Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                                    radarSettingsModel5 = null;
                                }
                                arrayList = new ArrayList<>(radarSettingsModel5.getValues());
                            } else {
                                radarSettingsModel5 = this.settingItem;
                                if (radarSettingsModel5 == null) {
                                    Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                                    radarSettingsModel5 = null;
                                }
                                arrayList = new ArrayList<>(radarSettingsModel5.getValues());
                            }
                        } else {
                            radarSettingsModel4 = this.settingItem;
                            if (radarSettingsModel4 == null) {
                                Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                                radarSettingsModel4 = null;
                            }
                            if (radarSettingsModel4.getWrite_index() != 64) {
                                radarSettingsModel5 = this.settingItem;
                                if (radarSettingsModel5 == null) {
                                    Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                                    radarSettingsModel5 = null;
                                }
                                arrayList = new ArrayList<>(radarSettingsModel5.getValues());
                            } else {
                                radarSettingsModel5 = this.settingItem;
                                if (radarSettingsModel5 == null) {
                                    Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                                    radarSettingsModel5 = null;
                                }
                                arrayList = new ArrayList<>(radarSettingsModel5.getValues());
                            }
                        }
                    }
                }
            }
            this.settingValues = arrayList;
            RadarSettingsModel radarSettingsModel15 = this.settingItem;
            if (radarSettingsModel15 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                radarSettingsModel15 = null;
            }
            if (radarSettingsModel15.getByte_value() != 2) {
                RadarSettingsModel radarSettingsModel16 = this.settingItem;
                if (radarSettingsModel16 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                    radarSettingsModel16 = null;
                }
                int selected_value = radarSettingsModel16.getSelected_value();
                ArrayList<String> arrayList2 = this.settingValues;
                if (arrayList2 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("settingValues");
                    arrayList2 = null;
                }
                if (selected_value >= arrayList2.size()) {
                    RadarSettingsModel radarSettingsModel17 = this.settingItem;
                    if (radarSettingsModel17 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                        radarSettingsModel17 = null;
                    }
                    ArrayList<String> arrayList3 = this.settingValues;
                    if (arrayList3 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("settingValues");
                        arrayList3 = null;
                    }
                    radarSettingsModel17.setSelected_value(arrayList3.size() - 1);
                }
            }
            String speedUnit = "";
            if (limit != null) {
                RadarSettingsModel radarSettingsModel18 = this.settingItem;
                if (radarSettingsModel18 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                    radarSettingsModel18 = null;
                }
                radarSettingsModel18.setSpeedUnit(radarItemSettingAdapter.getSharedPrefs().getSpeedUnit());
                ArrayList<String> arrayList4 = this.settingValues;
                if (arrayList4 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("settingValues");
                    arrayList4 = null;
                }
                ArrayList<String> arrayList5 = arrayList4;
                RadarSettingsModel radarSettingsModel19 = this.settingItem;
                if (radarSettingsModel19 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                    radarSettingsModel19 = null;
                }
                String str = (String) CollectionsKt.getOrNull(arrayList5, radarSettingsModel19.getSelected_value());
                if (str == null) {
                    str = "";
                }
                StringBuilder sbAppend = new StringBuilder().append(str).append(' ');
                if (!radarItemSettingAdapter.regexLetter.containsMatchIn(str)) {
                    RadarSettingsModel radarSettingsModel20 = this.settingItem;
                    if (radarSettingsModel20 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                        radarSettingsModel20 = null;
                    }
                    speedUnit = radarSettingsModel20.getSpeedUnit();
                }
                string2 = sbAppend.append(speedUnit).toString();
                if (limit.getGhz() != null) {
                    mph = limit.getGhz();
                } else if (StringsKt.equals(item.getSpeedUnit(), "km/h", true)) {
                    mph = limit.getKmh();
                } else {
                    mph = limit.getMph();
                }
                ArrayList<String> arrayList6 = this.settingValues;
                if (arrayList6 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("settingValues");
                    arrayList6 = null;
                }
                if (Intrinsics.areEqual(arrayList6.get(0), "Off")) {
                    ArrayList<String> arrayList7 = this.settingValues;
                    if (arrayList7 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("settingValues");
                        arrayList7 = null;
                    }
                    arrayList7.remove(0);
                    z2 = true;
                } else {
                    z2 = false;
                }
                if (mph != null) {
                    List listSplit$default = StringsKt.split$default((CharSequence) mph, new String[]{","}, false, 0, 6, (Object) null);
                    ArrayList arrayList8 = new ArrayList(CollectionsKt.collectionSizeOrDefault(listSplit$default, 10));
                    Iterator it = listSplit$default.iterator();
                    while (it.hasNext()) {
                        arrayList8.add(Integer.valueOf(Integer.parseInt((String) it.next())));
                    }
                    ArrayList arrayList9 = arrayList8;
                    int iIntValue = ((Number) arrayList9.get(0)).intValue();
                    int iIntValue2 = ((Number) arrayList9.get(1)).intValue();
                    ArrayList<String> arrayList10 = this.settingValues;
                    if (arrayList10 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("settingValues");
                        arrayList10 = null;
                    }
                    ArrayList arrayList11 = new ArrayList();
                    for (Object obj : arrayList10) {
                        int i4 = Integer.parseInt((String) obj);
                        if (iIntValue <= i4 && i4 <= iIntValue2) {
                            arrayList11.add(obj);
                        }
                    }
                    String[] strArr = (String[]) arrayList11.toArray(new String[0]);
                    RadarSettingsModel radarSettingsModel21 = this.settingItem;
                    if (radarSettingsModel21 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                        radarSettingsModel21 = null;
                    }
                    int i5 = StringsKt.equals(radarSettingsModel21.getSpeedUnit(), "km/h", true) ? 10 : 5;
                    List list = ArraysKt.toList(strArr);
                    ArrayList arrayList12 = new ArrayList();
                    for (Object obj2 : list) {
                        if (Integer.parseInt((String) obj2) % i5 == 0) {
                            arrayList12.add(obj2);
                        }
                    }
                    ArrayList<String> arrayList13 = arrayList12;
                    ArrayList<String> arrayList14 = new ArrayList<>(CollectionsKt.collectionSizeOrDefault(arrayList13, 10));
                    for (String str2 : arrayList13) {
                        RadarSettingsModel radarSettingsModel22 = this.settingItem;
                        if (radarSettingsModel22 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                            radarSettingsModel22 = null;
                        }
                        if (StringsKt.equals(radarSettingsModel22.getSpeedUnit(), "km/h", true)) {
                            str2 = str2 + " km/h";
                        } else {
                            RadarSettingsModel radarSettingsModel23 = this.settingItem;
                            if (radarSettingsModel23 == null) {
                                Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                                radarSettingsModel23 = null;
                            }
                            if (StringsKt.equals(radarSettingsModel23.getSpeedUnit(), "mph", true)) {
                                str2 = str2 + " mph";
                            }
                        }
                        arrayList14.add(str2);
                    }
                    ArrayList<String> arrayList15 = arrayList14;
                    this.settingValues = arrayList15;
                    Log.d("speedvalue", arrayList15.toString());
                    if (z2) {
                        ArrayList<String> arrayList16 = this.settingValues;
                        if (arrayList16 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("settingValues");
                            arrayList16 = null;
                        }
                        arrayList16.add(0, "Off");
                    }
                    Unit unit = Unit.INSTANCE;
                    Unit unit2 = Unit.INSTANCE;
                }
            } else {
                RadarSettingsModel radarSettingsModel24 = this.settingItem;
                if (radarSettingsModel24 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                    radarSettingsModel24 = null;
                }
                radarSettingsModel24.setSpeedUnit("");
                RadarSettingsModel radarSettingsModel25 = this.settingItem;
                if (radarSettingsModel25 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                    radarSettingsModel25 = null;
                }
                if (radarSettingsModel25.getByte_value() == 2) {
                    Utils utils = new Utils();
                    RadarSettingsModel radarSettingsModel26 = this.settingItem;
                    if (radarSettingsModel26 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                        radarSettingsModel26 = null;
                    }
                    string = utils.convertToDecimal(radarSettingsModel26.getSelected_value());
                } else {
                    StringBuilder sb = new StringBuilder();
                    ArrayList<String> arrayList17 = this.settingValues;
                    if (arrayList17 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("settingValues");
                        arrayList17 = null;
                    }
                    string = sb.append(arrayList17.get(item.getSelected_value())).append(' ').toString();
                }
                string2 = string;
                Unit unit3 = Unit.INSTANCE;
            }
            updatePopup(position);
            String string3 = itemSettingMenuBinding.txtBleName.getText().toString();
            RadarSettingsModel radarSettingsModel27 = this.settingItem;
            if (radarSettingsModel27 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                radarSettingsModel27 = null;
            }
            if (!Intrinsics.areEqual(string3, radarSettingsModel27.getItem())) {
                TextView textView = itemSettingMenuBinding.txtBleName;
                RadarSettingsModel radarSettingsModel28 = this.settingItem;
                if (radarSettingsModel28 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                    radarSettingsModel28 = null;
                }
                textView.setText(radarSettingsModel28.getItem());
            }
            RadarSettingsModel radarSettingsModel29 = this.settingItem;
            if (radarSettingsModel29 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                radarSettingsModel29 = null;
            }
            int i6 = radarSettingsModel29.getValues().size() == 1 ? 8 : 0;
            if (itemSettingMenuBinding.llDataSublist.getVisibility() != i6) {
                itemSettingMenuBinding.llDataSublist.setVisibility(i6);
            }
            RadarSettingsModel radarSettingsModel30 = this.settingItem;
            if (radarSettingsModel30 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                radarSettingsModel30 = null;
            }
            if (radarSettingsModel30.getValues().size() == 2) {
                RadarSettingsModel radarSettingsModel31 = this.settingItem;
                if (radarSettingsModel31 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                    radarSettingsModel31 = null;
                }
                if (!radarSettingsModel31.getValues().contains("On")) {
                    RadarSettingsModel radarSettingsModel32 = this.settingItem;
                    if (radarSettingsModel32 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                        radarSettingsModel32 = null;
                    }
                    i = radarSettingsModel32.getValues().contains("Off") ? 8 : 0;
                }
            }
            if (itemSettingMenuBinding.txtNameValue.getVisibility() != i) {
                itemSettingMenuBinding.txtNameValue.setVisibility(i);
            }
            RadarSettingsModel radarSettingsModel33 = this.settingItem;
            if (radarSettingsModel33 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                radarSettingsModel33 = null;
            }
            int size = radarSettingsModel33.getValues().size();
            RadarSettingsModel radarSettingsModel34 = this.settingItem;
            if (radarSettingsModel34 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                radarSettingsModel34 = null;
            }
            if (size < radarSettingsModel34.getSelected_value()) {
                z = false;
            } else {
                RadarSettingsModel radarSettingsModel35 = this.settingItem;
                if (radarSettingsModel35 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                    radarSettingsModel35 = null;
                }
                List<String> values = radarSettingsModel35.getValues();
                RadarSettingsModel radarSettingsModel36 = this.settingItem;
                if (radarSettingsModel36 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                    radarSettingsModel36 = null;
                }
                if (Intrinsics.areEqual(values.get(radarSettingsModel36.getSelected_value()), "On")) {
                    z = true;
                } else {
                    z = false;
                }
            }
            RadarSettingsModel radarSettingsModel37 = this.settingItem;
            if (radarSettingsModel37 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                radarSettingsModel37 = null;
            }
            if (radarSettingsModel37.getValues().size() != 2) {
                i2 = 8;
            } else {
                RadarSettingsModel radarSettingsModel38 = this.settingItem;
                if (radarSettingsModel38 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                    radarSettingsModel38 = null;
                }
                if (!radarSettingsModel38.getValues().contains("On")) {
                    RadarSettingsModel radarSettingsModel39 = this.settingItem;
                    if (radarSettingsModel39 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                        radarSettingsModel39 = null;
                    }
                    if (!radarSettingsModel39.getValues().contains("Off")) {
                        i2 = 8;
                    }
                }
                i2 = 0;
            }
            if (itemSettingMenuBinding.switchSetting.isChecked() != z) {
                if (isUpdate) {
                    Boolean.valueOf(itemSettingMenuBinding.switchSetting.post(new Runnable() { // from class: com.uniden.rtach.ui.adapter.RadarItemSettingAdapter$ItemViewHolder$$ExternalSyntheticLambda7
                        @Override // java.lang.Runnable
                        public final void run() {
                            RadarItemSettingAdapter.ItemViewHolder.update$lambda$16$lambda$15(itemSettingMenuBinding);
                        }
                    }));
                } else {
                    itemSettingMenuBinding.switchSetting.setChecked(z);
                    Unit unit4 = Unit.INSTANCE;
                }
            }
            if (itemSettingMenuBinding.switchSetting.getVisibility() != i2) {
                itemSettingMenuBinding.switchSetting.setVisibility(i2);
            }
            RadarSettingsModel radarSettingsModel40 = this.settingItem;
            if (radarSettingsModel40 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                radarSettingsModel40 = null;
            }
            if (radarSettingsModel40.getValues().size() == 2) {
                RadarSettingsModel radarSettingsModel41 = this.settingItem;
                if (radarSettingsModel41 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                    radarSettingsModel41 = null;
                }
                if (!radarSettingsModel41.getValues().contains("On")) {
                    RadarSettingsModel radarSettingsModel42 = this.settingItem;
                    if (radarSettingsModel42 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                        radarSettingsModel42 = null;
                    }
                    i3 = radarSettingsModel42.getValues().contains("Off") ? 8 : 0;
                }
            }
            if (itemSettingMenuBinding.btnDropDown.getVisibility() != i3) {
                itemSettingMenuBinding.btnDropDown.setVisibility(i3);
            }
            RadarSettingsModel radarSettingsModel43 = this.settingItem;
            if (radarSettingsModel43 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                radarSettingsModel43 = null;
            }
            int i7 = radarSettingsModel43.getValues().size() != 1 ? 8 : 0;
            if (itemSettingMenuBinding.llItemSettingChange.getVisibility() != i7) {
                itemSettingMenuBinding.llItemSettingChange.setVisibility(i7);
            }
            if (!Intrinsics.areEqual(itemSettingMenuBinding.selectedText.getText().toString(), string2)) {
                itemSettingMenuBinding.selectedText.setText(string2);
            }
            if (!Intrinsics.areEqual(itemSettingMenuBinding.txtNameValue.getText().toString(), string2)) {
                itemSettingMenuBinding.txtNameValue.setText(string2);
            }
            Unit unit5 = Unit.INSTANCE;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final void update$lambda$16$lambda$15(ItemSettingMenuBinding this_with) {
            Intrinsics.checkNotNullParameter(this_with, "$this_with");
            this_with.switchSetting.toggle();
        }

        public final void updatePopup(int position) {
            ItemSettingMenuBinding itemSettingMenuBinding = this.binding;
            RadarSettingsModel radarSettingsModel = this.settingItem;
            ArrayList<String> arrayList = null;
            if (radarSettingsModel == null) {
                Intrinsics.throwUninitializedPropertyAccessException("settingItem");
                radarSettingsModel = null;
            }
            ArrayList<String> arrayList2 = this.settingValues;
            if (arrayList2 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("settingValues");
            } else {
                arrayList = arrayList2;
            }
            updateInitUI(itemSettingMenuBinding, position, radarSettingsModel, arrayList);
        }

        private final void updateInitUI(ItemSettingMenuBinding binding, int position, RadarSettingsModel item, List<String> settingValues) {
            BuildersKt__Builders_commonKt.launch$default(CoroutineScopeKt.CoroutineScope(Dispatchers.getMain()), null, null, new RadarItemSettingAdapter$ItemViewHolder$updateInitUI$1(item, this.this$0, settingValues, position, binding, this, null), 3, null);
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final void setPickerData(int position, RadarSettingsModel item, NumberPicker itemSettingPicker, List<String> settingValues) {
            try {
                Log.e("item", String.valueOf(item.getWrite_index()));
                int i = 0;
                View childAt = itemSettingPicker.getChildAt(0);
                Intrinsics.checkNotNull(childAt, "null cannot be cast to non-null type android.widget.EditText");
                EditText editText = (EditText) childAt;
                editText.setFocusable(false);
                editText.setClickable(false);
                List<String> list = settingValues;
                ArrayList arrayList = new ArrayList(CollectionsKt.collectionSizeOrDefault(list, 10));
                Iterator<T> it = list.iterator();
                while (it.hasNext()) {
                    arrayList.add(StringsKt.trim((CharSequence) StringsKt.replace$default((String) it.next(), "m2", "", false, 4, (Object) null)).toString());
                }
                List listDistinct = CollectionsKt.distinct(arrayList);
                ArrayList arrayList2 = new ArrayList(CollectionsKt.collectionSizeOrDefault(listDistinct, 10));
                int i2 = 0;
                for (Object obj : listDistinct) {
                    int i3 = i2 + 1;
                    if (i2 < 0) {
                        CollectionsKt.throwIndexOverflow();
                    }
                    arrayList2.add(((String) obj) + ' ');
                    i2 = i3;
                }
                final ArrayList arrayList3 = arrayList2;
                itemSettingPicker.setValue(0);
                itemSettingPicker.setFormatter(new NumberPicker.Formatter() { // from class: com.uniden.rtach.ui.adapter.RadarItemSettingAdapter$ItemViewHolder$$ExternalSyntheticLambda3
                    @Override // android.widget.NumberPicker.Formatter
                    public final String format(int i4) {
                        return RadarItemSettingAdapter.ItemViewHolder.setPickerData$lambda$19(arrayList3, i4);
                    }
                });
                itemSettingPicker.setDisplayedValues(null);
                itemSettingPicker.setMinValue(0);
                itemSettingPicker.setMaxValue(arrayList3.size() > 1 ? arrayList3.size() - 1 : 0);
                itemSettingPicker.setWrapSelectorWheel(false);
                setPickerTextColor(itemSettingPicker, this.this$0.getContext().getColor(C2074R.color.black));
                itemSettingPicker.setDisplayedValues((String[]) arrayList3.toArray(new String[0]));
                if (item.getSpeedUnit().length() > 0) {
                    String strValueOf = String.valueOf(item.getSelected_value());
                    Iterator it2 = arrayList3.iterator();
                    while (true) {
                        if (!it2.hasNext()) {
                            i = -1;
                            break;
                        } else if (Intrinsics.areEqual(StringsKt.trim((CharSequence) StringsKt.replace$default(StringsKt.replace$default((String) it2.next(), "km/h", "", false, 4, (Object) null), "mph", "", false, 4, (Object) null)).toString(), strValueOf)) {
                            break;
                        } else {
                            i++;
                        }
                    }
                    if (i >= 0) {
                        itemSettingPicker.setValue(i);
                    }
                } else if (item.getSelected_value() < arrayList3.size()) {
                    itemSettingPicker.setValue(item.getSelected_value());
                }
                Log.e("item", "After setting value: " + itemSettingPicker.getValue());
            } catch (Exception e) {
                e.printStackTrace();
            }
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final String setPickerData$lambda$19(List formattedValues, int i) {
            Intrinsics.checkNotNullParameter(formattedValues, "$formattedValues");
            return (String) formattedValues.get(i);
        }

        private final void setPickerTextColor(NumberPicker picker, int color) {
            try {
                int childCount = picker.getChildCount();
                for (int i = 0; i < childCount; i++) {
                    View childAt = picker.getChildAt(i);
                    if (childAt instanceof EditText) {
                        ((EditText) childAt).setTextColor(color);
                    }
                }
            } catch (Exception e) {
                Log.e("setPickerTextColor", "Failed to set text color", e);
            }
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final void updateDropDownUI(int position, RadarSettingsModel item, NumberPicker itemSettingPicker, ConstraintLayout rlPicker, ImageView arrowImage, List<String> settingValues) {
            BuildersKt__Builders_commonKt.launch$default(CoroutineScopeKt.CoroutineScope(Dispatchers.getMain()), null, null, new RadarItemSettingAdapter$ItemViewHolder$updateDropDownUI$1(rlPicker, this, this.this$0, position, item, itemSettingPicker, settingValues, arrowImage, null), 3, null);
        }

        private final void showSettingItemDialog(final Context context, final RadarSettingsModel radarItem) {
            AlertDialog.Builder builder = new AlertDialog.Builder(context);
            builder.setTitle(context.getString(C2074R.string.app_name));
            builder.setMessage(radarItem.getItem());
            String string = context.getString(C2074R.string.yes);
            final RadarItemSettingAdapter radarItemSettingAdapter = this.this$0;
            builder.setPositiveButton(string, new DialogInterface.OnClickListener() { // from class: com.uniden.rtach.ui.adapter.RadarItemSettingAdapter$ItemViewHolder$$ExternalSyntheticLambda0
                @Override // android.content.DialogInterface.OnClickListener
                public final void onClick(DialogInterface dialogInterface, int i) {
                    RadarItemSettingAdapter.ItemViewHolder.showSettingItemDialog$lambda$21(context, radarItemSettingAdapter, radarItem, dialogInterface, i);
                }
            });
            builder.setNegativeButton(context.getString(C2074R.string.f401no), new DialogInterface.OnClickListener() { // from class: com.uniden.rtach.ui.adapter.RadarItemSettingAdapter$ItemViewHolder$$ExternalSyntheticLambda4
                @Override // android.content.DialogInterface.OnClickListener
                public final void onClick(DialogInterface dialogInterface, int i) {
                    RadarItemSettingAdapter.ItemViewHolder.showSettingItemDialog$lambda$22(dialogInterface, i);
                }
            });
            builder.create().show();
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final void showSettingItemDialog$lambda$21(Context context, RadarItemSettingAdapter this$0, RadarSettingsModel radarItem, DialogInterface dialog, int i) {
            Intrinsics.checkNotNullParameter(context, "$context");
            Intrinsics.checkNotNullParameter(this$0, "this$0");
            Intrinsics.checkNotNullParameter(radarItem, "$radarItem");
            Intrinsics.checkNotNullParameter(dialog, "dialog");
            BluetoothManager.INSTANCE.getInstance(context).writeCharacteristic(this$0.writeStr);
            dialog.dismiss();
            if (StringsKt.contains((CharSequence) radarItem.getItem(), (CharSequence) "factory reset", true)) {
                BluetoothManager.INSTANCE.getInstance(context).enableReadSettingsNotification2(Constant.INSTANCE.getSETTINGS_CHARACTERISTIC_UUID_1());
            }
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final void showSettingItemDialog$lambda$22(DialogInterface dialog, int i) {
            Intrinsics.checkNotNullParameter(dialog, "dialog");
            dialog.dismiss();
        }

        public final void showSeekBarDialog(final Context context, final RadarSettingsModel item) {
            Intrinsics.checkNotNullParameter(context, "context");
            Intrinsics.checkNotNullParameter(item, "item");
            AlertDialog.Builder builder = new AlertDialog.Builder(context);
            View viewInflate = LayoutInflater.from(context).inflate(C2074R.layout.seekbar_dialog, (ViewGroup) null);
            final TextView textView = (TextView) viewInflate.findViewById(C2074R.id.tvCurrentValue);
            final SeekBar seekBar = (SeekBar) viewInflate.findViewById(C2074R.id.seekBar);
            Log.d("TAG_PP", "min: " + Double.parseDouble(item.getValues().get(0)));
            Log.d("TAG_PP", "max: " + Double.parseDouble(item.getValues().get(1)));
            seekBar.setProgress(item.getSelected_value());
            textView.setText("Current Value: " + new Utils().convertToDecimal(seekBar.getProgress()));
            seekBar.setOnSeekBarChangeListener(new SeekBar.OnSeekBarChangeListener() { // from class: com.uniden.rtach.ui.adapter.RadarItemSettingAdapter$ItemViewHolder$showSeekBarDialog$1
                @Override // android.widget.SeekBar.OnSeekBarChangeListener
                public void onStartTrackingTouch(SeekBar seekBar2) {
                }

                @Override // android.widget.SeekBar.OnSeekBarChangeListener
                public void onStopTrackingTouch(SeekBar seekBar2) {
                }

                @Override // android.widget.SeekBar.OnSeekBarChangeListener
                public void onProgressChanged(SeekBar seekBar2, int progress, boolean fromUser) {
                    Log.d("TAG_PP", "onProgressChanged: " + progress);
                    textView.setText("Current Value: " + new Utils().convertToDecimal(progress));
                }
            });
            final RadarItemSettingAdapter radarItemSettingAdapter = this.this$0;
            builder.setView(viewInflate).setTitle(item.getItem()).setPositiveButton("OK", new DialogInterface.OnClickListener() { // from class: com.uniden.rtach.ui.adapter.RadarItemSettingAdapter$ItemViewHolder$$ExternalSyntheticLambda5
                @Override // android.content.DialogInterface.OnClickListener
                public final void onClick(DialogInterface dialogInterface, int i) {
                    RadarItemSettingAdapter.ItemViewHolder.showSeekBarDialog$lambda$23(seekBar, radarItemSettingAdapter, item, context, dialogInterface, i);
                }
            }).setNegativeButton("Cancel", new DialogInterface.OnClickListener() { // from class: com.uniden.rtach.ui.adapter.RadarItemSettingAdapter$ItemViewHolder$$ExternalSyntheticLambda6
                @Override // android.content.DialogInterface.OnClickListener
                public final void onClick(DialogInterface dialogInterface, int i) {
                    dialogInterface.dismiss();
                }
            });
            builder.create().show();
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final void showSeekBarDialog$lambda$23(SeekBar seekBar, RadarItemSettingAdapter this$0, RadarSettingsModel item, Context context, DialogInterface dialogInterface, int i) {
            Intrinsics.checkNotNullParameter(this$0, "this$0");
            Intrinsics.checkNotNullParameter(item, "$item");
            Intrinsics.checkNotNullParameter(context, "$context");
            this$0.writeStr = "BTreqSETC:" + item.getWrite_index() + '=' + seekBar.getProgress();
            Log.d("TAG_PP", "writeStr: " + this$0.writeStr);
            BluetoothManager.INSTANCE.getInstance(context).writeCharacteristic(this$0.writeStr);
            Log.e("TAG_SET_COMMAND", this$0.writeStr);
            dialogInterface.dismiss();
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final void slidDown(View view, ImageView arrowImage) {
            view.setVisibility(0);
            arrowImage.setRotation(180.0f);
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final void slideUp(View view, ImageView arrowImage) {
            view.setVisibility(8);
            arrowImage.setRotation(0.0f);
        }
    }
}
