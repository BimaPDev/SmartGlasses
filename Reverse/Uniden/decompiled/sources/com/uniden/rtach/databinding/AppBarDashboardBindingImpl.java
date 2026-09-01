package com.uniden.rtach.databinding;

import android.content.Context;
import android.content.res.Resources;
import android.graphics.drawable.Drawable;
import android.util.SparseIntArray;
import android.view.View;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import androidx.appcompat.content.res.AppCompatResources;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.databinding.DataBindingComponent;
import androidx.databinding.ViewDataBinding;
import androidx.databinding.adapters.ImageViewBindingAdapter;
import androidx.databinding.adapters.TextViewBindingAdapter;
import androidx.databinding.adapters.ViewBindingAdapter;
import androidx.lifecycle.MutableLiveData;
import androidx.recyclerview.widget.RecyclerView;
import com.google.common.primitives.Longs;
import com.uniden.rtach.C2074R;
import com.uniden.rtach.data.model.NavigationMenuModelKt;
import com.uniden.rtach.helper.MyTab;
import com.uniden.rtach.viewmodel.DashboardViewModel;
import kotlinx.coroutines.internal.LockFreeTaskQueueCore;
import okhttp3.internal.http2.Http2Stream;
import okhttp3.internal.p009ws.RealWebSocket;

/* JADX INFO: loaded from: classes2.dex */
public class AppBarDashboardBindingImpl extends AppBarDashboardBinding {
    private static final ViewDataBinding.IncludedLayouts sIncludes = null;
    private static final SparseIntArray sViewsWithIds;
    private long mDirtyFlags;
    private long mDirtyFlags_1;
    private final ConstraintLayout mboundView10;
    private final ImageView mboundView13;
    private final ImageView mboundView15;
    private final TextView mboundView16;
    private final LinearLayout mboundView17;
    private final TextView mboundView19;
    private final LinearLayout mboundView20;
    private final TextView mboundView23;

    static {
        SparseIntArray sparseIntArray = new SparseIntArray();
        sViewsWithIds = sparseIntArray;
        sparseIntArray.put(C2074R.id.my_app_bar, 28);
        sparseIntArray.put(C2074R.id.img_menu, 29);
        sparseIntArray.put(C2074R.id.txtAppBarTitle, 30);
        sparseIntArray.put(C2074R.id.updateWarning, 31);
        sparseIntArray.put(C2074R.id.linearLayout, 32);
        sparseIntArray.put(C2074R.id.con_blink, 33);
        sparseIntArray.put(C2074R.id.imgBandDirection, 34);
        sparseIntArray.put(C2074R.id.txtDetectedBand, 35);
        sparseIntArray.put(C2074R.id.textBandFrequency, 36);
        sparseIntArray.put(C2074R.id.imgBandRSSILevel, 37);
        sparseIntArray.put(C2074R.id.llCandidateAlert, 38);
        sparseIntArray.put(C2074R.id.recyclerViewBandItem, 39);
        sparseIntArray.put(C2074R.id.constraintPoiAlert, 40);
        sparseIntArray.put(C2074R.id.imgMarkerIcon, 41);
        sparseIntArray.put(C2074R.id.llAlertNameSpeed, 42);
        sparseIntArray.put(C2074R.id.txtMarkerType, 43);
        sparseIntArray.put(C2074R.id.txtDistance, 44);
        sparseIntArray.put(C2074R.id.txtLimitSpeed, 45);
        sparseIntArray.put(C2074R.id.linearLayout2, 46);
        sparseIntArray.put(C2074R.id.btnDeleteAlertMarker, 47);
        sparseIntArray.put(C2074R.id.btnAddUserMarker, 48);
        sparseIntArray.put(C2074R.id.btnDeleteUserMarker, 49);
    }

    public AppBarDashboardBindingImpl(DataBindingComponent dataBindingComponent, View view) {
        this(dataBindingComponent, view, mapBindings(dataBindingComponent, view, 50, sIncludes, sViewsWithIds));
    }

