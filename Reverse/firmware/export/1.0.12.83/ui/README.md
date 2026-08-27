# Star Air 1.0.12.83 — HUD UI extract

Same split as audio: **names in the bin**, **some payloads carved here**,
the rest only on the glasses’ LittleFS.

## Carved GIFs (in this OTA)

| File | Size | Frames | Offset | Looks like |
|---|---|---|---|---|
| `gifs/gif_00_22x22_off3730b4.gif` | 22×22 | 16 | `0x3730b4` | play triangle (music next/play anim) |
| `gifs/gif_01_40x40_off3740f4.gif` | 40×40 | 51 | `0x3740f4` | loading / progress ring |
| `gifs/gif_02_56x56_off37f5f4.gif` | 56×56 | 51 | `0x37f5f4` | music note in circle (AirMusic / cover) |
| `gifs/gif_03_22x22_off387ab4.gif` | 22×22 | 16 | `0x387ab4` | pause bars |
| `gifs/gif_04_160x40_off3b6774.gif` | 160×40 | 43 | `0x3b6774` | glasses + phone (connect / StarryNet guide) |
| `gifs/gif_05_40x40_off3c7ab4.gif` | 40×40 | 67 | `0x3c7ab4` | target / selected-state ring (starts blank) |
| `gifs/gif_06_24x24_off3d8e74.gif` | 24×24 | 130 | `0x3d8e74` | diamond reticle / loading_24-class spinner |
| `gifs/gif_07_178x16_off3e05f4.gif` | 178×16 | 51 | `0x3e05f4` | voice-assistant waveform (wide) |
| `gifs/gif_08_178x16_off3e3e74.gif` | 178×16 | 40 | `0x3e3e74` | voice-assistant waveform (wide, alt) |
| `gifs/gif_09_13x15_off3eb774.gif` | 13×15 | 31 | `0x3eb774` | ellipsis / page dots (WeChat typing or pager) |
| `gifs/gif_10_38x20_off3eeaf4.gif` | 38×20 | 45 | `0x3eeaf4` | voice-assistant waveform (short) |
| `gifs/gif_11_38x20_off3f6234.gif` | 38×20 | 49 | `0x3f6234` | voice-assistant waveform (short, alt) |

Previews: `gifs/previews/*_f0.png`.

## Named icons (LittleFS keys — not in the zip)

- `next_playing_normal`
- `playing_normal`
- `previous_normal`
- `puase_normal`
- `next_play_anim`
- `previous_anim`
- `music_play_to_pause_v3`
- `music_puase_to_play_v3`
- `music_pause_v3`
- `music_play_v3`
- `music_cover_v3`
- `music_exit_icon`
- `music_cover_pause_v3`
- `music_pause_gray_v3`
- `music_pause_normal_v3`
- `play_list_bg`
- `play_list_bg_focus`
- `audio_play_ctrl_cover`
- `audio_play_center_play_icon`
- `play_center_ai_music_icon`
- `intlmusic_cover`
- `starrynet_air_pro_click`
- `launcher_dock_weather`
- `weather_cloudy_day_24_24`
- `weather_cloudy_night_24_24`
- `weather_duststorm_24_24`
- `weather_foggy_24_24`
- `weather_hail_24_24`
- `weather_haze_24_24`
- `weather_heavy_rain_24_24`
- `weather_heavy_snow_24_24`
- `weather_light_rain_24_24`
- `weather_light_snow_24_24`
- `weather_moderate_rain_24_24`
- `weather_moderate_snow_24_24`
- `weather_overcast_24_24`
- `weather_sand_24_24`
- `weather_shower_24_24`
- `weather_sleet_24_24`
- `weather_sunny_day_24_24`
- `weather_sunny_night_24_24`
- `weather_sunset_24_24`
- `weather_thunder_24_24`
- `weather_thundershower_with_hail_24_24`
- `weather_typhoon_24_24`
- `weather_unknown_24_24`
- `navigation_24_24`
- `navigation_icon_70`
- `navi_img_compass`
- `navi_icon_arrow_walk`
- `landfront_00`
- `landfront_11`
- `landfront_22`
- `landfront_33`
- `landfront_44`
- `landfront_55`
- `landfront_66`
- `landfront_77`
- `landfront_88`
- `landfront_99`
- `landfront_aa`
- `landfront_bb`
- `landfront_cc`
- `landfront_dd`
- `landfront_ee`
- `landfront_ff`
- `landfront_g3`
- `landfront_g5`
- `landfront_gg`
- `landfront_h1`
- `landfront_h3`
- `landfront_h5`
- `landfront_hh`
- `landfront_ii`
- `landfront_jj`
- `smartlife_wechat_send_success_icon`
- `smartlife_wechat_send_fail_icon`
- `smartlife_wechat_ellipsis_gif`
- `smartlife_wechat_group`
- `assistant_help_domain_setting_icon`
- `assistant_navi_domain_select_icon_big`
- `answer_dots`
- `cancel_dots`
- `fade_rect`
- `phone_bg`
- `wechat_video_icon`
- `battery_100`
- `indicator`
- `loading_24`
- `ca_success`
- `charging_box`
- `dot55`
- `disconnect_img`
- `unbound_img`
- `unbounding_icon`
- `ring_connect_icon`
- `setting_switch_on`
- `setting_switch_off`

