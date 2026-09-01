package com.uniden.rtach.p005ui.adapter;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.recyclerview.widget.RecyclerView;
import com.google.android.gms.common.internal.ServiceSpecificExtraArgs;
import com.uniden.rtach.data.model.BluetoothDeviceModel;
import com.uniden.rtach.databinding.ItemBleListBinding;
import com.uniden.rtach.helper.onBTDeviceClick;
import java.util.ArrayList;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* JADX INFO: compiled from: BLeSearchDeviceAdapter.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000@\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0011\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0007\u0018\u00002\f\u0012\b\u0012\u00060\u0002R\u00020\u00000\u0001:\u0001'B/\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u0012\u0016\u0010\u0005\u001a\u0012\u0012\u0004\u0012\u00020\u00070\bj\b\u0012\u0004\u0012\u00020\u0007`\u0006\u0012\u0006\u0010\t\u001a\u00020\n¢\u0006\u0004\b\u000b\u0010\fJ\u001c\u0010\u001a\u001a\u00060\u0002R\u00020\u00002\u0006\u0010\u001b\u001a\u00020\u001c2\u0006\u0010\u001d\u001a\u00020\u001eH\u0016J\b\u0010\u001f\u001a\u00020\u001eH\u0016J\u001c\u0010 \u001a\u00020!2\n\u0010\"\u001a\u00060\u0002R\u00020\u00002\u0006\u0010#\u001a\u00020\u001eH\u0016J\u000e\u0010$\u001a\u00020!2\u0006\u0010%\u001a\u00020\u0007J\u0006\u0010&\u001a\u00020!R\u001a\u0010\u0003\u001a\u00020\u0004X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\r\u0010\u000e\"\u0004\b\u000f\u0010\u0010R,\u0010\u0005\u001a\u0012\u0012\u0004\u0012\u00020\u00070\bj\b\u0012\u0004\u0012\u00020\u0007`\u0006X\u0086\u000e¢\u0006\u0010\n\u0002\u0010\u0015\u001a\u0004\b\u0011\u0010\u0012\"\u0004\b\u0013\u0010\u0014R\u001a\u0010\t\u001a\u00020\nX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0016\u0010\u0017\"\u0004\b\u0018\u0010\u0019¨\u0006("}, m491d2 = {"Lcom/uniden/rtach/ui/adapter/BLeSearchDeviceAdapter;", "Landroidx/recyclerview/widget/RecyclerView$Adapter;", "Lcom/uniden/rtach/ui/adapter/BLeSearchDeviceAdapter$ViewHolder;", "context", "Landroid/content/Context;", "list", "Lkotlin/collections/ArrayList;", "Lcom/uniden/rtach/data/model/BluetoothDeviceModel;", "Ljava/util/ArrayList;", ServiceSpecificExtraArgs.CastExtraArgs.LISTENER, "Lcom/uniden/rtach/helper/onBTDeviceClick;", "<init>", "(Landroid/content/Context;Ljava/util/ArrayList;Lcom/uniden/rtach/helper/onBTDeviceClick;)V", "getContext", "()Landroid/content/Context;", "setContext", "(Landroid/content/Context;)V", "getList", "()Ljava/util/ArrayList;", "setList", "(Ljava/util/ArrayList;)V", "Ljava/util/ArrayList;", "getListener", "()Lcom/uniden/rtach/helper/onBTDeviceClick;", "setListener", "(Lcom/uniden/rtach/helper/onBTDeviceClick;)V", "onCreateViewHolder", "parent", "Landroid/view/ViewGroup;", "viewType", "", "getItemCount", "onBindViewHolder", "", "holder", "position", "updateData", "device", "clearData", "ViewHolder", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class BLeSearchDeviceAdapter extends RecyclerView.Adapter<ViewHolder> {
    private Context context;
    private ArrayList<BluetoothDeviceModel> list;
    private onBTDeviceClick listener;

    public final Context getContext() {
        return this.context;
    }

    public final ArrayList<BluetoothDeviceModel> getList() {
        return this.list;
    }

    public final onBTDeviceClick getListener() {
        return this.listener;
    }

    public final void setContext(Context context) {
        Intrinsics.checkNotNullParameter(context, "<set-?>");
        this.context = context;
    }

    public final void setList(ArrayList<BluetoothDeviceModel> arrayList) {
        Intrinsics.checkNotNullParameter(arrayList, "<set-?>");
        this.list = arrayList;
    }

    public final void setListener(onBTDeviceClick onbtdeviceclick) {
        Intrinsics.checkNotNullParameter(onbtdeviceclick, "<set-?>");
        this.listener = onbtdeviceclick;
    }

    public BLeSearchDeviceAdapter(Context context, ArrayList<BluetoothDeviceModel> list, onBTDeviceClick listener) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(list, "list");
        Intrinsics.checkNotNullParameter(listener, "listener");
        this.context = context;
        this.list = list;
        this.listener = listener;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public ViewHolder onCreateViewHolder(ViewGroup parent, int viewType) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        ItemBleListBinding itemBleListBindingInflate = ItemBleListBinding.inflate(LayoutInflater.from(parent.getContext()), parent, false);
        Intrinsics.checkNotNullExpressionValue(itemBleListBindingInflate, "inflate(...)");
        return new ViewHolder(this, itemBleListBindingInflate);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public int getItemCount() {
        ArrayList<BluetoothDeviceModel> arrayList = this.list;
        Intrinsics.checkNotNull(arrayList);
        return arrayList.size();
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public void onBindViewHolder(ViewHolder holder, int position) {
        Intrinsics.checkNotNullParameter(holder, "holder");
        ArrayList<BluetoothDeviceModel> arrayList = this.list;
        Intrinsics.checkNotNull(arrayList);
        BluetoothDeviceModel bluetoothDeviceModel = arrayList.get(position);
        Intrinsics.checkNotNullExpressionValue(bluetoothDeviceModel, "get(...)");
        holder.bind(bluetoothDeviceModel);
    }

    public final void updateData(BluetoothDeviceModel device) {
        Intrinsics.checkNotNullParameter(device, "device");
        String string = this.list.toString();
        Intrinsics.checkNotNullExpressionValue(string, "toString(...)");
        if (!StringsKt.contains$default((CharSequence) string, (CharSequence) device.getName(), false, 2, (Object) null)) {
            this.list.add(device);
        }
        notifyDataSetChanged();
    }

    public final void clearData() {
        this.list.clear();
        this.list = new ArrayList<>();
        notifyDataSetChanged();
    }

    /* JADX INFO: compiled from: BLeSearchDeviceAdapter.kt */
    @Metadata(m490d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0086\u0004\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u000e\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\tR\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\n"}, m491d2 = {"Lcom/uniden/rtach/ui/adapter/BLeSearchDeviceAdapter$ViewHolder;", "Landroidx/recyclerview/widget/RecyclerView$ViewHolder;", "binding", "Lcom/uniden/rtach/databinding/ItemBleListBinding;", "<init>", "(Lcom/uniden/rtach/ui/adapter/BLeSearchDeviceAdapter;Lcom/uniden/rtach/databinding/ItemBleListBinding;)V", "bind", "", "item", "Lcom/uniden/rtach/data/model/BluetoothDeviceModel;", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    public final class ViewHolder extends RecyclerView.ViewHolder {
        private final ItemBleListBinding binding;
        final /* synthetic */ BLeSearchDeviceAdapter this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public ViewHolder(BLeSearchDeviceAdapter bLeSearchDeviceAdapter, ItemBleListBinding binding) {
            super(binding.getRoot());
            Intrinsics.checkNotNullParameter(binding, "binding");
            this.this$0 = bLeSearchDeviceAdapter;
            this.binding = binding;
        }

        public final void bind(final BluetoothDeviceModel item) {
            Intrinsics.checkNotNullParameter(item, "item");
            ItemBleListBinding itemBleListBinding = this.binding;
            final BLeSearchDeviceAdapter bLeSearchDeviceAdapter = this.this$0;
            itemBleListBinding.setItemChapter(item);
            this.binding.getRoot().setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.adapter.BLeSearchDeviceAdapter$ViewHolder$$ExternalSyntheticLambda0
                @Override // android.view.View.OnClickListener
                public final void onClick(View view) {
                    BLeSearchDeviceAdapter.ViewHolder.bind$lambda$1$lambda$0(bLeSearchDeviceAdapter, item, this, view);
                }
            });
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final void bind$lambda$1$lambda$0(BLeSearchDeviceAdapter this$0, BluetoothDeviceModel item, ViewHolder this$1, View view) {
            Intrinsics.checkNotNullParameter(this$0, "this$0");
            Intrinsics.checkNotNullParameter(item, "$item");
            Intrinsics.checkNotNullParameter(this$1, "this$1");
            onBTDeviceClick listener = this$0.getListener();
            TextView btnConnect = this$1.binding.btnConnect;
            Intrinsics.checkNotNullExpressionValue(btnConnect, "btnConnect");
            listener.onBTDeviceClick(item, btnConnect);
        }
    }
}