    private AppBarDashboardBindingImpl(DataBindingComponent dataBindingComponent, View view, Object[] objArr) {
        super(dataBindingComponent, view, 1, (ConstraintLayout) objArr[7], (ConstraintLayout) objArr[0], (TextView) objArr[48], (TextView) objArr[47], (TextView) objArr[49], (ConstraintLayout) objArr[8], (ConstraintLayout) objArr[9], (ConstraintLayout) objArr[33], (ConstraintLayout) objArr[5], (ConstraintLayout) objArr[40], (ImageView) objArr[34], (ImageView) objArr[37], (ImageView) objArr[1], (ImageView) objArr[2], (ImageView) objArr[27], (ImageView) objArr[41], (ImageView) objArr[29], (TextView) objArr[6], (TextView) objArr[11], (LinearLayout) objArr[32], (LinearLayout) objArr[46], (LinearLayout) objArr[24], (LinearLayout) objArr[25], (LinearLayout) objArr[42], (LinearLayout) objArr[38], (LinearLayout) objArr[26], (LinearLayout) objArr[21], (LinearLayout) objArr[14], (LinearLayout) objArr[22], (LinearLayout) objArr[18], (TextView) objArr[12], (ConstraintLayout) objArr[28], (RecyclerView) objArr[39], (TextView) objArr[36], (TextView) objArr[30], (TextView) objArr[3], (TextView) objArr[35], (TextView) objArr[44], (TextView) objArr[45], (TextView) objArr[4], (TextView) objArr[43], (ImageView) objArr[31]);
        this.mDirtyFlags = -1L;
        this.mDirtyFlags_1 = -1L;
        this.alertLayout.setTag(null);
        this.appBarButton.setTag(null);
        this.conAlert.setTag(null);
        this.conBandDetect.setTag(null);
        this.constraintLayoutNorthUpHeadingUp.setTag(null);
        this.imgBtStatus.setTag(null);
        this.imgGps.setTag(null);
        this.imgGpsIcon.setTag(null);
        this.imgNorthup.setTag(null);
        this.laserTpMode.setTag(null);
        this.llAddMapAlertMark.setTag(null);
        this.llAddMark.setTag(null);
        this.llDeleteUserMark.setTag(null);
        this.llKBlockMute.setTag(null);
        this.llMuteButton.setTag(null);
        this.llMuteMemory.setTag(null);
        this.llReceiveMode.setTag(null);
        ConstraintLayout constraintLayout = (ConstraintLayout) objArr[10];
        this.mboundView10 = constraintLayout;
        constraintLayout.setTag(null);
        ImageView imageView = (ImageView) objArr[13];
        this.mboundView13 = imageView;
        imageView.setTag(null);
        ImageView imageView2 = (ImageView) objArr[15];
        this.mboundView15 = imageView2;
        imageView2.setTag(null);
        TextView textView = (TextView) objArr[16];
        this.mboundView16 = textView;
        textView.setTag(null);
        LinearLayout linearLayout = (LinearLayout) objArr[17];
        this.mboundView17 = linearLayout;
        linearLayout.setTag(null);
        TextView textView2 = (TextView) objArr[19];
        this.mboundView19 = textView2;
        textView2.setTag(null);
        LinearLayout linearLayout2 = (LinearLayout) objArr[20];
        this.mboundView20 = linearLayout2;
        linearLayout2.setTag(null);
        TextView textView3 = (TextView) objArr[23];
        this.mboundView23 = textView3;
        textView3.setTag(null);
        this.muteStatus.setTag(null);
        this.txtDashboard.setTag(null);
        this.txtMap.setTag(null);
        setRootTag(view);
        invalidateAll();
    }

    @Override // androidx.databinding.ViewDataBinding
    public void invalidateAll() {
        synchronized (this) {
            this.mDirtyFlags = 1073741824L;
            this.mDirtyFlags_1 = 0L;
        }
        requestRebind();
    }

    @Override // androidx.databinding.ViewDataBinding
    public boolean hasPendingBindings() {
        synchronized (this) {
            if (this.mDirtyFlags == 0 && this.mDirtyFlags_1 == 0) {
                return false;
            }
            return true;
        }
    }

    @Override // androidx.databinding.ViewDataBinding
    public boolean setVariable(int i, Object obj) {
        if (28 == i) {
            setLaserTpMode((String) obj);
            return true;
        }
        if (29 == i) {
            setOnGpsClick((Boolean) obj);
            return true;
        }
        if (11 == i) {
            setIsKBlockMute((Boolean) obj);
            return true;
        }
        if (20 == i) {
            setIsReceiveOnlyClickable((Boolean) obj);
            return true;
        }
        if (33 == i) {
            setUpdateDirection((String) obj);
            return true;
        }
        if (12 == i) {
            setIsLaserTpAlertEnable((Boolean) obj);
            return true;
        }
        if (14 == i) {
            setIsMuteClickable((Boolean) obj);
            return true;
        }
        if (18 == i) {
            setIsR9Device((Boolean) obj);
            return true;
        }
        if (6 == i) {
            setDirectionVisibility((Boolean) obj);
            return true;
        }
        if (8 == i) {
            setGpsIconVisibility((Boolean) obj);
            return true;
        }
        if (16 == i) {
            setIsMuteMemClickable((Boolean) obj);
            return true;
        }
        if (21 == i) {
            setIsWorkReceiveModeFunction((Boolean) obj);
            return true;
        }
        if (7 == i) {
            setGpsConnected((Integer) obj);
            return true;
        }
        if (9 == i) {
            setIsGrayOut((Boolean) obj);
            return true;
        }
        if (27 == i) {
            setLabelMuteMem((Boolean) obj);
            return true;
        }
        if (31 == i) {
            setSelectedTab((MyTab) obj);
            return true;
        }
        if (13 == i) {
            setIsMute((Boolean) obj);
            return true;
        }
        if (3 == i) {
            setBtConnected((Integer) obj);
            return true;
        }
        if (30 == i) {
            setReceiveModeBtnText((String) obj);
            return true;
        }
        if (15 == i) {
            setIsMuteEnable((Boolean) obj);
            return true;
        }
        if (19 == i) {
            setIsReceiveBtnVisible((Boolean) obj);
            return true;
        }
        if (10 == i) {
            setIsJammingIconEnable((Boolean) obj);
            return true;
        }
        if (4 == i) {
            setDeleteRedLightVisibility((Boolean) obj);
            return true;
        }
        if (32 == i) {
            setTab((MyTab) obj);
            return true;
        }
        if (5 == i) {
            setDeleteUserMarkVisibility((Boolean) obj);
            return true;
        }
        if (2 == i) {
            setBandAlertVisibility((Boolean) obj);
            return true;
        }
        if (17 == i) {
            setIsMuteStatusEnable((Boolean) obj);
            return true;
        }
        if (1 == i) {
            setAddUserMarkVisibility((Boolean) obj);
            return true;
        }
        if (34 != i) {
            return false;
        }
        setViewModel((DashboardViewModel) obj);
        return true;
    }

