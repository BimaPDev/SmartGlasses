package com.uniden.rtach.helper;

import android.widget.TextView;
import androidx.constraintlayout.widget.ConstraintLayout;
import com.uniden.rtach.data.model.BluetoothDeviceModel;
import kotlin.Metadata;

/* JADX INFO: compiled from: onBTDeviceClick.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000\u001c\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\bf\u0018\u00002\u00020\u0001J\u0018\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007H&¨\u0006\b"}, m491d2 = {"Lcom/uniden/rtach/helper/onBTDeviceClick;", "", "onBTDeviceClick", "", "device", "Lcom/uniden/rtach/data/model/BluetoothDeviceModel;", "btnConnect", "Landroid/widget/TextView;", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public interface onBTDeviceClick {
    void onBTDeviceClick(BluetoothDeviceModel device, TextView btnConnect);
}
