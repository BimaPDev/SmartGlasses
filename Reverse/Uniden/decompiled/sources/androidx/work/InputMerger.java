package androidx.work;

import androidx.constraintlayout.widget.ConstraintLayout;
import java.util.List;
import kotlin.Metadata;

/* JADX INFO: compiled from: InputMerger.kt */
/* JADX INFO: loaded from: classes.dex */
@Metadata(m490d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0000\b&\u0018\u00002\u00020\u0001B\u0005¢\u0006\u0002\u0010\u0002J\u0016\u0010\u0003\u001a\u00020\u00042\f\u0010\u0005\u001a\b\u0012\u0004\u0012\u00020\u00040\u0006H&¨\u0006\u0007"}, m491d2 = {"Landroidx/work/InputMerger;", "", "()V", "merge", "Landroidx/work/Data;", "inputs", "", "work-runtime_release"}, m492k = 1, m493mv = {1, 8, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public abstract class InputMerger {
    public abstract Data merge(List<Data> inputs);
}
