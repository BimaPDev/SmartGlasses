package com.uniden.rtach.databinding;

import android.util.SparseIntArray;
import android.view.View;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import android.widget.TextView;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.databinding.DataBindingComponent;
import androidx.databinding.ViewDataBinding;
import androidx.drawerlayout.widget.DrawerLayout;
import androidx.lifecycle.LifecycleOwner;
import androidx.lifecycle.LiveData;
import androidx.lifecycle.MutableLiveData;
import androidx.recyclerview.widget.RecyclerView;
import com.google.android.material.navigation.NavigationView;
import com.uniden.rtach.C2074R;
import com.uniden.rtach.helper.MyTab;
import com.uniden.rtach.viewmodel.DashboardViewModel;
import okhttp3.internal.http2.Http2Stream;
import okhttp3.internal.p009ws.RealWebSocket;

/* JADX INFO: loaded from: classes2.dex */
public class ActivityDashboardBindingImpl extends ActivityDashboardBinding {
    private static final ViewDataBinding.IncludedLayouts sIncludes;
    private static final SparseIntArray sViewsWithIds;
    private long mDirtyFlags;
    private final FrameLayout mboundView0;

    static {
        ViewDataBinding.IncludedLayouts includedLayouts = new ViewDataBinding.IncludedLayouts(13);
        sIncludes = includedLayouts;
        includedLayouts.setIncludes(1, new String[]{"app_bar_dashboard"}, new int[]{4}, new int[]{C2074R.layout.app_bar_dashboard});
        SparseIntArray sparseIntArray = new SparseIntArray();
        sViewsWithIds = sparseIntArray;
        sparseIntArray.put(C2074R.id.drawer_layout, 5);
        sparseIntArray.put(C2074R.id.myFragmentFrame, 6);
        sparseIntArray.put(C2074R.id.nav_view, 7);
        sparseIntArray.put(C2074R.id.img_back, 8);
        sparseIntArray.put(C2074R.id.txtMenu, 9);
        sparseIntArray.put(C2074R.id.ll_device_name, 10);
        sparseIntArray.put(C2074R.id.btn_disconnect, 11);
        sparseIntArray.put(C2074R.id.recyclerviewDrawerMenu, 12);
    }

    public ActivityDashboardBindingImpl(DataBindingComponent dataBindingComponent, View view) {
        this(dataBindingComponent, view, mapBindings(dataBindingComponent, view, 13, sIncludes, sViewsWithIds));
    }

    private ActivityDashboardBindingImpl(DataBindingComponent dataBindingComponent, View view, Object[] objArr) {
        super(dataBindingComponent, view, 30, (AppBarDashboardBinding) objArr[4], (TextView) objArr[11], (DrawerLayout) objArr[5], (ImageView) objArr[8], (ConstraintLayout) objArr[10], (FrameLayout) objArr[6], (NavigationView) objArr[7], (RecyclerView) objArr[12], (RelativeLayout) objArr[1], (TextView) objArr[3], (TextView) objArr[2], (TextView) objArr[9]);
        this.mDirtyFlags = -1L;
        setContainedBinding(this.appBarDashboard);
        FrameLayout frameLayout = (FrameLayout) objArr[0];
        this.mboundView0 = frameLayout;
        frameLayout.setTag(null);
        this.rl2.setTag(null);
        this.textView2.setTag(null);
        this.txtBleName.setTag(null);
        setRootTag(view);
        invalidateAll();
    }

    @Override // androidx.databinding.ViewDataBinding
    public void invalidateAll() {
        synchronized (this) {
            this.mDirtyFlags = 2147483648L;
        }
        this.appBarDashboard.invalidateAll();
        requestRebind();
    }

    @Override // androidx.databinding.ViewDataBinding
    public boolean hasPendingBindings() {
        synchronized (this) {
            if (this.mDirtyFlags != 0) {
                return true;
            }
            return this.appBarDashboard.hasPendingBindings();
        }
    }

    @Override // androidx.databinding.ViewDataBinding
    public boolean setVariable(int i, Object obj) {
        if (34 != i) {
            return false;
        }
        setViewModel((DashboardViewModel) obj);
        return true;
    }

    @Override // com.uniden.rtach.databinding.ActivityDashboardBinding
    public void setViewModel(DashboardViewModel dashboardViewModel) {
        this.mViewModel = dashboardViewModel;
        synchronized (this) {
            this.mDirtyFlags |= 1073741824;
        }
        notifyPropertyChanged(34);
        super.requestRebind();
    }

