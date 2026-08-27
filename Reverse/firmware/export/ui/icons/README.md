# Icon resources — what could actually be pulled

The glasses OTA (`platform_tester.bin`) only has the **names**.
There is no `B:music_cover_v3.bin` (or similar) in the zip — those 24×24 HUD
bitmaps live on LittleFS on the glasses.

**45 / 98** were pulled from the **MYVU phone APK**, which ships
the same `landfront_*` lane arrows and the weather set as SVGs
(`icon_weather_sunny_day.svg` ↔ firmware `weather_sunny_day_24_24`).

Phone-app weather icons are colour 24×24 SVGs, not the green HUD 1-bit/4-bit
faces. Lane arrows are white-on-black PNGs used by in-app navi too.

## Pulled

- `weather_cloudy_day_24_24` ← `MYVU APK:assets/flutter_assets/assets/svgs/icon_weather_cloudy_day.svg`
- `weather_cloudy_night_24_24` ← `MYVU APK:assets/flutter_assets/assets/svgs/icon_weather_cloudy_night.svg`
- `weather_duststorm_24_24` ← `MYVU APK:assets/flutter_assets/assets/svgs/icon_weather_duststorm.svg`
- `weather_foggy_24_24` ← `MYVU APK:assets/flutter_assets/assets/svgs/icon_weather_foggy.svg`
- `weather_hail_24_24` ← `MYVU APK:assets/flutter_assets/assets/svgs/icon_weather_hail.svg`
- `weather_haze_24_24` ← `MYVU APK:assets/flutter_assets/assets/svgs/icon_weather_haze.svg`
- `weather_heavy_rain_24_24` ← `MYVU APK:assets/flutter_assets/assets/svgs/icon_weather_heavy_rain.svg`
- `weather_heavy_snow_24_24` ← `MYVU APK:assets/flutter_assets/assets/svgs/icon_weather_heacy_snow.svg`
- `weather_light_rain_24_24` ← `MYVU APK:assets/flutter_assets/assets/svgs/icon_weather_little_rain.svg`
- `weather_light_snow_24_24` ← `MYVU APK:assets/flutter_assets/assets/svgs/icon_weather_light_snow.svg`
- `weather_moderate_rain_24_24` ← `MYVU APK:assets/flutter_assets/assets/svgs/icon_weather_moderate_rain.svg`
- `weather_moderate_snow_24_24` ← `MYVU APK:assets/flutter_assets/assets/svgs/icon_weather_moderate_snow.svg`
- `weather_overcast_24_24` ← `MYVU APK:assets/flutter_assets/assets/svgs/icon_weather_overcast.svg`
- `weather_sand_24_24` ← `MYVU APK:assets/flutter_assets/assets/svgs/icon_weather_sand.svg`
- `weather_sleet_24_24` ← `MYVU APK:assets/flutter_assets/assets/svgs/icon_weather_sleet.svg`
- `weather_sunny_day_24_24` ← `MYVU APK:assets/flutter_assets/assets/svgs/icon_weather_sunny_day.svg`
- `weather_sunny_night_24_24` ← `MYVU APK:assets/flutter_assets/assets/svgs/icon_weather_sunny_night.svg`
- `weather_thunder_24_24` ← `MYVU APK:assets/flutter_assets/assets/svgs/icon_weather_thunder.svg`
- `weather_thundershower_with_hail_24_24` ← `MYVU APK:assets/flutter_assets/assets/svgs/icon_weather_thundershower_with_hail.svg`
- `weather_unknown_24_24` ← `MYVU APK:assets/flutter_assets/assets/svgs/icon_weather_unknown.svg`
- `landfront_00` ← `MYVU APK:res/drawable/landfront_00.png`
- `landfront_11` ← `MYVU APK:res/drawable/landfront_11.png`
- `landfront_22` ← `MYVU APK:res/drawable/landfront_22.png`
- `landfront_33` ← `MYVU APK:res/drawable/landfront_33.png`
- `landfront_44` ← `MYVU APK:res/drawable/landfront_44.png`
- `landfront_55` ← `MYVU APK:res/drawable/landfront_55.png`
- `landfront_66` ← `MYVU APK:res/drawable/landfront_66.png`
- `landfront_77` ← `MYVU APK:res/drawable/landfront_77.png`
- `landfront_88` ← `MYVU APK:res/drawable/landfront_88.png`
- `landfront_99` ← `MYVU APK:res/drawable/landfront_99.png`
- `landfront_aa` ← `MYVU APK:res/drawable/landfront_aa.png`
- `landfront_bb` ← `MYVU APK:res/drawable/landfront_bb.png`
- `landfront_cc` ← `MYVU APK:res/drawable/landfront_cc.png`
- `landfront_dd` ← `MYVU APK:res/drawable/landfront_dd.png`
- `landfront_ee` ← `MYVU APK:res/drawable/landfront_ee.png`
- `landfront_ff` ← `MYVU APK:res/drawable/landfront_ff.png`
- `landfront_g3` ← `MYVU APK:res/drawable/landfront_g3.png`
- `landfront_g5` ← `MYVU APK:res/drawable/landfront_g5.png`
- `landfront_gg` ← `MYVU APK:res/drawable/landfront_gg.png`
- `landfront_h1` ← `MYVU APK:res/drawable/landfront_h1.png`
- `landfront_h3` ← `MYVU APK:res/drawable/landfront_h3.png`
- `landfront_h5` ← `MYVU APK:res/drawable/landfront_h5.png`
- `landfront_hh` ← `MYVU APK:res/drawable/landfront_hh.png`
- `landfront_ii` ← `MYVU APK:res/drawable/landfront_ii.png`
- `landfront_jj` ← `MYVU APK:res/drawable/landfront_jj.png`