## Pages / modules (from `__FILE__` strings)

- **AirMusic** (12 sources) — views: AudioPlayCtrlCenterView, QqMusicMainView, AirMusicView
- **Assistant** (65 sources) — views: VoiceAvatarView, CardView, HorizontalListView, ListView, NaviDomainView, ScheduleDomainView, TodoDomainView, MultipleTimeWeatherView, WechatContactListView, WechatMsgView
- **Launcher** (16 sources) — views: StandByView
- **MMI** (1 sources) — views: MMIPage
- **Navigation** (22 sources) — views: AddressView, EndView, NaviPipView, NaviView, SplashView, NaviDriveSpeedView, NaviNextRoadInfoView
- **Ota** (4 sources) — views: OtaView
- **Phone** (19 sources) — views: PhonePage, CommView, PhoneView, SIMPanelView, WechatSysView
- **Prompt** (4 sources) — views: PromptView
- **Ring** (15 sources) — views: ConnectingView, GuideSearchView, OperationGuideView, RemoveView, RingListView, SearchFailedView, SingleUnboundView, VersionInfoDetailView, VersionInfoView
- **Setting** (17 sources) — views: AboutView, BrightView, DeviceListView, FontView, LanguageView, ModeView, MoreView, ScreenOffView, SettingView, StateView, UnbindDeviceView, VolView, WearView
- **SmartLife** (13 sources) — views: BaseView, FlightView, TaxiView, WechatResponseView
- **Speech** (2 sources)
- **StarryNetApp** (9 sources) — views: PowerOffAndRebootView
- **Translation** (32 sources) — views: TransView, ButtonView, PrivacyView, TransView

## Navigation edges (from TRACE strings in `ui_names.txt`)

- `ConnectedViewV1` → `GuideSearchView`
- `ConnectedViewV1` → `OperationGuideView`
- `ConnectedViewV1` → `RemoveView`
- `ConnectedViewV1` → `SingleUnboundView`
- `ConnectedViewV1` → `VersionInfoView`
- `DeviceListView` → `MoreView`
- `GuideSearchView` → `SearchFailedView`
- `RingListView` → `ConnectingView`
- `SearchFailedView` → `GuideSearchView`
- `SingleUnboundView` → `GuideSearchView`
- `UnbindDeviceView` → `DeviceListView`
- `UnbindDeviceView` → `DeviceListView`
- `OperationGuideView` → `GuideSearchView`
- `RemoveView` → `GuideSearchView`
- `VersionInfoDetailView` → `versionInfoView`
- `VersionInfoView` → `GuideSearchView`
- `UnbindDeviceView` → `MoreView`
- `RemoveView` → `GuideSearchView`
- `OperationGuideView` → `SingleUnboundView`
- `VersionInfoView` → `SingleUnboundView`
- `OperationGuideView` → `GuideSearchView`
- `RemoveView` → `GuideSearchView`
- `UnbindDeviceView` → `DeviceListView`
- `VersionInfoDetailView` → `GuideSearchView`
- `VersionInfoView` → `GuideSearchView`
- `ConnectingView` → `GuideSearchView`
- `GuideSearchView` → `RingListView`

Re-run: `python3 extract_ui_assets.py`