    @Override // com.uniden.rtach.databinding.AppBarDashboardBinding
    public void setLaserTpMode(String str) {
        this.mLaserTpMode = str;
        synchronized (this) {
            this.mDirtyFlags |= 2;
        }
        notifyPropertyChanged(28);
        super.requestRebind();
    }

    @Override // com.uniden.rtach.databinding.AppBarDashboardBinding
    public void setOnGpsClick(Boolean bool) {
        this.mOnGpsClick = bool;
    }

    @Override // com.uniden.rtach.databinding.AppBarDashboardBinding
    public void setIsKBlockMute(Boolean bool) {
        this.mIsKBlockMute = bool;
        synchronized (this) {
            this.mDirtyFlags |= 8;
        }
        notifyPropertyChanged(11);
        super.requestRebind();
    }

    @Override // com.uniden.rtach.databinding.AppBarDashboardBinding
    public void setIsReceiveOnlyClickable(Boolean bool) {
        this.mIsReceiveOnlyClickable = bool;
        synchronized (this) {
            this.mDirtyFlags |= 16;
        }
        notifyPropertyChanged(20);
        super.requestRebind();
    }

    @Override // com.uniden.rtach.databinding.AppBarDashboardBinding
    public void setUpdateDirection(String str) {
        this.mUpdateDirection = str;
        synchronized (this) {
            this.mDirtyFlags |= 32;
        }
        notifyPropertyChanged(33);
        super.requestRebind();
    }

    @Override // com.uniden.rtach.databinding.AppBarDashboardBinding
    public void setIsLaserTpAlertEnable(Boolean bool) {
        this.mIsLaserTpAlertEnable = bool;
        synchronized (this) {
            this.mDirtyFlags |= 64;
        }
        notifyPropertyChanged(12);
        super.requestRebind();
    }

    @Override // com.uniden.rtach.databinding.AppBarDashboardBinding
    public void setIsMuteClickable(Boolean bool) {
        this.mIsMuteClickable = bool;
        synchronized (this) {
            this.mDirtyFlags |= 128;
        }
        notifyPropertyChanged(14);
        super.requestRebind();
    }

    @Override // com.uniden.rtach.databinding.AppBarDashboardBinding
    public void setIsR9Device(Boolean bool) {
        this.mIsR9Device = bool;
    }

    @Override // com.uniden.rtach.databinding.AppBarDashboardBinding
    public void setDirectionVisibility(Boolean bool) {
        this.mDirectionVisibility = bool;
        synchronized (this) {
            this.mDirtyFlags |= 512;
        }
        notifyPropertyChanged(6);
        super.requestRebind();
    }

    @Override // com.uniden.rtach.databinding.AppBarDashboardBinding
    public void setGpsIconVisibility(Boolean bool) {
        this.mGpsIconVisibility = bool;
        synchronized (this) {
            this.mDirtyFlags |= RealWebSocket.DEFAULT_MINIMUM_DEFLATE_SIZE;
        }
        notifyPropertyChanged(8);
        super.requestRebind();
    }

    @Override // com.uniden.rtach.databinding.AppBarDashboardBinding
    public void setIsMuteMemClickable(Boolean bool) {
        this.mIsMuteMemClickable = bool;
        synchronized (this) {
            this.mDirtyFlags |= 2048;
        }
        notifyPropertyChanged(16);
        super.requestRebind();
    }

    @Override // com.uniden.rtach.databinding.AppBarDashboardBinding
    public void setIsWorkReceiveModeFunction(Boolean bool) {
        this.mIsWorkReceiveModeFunction = bool;
        synchronized (this) {
            this.mDirtyFlags |= 4096;
        }
        notifyPropertyChanged(21);
        super.requestRebind();
    }

    @Override // com.uniden.rtach.databinding.AppBarDashboardBinding
    public void setGpsConnected(Integer num) {
        this.mGpsConnected = num;
        synchronized (this) {
            this.mDirtyFlags |= 8192;
        }
        notifyPropertyChanged(7);
        super.requestRebind();
    }

    @Override // com.uniden.rtach.databinding.AppBarDashboardBinding
    public void setIsGrayOut(Boolean bool) {
        this.mIsGrayOut = bool;
        synchronized (this) {
            this.mDirtyFlags |= Http2Stream.EMIT_BUFFER_SIZE;
        }
        notifyPropertyChanged(9);
        super.requestRebind();
    }

    @Override // com.uniden.rtach.databinding.AppBarDashboardBinding
    public void setLabelMuteMem(Boolean bool) {
        this.mLabelMuteMem = bool;
        synchronized (this) {
            this.mDirtyFlags |= 32768;
        }
        notifyPropertyChanged(27);
        super.requestRebind();
    }

    @Override // com.uniden.rtach.databinding.AppBarDashboardBinding
    public void setSelectedTab(MyTab myTab) {
        this.mSelectedTab = myTab;
        synchronized (this) {
            this.mDirtyFlags |= 65536;
        }
        notifyPropertyChanged(31);
        super.requestRebind();
    }

