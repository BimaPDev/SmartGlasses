package com.uniden.rtach.p005ui.adapter;

import android.content.Context;
import android.content.SharedPreferences;
import android.view.LayoutInflater;
import android.view.ViewGroup;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.core.content.ContextCompat;
import androidx.exifinterface.media.ExifInterface;
import androidx.recyclerview.widget.RecyclerView;
import com.uniden.rtach.C2074R;
import com.uniden.rtach.data.model.AlertBandDataModel;
import com.uniden.rtach.data.sharedpref.StoreUserData;
import com.uniden.rtach.databinding.ItemBandAlertBinding;
import com.uniden.rtach.helper.AlertDataConverter;
import java.util.ArrayList;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* JADX INFO: compiled from: BandAlertAdapter.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000N\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0013\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0004\u0018\u00002\f\u0012\b\u0012\u00060\u0002R\u00020\u00000\u0001:\u0001/B7\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u0012\u0016\u0010\u0005\u001a\u0012\u0012\u0004\u0012\u00020\u00070\bj\b\u0012\u0004\u0012\u00020\u0007`\u0006\u0012\u0006\u0010\t\u001a\u00020\n\u0012\u0006\u0010\u000b\u001a\u00020\f¢\u0006\u0004\b\r\u0010\u000eJ\u001c\u0010%\u001a\u00060\u0002R\u00020\u00002\u0006\u0010&\u001a\u00020'2\u0006\u0010(\u001a\u00020)H\u0016J\b\u0010*\u001a\u00020)H\u0016J\u001c\u0010+\u001a\u00020,2\n\u0010-\u001a\u00060\u0002R\u00020\u00002\u0006\u0010.\u001a\u00020)H\u0016R\u001a\u0010\u0003\u001a\u00020\u0004X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u000f\u0010\u0010\"\u0004\b\u0011\u0010\u0012R,\u0010\u0005\u001a\u0012\u0012\u0004\u0012\u00020\u00070\bj\b\u0012\u0004\u0012\u00020\u0007`\u0006X\u0086\u000e¢\u0006\u0010\n\u0002\u0010\u0017\u001a\u0004\b\u0013\u0010\u0014\"\u0004\b\u0015\u0010\u0016R\u001a\u0010\t\u001a\u00020\nX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0018\u0010\u0019\"\u0004\b\u001a\u0010\u001bR\u001a\u0010\u000b\u001a\u00020\fX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u000b\u0010\u001c\"\u0004\b\u001d\u0010\u001eR\u001a\u0010\u001f\u001a\u00020 X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b!\u0010\"\"\u0004\b#\u0010$¨\u00060"}, m491d2 = {"Lcom/uniden/rtach/ui/adapter/BandAlertAdapter;", "Landroidx/recyclerview/widget/RecyclerView$Adapter;", "Lcom/uniden/rtach/ui/adapter/BandAlertAdapter$ViewHolder;", "context", "Landroid/content/Context;", "list", "Lkotlin/collections/ArrayList;", "Lcom/uniden/rtach/data/model/AlertBandDataModel;", "Ljava/util/ArrayList;", "mainDirection", "", "isR9", "", "<init>", "(Landroid/content/Context;Ljava/util/ArrayList;Ljava/lang/String;Z)V", "getContext", "()Landroid/content/Context;", "setContext", "(Landroid/content/Context;)V", "getList", "()Ljava/util/ArrayList;", "setList", "(Ljava/util/ArrayList;)V", "Ljava/util/ArrayList;", "getMainDirection", "()Ljava/lang/String;", "setMainDirection", "(Ljava/lang/String;)V", "()Z", "setR9", "(Z)V", "sharedPrefs", "Lcom/uniden/rtach/data/sharedpref/StoreUserData;", "getSharedPrefs", "()Lcom/uniden/rtach/data/sharedpref/StoreUserData;", "setSharedPrefs", "(Lcom/uniden/rtach/data/sharedpref/StoreUserData;)V", "onCreateViewHolder", "parent", "Landroid/view/ViewGroup;", "viewType", "", "getItemCount", "onBindViewHolder", "", "holder", "position", "ViewHolder", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class BandAlertAdapter extends RecyclerView.Adapter<ViewHolder> {
    private Context context;
    private boolean isR9;
    private ArrayList<AlertBandDataModel> list;
    private String mainDirection;
    private StoreUserData sharedPrefs;

    public final Context getContext() {
        return this.context;
    }

    public final ArrayList<AlertBandDataModel> getList() {
        return this.list;
    }

    public final String getMainDirection() {
        return this.mainDirection;
    }

    public final StoreUserData getSharedPrefs() {
        return this.sharedPrefs;
    }

    /* JADX INFO: renamed from: isR9, reason: from getter */
    public final boolean getIsR9() {
        return this.isR9;
    }

    public final void setContext(Context context) {
        Intrinsics.checkNotNullParameter(context, "<set-?>");
        this.context = context;
    }

    public final void setList(ArrayList<AlertBandDataModel> arrayList) {
        Intrinsics.checkNotNullParameter(arrayList, "<set-?>");
        this.list = arrayList;
    }

    public final void setMainDirection(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.mainDirection = str;
    }

    public final void setR9(boolean z) {
        this.isR9 = z;
    }

    public final void setSharedPrefs(StoreUserData storeUserData) {
        Intrinsics.checkNotNullParameter(storeUserData, "<set-?>");
        this.sharedPrefs = storeUserData;
    }

    public BandAlertAdapter(Context context, ArrayList<AlertBandDataModel> list, String mainDirection, boolean z) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(list, "list");
        Intrinsics.checkNotNullParameter(mainDirection, "mainDirection");
        this.context = context;
        this.list = list;
        this.mainDirection = mainDirection;
        this.isR9 = z;
        SharedPreferences sharedPreferences = this.context.getSharedPreferences(StoreUserData.INSTANCE.getPrefName(this.context), 0);
        Intrinsics.checkNotNullExpressionValue(sharedPreferences, "getSharedPreferences(...)");
        this.sharedPrefs = new StoreUserData(sharedPreferences);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public ViewHolder onCreateViewHolder(ViewGroup parent, int viewType) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        ItemBandAlertBinding itemBandAlertBindingInflate = ItemBandAlertBinding.inflate(LayoutInflater.from(parent.getContext()), parent, false);
        Intrinsics.checkNotNullExpressionValue(itemBandAlertBindingInflate, "inflate(...)");
        return new ViewHolder(this, itemBandAlertBindingInflate);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public int getItemCount() {
        return this.list.size();
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public void onBindViewHolder(ViewHolder holder, int position) {
        Integer rSSIBarForR8;
        Intrinsics.checkNotNullParameter(holder, "holder");
        AlertBandDataModel alertBandDataModel = this.list.get(position);
        Intrinsics.checkNotNullExpressionValue(alertBandDataModel, "get(...)");
        AlertBandDataModel alertBandDataModel2 = alertBandDataModel;
        int bandColor = AlertDataConverter.INSTANCE.getBandColor(alertBandDataModel2.getAlert_type(), this.sharedPrefs, alertBandDataModel2.getRssi_level());
        String mute_type = alertBandDataModel2.getMute_type();
        boolean z = Intrinsics.areEqual(mute_type, ExifInterface.GPS_MEASUREMENT_3D) || Intrinsics.areEqual(mute_type, "4");
        int arrowColor = AlertDataConverter.INSTANCE.getArrowColor(alertBandDataModel2.getAlert_type(), this.sharedPrefs);
        holder.getBinding().textAlertType.setText(alertBandDataModel2.getAlert_type());
        if (z) {
            holder.getBinding().textAlertType.setTextColor(ContextCompat.getColor(this.context, C2074R.color.gray));
        } else {
            holder.getBinding().textAlertType.setTextColor(ContextCompat.getColor(this.context, bandColor));
        }
        Integer direction = AlertDataConverter.INSTANCE.getDirection(alertBandDataModel2.getDir_type(), arrowColor);
        if (direction != null) {
            direction.intValue();
            holder.getBinding().imgDirection.setImageResource(direction.intValue());
            if (z) {
                holder.getBinding().imgDirection.setColorFilter(ContextCompat.getColor(this.context, C2074R.color.gray));
            } else {
                holder.getBinding().imgDirection.setColorFilter(ContextCompat.getColor(this.context, arrowColor));
            }
        } else {
            holder.getBinding().imgDirection.setImageResource(0);
        }
        if (!StringsKt.contains((CharSequence) StringsKt.substringBefore$default(this.sharedPrefs.getDeviceName(), "@", (String) null, 2, (Object) null), (CharSequence) "R8", true)) {
            rSSIBarForR8 = AlertDataConverter.INSTANCE.getRSSIBar(alertBandDataModel2.getRssi_level(), alertBandDataModel2.getAlert_type(), z);
        } else {
            rSSIBarForR8 = AlertDataConverter.INSTANCE.getRSSIBarForR8(alertBandDataModel2.getRssi_level(), alertBandDataModel2.getAlert_type(), z);
        }
        if (rSSIBarForR8 != null) {
            rSSIBarForR8.intValue();
            holder.getBinding().imgBandRSSILevel.setImageResource(rSSIBarForR8.intValue());
        } else {
            holder.getBinding().imgBandRSSILevel.setImageResource(0);
        }
    }

    /* JADX INFO: compiled from: BandAlertAdapter.kt */
    @Metadata(m490d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0086\u0004\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u000e\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000bR\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007¨\u0006\f"}, m491d2 = {"Lcom/uniden/rtach/ui/adapter/BandAlertAdapter$ViewHolder;", "Landroidx/recyclerview/widget/RecyclerView$ViewHolder;", "binding", "Lcom/uniden/rtach/databinding/ItemBandAlertBinding;", "<init>", "(Lcom/uniden/rtach/ui/adapter/BandAlertAdapter;Lcom/uniden/rtach/databinding/ItemBandAlertBinding;)V", "getBinding", "()Lcom/uniden/rtach/databinding/ItemBandAlertBinding;", "bind", "", "item", "Lcom/uniden/rtach/data/model/AlertBandDataModel;", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    public final class ViewHolder extends RecyclerView.ViewHolder {
        private final ItemBandAlertBinding binding;
        final /* synthetic */ BandAlertAdapter this$0;

        public final void bind(AlertBandDataModel item) {
            Intrinsics.checkNotNullParameter(item, "item");
        }

        public final ItemBandAlertBinding getBinding() {
            return this.binding;
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public ViewHolder(BandAlertAdapter bandAlertAdapter, ItemBandAlertBinding binding) {
            super(binding.getRoot());
            Intrinsics.checkNotNullParameter(binding, "binding");
            this.this$0 = bandAlertAdapter;
            this.binding = binding;
        }
    }
}
