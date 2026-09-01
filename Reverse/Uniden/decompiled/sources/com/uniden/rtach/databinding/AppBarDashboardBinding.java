package com.uniden.rtach.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.databinding.Bindable;
import androidx.databinding.DataBindingUtil;
import androidx.databinding.ViewDataBinding;
import androidx.recyclerview.widget.RecyclerView;
import com.uniden.rtach.C2074R;
import com.uniden.rtach.helper.MyTab;
import com.uniden.rtach.viewmodel.DashboardViewModel;

/* JADX INFO: loaded from: classes2.dex */
public abstract class AppBarDashboardBinding extends ViewDataBinding {
    public final ConstraintLayout alertLayout;
    public final ConstraintLayout appBarButton;
    public final TextView btnAddUserMarker;
    public final TextView btnDeleteAlertMarker;
    public final TextView btnDeleteUserMarker;
    public final ConstraintLayout conAlert;
    public final ConstraintLayout conBandDetect;
    public final ConstraintLayout conBlink;
    public final ConstraintLayout constraintLayoutNorthUpHeadingUp;
    public final ConstraintLayout constraintPoiAlert;
    public final ImageView imgBandDirection;
    public final ImageView imgBandRSSILevel;
    public final ImageView imgBtStatus;
    public final ImageView imgGps;
    public final ImageView imgGpsIcon;
    public final ImageView imgMarkerIcon;
    public final ImageView imgMenu;
    public final TextView imgNorthup;
    public final TextView laserTpMode;
    public final LinearLayout linearLayout;
    public final LinearLayout linearLayout2;
    public final LinearLayout llAddMapAlertMark;
    public final LinearLayout llAddMark;
    public final LinearLayout llAlertNameSpeed;
    public final LinearLayout llCandidateAlert;
    public final LinearLayout llDeleteUserMark;
    public final LinearLayout llKBlockMute;
    public final LinearLayout llMuteButton;
    public final LinearLayout llMuteMemory;
    public final LinearLayout llReceiveMode;

    @Bindable
    protected Boolean mAddUserMarkVisibility;

    @Bindable
    protected Boolean mBandAlertVisibility;

    @Bindable
    protected Integer mBtConnected;

    @Bindable
    protected Boolean mDeleteRedLightVisibility;

    @Bindable
    protected Boolean mDeleteUserMarkVisibility;

    @Bindable
    protected Boolean mDirectionVisibility;

    @Bindable
    protected Integer mGpsConnected;

    @Bindable
    protected Boolean mGpsIconVisibility;

    @Bindable
    protected Boolean mIsGrayOut;

    @Bindable
    protected Boolean mIsJammingIconEnable;

    @Bindable
    protected Boolean mIsKBlockMute;

    @Bindable
    protected Boolean mIsLaserTpAlertEnable;

    @Bindable
    protected Boolean mIsMute;

    @Bindable
    protected Boolean mIsMuteClickable;

    @Bindable
    protected Boolean mIsMuteEnable;

    @Bindable
    protected Boolean mIsMuteMemClickable;

    @Bindable
    protected Boolean mIsMuteStatusEnable;

    @Bindable
    protected Boolean mIsR9Device;

    @Bindable
    protected Boolean mIsReceiveBtnVisible;

    @Bindable
    protected Boolean mIsReceiveOnlyClickable;

    @Bindable
    protected Boolean mIsWorkReceiveModeFunction;

    @Bindable
    protected Boolean mLabelMuteMem;

    @Bindable
    protected String mLaserTpMode;

    @Bindable
    protected Boolean mOnGpsClick;

    @Bindable
    protected String mReceiveModeBtnText;

    @Bindable
    protected MyTab mSelectedTab;

    @Bindable
    protected MyTab mTab;

    @Bindable
    protected String mUpdateDirection;

    @Bindable
    protected DashboardViewModel mViewModel;
    public final TextView muteStatus;
    public final ConstraintLayout myAppBar;
    public final RecyclerView recyclerViewBandItem;
    public final TextView textBandFrequency;
    public final TextView txtAppBarTitle;
    public final TextView txtDashboard;
    public final TextView txtDetectedBand;
    public final TextView txtDistance;
    public final TextView txtLimitSpeed;
    public final TextView txtMap;
    public final TextView txtMarkerType;
    public final ImageView updateWarning;

    public Boolean getAddUserMarkVisibility() {
        return this.mAddUserMarkVisibility;
    }

