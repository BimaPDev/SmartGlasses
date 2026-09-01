package com.uniden.rtach.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.CheckBox;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.RelativeLayout;
import android.widget.ScrollView;
import android.widget.TableLayout;
import android.widget.TextView;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.recyclerview.widget.RecyclerView;
import androidx.viewbinding.ViewBinding;
import androidx.viewbinding.ViewBindings;
import com.uniden.rtach.C2074R;

/* JADX INFO: loaded from: classes2.dex */
public final class ActivityFirmwareUpdateBinding implements ViewBinding {
    public final ConstraintLayout appBarButton;
    public final ImageView btnBack;
    public final TextView btnChangeSsid;
    public final CheckBox checkRecoveryMode;
    public final ConstraintLayout constraintCurrentVersion;
    public final ConstraintLayout constraintWifi;
    public final ImageView imgWife;
    public final LinearLayout llNoConnection;
    public final LinearLayout llUpdate;
    public final LinearLayout llWaitVersion;
    public final ScrollView mainLayout;
    private final RelativeLayout rootView;
    public final TableLayout tableHeadingLayout;
    public final RecyclerView tableRecyclerView;
    public final TextView title;
    public final TextView txtApDetail;
    public final TextView txtAppBarTitle;
    public final TextView txtConnectedWifi;
    public final TextView txtDbUpdate;
    public final TextView txtFirmwareUpdate;
    public final TextView txtFirmwareUpdateText;
    public final TextView txtFullUpdate;

    @Override // androidx.viewbinding.ViewBinding
    public RelativeLayout getRoot() {
        return this.rootView;
    }

    private ActivityFirmwareUpdateBinding(RelativeLayout relativeLayout, ConstraintLayout constraintLayout, ImageView imageView, TextView textView, CheckBox checkBox, ConstraintLayout constraintLayout2, ConstraintLayout constraintLayout3, ImageView imageView2, LinearLayout linearLayout, LinearLayout linearLayout2, LinearLayout linearLayout3, ScrollView scrollView, TableLayout tableLayout, RecyclerView recyclerView, TextView textView2, TextView textView3, TextView textView4, TextView textView5, TextView textView6, TextView textView7, TextView textView8, TextView textView9) {
        this.rootView = relativeLayout;
        this.appBarButton = constraintLayout;
        this.btnBack = imageView;
        this.btnChangeSsid = textView;
        this.checkRecoveryMode = checkBox;
        this.constraintCurrentVersion = constraintLayout2;
        this.constraintWifi = constraintLayout3;
        this.imgWife = imageView2;
        this.llNoConnection = linearLayout;
        this.llUpdate = linearLayout2;
        this.llWaitVersion = linearLayout3;
        this.mainLayout = scrollView;
        this.tableHeadingLayout = tableLayout;
        this.tableRecyclerView = recyclerView;
        this.title = textView2;
        this.txtApDetail = textView3;
        this.txtAppBarTitle = textView4;
        this.txtConnectedWifi = textView5;
        this.txtDbUpdate = textView6;
        this.txtFirmwareUpdate = textView7;
        this.txtFirmwareUpdateText = textView8;
        this.txtFullUpdate = textView9;
    }

    public static ActivityFirmwareUpdateBinding inflate(LayoutInflater layoutInflater) {
        return inflate(layoutInflater, null, false);
    }

    public static ActivityFirmwareUpdateBinding inflate(LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z) {
        View viewInflate = layoutInflater.inflate(C2074R.layout.activity_firmware_update, viewGroup, false);
        if (z) {
            viewGroup.addView(viewInflate);
        }
        return bind(viewInflate);
    }

