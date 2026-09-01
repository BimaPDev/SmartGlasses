package com.uniden.rtach.p005ui.adapter;

import android.content.Context;
import android.content.SharedPreferences;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.recyclerview.widget.RecyclerView;
import com.google.android.gms.common.internal.ServiceSpecificExtraArgs;
import com.uniden.rtach.C2074R;
import com.uniden.rtach.data.model.NavigationMenuModel;
import com.uniden.rtach.data.sharedpref.StoreUserData;
import com.uniden.rtach.databinding.ItemNavigationDrawerMenuBinding;
import com.uniden.rtach.helper.OnMenuItemClick;
import java.util.ArrayList;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.Metadata;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: NavigationDrawerAdapter.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000H\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0010\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0004\u0018\u00002\f\u0012\b\u0012\u00060\u0002R\u00020\u00000\u0001:\u0001*B3\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u0012\u001a\u0010\u0005\u001a\u0016\u0012\u0004\u0012\u00020\u0007\u0018\u00010\bj\n\u0012\u0004\u0012\u00020\u0007\u0018\u0001`\u0006\u0012\u0006\u0010\t\u001a\u00020\n¢\u0006\u0004\b\u000b\u0010\fJ\u001c\u0010 \u001a\u00060\u0002R\u00020\u00002\u0006\u0010!\u001a\u00020\"2\u0006\u0010#\u001a\u00020$H\u0016J\b\u0010%\u001a\u00020$H\u0016J\u001c\u0010&\u001a\u00020'2\n\u0010(\u001a\u00060\u0002R\u00020\u00002\u0006\u0010)\u001a\u00020$H\u0016R\u001a\u0010\u0003\u001a\u00020\u0004X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\r\u0010\u000e\"\u0004\b\u000f\u0010\u0010R0\u0010\u0005\u001a\u0016\u0012\u0004\u0012\u00020\u0007\u0018\u00010\bj\n\u0012\u0004\u0012\u00020\u0007\u0018\u0001`\u0006X\u0086\u000e¢\u0006\u0010\n\u0002\u0010\u0015\u001a\u0004\b\u0011\u0010\u0012\"\u0004\b\u0013\u0010\u0014R\u001a\u0010\t\u001a\u00020\nX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0016\u0010\u0017\"\u0004\b\u0018\u0010\u0019R\u001b\u0010\u001a\u001a\u00020\u001b8FX\u0086\u0084\u0002¢\u0006\f\n\u0004\b\u001e\u0010\u001f\u001a\u0004\b\u001c\u0010\u001d¨\u0006+"}, m491d2 = {"Lcom/uniden/rtach/ui/adapter/NavigationDrawerAdapter;", "Landroidx/recyclerview/widget/RecyclerView$Adapter;", "Lcom/uniden/rtach/ui/adapter/NavigationDrawerAdapter$ViewHolder;", "context", "Landroid/content/Context;", "list", "Lkotlin/collections/ArrayList;", "Lcom/uniden/rtach/data/model/NavigationMenuModel;", "Ljava/util/ArrayList;", ServiceSpecificExtraArgs.CastExtraArgs.LISTENER, "Lcom/uniden/rtach/helper/OnMenuItemClick;", "<init>", "(Landroid/content/Context;Ljava/util/ArrayList;Lcom/uniden/rtach/helper/OnMenuItemClick;)V", "getContext", "()Landroid/content/Context;", "setContext", "(Landroid/content/Context;)V", "getList", "()Ljava/util/ArrayList;", "setList", "(Ljava/util/ArrayList;)V", "Ljava/util/ArrayList;", "getListener", "()Lcom/uniden/rtach/helper/OnMenuItemClick;", "setListener", "(Lcom/uniden/rtach/helper/OnMenuItemClick;)V", "sharedPrefs", "Lcom/uniden/rtach/data/sharedpref/StoreUserData;", "getSharedPrefs", "()Lcom/uniden/rtach/data/sharedpref/StoreUserData;", "sharedPrefs$delegate", "Lkotlin/Lazy;", "onCreateViewHolder", "parent", "Landroid/view/ViewGroup;", "viewType", "", "getItemCount", "onBindViewHolder", "", "holder", "position", "ViewHolder", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class NavigationDrawerAdapter extends RecyclerView.Adapter<ViewHolder> {
    private Context context;
    private ArrayList<NavigationMenuModel> list;
    private OnMenuItemClick listener;

    /* JADX INFO: renamed from: sharedPrefs$delegate, reason: from kotlin metadata */
    private final Lazy sharedPrefs;

    public final Context getContext() {
        return this.context;
    }

    public final ArrayList<NavigationMenuModel> getList() {
        return this.list;
    }

    public final OnMenuItemClick getListener() {
        return this.listener;
    }

    public final void setContext(Context context) {
        Intrinsics.checkNotNullParameter(context, "<set-?>");
        this.context = context;
    }

    public final void setList(ArrayList<NavigationMenuModel> arrayList) {
        this.list = arrayList;
    }

    public final void setListener(OnMenuItemClick onMenuItemClick) {
        Intrinsics.checkNotNullParameter(onMenuItemClick, "<set-?>");
        this.listener = onMenuItemClick;
    }

    public NavigationDrawerAdapter(Context context, ArrayList<NavigationMenuModel> arrayList, OnMenuItemClick listener) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(listener, "listener");
        this.context = context;
        this.list = arrayList;
        this.listener = listener;
        this.sharedPrefs = LazyKt.lazy(new Function0() { // from class: com.uniden.rtach.ui.adapter.NavigationDrawerAdapter$$ExternalSyntheticLambda0
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return NavigationDrawerAdapter.sharedPrefs_delegate$lambda$0(this.f$0);
            }
        });
    }

    public final StoreUserData getSharedPrefs() {
        return (StoreUserData) this.sharedPrefs.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final StoreUserData sharedPrefs_delegate$lambda$0(NavigationDrawerAdapter this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        SharedPreferences sharedPreferences = this$0.context.getSharedPreferences(StoreUserData.INSTANCE.getPrefName(this$0.context), 0);
        Intrinsics.checkNotNullExpressionValue(sharedPreferences, "getSharedPreferences(...)");
        return new StoreUserData(sharedPreferences);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public ViewHolder onCreateViewHolder(ViewGroup parent, int viewType) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        ItemNavigationDrawerMenuBinding itemNavigationDrawerMenuBindingInflate = ItemNavigationDrawerMenuBinding.inflate(LayoutInflater.from(parent.getContext()), parent, false);
        Intrinsics.checkNotNullExpressionValue(itemNavigationDrawerMenuBindingInflate, "inflate(...)");
        return new ViewHolder(this, itemNavigationDrawerMenuBindingInflate);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public int getItemCount() {
        ArrayList<NavigationMenuModel> arrayList = this.list;
        Intrinsics.checkNotNull(arrayList);
        return arrayList.size();
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public void onBindViewHolder(ViewHolder holder, int position) {
        Intrinsics.checkNotNullParameter(holder, "holder");
        ArrayList<NavigationMenuModel> arrayList = this.list;
        Intrinsics.checkNotNull(arrayList);
        NavigationMenuModel navigationMenuModel = arrayList.get(position);
        Intrinsics.checkNotNullExpressionValue(navigationMenuModel, "get(...)");
        holder.bind(navigationMenuModel);
    }

    /* JADX INFO: compiled from: NavigationDrawerAdapter.kt */
    @Metadata(m490d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0086\u0004\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u000e\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\tR\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\n"}, m491d2 = {"Lcom/uniden/rtach/ui/adapter/NavigationDrawerAdapter$ViewHolder;", "Landroidx/recyclerview/widget/RecyclerView$ViewHolder;", "binding", "Lcom/uniden/rtach/databinding/ItemNavigationDrawerMenuBinding;", "<init>", "(Lcom/uniden/rtach/ui/adapter/NavigationDrawerAdapter;Lcom/uniden/rtach/databinding/ItemNavigationDrawerMenuBinding;)V", "bind", "", "item", "Lcom/uniden/rtach/data/model/NavigationMenuModel;", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    public final class ViewHolder extends RecyclerView.ViewHolder {
        private final ItemNavigationDrawerMenuBinding binding;
        final /* synthetic */ NavigationDrawerAdapter this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public ViewHolder(NavigationDrawerAdapter navigationDrawerAdapter, ItemNavigationDrawerMenuBinding binding) {
            super(binding.getRoot());
            Intrinsics.checkNotNullParameter(binding, "binding");
            this.this$0 = navigationDrawerAdapter;
            this.binding = binding;
        }

        public final void bind(final NavigationMenuModel item) {
            Intrinsics.checkNotNullParameter(item, "item");
            ItemNavigationDrawerMenuBinding itemNavigationDrawerMenuBinding = this.binding;
            final NavigationDrawerAdapter navigationDrawerAdapter = this.this$0;
            itemNavigationDrawerMenuBinding.setItemMenu(item);
            if (Intrinsics.areEqual(item.getTitle(), navigationDrawerAdapter.getContext().getResources().getString(C2074R.string.menu_firmware_updates)) && navigationDrawerAdapter.getSharedPrefs().isUpdateAvailable()) {
                this.binding.updateWarning.setVisibility(0);
            } else {
                this.binding.updateWarning.setVisibility(8);
            }
            this.binding.getRoot().setOnClickListener(new View.OnClickListener() { // from class: com.uniden.rtach.ui.adapter.NavigationDrawerAdapter$ViewHolder$$ExternalSyntheticLambda0
                @Override // android.view.View.OnClickListener
                public final void onClick(View view) {
                    NavigationDrawerAdapter.ViewHolder.bind$lambda$1$lambda$0(navigationDrawerAdapter, item, view);
                }
            });
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final void bind$lambda$1$lambda$0(NavigationDrawerAdapter this$0, NavigationMenuModel item, View view) {
            Intrinsics.checkNotNullParameter(this$0, "this$0");
            Intrinsics.checkNotNullParameter(item, "$item");
            this$0.getListener().onClick(item);
        }
    }
}