    public Boolean getBandAlertVisibility() {
        return this.mBandAlertVisibility;
    }

    public Integer getBtConnected() {
        return this.mBtConnected;
    }

    public Boolean getDeleteRedLightVisibility() {
        return this.mDeleteRedLightVisibility;
    }

    public Boolean getDeleteUserMarkVisibility() {
        return this.mDeleteUserMarkVisibility;
    }

    public Boolean getDirectionVisibility() {
        return this.mDirectionVisibility;
    }

    public Integer getGpsConnected() {
        return this.mGpsConnected;
    }

    public Boolean getGpsIconVisibility() {
        return this.mGpsIconVisibility;
    }

    public Boolean getIsGrayOut() {
        return this.mIsGrayOut;
    }

    public Boolean getIsJammingIconEnable() {
        return this.mIsJammingIconEnable;
    }

    public Boolean getIsKBlockMute() {
        return this.mIsKBlockMute;
    }

    public Boolean getIsLaserTpAlertEnable() {
        return this.mIsLaserTpAlertEnable;
    }

    public Boolean getIsMute() {
        return this.mIsMute;
    }

    public Boolean getIsMuteClickable() {
        return this.mIsMuteClickable;
    }

    public Boolean getIsMuteEnable() {
        return this.mIsMuteEnable;
    }

    public Boolean getIsMuteMemClickable() {
        return this.mIsMuteMemClickable;
    }

    public Boolean getIsMuteStatusEnable() {
        return this.mIsMuteStatusEnable;
    }

    public Boolean getIsR9Device() {
        return this.mIsR9Device;
    }

    public Boolean getIsReceiveBtnVisible() {
        return this.mIsReceiveBtnVisible;
    }

    public Boolean getIsReceiveOnlyClickable() {
        return this.mIsReceiveOnlyClickable;
    }

    public Boolean getIsWorkReceiveModeFunction() {
        return this.mIsWorkReceiveModeFunction;
    }

    public Boolean getLabelMuteMem() {
        return this.mLabelMuteMem;
    }

    public String getLaserTpMode() {
        return this.mLaserTpMode;
    }

    public Boolean getOnGpsClick() {
        return this.mOnGpsClick;
    }

    public String getReceiveModeBtnText() {
        return this.mReceiveModeBtnText;
    }

    public MyTab getSelectedTab() {
        return this.mSelectedTab;
    }

    public MyTab getTab() {
        return this.mTab;
    }

    public String getUpdateDirection() {
        return this.mUpdateDirection;
    }

    public DashboardViewModel getViewModel() {
        return this.mViewModel;
    }

    public abstract void setAddUserMarkVisibility(Boolean bool);

    public abstract void setBandAlertVisibility(Boolean bool);

    public abstract void setBtConnected(Integer num);

    public abstract void setDeleteRedLightVisibility(Boolean bool);

    public abstract void setDeleteUserMarkVisibility(Boolean bool);

    public abstract void setDirectionVisibility(Boolean bool);

    public abstract void setGpsConnected(Integer num);

    public abstract void setGpsIconVisibility(Boolean bool);

    public abstract void setIsGrayOut(Boolean bool);

    public abstract void setIsJammingIconEnable(Boolean bool);

    public abstract void setIsKBlockMute(Boolean bool);

    public abstract void setIsLaserTpAlertEnable(Boolean bool);

    public abstract void setIsMute(Boolean bool);

    public abstract void setIsMuteClickable(Boolean bool);

    public abstract void setIsMuteEnable(Boolean bool);

    public abstract void setIsMuteMemClickable(Boolean bool);

    public abstract void setIsMuteStatusEnable(Boolean bool);

    public abstract void setIsR9Device(Boolean bool);

    public abstract void setIsReceiveBtnVisible(Boolean bool);

    public abstract void setIsReceiveOnlyClickable(Boolean bool);

    public abstract void setIsWorkReceiveModeFunction(Boolean bool);

    public abstract void setLabelMuteMem(Boolean bool);

    public abstract void setLaserTpMode(String str);

    public abstract void setOnGpsClick(Boolean bool);

    public abstract void setReceiveModeBtnText(String str);

    public abstract void setSelectedTab(MyTab myTab);

    public abstract void setTab(MyTab myTab);

    public abstract void setUpdateDirection(String str);

    public abstract void setViewModel(DashboardViewModel dashboardViewModel);