    @Override // com.uniden.rtach.databinding.AppBarDashboardBinding
    public void setIsMute(Boolean bool) {
        this.mIsMute = bool;
        synchronized (this) {
            this.mDirtyFlags |= 131072;
        }
        notifyPropertyChanged(13);
        super.requestRebind();
    }

    @Override // com.uniden.rtach.databinding.AppBarDashboardBinding
    public void setBtConnected(Integer num) {
        this.mBtConnected = num;
        synchronized (this) {
            this.mDirtyFlags |= 262144;
        }
        notifyPropertyChanged(3);
        super.requestRebind();
    }

    @Override // com.uniden.rtach.databinding.AppBarDashboardBinding
    public void setReceiveModeBtnText(String str) {
        this.mReceiveModeBtnText = str;
        synchronized (this) {
            this.mDirtyFlags |= 524288;
        }
        notifyPropertyChanged(30);
        super.requestRebind();
    }

    @Override // com.uniden.rtach.databinding.AppBarDashboardBinding
    public void setIsMuteEnable(Boolean bool) {
        this.mIsMuteEnable = bool;
        synchronized (this) {
            this.mDirtyFlags |= 1048576;
        }
        notifyPropertyChanged(15);
        super.requestRebind();
    }

    @Override // com.uniden.rtach.databinding.AppBarDashboardBinding
    public void setIsReceiveBtnVisible(Boolean bool) {
        this.mIsReceiveBtnVisible = bool;
        synchronized (this) {
            this.mDirtyFlags |= 2097152;
        }
        notifyPropertyChanged(19);
        super.requestRebind();
    }

    @Override // com.uniden.rtach.databinding.AppBarDashboardBinding
    public void setIsJammingIconEnable(Boolean bool) {
        this.mIsJammingIconEnable = bool;
        synchronized (this) {
            this.mDirtyFlags |= 4194304;
        }
        notifyPropertyChanged(10);
        super.requestRebind();
    }

    @Override // com.uniden.rtach.databinding.AppBarDashboardBinding
    public void setDeleteRedLightVisibility(Boolean bool) {
        this.mDeleteRedLightVisibility = bool;
        synchronized (this) {
            this.mDirtyFlags |= 8388608;
        }
        notifyPropertyChanged(4);
        super.requestRebind();
    }

    @Override // com.uniden.rtach.databinding.AppBarDashboardBinding
    public void setTab(MyTab myTab) {
        this.mTab = myTab;
    }

    @Override // com.uniden.rtach.databinding.AppBarDashboardBinding
    public void setDeleteUserMarkVisibility(Boolean bool) {
        this.mDeleteUserMarkVisibility = bool;
        synchronized (this) {
            this.mDirtyFlags |= 33554432;
        }
        notifyPropertyChanged(5);
        super.requestRebind();
    }

    @Override // com.uniden.rtach.databinding.AppBarDashboardBinding
    public void setBandAlertVisibility(Boolean bool) {
        this.mBandAlertVisibility = bool;
        synchronized (this) {
            this.mDirtyFlags |= 67108864;
        }
        notifyPropertyChanged(2);
        super.requestRebind();
    }

    @Override // com.uniden.rtach.databinding.AppBarDashboardBinding
    public void setIsMuteStatusEnable(Boolean bool) {
        this.mIsMuteStatusEnable = bool;
        synchronized (this) {
            this.mDirtyFlags |= 134217728;
        }
        notifyPropertyChanged(17);
        super.requestRebind();
    }

    @Override // com.uniden.rtach.databinding.AppBarDashboardBinding
    public void setAddUserMarkVisibility(Boolean bool) {
        this.mAddUserMarkVisibility = bool;
        synchronized (this) {
            this.mDirtyFlags |= 268435456;
        }
        notifyPropertyChanged(1);
        super.requestRebind();
    }

    @Override // com.uniden.rtach.databinding.AppBarDashboardBinding
    public void setViewModel(DashboardViewModel dashboardViewModel) {
        this.mViewModel = dashboardViewModel;
        synchronized (this) {
            this.mDirtyFlags |= 536870912;
        }
        notifyPropertyChanged(34);
        super.requestRebind();
    }

    @Override // androidx.databinding.ViewDataBinding
    protected boolean onFieldChange(int i, Object obj, int i2) {
        if (i != 0) {
            return false;
        }
        return onChangeViewModelBtConnected((MutableLiveData) obj, i2);
    }

    private boolean onChangeViewModelBtConnected(MutableLiveData<Integer> mutableLiveData, int i) {
        if (i != 0) {
            return false;
        }
        synchronized (this) {
            this.mDirtyFlags |= 1;
        }
        return true;
    }