    @Override // androidx.databinding.ViewDataBinding
    public void setLifecycleOwner(LifecycleOwner lifecycleOwner) {
        super.setLifecycleOwner(lifecycleOwner);
        this.appBarDashboard.setLifecycleOwner(lifecycleOwner);
    }

    @Override // androidx.databinding.ViewDataBinding
    protected boolean onFieldChange(int i, Object obj, int i2) {
        switch (i) {
            case 0:
                return onChangeViewModelGpsIconVisibility((MutableLiveData) obj, i2);
            case 1:
                return onChangeViewModelIsLaserTpAlertEnable((MutableLiveData) obj, i2);
            case 2:
                return onChangeViewModelConnectedDevice((LiveData) obj, i2);
            case 3:
                return onChangeViewModelIsJammingIconEnable((MutableLiveData) obj, i2);
            case 4:
                return onChangeViewModelIsReceiveBtnVisible((MutableLiveData) obj, i2);
            case 5:
                return onChangeViewModelIsKBlockMute((MutableLiveData) obj, i2);
            case 6:
                return onChangeViewModelLabelMuteMem((MutableLiveData) obj, i2);
            case 7:
                return onChangeViewModelUpdateDirection((MutableLiveData) obj, i2);
            case 8:
                return onChangeViewModelIsReceiveOnlyClickable((MutableLiveData) obj, i2);
            case 9:
                return onChangeViewModelIsMute((MutableLiveData) obj, i2);
            case 10:
                return onChangeViewModelIsMuteClickable((MutableLiveData) obj, i2);
            case 11:
                return onChangeViewModelIsMuteMemClickable((MutableLiveData) obj, i2);
            case 12:
                return onChangeViewModelDeleteRedLightVisibility((MutableLiveData) obj, i2);
            case 13:
                return onChangeViewModelGpsConnected((MutableLiveData) obj, i2);
            case 14:
                return onChangeViewModelAppVersion((LiveData) obj, i2);
            case 15:
                return onChangeViewModelIsMuteEnable((MutableLiveData) obj, i2);
            case 16:
                return onChangeViewModelReceiveModeBtnText((MutableLiveData) obj, i2);
            case 17:
                return onChangeViewModelBtConnected((MutableLiveData) obj, i2);
            case 18:
                return onChangeViewModelDirectionVisibility((MutableLiveData) obj, i2);
            case 19:
                return onChangeViewModelBandAlertVisibility((MutableLiveData) obj, i2);
            case 20:
                return onChangeViewModelIsWorkReceiveModeFunction((MutableLiveData) obj, i2);
            case 21:
                return onChangeViewModelIsMuteStatusEnable((MutableLiveData) obj, i2);
            case 22:
                return onChangeViewModelSelectedTab((MutableLiveData) obj, i2);
            case 23:
                return onChangeViewModelAddUserMarkVisibility((MutableLiveData) obj, i2);
            case 24:
                return onChangeViewModelIsGrayOut((MutableLiveData) obj, i2);
            case 25:
                return onChangeViewModelIsR9Device((MutableLiveData) obj, i2);
            case 26:
                return onChangeViewModelOnGpsClick((MutableLiveData) obj, i2);
            case 27:
                return onChangeViewModelLaserTpMode((MutableLiveData) obj, i2);
            case 28:
                return onChangeViewModelDeleteUserMarkVisibility((MutableLiveData) obj, i2);
            case 29:
                return onChangeAppBarDashboard((AppBarDashboardBinding) obj, i2);
            default:
                return false;
        }
    }

    private boolean onChangeViewModelGpsIconVisibility(MutableLiveData<Boolean> mutableLiveData, int i) {
        if (i != 0) {
            return false;
        }
        synchronized (this) {
            this.mDirtyFlags |= 1;
        }
        return true;
    }

    private boolean onChangeViewModelIsLaserTpAlertEnable(MutableLiveData<Boolean> mutableLiveData, int i) {
        if (i != 0) {
            return false;
        }
        synchronized (this) {
            this.mDirtyFlags |= 2;
        }
        return true;
    }

    private boolean onChangeViewModelConnectedDevice(LiveData<String> liveData, int i) {
        if (i != 0) {
            return false;
        }
        synchronized (this) {
            this.mDirtyFlags |= 4;
        }
        return true;
    }

    private boolean onChangeViewModelIsJammingIconEnable(MutableLiveData<Boolean> mutableLiveData, int i) {
        if (i != 0) {
            return false;
        }
        synchronized (this) {
            this.mDirtyFlags |= 8;
        }
        return true;
    }