    protected AppBarDashboardBinding(Object obj, View view, int i, ConstraintLayout constraintLayout, ConstraintLayout constraintLayout2, TextView textView, TextView textView2, TextView textView3, ConstraintLayout constraintLayout3, ConstraintLayout constraintLayout4, ConstraintLayout constraintLayout5, ConstraintLayout constraintLayout6, ConstraintLayout constraintLayout7, ImageView imageView, ImageView imageView2, ImageView imageView3, ImageView imageView4, ImageView imageView5, ImageView imageView6, ImageView imageView7, TextView textView4, TextView textView5, LinearLayout linearLayout, LinearLayout linearLayout2, LinearLayout linearLayout3, LinearLayout linearLayout4, LinearLayout linearLayout5, LinearLayout linearLayout6, LinearLayout linearLayout7, LinearLayout linearLayout8, LinearLayout linearLayout9, LinearLayout linearLayout10, LinearLayout linearLayout11, TextView textView6, ConstraintLayout constraintLayout8, RecyclerView recyclerView, TextView textView7, TextView textView8, TextView textView9, TextView textView10, TextView textView11, TextView textView12, TextView textView13, TextView textView14, ImageView imageView8) {
        super(obj, view, i);
        this.alertLayout = constraintLayout;
        this.appBarButton = constraintLayout2;
        this.btnAddUserMarker = textView;
        this.btnDeleteAlertMarker = textView2;
        this.btnDeleteUserMarker = textView3;
        this.conAlert = constraintLayout3;
        this.conBandDetect = constraintLayout4;
        this.conBlink = constraintLayout5;
        this.constraintLayoutNorthUpHeadingUp = constraintLayout6;
        this.constraintPoiAlert = constraintLayout7;
        this.imgBandDirection = imageView;
        this.imgBandRSSILevel = imageView2;
        this.imgBtStatus = imageView3;
        this.imgGps = imageView4;
        this.imgGpsIcon = imageView5;
        this.imgMarkerIcon = imageView6;
        this.imgMenu = imageView7;
        this.imgNorthup = textView4;
        this.laserTpMode = textView5;
        this.linearLayout = linearLayout;
        this.linearLayout2 = linearLayout2;
        this.llAddMapAlertMark = linearLayout3;
        this.llAddMark = linearLayout4;
        this.llAlertNameSpeed = linearLayout5;
        this.llCandidateAlert = linearLayout6;
        this.llDeleteUserMark = linearLayout7;
        this.llKBlockMute = linearLayout8;
        this.llMuteButton = linearLayout9;
        this.llMuteMemory = linearLayout10;
        this.llReceiveMode = linearLayout11;
        this.muteStatus = textView6;
        this.myAppBar = constraintLayout8;
        this.recyclerViewBandItem = recyclerView;
        this.textBandFrequency = textView7;
        this.txtAppBarTitle = textView8;
        this.txtDashboard = textView9;
        this.txtDetectedBand = textView10;
        this.txtDistance = textView11;
        this.txtLimitSpeed = textView12;
        this.txtMap = textView13;
        this.txtMarkerType = textView14;
        this.updateWarning = imageView8;
    }

    public static AppBarDashboardBinding inflate(LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z) {
        return inflate(layoutInflater, viewGroup, z, DataBindingUtil.getDefaultComponent());
    }

    @Deprecated
    public static AppBarDashboardBinding inflate(LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z, Object obj) {
        return (AppBarDashboardBinding) ViewDataBinding.inflateInternal(layoutInflater, C2074R.layout.app_bar_dashboard, viewGroup, z, obj);
    }

    public static AppBarDashboardBinding inflate(LayoutInflater layoutInflater) {
        return inflate(layoutInflater, DataBindingUtil.getDefaultComponent());
    }

    @Deprecated
    public static AppBarDashboardBinding inflate(LayoutInflater layoutInflater, Object obj) {
        return (AppBarDashboardBinding) ViewDataBinding.inflateInternal(layoutInflater, C2074R.layout.app_bar_dashboard, null, false, obj);
    }

    public static AppBarDashboardBinding bind(View view) {
        return bind(view, DataBindingUtil.getDefaultComponent());
    }

    @Deprecated
    public static AppBarDashboardBinding bind(View view, Object obj) {
        return (AppBarDashboardBinding) bind(obj, view, C2074R.layout.app_bar_dashboard);
    }
}
