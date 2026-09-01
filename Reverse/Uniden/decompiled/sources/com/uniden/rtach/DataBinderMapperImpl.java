package com.uniden.rtach;

import android.util.SparseArray;
import android.util.SparseIntArray;
import android.view.View;
import androidx.databinding.DataBinderMapper;
import androidx.databinding.DataBindingComponent;
import androidx.databinding.ViewDataBinding;
import com.uniden.rtach.databinding.ActivityBleDeviceListBindingImpl;
import com.uniden.rtach.databinding.ActivityDashboardBindingImpl;
import com.uniden.rtach.databinding.ActivitySettingMenuBindingImpl;
import com.uniden.rtach.databinding.AppBarDashboardBindingImpl;
import com.uniden.rtach.databinding.FragmentDashboardBindingImpl;
import com.uniden.rtach.databinding.FragmentMapsBindingImpl;
import com.uniden.rtach.databinding.ItemBandAlertBindingImpl;
import com.uniden.rtach.databinding.ItemBleListBindingImpl;
import com.uniden.rtach.databinding.ItemNavigationDrawerMenuBindingImpl;
import com.uniden.rtach.databinding.ItemSettingBindingImpl;
import com.uniden.rtach.databinding.ItemSettingCategoryHeaderBindingImpl;
import com.uniden.rtach.databinding.ItemSettingMenuBindingImpl;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class DataBinderMapperImpl extends DataBinderMapper {
    private static final SparseIntArray INTERNAL_LAYOUT_ID_LOOKUP;
    private static final int LAYOUT_ACTIVITYBLEDEVICELIST = 1;
    private static final int LAYOUT_ACTIVITYDASHBOARD = 2;
    private static final int LAYOUT_ACTIVITYSETTINGMENU = 3;
    private static final int LAYOUT_APPBARDASHBOARD = 4;
    private static final int LAYOUT_FRAGMENTDASHBOARD = 5;
    private static final int LAYOUT_FRAGMENTMAPS = 6;
    private static final int LAYOUT_ITEMBANDALERT = 7;
    private static final int LAYOUT_ITEMBLELIST = 8;
    private static final int LAYOUT_ITEMNAVIGATIONDRAWERMENU = 9;
    private static final int LAYOUT_ITEMSETTING = 10;
    private static final int LAYOUT_ITEMSETTINGCATEGORYHEADER = 11;
    private static final int LAYOUT_ITEMSETTINGMENU = 12;

    static {
        SparseIntArray sparseIntArray = new SparseIntArray(12);
        INTERNAL_LAYOUT_ID_LOOKUP = sparseIntArray;
        sparseIntArray.put(C2074R.layout.activity_ble_device_list, 1);
        sparseIntArray.put(C2074R.layout.activity_dashboard, 2);
        sparseIntArray.put(C2074R.layout.activity_setting_menu, 3);
        sparseIntArray.put(C2074R.layout.app_bar_dashboard, 4);
        sparseIntArray.put(C2074R.layout.fragment_dashboard, 5);
        sparseIntArray.put(C2074R.layout.fragment_maps, 6);
        sparseIntArray.put(C2074R.layout.item_band_alert, 7);
        sparseIntArray.put(C2074R.layout.item_ble_list, 8);
        sparseIntArray.put(C2074R.layout.item_navigation_drawer_menu, 9);
        sparseIntArray.put(C2074R.layout.item_setting, 10);
        sparseIntArray.put(C2074R.layout.item_setting_category_header, 11);
        sparseIntArray.put(C2074R.layout.item_setting_menu, 12);
    }

    @Override // androidx.databinding.DataBinderMapper
    public ViewDataBinding getDataBinder(DataBindingComponent dataBindingComponent, View view, int i) {
        int i2 = INTERNAL_LAYOUT_ID_LOOKUP.get(i);
        if (i2 <= 0) {
            return null;
        }
        Object tag = view.getTag();
        if (tag == null) {
            throw new RuntimeException("view must have a tag");
        }
        switch (i2) {
            case 1:
                if ("layout/activity_ble_device_list_0".equals(tag)) {
                    return new ActivityBleDeviceListBindingImpl(dataBindingComponent, view);
                }
                throw new IllegalArgumentException("The tag for activity_ble_device_list is invalid. Received: " + tag);
            case 2:
                if ("layout/activity_dashboard_0".equals(tag)) {
                    return new ActivityDashboardBindingImpl(dataBindingComponent, view);
                }
                throw new IllegalArgumentException("The tag for activity_dashboard is invalid. Received: " + tag);
            case 3:
                if ("layout/activity_setting_menu_0".equals(tag)) {
                    return new ActivitySettingMenuBindingImpl(dataBindingComponent, view);
                }
                throw new IllegalArgumentException("The tag for activity_setting_menu is invalid. Received: " + tag);
            case 4:
                if ("layout/app_bar_dashboard_0".equals(tag)) {
                    return new AppBarDashboardBindingImpl(dataBindingComponent, view);
                }
                throw new IllegalArgumentException("The tag for app_bar_dashboard is invalid. Received: " + tag);
            case 5:
                if ("layout/fragment_dashboard_0".equals(tag)) {
                    return new FragmentDashboardBindingImpl(dataBindingComponent, view);
                }
                throw new IllegalArgumentException("The tag for fragment_dashboard is invalid. Received: " + tag);
            case 6:
                if ("layout/fragment_maps_0".equals(tag)) {
                    return new FragmentMapsBindingImpl(dataBindingComponent, view);
                }
                throw new IllegalArgumentException("The tag for fragment_maps is invalid. Received: " + tag);
            case 7:
                if ("layout/item_band_alert_0".equals(tag)) {
                    return new ItemBandAlertBindingImpl(dataBindingComponent, view);
                }
                throw new IllegalArgumentException("The tag for item_band_alert is invalid. Received: " + tag);
            case 8:
                if ("layout/item_ble_list_0".equals(tag)) {
                    return new ItemBleListBindingImpl(dataBindingComponent, view);
                }
                throw new IllegalArgumentException("The tag for item_ble_list is invalid. Received: " + tag);
            case 9:
                if ("layout/item_navigation_drawer_menu_0".equals(tag)) {
                    return new ItemNavigationDrawerMenuBindingImpl(dataBindingComponent, view);
                }
                throw new IllegalArgumentException("The tag for item_navigation_drawer_menu is invalid. Received: " + tag);
            case 10:
                if ("layout/item_setting_0".equals(tag)) {
                    return new ItemSettingBindingImpl(dataBindingComponent, view);
                }
                throw new IllegalArgumentException("The tag for item_setting is invalid. Received: " + tag);
            case 11:
                if ("layout/item_setting_category_header_0".equals(tag)) {
                    return new ItemSettingCategoryHeaderBindingImpl(dataBindingComponent, view);
                }
                throw new IllegalArgumentException("The tag for item_setting_category_header is invalid. Received: " + tag);
            case 12:
                if ("layout/item_setting_menu_0".equals(tag)) {
                    return new ItemSettingMenuBindingImpl(dataBindingComponent, view);
                }
                throw new IllegalArgumentException("The tag for item_setting_menu is invalid. Received: " + tag);
            default:
                return null;
        }
    }

    @Override // androidx.databinding.DataBinderMapper
    public ViewDataBinding getDataBinder(DataBindingComponent dataBindingComponent, View[] viewArr, int i) {
        if (viewArr == null || viewArr.length == 0 || INTERNAL_LAYOUT_ID_LOOKUP.get(i) <= 0 || viewArr[0].getTag() != null) {
            return null;
        }
        throw new RuntimeException("view must have a tag");
    }

    @Override // androidx.databinding.DataBinderMapper
    public int getLayoutId(String str) {
        Integer num;
        if (str == null || (num = InnerLayoutIdLookup.sKeys.get(str)) == null) {
            return 0;
        }
        return num.intValue();
    }

    @Override // androidx.databinding.DataBinderMapper
    public String convertBrIdToString(int i) {
        return InnerBrLookup.sKeys.get(i);
    }

    @Override // androidx.databinding.DataBinderMapper
    public List<DataBinderMapper> collectDependencies() {
        ArrayList arrayList = new ArrayList(1);
        arrayList.add(new androidx.databinding.library.baseAdapters.DataBinderMapperImpl());
        return arrayList;
    }

    private static class InnerBrLookup {
        static final SparseArray<String> sKeys;

        private InnerBrLookup() {
        }

        static {
            SparseArray<String> sparseArray = new SparseArray<>(35);
            sKeys = sparseArray;
            sparseArray.put(0, "_all");
            sparseArray.put(1, "addUserMarkVisibility");
            sparseArray.put(2, "bandAlertVisibility");
            sparseArray.put(3, "btConnected");
            sparseArray.put(4, "deleteRedLightVisibility");
            sparseArray.put(5, "deleteUserMarkVisibility");
            sparseArray.put(6, "directionVisibility");
            sparseArray.put(7, "gpsConnected");
            sparseArray.put(8, "gpsIconVisibility");
            sparseArray.put(9, "isGrayOut");
            sparseArray.put(10, "isJammingIconEnable");
            sparseArray.put(11, "isKBlockMute");
            sparseArray.put(12, "isLaserTpAlertEnable");
            sparseArray.put(13, "isMute");
            sparseArray.put(14, "isMuteClickable");
            sparseArray.put(15, "isMuteEnable");
            sparseArray.put(16, "isMuteMemClickable");
            sparseArray.put(17, "isMuteStatusEnable");
            sparseArray.put(18, "isR9Device");
            sparseArray.put(19, "isReceiveBtnVisible");
            sparseArray.put(20, "isReceiveOnlyClickable");
            sparseArray.put(21, "isWorkReceiveModeFunction");
            sparseArray.put(22, "itemChapter");
            sparseArray.put(23, "itemMenu");
            sparseArray.put(24, "itemName");
            sparseArray.put(25, "itemRadarSetting");
            sparseArray.put(26, "itemRadarTitle");
            sparseArray.put(27, "labelMuteMem");
            sparseArray.put(28, "laserTpMode");
            sparseArray.put(29, "onGpsClick");
            sparseArray.put(30, "receiveModeBtnText");
            sparseArray.put(31, "selectedTab");
            sparseArray.put(32, "tab");
            sparseArray.put(33, "updateDirection");
            sparseArray.put(34, "viewModel");
        }
    }

    private static class InnerLayoutIdLookup {
        static final HashMap<String, Integer> sKeys;

        private InnerLayoutIdLookup() {
        }

        static {
            HashMap<String, Integer> map = new HashMap<>(12);
            sKeys = map;
            map.put("layout/activity_ble_device_list_0", Integer.valueOf(C2074R.layout.activity_ble_device_list));
            map.put("layout/activity_dashboard_0", Integer.valueOf(C2074R.layout.activity_dashboard));
            map.put("layout/activity_setting_menu_0", Integer.valueOf(C2074R.layout.activity_setting_menu));
            map.put("layout/app_bar_dashboard_0", Integer.valueOf(C2074R.layout.app_bar_dashboard));
            map.put("layout/fragment_dashboard_0", Integer.valueOf(C2074R.layout.fragment_dashboard));
            map.put("layout/fragment_maps_0", Integer.valueOf(C2074R.layout.fragment_maps));
            map.put("layout/item_band_alert_0", Integer.valueOf(C2074R.layout.item_band_alert));
            map.put("layout/item_ble_list_0", Integer.valueOf(C2074R.layout.item_ble_list));
            map.put("layout/item_navigation_drawer_menu_0", Integer.valueOf(C2074R.layout.item_navigation_drawer_menu));
            map.put("layout/item_setting_0", Integer.valueOf(C2074R.layout.item_setting));
            map.put("layout/item_setting_category_header_0", Integer.valueOf(C2074R.layout.item_setting_category_header));
            map.put("layout/item_setting_menu_0", Integer.valueOf(C2074R.layout.item_setting_menu));
        }
    }
}