## Not in OTA or APK under this name

- `next_playing_normal` — glasses HUD GIF already carved (play triangle)
- `playing_normal` — glasses HUD GIF already carved (play triangle)
- `previous_normal` — not in glasses OTA bin; no same-name asset in phone APK
- `puase_normal` — glasses HUD GIF already carved (pause bars)
- `next_play_anim` — glasses HUD GIF already carved (play triangle)
- `previous_anim` — not in glasses OTA bin; no same-name asset in phone APK
- `music_play_to_pause_v3` — not in glasses OTA bin; no same-name asset in phone APK
- `music_puase_to_play_v3` — not in glasses OTA bin; no same-name asset in phone APK
- `music_pause_v3` — glasses HUD GIF already carved (pause bars)
- `music_play_v3` — not in glasses OTA bin; no same-name asset in phone APK
- `music_cover_v3` — glasses HUD GIF already carved (note in circle)
- `music_exit_icon` — not in glasses OTA bin; no same-name asset in phone APK
- `music_cover_pause_v3` — not in glasses OTA bin; no same-name asset in phone APK
- `music_pause_gray_v3` — not in glasses OTA bin; no same-name asset in phone APK
- `music_pause_normal_v3` — glasses HUD GIF already carved (pause bars)
- `play_list_bg` — not in glasses OTA bin; no same-name asset in phone APK
- `play_list_bg_focus` — not in glasses OTA bin; no same-name asset in phone APK
- `audio_play_ctrl_cover` — not in glasses OTA bin; no same-name asset in phone APK
- `audio_play_center_play_icon` — not in glasses OTA bin; no same-name asset in phone APK
- `play_center_ai_music_icon` — not in glasses OTA bin; no same-name asset in phone APK
- `intlmusic_cover` — glasses HUD GIF already carved (note in circle)
- `starrynet_air_pro_click` — audio path / TRACE name, not an image
- `launcher_dock_weather` — not in glasses OTA bin; no same-name asset in phone APK
- `weather_shower_24_24` — not in glasses OTA bin; no same-name asset in phone APK
- `weather_sunset_24_24` — not in glasses OTA bin; no same-name asset in phone APK
- `weather_typhoon_24_24` — not in glasses OTA bin; no same-name asset in phone APK
- `navigation_24_24` — not in glasses OTA bin; no same-name asset in phone APK
- `navigation_icon_70` — not in glasses OTA bin; no same-name asset in phone APK
- `navi_img_compass` — not in glasses OTA bin; no same-name asset in phone APK
- `navi_icon_arrow_walk` — not in glasses OTA bin; no same-name asset in phone APK
- `smartlife_wechat_send_success_icon` — not in glasses OTA bin; no same-name asset in phone APK
- `smartlife_wechat_send_fail_icon` — not in glasses OTA bin; no same-name asset in phone APK
- `smartlife_wechat_ellipsis_gif` — glasses HUD GIF already carved (ellipsis dots)
- `smartlife_wechat_group` — not in glasses OTA bin; no same-name asset in phone APK
- `assistant_help_domain_setting_icon` — not in glasses OTA bin; no same-name asset in phone APK
- `assistant_navi_domain_select_icon_big` — not in glasses OTA bin; no same-name asset in phone APK
- `answer_dots` — not in glasses OTA bin; no same-name asset in phone APK
- `cancel_dots` — not in glasses OTA bin; no same-name asset in phone APK
- `fade_rect` — not in glasses OTA bin; no same-name asset in phone APK
- `phone_bg` — not in glasses OTA bin; no same-name asset in phone APK
- `wechat_video_icon` — not in glasses OTA bin; no same-name asset in phone APK
- `battery_100` — not in glasses OTA bin; no same-name asset in phone APK
- `indicator` — not in glasses OTA bin; no same-name asset in phone APK
- `loading_24` — glasses HUD GIF already carved (24x24 diamond spinner)
- `ca_success` — not in glasses OTA bin; no same-name asset in phone APK
- `charging_box` — not in glasses OTA bin; no same-name asset in phone APK
- `dot55` — not in glasses OTA bin; no same-name asset in phone APK
- `disconnect_img` — not in glasses OTA bin; no same-name asset in phone APK
- `unbound_img` — not in glasses OTA bin; no same-name asset in phone APK
- `unbounding_icon` — not in glasses OTA bin; no same-name asset in phone APK
- `ring_connect_icon` — not in glasses OTA bin; no same-name asset in phone APK
- `setting_switch_on` — not in glasses OTA bin; no same-name asset in phone APK
- `setting_switch_off` — not in glasses OTA bin; no same-name asset in phone APK