    private boolean onChangeViewModelIsReceiveBtnVisible(MutableLiveData<Boolean> mutableLiveData, int i) {
        if (i != 0) {
            return false;
        }
        synchronized (this) {
            this.mDirtyFlags |= 16;
        }
        return true;
    }

    private boolean onChangeViewModelIsKBlockMute(MutableLiveData<Boolean> mutableLiveData, int i) {
        if (i != 0) {
            return false;
        }
        synchronized (this) {
            this.mDirtyFlags |= 32;
        }
        return true;
    }

    private boolean onChangeViewModelLabelMuteMem(MutableLiveData<Boolean> mutableLiveData, int i) {
        if (i != 0) {
            return false;
        }
        synchronized (this) {
            this.mDirtyFlags |= 64;
        }
        return true;
    }

    private boolean onChangeViewModelUpdateDirection(MutableLiveData<String> mutableLiveData, int i) {
        if (i != 0) {
            return false;
        }
        synchronized (this) {
            this.mDirtyFlags |= 128;
        }
        return true;
    }

    private boolean onChangeViewModelIsReceiveOnlyClickable(MutableLiveData<Boolean> mutableLiveData, int i) {
        if (i != 0) {
            return false;
        }
        synchronized (this) {
            this.mDirtyFlags |= 256;
        }
        return true;
    }

    private boolean onChangeViewModelIsMute(MutableLiveData<Boolean> mutableLiveData, int i) {
        if (i != 0) {
            return false;
        }
        synchronized (this) {
            this.mDirtyFlags |= 512;
        }
        return true;
    }

    private boolean onChangeViewModelIsMuteClickable(MutableLiveData<Boolean> mutableLiveData, int i) {
        if (i != 0) {
            return false;
        }
        synchronized (this) {
            this.mDirtyFlags |= RealWebSocket.DEFAULT_MINIMUM_DEFLATE_SIZE;
        }
        return true;
    }

    private boolean onChangeViewModelIsMuteMemClickable(MutableLiveData<Boolean> mutableLiveData, int i) {
        if (i != 0) {
            return false;
        }
        synchronized (this) {
            this.mDirtyFlags |= 2048;
        }
        return true;
    }

    private boolean onChangeViewModelDeleteRedLightVisibility(MutableLiveData<Boolean> mutableLiveData, int i) {
        if (i != 0) {
            return false;
        }
        synchronized (this) {
            this.mDirtyFlags |= 4096;
        }
        return true;
    }

    private boolean onChangeViewModelGpsConnected(MutableLiveData<Integer> mutableLiveData, int i) {
        if (i != 0) {
            return false;
        }
        synchronized (this) {
            this.mDirtyFlags |= 8192;
        }
        return true;
    }

    private boolean onChangeViewModelAppVersion(LiveData<String> liveData, int i) {
        if (i != 0) {
            return false;
        }
        synchronized (this) {
            this.mDirtyFlags |= Http2Stream.EMIT_BUFFER_SIZE;
        }
        return true;
    }

    private boolean onChangeViewModelIsMuteEnable(MutableLiveData<Boolean> mutableLiveData, int i) {
        if (i != 0) {
            return false;
        }
        synchronized (this) {
            this.mDirtyFlags |= 32768;
        }
        return true;
    }

    private boolean onChangeViewModelReceiveModeBtnText(MutableLiveData<String> mutableLiveData, int i) {
        if (i != 0) {
            return false;
        }
        synchronized (this) {
            this.mDirtyFlags |= 65536;
        }
        return true;
    }

    private boolean onChangeViewModelBtConnected(MutableLiveData<Integer> mutableLiveData, int i) {
        if (i != 0) {
            return false;
        }
        synchronized (this) {
            this.mDirtyFlags |= 131072;
        }
        return true;
    }

    private boolean onChangeViewModelDirectionVisibility(MutableLiveData<Boolean> mutableLiveData, int i) {
        if (i != 0) {
            return false;
        }
        synchronized (this) {
            this.mDirtyFlags |= 262144;
        }
        return true;
    }

    private boolean onChangeViewModelBandAlertVisibility(MutableLiveData<Boolean> mutableLiveData, int i) {
        if (i != 0) {
            return false;
        }
        synchronized (this) {
            this.mDirtyFlags |= 524288;
        }
        return true;
    }

    private boolean onChangeViewModelIsWorkReceiveModeFunction(MutableLiveData<Boolean> mutableLiveData, int i) {
        if (i != 0) {
            return false;
        }
        synchronized (this) {
            this.mDirtyFlags |= 1048576;
        }
        return true;
    }