    public static ActivityFirmwareUpdateBinding bind(View view) {
        int i = C2074R.id.appBarButton;
        ConstraintLayout constraintLayout = (ConstraintLayout) ViewBindings.findChildViewById(view, i);
        if (constraintLayout != null) {
            i = C2074R.id.btn_back;
            ImageView imageView = (ImageView) ViewBindings.findChildViewById(view, i);
            if (imageView != null) {
                i = C2074R.id.btn_change_ssid;
                TextView textView = (TextView) ViewBindings.findChildViewById(view, i);
                if (textView != null) {
                    i = C2074R.id.checkRecoveryMode;
                    CheckBox checkBox = (CheckBox) ViewBindings.findChildViewById(view, i);
                    if (checkBox != null) {
                        i = C2074R.id.constraint_currentVersion;
                        ConstraintLayout constraintLayout2 = (ConstraintLayout) ViewBindings.findChildViewById(view, i);
                        if (constraintLayout2 != null) {
                            i = C2074R.id.constraint_wifi;
                            ConstraintLayout constraintLayout3 = (ConstraintLayout) ViewBindings.findChildViewById(view, i);
                            if (constraintLayout3 != null) {
                                i = C2074R.id.imgWife;
                                ImageView imageView2 = (ImageView) ViewBindings.findChildViewById(view, i);
                                if (imageView2 != null) {
                                    i = C2074R.id.ll_no_connection;
                                    LinearLayout linearLayout = (LinearLayout) ViewBindings.findChildViewById(view, i);
                                    if (linearLayout != null) {
                                        i = C2074R.id.ll_update;
                                        LinearLayout linearLayout2 = (LinearLayout) ViewBindings.findChildViewById(view, i);
                                        if (linearLayout2 != null) {
                                            i = C2074R.id.ll_wait_version;
                                            LinearLayout linearLayout3 = (LinearLayout) ViewBindings.findChildViewById(view, i);
                                            if (linearLayout3 != null) {
                                                i = C2074R.id.main_layout;
                                                ScrollView scrollView = (ScrollView) ViewBindings.findChildViewById(view, i);
                                                if (scrollView != null) {
                                                    i = C2074R.id.table_heading_layout;
                                                    TableLayout tableLayout = (TableLayout) ViewBindings.findChildViewById(view, i);
                                                    if (tableLayout != null) {
                                                        i = C2074R.id.table_recycler_view;
                                                        RecyclerView recyclerView = (RecyclerView) ViewBindings.findChildViewById(view, i);
                                                        if (recyclerView != null) {
                                                            i = C2074R.id.title;
                                                            TextView textView2 = (TextView) ViewBindings.findChildViewById(view, i);
                                                            if (textView2 != null) {
                                                                i = C2074R.id.txtApDetail;
                                                                TextView textView3 = (TextView) ViewBindings.findChildViewById(view, i);
                                                                if (textView3 != null) {
                                                                    i = C2074R.id.txtAppBarTitle;
                                                                    TextView textView4 = (TextView) ViewBindings.findChildViewById(view, i);
                                                                    if (textView4 != null) {
                                                                        i = C2074R.id.txtConnectedWifi;
                                                                        TextView textView5 = (TextView) ViewBindings.findChildViewById(view, i);
                                                                        if (textView5 != null) {
                                                                            i = C2074R.id.txtDbUpdate;
                                                                            TextView textView6 = (TextView) ViewBindings.findChildViewById(view, i);
                                                                            if (textView6 != null) {
                                                                                i = C2074R.id.txtFirmwareUpdate;
                                                                                TextView textView7 = (TextView) ViewBindings.findChildViewById(view, i);
                                                                                if (textView7 != null) {
                                                                                    i = C2074R.id.txtFirmwareUpdateText;
                                                                                    TextView textView8 = (TextView) ViewBindings.findChildViewById(view, i);
                                                                                    if (textView8 != null) {
                                                                                        i = C2074R.id.txtFullUpdate;
                                                                                        TextView textView9 = (TextView) ViewBindings.findChildViewById(view, i);
                                                                                        if (textView9 != null) {
                                                                                            return new ActivityFirmwareUpdateBinding((RelativeLayout) view, constraintLayout, imageView, textView, checkBox, constraintLayout2, constraintLayout3, imageView2, linearLayout, linearLayout2, linearLayout3, scrollView, tableLayout, recyclerView, textView2, textView3, textView4, textView5, textView6, textView7, textView8, textView9);
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        throw new NullPointerException("Missing required view with ID: ".concat(view.getResources().getResourceName(i)));
    }
}
