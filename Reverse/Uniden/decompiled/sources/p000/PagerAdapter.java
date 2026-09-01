package p000;

import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentActivity;
import androidx.viewpager2.adapter.FragmentStateAdapter;
import java.util.ArrayList;
import java.util.List;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: PagerAdapter.kt */
/* JADX INFO: loaded from: classes.dex */
@Metadata(m490d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010!\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\u0018\u00002\u00020\u0001B\u001f\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¢\u0006\u0004\b\u0007\u0010\bJ\b\u0010\f\u001a\u00020\rH\u0016J\u0010\u0010\u000e\u001a\u00020\u00062\u0006\u0010\u000f\u001a\u00020\rH\u0016R\u0014\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005X\u0082\u000e¢\u0006\u0002\n\u0000R\u0014\u0010\t\u001a\b\u0012\u0004\u0012\u00020\u000b0\nX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0010"}, m491d2 = {"LPagerAdapter;", "Landroidx/viewpager2/adapter/FragmentStateAdapter;", "activity", "Landroidx/fragment/app/FragmentActivity;", "mFragmentList", "", "Landroidx/fragment/app/Fragment;", "<init>", "(Landroidx/fragment/app/FragmentActivity;Ljava/util/List;)V", "mFragmentTitleList", "", "", "getItemCount", "", "createFragment", "position", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class PagerAdapter extends FragmentStateAdapter {
    private List<? extends Fragment> mFragmentList;
    private final List<String> mFragmentTitleList;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public PagerAdapter(FragmentActivity fragmentActivity, List<? extends Fragment> mFragmentList) {
        super(fragmentActivity);
        Intrinsics.checkNotNullParameter(mFragmentList, "mFragmentList");
        Intrinsics.checkNotNull(fragmentActivity);
        this.mFragmentList = mFragmentList;
        this.mFragmentTitleList = new ArrayList();
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public int getItemCount() {
        return this.mFragmentList.size();
    }

    @Override // androidx.viewpager2.adapter.FragmentStateAdapter
    public Fragment createFragment(int position) {
        return this.mFragmentList.get(position);
    }
}