    private boolean onChangeViewModelIsMuteStatusEnable(MutableLiveData<Boolean> mutableLiveData, int i) {
        if (i != 0) {
            return false;
        }
        synchronized (this) {
            this.mDirtyFlags |= 2097152;
        }
        return true;
    }

    private boolean onChangeViewModelSelectedTab(MutableLiveData<MyTab> mutableLiveData, int i) {
        if (i != 0) {
            return false;
        }
        synchronized (this) {
            this.mDirtyFlags |= 4194304;
        }
        return true;
    }

    private boolean onChangeViewModelAddUserMarkVisibility(MutableLiveData<Boolean> mutableLiveData, int i) {
        if (i != 0) {
            return false;
        }
        synchronized (this) {
            this.mDirtyFlags |= 8388608;
        }
        return true;
    }

    private boolean onChangeViewModelIsGrayOut(MutableLiveData<Boolean> mutableLiveData, int i) {
        if (i != 0) {
            return false;
        }
        synchronized (this) {
            this.mDirtyFlags |= 16777216;
        }
        return true;
    }

    private boolean onChangeViewModelIsR9Device(MutableLiveData<Boolean> mutableLiveData, int i) {
        if (i != 0) {
            return false;
        }
        synchronized (this) {
            this.mDirtyFlags |= 33554432;
        }
        return true;
    }

    private boolean onChangeViewModelOnGpsClick(MutableLiveData<Boolean> mutableLiveData, int i) {
        if (i != 0) {
            return false;
        }
        synchronized (this) {
            this.mDirtyFlags |= 67108864;
        }
        return true;
    }

    private boolean onChangeViewModelLaserTpMode(MutableLiveData<String> mutableLiveData, int i) {
        if (i != 0) {
            return false;
        }
        synchronized (this) {
            this.mDirtyFlags |= 134217728;
        }
        return true;
    }

    private boolean onChangeViewModelDeleteUserMarkVisibility(MutableLiveData<Boolean> mutableLiveData, int i) {
        if (i != 0) {
            return false;
        }
        synchronized (this) {
            this.mDirtyFlags |= 268435456;
        }
        return true;
    }

    private boolean onChangeAppBarDashboard(AppBarDashboardBinding appBarDashboardBinding, int i) {
        if (i != 0) {
            return false;
        }
        synchronized (this) {
            this.mDirtyFlags |= 536870912;
        }
        return true;
    }