    /* JADX WARN: Code duplicated, block: B:346:0x05d7 A[PHI: r2
      0x05d7: PHI (r2v15 long) = (r2v14 long), (r2v20 long) binds: [B:334:0x05b7, B:343:0x05d1] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Code duplicated, block: B:365:0x060c  */
    /* JADX WARN: Code duplicated, block: B:71:0x016e A[PHI: r2
      0x016e: PHI (r2v3 long) = (r2v2 long), (r2v69 long) binds: [B:58:0x014c, B:68:0x0168] A[DONT_GENERATE, DONT_INLINE]] */
    @Override // androidx.databinding.ViewDataBinding
    protected void executeBindings() {
        long j;
        long j2;
        Drawable drawable;
        boolean z;
        long j3;
        Drawable drawable2;
        boolean zSafeUnbox;
        int i;
        boolean zSafeUnbox2;
        int i2;
        boolean zSafeUnbox3;
        Drawable drawable3;
        boolean z2;
        Drawable drawable4;
        Drawable drawable5;
        int i3;
        Drawable drawable6;
        long j4;
        boolean z3;
        Drawable drawable7;
        String string;
        MyTab myTab;
        Drawable drawable8;
        long j5;
        int i4;
        int colorFromResource;
        Drawable drawable9;
        Drawable drawable10;
        String str;
        Drawable drawable11;
        boolean z4;
        int i5;
        int i6;
        int i7;
        int i8;
        boolean zSafeUnbox4;
        int i9;
        boolean zSafeUnbox5;
        int i10;
        boolean zSafeUnbox6;
        int iSafeUnbox;
        int i11;
        int i12;
        int i13;
        int i14;
        MutableLiveData<Integer> btConnected;
        int i15;
        Resources resources;
        int i16;
        long j6;
        Context context;
        int i17;
        long j7;
        Context context2;
        int i18;
        long j8;
        Context context3;
        int i19;
        long j9;
        synchronized (this) {
            j = this.mDirtyFlags;
            this.mDirtyFlags = 0L;
            j2 = this.mDirtyFlags_1;
            this.mDirtyFlags_1 = 0L;
        }
        String str2 = this.mLaserTpMode;
        Boolean bool = this.mIsKBlockMute;
        Boolean bool2 = this.mIsReceiveOnlyClickable;
        String str3 = this.mUpdateDirection;
        Boolean bool3 = this.mIsLaserTpAlertEnable;
        Boolean bool4 = this.mIsMuteClickable;
        Boolean bool5 = this.mDirectionVisibility;
        Boolean bool6 = this.mGpsIconVisibility;
        Boolean bool7 = this.mIsMuteMemClickable;
        Boolean bool8 = this.mIsWorkReceiveModeFunction;
        Integer num = this.mGpsConnected;
        Boolean bool9 = this.mIsGrayOut;
        Boolean bool10 = this.mLabelMuteMem;
        MyTab myTab2 = this.mSelectedTab;
        Boolean bool11 = this.mIsMute;
        Integer num2 = this.mBtConnected;
        String str4 = this.mReceiveModeBtnText;
        Boolean bool12 = this.mIsMuteEnable;
        Boolean bool13 = this.mIsReceiveBtnVisible;
        Boolean bool14 = this.mIsJammingIconEnable;
        Boolean bool15 = this.mDeleteRedLightVisibility;
        Boolean bool16 = this.mDeleteUserMarkVisibility;
        Boolean bool17 = this.mBandAlertVisibility;
        Boolean bool18 = this.mIsMuteStatusEnable;
        Boolean bool19 = this.mAddUserMarkVisibility;
        DashboardViewModel dashboardViewModel = this.mViewModel;
        long j10 = j & 1073741832;
        if (j10 != 0) {
            boolean zSafeUnbox7 = ViewDataBinding.safeUnbox(bool);
            if (j10 != 0) {
                if (zSafeUnbox7) {
                    j |= 70368744177664L;
                    j9 = 268435456;
                } else {
                    j |= 35184372088832L;
                    j9 = 134217728;
                }
                j2 |= j9;
            }
            boolean z5 = !zSafeUnbox7;
            if (zSafeUnbox7) {
                context3 = this.llKBlockMute.getContext();
                i19 = C2074R.drawable.bg_mute_disable;
            } else {
                context3 = this.llKBlockMute.getContext();
                i19 = C2074R.drawable.bg_mute_enabled;
            }
            drawable = AppCompatResources.getDrawable(context3, i19);
            z = z5;
        } else {
            drawable = null;
            z = false;
        }
        long j11 = j & 1073741840;
        if (j11 != 0) {
            zSafeUnbox = ViewDataBinding.safeUnbox(bool2);
            if (j11 != 0) {
                if (zSafeUnbox) {
                    j |= LockFreeTaskQueueCore.FROZEN_MASK;
                    j8 = Http2Stream.EMIT_BUFFER_SIZE;
                } else {
                    j |= 576460752303423488L;
                    j8 = 8192;
                }
                j2 |= j8;
            }
            long j12 = j;
            long j13 = j2;
            drawable2 = AppCompatResources.getDrawable(this.llReceiveMode.getContext(), zSafeUnbox ? C2074R.drawable.bg_band_alert_mute : C2074R.drawable.bg_mute_disable);
            j = j12;
            j3 = j13;
        } else {
            j3 = j2;
            drawable2 = null;
            zSafeUnbox = false;
        }
        long j14 = j & 1207959616;
        if (j14 != 0) {
            zSafeUnbox2 = ViewDataBinding.safeUnbox(bool3);
            if (j14 != 0) {
                j3 = zSafeUnbox2 ? j3 | 65536 : j3 | 32768;
            }
            long j15 = j & 1073741888;
            if (j15 != 0) {
                j3 |= zSafeUnbox2 ? 4194304L : 2097152L;
            }
            i = (j15 == 0 || zSafeUnbox2) ? 0 : 8;
        } else {
            i = 0;
            zSafeUnbox2 = false;
        }
        boolean zSafeUnbox8 = (j & 1073741952) != 0 ? ViewDataBinding.safeUnbox(bool4) : false;
        long j16 = j & 1073742336;
        boolean z6 = zSafeUnbox;
        if (j16 == 0) {
            i2 = 0;
        } else {
            boolean z7 = ViewDataBinding.safeUnbox(bool5);
            if (j16 != 0) {
                j |= z7 ? 17592186044416L : 8796093022208L;
            }
            if (z7) {
                i2 = 0;
            } else {
                i2 = 8;
            }
        }
        long j17 = j & 1073808384;
        if (j17 != 0) {
            zSafeUnbox3 = ViewDataBinding.safeUnbox(bool6);
            if (j17 != 0) {
                j |= zSafeUnbox3 ? Longs.MAX_POWER_OF_TWO : LockFreeTaskQueueCore.CLOSED_MASK;
            }
        } else {
            zSafeUnbox3 = false;
        }
        long j18 = j & 1073743872;
        if (j18 != 0) {
            boolean zSafeUnbox9 = ViewDataBinding.safeUnbox(bool7);
            if (j18 != 0) {
                j3 |= zSafeUnbox9 ? 1048640L : 524320L;
            }
            if (zSafeUnbox9) {
                context2 = this.llMuteMemory.getContext();
                i18 = C2074R.drawable.bg_band_alert_mute;
            } else {
                context2 = this.llMuteMemory.getContext();
                i18 = C2074R.drawable.bg_mute_disable;
            }
            drawable3 = AppCompatResources.getDrawable(context2, i18);
            z2 = zSafeUnbox9;
        } else {
            drawable3 = null;
            z2 = false;
        }
        long j19 = j & 1073745920;
        if (j19 != 0) {
            boolean zSafeUnbox10 = ViewDataBinding.safeUnbox(bool8);
            if (j19 != 0) {
                j |= zSafeUnbox10 ? 90071992547409920L : 45035996273704960L;
            }
            long j20 = j;
            int colorFromResource2 = getColorFromResource(this.laserTpMode, zSafeUnbox10 ? C2074R.color.white : C2074R.color.mute_status);
            Drawable drawable12 = AppCompatResources.getDrawable(this.laserTpMode.getContext(), zSafeUnbox10 ? C2074R.drawable.bg_button_sound_white : C2074R.drawable.bg_button_sound);
            i3 = colorFromResource2;
            Drawable drawable13 = drawable2;
            drawable5 = drawable12;
            j = j20;
            drawable4 = drawable13;
        } else {
            drawable4 = drawable2;
            drawable5 = null;
            i3 = 0;
        }
        int iSafeUnbox2 = (j & 1073750016) != 0 ? ViewDataBinding.safeUnbox(num) : 0;
        long j21 = j & 1073758208;
        if (j21 != 0) {
            boolean zSafeUnbox11 = ViewDataBinding.safeUnbox(bool9);
            if (j21 != 0) {
                if (zSafeUnbox11) {
                    j |= 4503599627370496L;
                    j7 = 1073741824;
                } else {
                    j |= 2251799813685248L;
                    j7 = 536870912;
                }
                j3 |= j7;
            }
            long j22 = j;
            Drawable drawable14 = AppCompatResources.getDrawable(this.conAlert.getContext(), zSafeUnbox11 ? C2074R.drawable.bg_alert_gray : C2074R.drawable.bg_alert_main);
            if (zSafeUnbox11) {
                context = this.conBandDetect.getContext();
                i17 = C2074R.drawable.bg_alert_gray;
            } else {
                context = this.conBandDetect.getContext();
                i17 = C2074R.drawable.bg_alert;
            }
            drawable6 = AppCompatResources.getDrawable(context, i17);
            boolean z8 = z2;
            drawable7 = drawable14;
            j = j22;
            j4 = j3;
            z3 = z8;
        } else {
            drawable6 = null;
            j4 = j3;
            z3 = z2;
            drawable7 = null;
        }
        long j23 = j & 1073774592;
        if (j23 != 0) {
            boolean zSafeUnbox12 = ViewDataBinding.safeUnbox(bool10);
            if (j23 != 0) {
                j |= zSafeUnbox12 ? 4398046511104L : 2199023255552L;
            }
            long j24 = j;
            string = this.mboundView23.getResources().getString(zSafeUnbox12 ? C2074R.string.add : C2074R.string.delete);
            j = j24;
        } else {
            string = null;
        }
        long j25 = j & 1073807360;
        Drawable drawable15 = drawable3;
        if (j25 != 0) {
            myTab = myTab2;
            boolean z9 = myTab == MyTab.MAP;
            boolean z10 = myTab == MyTab.DASHBOARD;
            if (j25 != 0) {
                if (z9) {
                    j |= 288230376151711744L;
                    j4 |= 1;
                } else {
                    j |= -9079256848778919936L;
                }
            }
            if ((j & 1073807360) != 0) {
                if (z10) {
                    j |= 281474976710656L;
                    j6 = 67108864;
                } else {
                    j |= 140737488355328L;
                    j6 = 33554432;
                }
                j4 |= j6;
            }
            long j26 = j;
            colorFromResource = getColorFromResource(this.txtMap, z9 ? C2074R.color.white : C2074R.color.black);
            Drawable drawable16 = AppCompatResources.getDrawable(this.txtMap.getContext(), z9 ? C2074R.drawable.bg_map_selected : C2074R.drawable.bg_map_unselected);
            int colorFromResource3 = z10 ? getColorFromResource(this.txtDashboard, C2074R.color.white) : getColorFromResource(this.txtDashboard, C2074R.color.black);
            drawable8 = AppCompatResources.getDrawable(this.txtDashboard.getContext(), z10 ? C2074R.drawable.bg_dashboard_selected : C2074R.drawable.bg_dashboard_unselected);
            i4 = colorFromResource3;
            long j27 = j4;
            drawable9 = drawable16;
            j = j26;
            j5 = j27;
        } else {
            myTab = myTab2;
            drawable8 = null;
            j5 = j4;
            i4 = 0;
            colorFromResource = 0;
            drawable9 = null;
        }
        long j28 = j & 1073872896;
        if (j28 != 0) {
            boolean zSafeUnbox13 = ViewDataBinding.safeUnbox(bool11);
            if (j28 != 0) {
                j5 |= zSafeUnbox13 ? 16777220L : 8388610L;
            }
            if (zSafeUnbox13) {
                resources = this.mboundView16.getResources();
                i16 = C2074R.string.btn_mute;
            } else {
                resources = this.mboundView16.getResources();
                i16 = C2074R.string.not_muted;
            }
            String string2 = resources.getString(i16);
            drawable10 = zSafeUnbox13 ? AppCompatResources.getDrawable(this.mboundView15.getContext(), C2074R.drawable.ic_mute) : AppCompatResources.getDrawable(this.mboundView15.getContext(), C2074R.drawable.ic_un_mute);
            str = string2;
        } else {
            drawable8 = drawable8;
            drawable10 = null;
            str = null;
        }
        int iSafeUnbox3 = (j & 1074003968) != 0 ? ViewDataBinding.safeUnbox(num2) : 0;
        long j29 = j & 1074790400;
        if (j29 != 0) {
            boolean zSafeUnbox14 = ViewDataBinding.safeUnbox(bool12);
            if (j29 != 0) {
                j |= zSafeUnbox14 ? 68719476736L : 34359738368L;
            }
            long j30 = j;
            drawable11 = AppCompatResources.getDrawable(this.llMuteButton.getContext(), zSafeUnbox14 ? C2074R.drawable.bg_band_alert_mute : C2074R.drawable.bg_mute_disable);
            j = j30;
        } else {
            drawable11 = null;
        }
        long j31 = j & 1075838976;
        if (j31 != 0) {
            boolean zSafeUnbox15 = ViewDataBinding.safeUnbox(bool13);
            if (j31 != 0) {
                j5 |= zSafeUnbox15 ? 256L : 128L;
            }
            int i20 = zSafeUnbox15 ? 0 : 8;
            z4 = true;
            boolean z11 = !zSafeUnbox15;
            if (j31 != 0) {
                j5 |= z11 ? 4294967296L : 2147483648L;
            }
            i5 = z11 ? 0 : 8;
            i6 = i20;
        } else {
            z4 = true;
            i5 = 0;
            i6 = 0;
        }
        long j32 = j & 1077936128;
        if (j32 != 0) {
            boolean zSafeUnbox16 = ViewDataBinding.safeUnbox(bool14);
            if (j32 != 0) {
                j |= zSafeUnbox16 ? 1125899906842624L : 562949953421312L;
            }
            i7 = zSafeUnbox16 ? 0 : 8;
        } else {
            i7 = 0;
        }
        long j33 = j & 1082130432;
        if (j33 != 0) {
            boolean zSafeUnbox17 = ViewDataBinding.safeUnbox(bool15);
            if (j33 != 0) {
                j |= zSafeUnbox17 ? 1099511627776L : 549755813888L;
            }
            i8 = zSafeUnbox17 ? 0 : 8;
        } else {
            i8 = 0;
        }
        long j34 = j & 1107361792;
        if (j34 != 0) {
            zSafeUnbox4 = ViewDataBinding.safeUnbox(bool16);
            if (j34 != 0) {
                j |= zSafeUnbox4 ? 17179869184L : 8589934592L;
            }
        } else {
            zSafeUnbox4 = false;
        }
        long j35 = j & 1140850688;
        if (j35 != 0) {
            boolean zSafeUnbox18 = ViewDataBinding.safeUnbox(bool17);
            if (j35 != 0) {
                j5 |= zSafeUnbox18 ? 262144L : 131072L;
            }
            i9 = zSafeUnbox18 ? 0 : 8;
        } else {
            i9 = 0;
        }
        long j36 = j & 1207959552;
        if (j36 != 0) {
            zSafeUnbox5 = ViewDataBinding.safeUnbox(bool18);
            if (j36 != 0) {
                j5 |= zSafeUnbox5 ? 4096L : 2048L;
            }
            i10 = zSafeUnbox5 ? 0 : 8;
        } else {
            zSafeUnbox5 = false;
            i10 = 0;
        }
        long j37 = j & 1342242816;
        if (j37 != 0) {
            zSafeUnbox6 = ViewDataBinding.safeUnbox(bool19);
            if (j37 != 0) {
                j |= zSafeUnbox6 ? 274877906944L : 137438953472L;
            }
        } else {
            zSafeUnbox6 = false;
        }
        if ((j & 1610612737) != 0) {
            if (dashboardViewModel != null) {
                i15 = 0;
                btConnected = dashboardViewModel.getBtConnected();
            } else {
                btConnected = null;
                i15 = 0;
            }
            updateLiveDataRegistration(i15, btConnected);
            iSafeUnbox = ViewDataBinding.safeUnbox(btConnected != null ? btConnected.getValue() : null);
        } else {
            i = i;
            i8 = i8;
            iSafeUnbox = 0;
        }
        boolean z12 = ((j & 4611686310485164032L) == 0 || myTab != MyTab.MAP) ? false : z4;
        if ((j5 & 32768) != 0) {
            zSafeUnbox5 = ViewDataBinding.safeUnbox(bool18);
        }
        long j38 = j & 1107361792;
        if (j38 == 0) {
            i11 = 0;
        } else {
            boolean z13 = zSafeUnbox4 ? z12 : false;
            if (j38 != 0) {
                j |= z13 ? 4294967296L : 2147483648L;
            }
            if (z13) {
                i11 = 0;
            } else {
                i11 = 8;
            }
        }
        long j39 = j & 1342242816;
        if (j39 != 0) {
            i12 = zSafeUnbox6 ? z12 : false ? 0 : 8;
        } else {
            i12 = 0;
        }
        long j40 = j & 1073808384;
        if (j40 == 0) {
            i13 = 0;
        } else {
            if (!zSafeUnbox3) {
                z12 = false;
            }
            if (z12) {
                i13 = 0;
            } else {
                i13 = 8;
            }
        }
        long j41 = j & 1207959616;
        if (j41 != 0) {
            if (!zSafeUnbox2) {
                z4 = zSafeUnbox5;
            }
            i14 = z4 ? 0 : 8;
        } else {
            i14 = 0;
        }
        if ((j & 1140850688) != 0) {
            this.alertLayout.setVisibility(i9);
        }
        if ((j & 1073758208) != 0) {
            ViewBindingAdapter.setBackground(this.conAlert, drawable7);
            ViewBindingAdapter.setBackground(this.conBandDetect, drawable6);
        }
        if ((j & 1073742336) != 0) {
            this.constraintLayoutNorthUpHeadingUp.setVisibility(i2);
        }
        if ((j & 1074003968) != 0) {
            NavigationMenuModelKt.setImageViewResource(this.imgBtStatus, iSafeUnbox3);
        }
        if ((j & 1073750016) != 0) {
            NavigationMenuModelKt.setImageViewResource(this.imgGps, iSafeUnbox2);
        }
        if ((1610612737 & j) != 0) {
            this.imgGps.setVisibility(iSafeUnbox);
        }
        if (j40 != 0) {
            this.imgGpsIcon.setVisibility(i13);
        }
        if ((1073741856 & j) != 0) {
            TextViewBindingAdapter.setText(this.imgNorthup, str3);
        }
        if ((j & 1073745920) != 0) {
            ViewBindingAdapter.setBackground(this.laserTpMode, drawable5);
            this.laserTpMode.setTextColor(i3);
        }
        if ((1073741826 & j) != 0) {
            TextViewBindingAdapter.setText(this.laserTpMode, str2);
        }
        if ((j & 1073741888) != 0) {
            this.laserTpMode.setVisibility(i);
        }
        if ((1082130432 & j) != 0) {
            this.llAddMapAlertMark.setVisibility(i8);
        }
        if (j39 != 0) {
            this.llAddMark.setVisibility(i12);
        }
        if ((j & 1107361792) != 0) {
            this.llDeleteUserMark.setVisibility(i11);
        }
        if ((j & 1073741832) != 0) {
            ViewBindingAdapter.setBackground(this.llKBlockMute, drawable);
            this.llKBlockMute.setClickable(z);
        }
        if ((1074790400 & j) != 0) {
            ViewBindingAdapter.setBackground(this.llMuteButton, drawable11);
        }
        if ((j & 1073741952) != 0) {
            this.llMuteButton.setClickable(zSafeUnbox8);
        }
        if ((j & 1073743872) != 0) {
            ViewBindingAdapter.setBackground(this.llMuteMemory, drawable15);
            this.llMuteMemory.setClickable(z3);
        }
        if ((j & 1073741840) != 0) {
            ViewBindingAdapter.setBackground(this.llReceiveMode, drawable4);
            this.llReceiveMode.setClickable(z6);
        }
        if (j41 != 0) {
            this.mboundView10.setVisibility(i14);
        }
        if ((1077936128 & j) != 0) {
            this.mboundView13.setVisibility(i7);
        }
        if ((j & 1073872896) != 0) {
            ImageViewBindingAdapter.setImageDrawable(this.mboundView15, drawable10);
            TextViewBindingAdapter.setText(this.mboundView16, str);
        }
        if ((1075838976 & j) != 0) {
            this.mboundView17.setVisibility(i6);
            this.mboundView20.setVisibility(i5);
        }
        if ((1074266112 & j) != 0) {
            TextViewBindingAdapter.setText(this.mboundView19, str4);
        }
        if ((j & 1073774592) != 0) {
            TextViewBindingAdapter.setText(this.mboundView23, string);
        }
        if ((1207959552 & j) != 0) {
            this.muteStatus.setVisibility(i10);
        }
        if ((j & 1073807360) != 0) {
            ViewBindingAdapter.setBackground(this.txtDashboard, drawable8);
            this.txtDashboard.setTextColor(i4);
            ViewBindingAdapter.setBackground(this.txtMap, drawable9);
            this.txtMap.setTextColor(colorFromResource);
        }
    }
}