    /* JADX WARN: Code duplicated, block: B:106:0x01c3  */
    /* JADX WARN: Code duplicated, block: B:139:0x0250 A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:140:0x0252  */
    /* JADX WARN: Code duplicated, block: B:141:0x0259  */
    /* JADX WARN: Code duplicated, block: B:144:0x0264  */
    /* JADX WARN: Code duplicated, block: B:145:0x026b  */
    /* JADX WARN: Code duplicated, block: B:147:0x027f  */
    /* JADX WARN: Code duplicated, block: B:150:0x0292 A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:151:0x0294  */
    /* JADX WARN: Code duplicated, block: B:152:0x0299  */
    /* JADX WARN: Code duplicated, block: B:155:0x02a2  */
    /* JADX WARN: Code duplicated, block: B:156:0x02a9  */
    /* JADX WARN: Code duplicated, block: B:159:0x02b8 A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:160:0x02ba  */
    /* JADX WARN: Code duplicated, block: B:161:0x02c1  */
    /* JADX WARN: Code duplicated, block: B:164:0x02cc  */
    /* JADX WARN: Code duplicated, block: B:165:0x02d3  */
    /* JADX WARN: Code duplicated, block: B:169:0x02df A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:16:0x0084  */
    /* JADX WARN: Code duplicated, block: B:170:0x02e1  */
    /* JADX WARN: Code duplicated, block: B:171:0x02e8  */
    /* JADX WARN: Code duplicated, block: B:174:0x02f3  */
    /* JADX WARN: Code duplicated, block: B:175:0x02fa  */
    /* JADX WARN: Code duplicated, block: B:179:0x0306 A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:180:0x0308  */
    /* JADX WARN: Code duplicated, block: B:181:0x030f  */
    /* JADX WARN: Code duplicated, block: B:184:0x031a  */
    /* JADX WARN: Code duplicated, block: B:185:0x0321  */
    /* JADX WARN: Code duplicated, block: B:189:0x032d A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:190:0x032f  */
    /* JADX WARN: Code duplicated, block: B:191:0x0336  */
    /* JADX WARN: Code duplicated, block: B:194:0x0341  */
    /* JADX WARN: Code duplicated, block: B:195:0x0348  */
    /* JADX WARN: Code duplicated, block: B:199:0x0359 A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:200:0x035b  */
    /* JADX WARN: Code duplicated, block: B:201:0x0362  */
    /* JADX WARN: Code duplicated, block: B:204:0x036d  */
    /* JADX WARN: Code duplicated, block: B:205:0x0374  */
    /* JADX WARN: Code duplicated, block: B:209:0x0385 A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:210:0x0387  */
    /* JADX WARN: Code duplicated, block: B:211:0x038e  */
    /* JADX WARN: Code duplicated, block: B:214:0x0399  */
    /* JADX WARN: Code duplicated, block: B:215:0x03a0  */
    /* JADX WARN: Code duplicated, block: B:219:0x03ac A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:220:0x03ae  */
    /* JADX WARN: Code duplicated, block: B:221:0x03b5  */
    /* JADX WARN: Code duplicated, block: B:224:0x03c0  */
    /* JADX WARN: Code duplicated, block: B:225:0x03c7  */
    /* JADX WARN: Code duplicated, block: B:229:0x03d3 A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:230:0x03d5  */
    /* JADX WARN: Code duplicated, block: B:231:0x03dc  */
    /* JADX WARN: Code duplicated, block: B:234:0x03e7  */
    /* JADX WARN: Code duplicated, block: B:235:0x03ee  */
    /* JADX WARN: Code duplicated, block: B:239:0x03ff A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:240:0x0401  */
    /* JADX WARN: Code duplicated, block: B:241:0x0408  */
    /* JADX WARN: Code duplicated, block: B:244:0x0413  */
    /* JADX WARN: Code duplicated, block: B:245:0x041a  */
    /* JADX WARN: Code duplicated, block: B:249:0x042b A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:250:0x042d  */
    /* JADX WARN: Code duplicated, block: B:251:0x0434  */
    /* JADX WARN: Code duplicated, block: B:254:0x043f  */
    /* JADX WARN: Code duplicated, block: B:255:0x0446  */
    /* JADX WARN: Code duplicated, block: B:259:0x0457 A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:25:0x00a2  */
    /* JADX WARN: Code duplicated, block: B:260:0x0459  */
    /* JADX WARN: Code duplicated, block: B:261:0x0460  */
    /* JADX WARN: Code duplicated, block: B:264:0x046b  */
    /* JADX WARN: Code duplicated, block: B:265:0x0472  */
    /* JADX WARN: Code duplicated, block: B:269:0x0483 A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:270:0x0485  */
    /* JADX WARN: Code duplicated, block: B:271:0x048c  */
    /* JADX WARN: Code duplicated, block: B:274:0x0497  */
    /* JADX WARN: Code duplicated, block: B:275:0x049e  */
    /* JADX WARN: Code duplicated, block: B:279:0x04aa A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:280:0x04ac  */
    /* JADX WARN: Code duplicated, block: B:281:0x04b1  */
    /* JADX WARN: Code duplicated, block: B:284:0x04ba  */
    /* JADX WARN: Code duplicated, block: B:34:0x00c0  */
    /* JADX WARN: Code duplicated, block: B:43:0x00de  */
    /* JADX WARN: Code duplicated, block: B:52:0x00fc  */
    /* JADX WARN: Code duplicated, block: B:61:0x011a  */
    /* JADX WARN: Code duplicated, block: B:70:0x0138  */
    /* JADX WARN: Code duplicated, block: B:79:0x0156  */
    /* JADX WARN: Code duplicated, block: B:88:0x0177  */
    /* JADX WARN: Code duplicated, block: B:97:0x019d  */
    /*  JADX ERROR: JadxOverflowException in pass: RegionMakerVisitor
        jadx.core.utils.exceptions.JadxOverflowException: Regions count limit reached at block B:244:0x0413
        	at jadx.core.utils.ErrorsCounter.addError(ErrorsCounter.java:59)
        	at jadx.core.utils.ErrorsCounter.error(ErrorsCounter.java:31)
        	at jadx.core.dex.attributes.nodes.NotificationAttrNode.addError(NotificationAttrNode.java:19)
        */
    @Override // androidx.databinding.ViewDataBinding
    protected void executeBindings() {
        /*
            Method dump skipped, instruction units count: 1746
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.uniden.rtach.databinding.ActivityDashboardBindingImpl.executeBindings():void");
    }
}
