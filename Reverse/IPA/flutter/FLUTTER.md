# Flutter Layer Catalog — MYVU AR (XJOverSeas.app)

Source: `Reverse/IPA/extracted/Payload/XJOverSeas.app`. All facts below were measured
directly from files in that tree with `otool`, `find`, `python3`/`zlib`, and `plutil`.

## FairPlay encryption limit (read first)

The app is an App-Store build protected by Apple **FairPlay**. `otool -l` on
`extracted/Payload/XJOverSeas.app/XJOverSeas` (main binary), on the Flutter AOT payload
`extracted/Payload/XJOverSeas.app/Frameworks/App.framework/App`, and on
`extracted/Payload/XJOverSeas.app/Frameworks/Flutter.framework/Flutter` all show
`LC_ENCRYPTION_INFO_64` with `cryptid 1`. This means the Dart AOT snapshot compiled into
`App.framework/App` and the Flutter engine's own compiled code in `Flutter.framework/Flutter`
are FairPlay-encrypted ciphertext in this IPA and **cannot be decompiled, disassembled, or
have Dart source recovered** from these extracted files — no jailbroken-device dump was used
or is available here. Everything reported below comes only from the *unencrypted* regions:
the `flutter_assets` bundle (plain files, not code), plists, and the small unencrypted
head/tail (`__TEXT` load commands / `__LINKEDIT`) around each cryptid-1 binary. No claim
below describes decrypted Dart or native engine code.

## App.framework/App (Dart AOT snapshot) — measured

```
path:        extracted/Payload/XJOverSeas.app/Frameworks/App.framework/App
file size:   18,128,352 bytes
cryptoff:    16384
cryptsize:   17,596,416
cryptid:     1   (FairPlay, encrypted)
```

`Flutter.framework/Flutter` (the engine binary itself) is also cryptid 1: file size
9,857,536 bytes, cryptoff 16384, cryptsize 8,896,512. Its `Info.plist`
(`extracted/Payload/XJOverSeas.app/Frameworks/Flutter.framework/Info.plist`) reports
`CFBundleShortVersionString "1.0"` and `ClangVersion "Fuchsia clang version 18.0.0
(https://llvm.googlesource.com/llvm-project 725656bdd885483c39f482a01ea25d67acf39c46)"` —
no exact Flutter/Dart SDK version string is present in any readable region. However, the
unencrypted `__LINKEDIT` tail of `Flutter.framework/Flutter` exports symbols such as
`_InternalFlutterGpu_RenderPass_*`, `_InternalFlutterGpu_Context_InitializeDefault`, and
`InternalFlutterGpu` (the `dart:ui`/Impeller `flutter_gpu` package), which only exists in
modern (Impeller-era, Flutter 3.24+) engine builds — a circumstantial engine-version signal,
not a precise version string. `flutter_assets/shaders/ink_sparkle.frag` (present, see below)
is consistent with the same modern engine/Skia-Impeller shader set.

## flutter_assets bundle

Located at
`extracted/Payload/XJOverSeas.app/Frameworks/App.framework/flutter_assets/`. Contents:

- `AssetManifest.json` (30,089 bytes) — 351 top-level asset keys.
- `AssetManifest.bin` (32,549 bytes) — binary mirror of the manifest.
- `FontManifest.json` (2,925 bytes) — declares fonts `MaterialIcons` (`fonts/MaterialIcons-Regular.otf`),
  `FlymeNumber` (`assets/fonts/FlymeNumber-VF.ttf`), plus package fonts
  `packages/cupertino_icons/assets/CupertinoIcons.ttf` and 13 KaTeX font faces under
  `packages/flutter_math_fork/lib/katex_fonts/fonts/` (Regular/Bold/Italic variants of
  KaTeX_Main, Math, AMS, Caligraphic, Fraktur, SansSerif, Script, Typewriter, Size1-4).
- `NOTICES.Z` (131,487 bytes) — a **gzip** stream (magic `1f 8b`, decompresses only with
  zlib `wbits=31`/gzip; plain zlib header fails), expanding to 2,033,352 bytes of
  concatenated OSS license texts, one block per package separated by an 80-`-` rule.
- `shaders/ink_sparkle.frag` — Skia/Impeller Material ink-ripple shader.
- `fonts/MaterialIcons-Regular.otf`.
- `packages/cupertino_icons/`, `packages/flutter_math_fork/` — vendored package assets.
- No `.packages`/`package_config.json` shipped (build-time only, not bundled). No separate
  `kernel_blob.bin`, `vm_snapshot_data`, or `isolate_snapshot_data` files exist anywhere
  under the app bundle — for iOS AOT builds the Dart snapshot is linked directly into
  `App.framework/App` rather than shipped as loose snapshot files.
- `extracted/Payload/XJOverSeas.app/Frameworks/Flutter.framework/icudtl.dat` (817,232 bytes) —
  ICU data blob used by the engine; unencrypted (not a Mach-O, no cryptid).

## Bundled `assets/` categories (file counts, measured with `find`)

| category | path | files |
|---|---|---|
| images | `flutter_assets/assets/images` | 140 (mix of `.png` and `.svg`) |
| svgs | `flutter_assets/assets/svgs` | 100 |
| html | `flutter_assets/assets/html` | 60 (localized privacy-policy / service-agreement pages, e.g. `RING_PRIVACY_POLICY_en_US.html`, `glass_air_pp_de_DE.html`, in `de_DE/en_US/fr_FR/ja_JP/zh_CN/tr_TR/ms_MY` locales) |
| pag | `flutter_assets/assets/pag` | 23 (`.pag` = Tencent PAG vector animations, e.g. `ring_bloodoxygen_detecting.pag`, `ring2_ota_upgrading.pag`) |
| animation | `flutter_assets/assets/animation` | 5 (Lottie `.json`: `chat_loading.json`, `chat_loading_start.json`, `chat_record.json`, `search_device_animation_dark.json`, `search_device_animation_light.json`) |
| jsons | `flutter_assets/assets/jsons` | 1 (`BloodoxygenResp.json`, 4,622 bytes) |
| fonts | `flutter_assets/assets/fonts` | 1 (`FlymeNumber-VF.ttf`, variable-weight numeral font) |

## Dart/Flutter packages identified (from `NOTICES.Z` license blocks + `.framework` dirs)

Decompressed `NOTICES.Z` yields 1,099 license blocks (many are repeated third-party/native
sub-components like `icu`, `skia`, `harfbuzz`, `boringssl`, `glslang`, `angle`, `freetype2`,
`expat`, `zlib`, `webp` pulled in transitively by the engine). Distinct Dart/Flutter-level
package names found there include: `flutter`, `dart`, `cupertino_icons`, `get` (GetX),
`dio`, `sqflite`, `floor`, `connectivity_plus` (+ `_linux`/`_macos`/`_web` variants),
`permission_handler`, `flutter_local_notifications`, `flutter_blue_plus`, `ble2301`,
`myvu_config_plugin`, `myvu_share_plugin`, `nordic_otas_plugin`, `flutter_bugly`,
`flutter_svg`, `flutter_screenutil`, `flutter_timezone`, `flutter_keyboard_visibility`,
`flutter_highlight`, `cached_network_image`, `carousel_slider`, `fl_chart`,
`syncfusion_flutter_charts`, `syncfusion_flutter_core`, `lottie`, `pag`, `qr_flutter`,
`markdown`, `markdown_widget`, `photo_view`, `screenshot`, `scroll_to_index`,
`scrollable_positioned_list`, `scrollview_observer`, `easy_refresh`, `easy_debounce`,
`bot_toast`, `pull_to_refresh`, `open_settings_plus`, `status_bar_control`, `vibration`,
`volume_controller`, `uuid`, `tuple`, `logger`, `rxdart`, `equatable`, `timezone`,
`image_gallery_saver`, `file_picker`, `flutter_math_fork` (KaTeX), `win32`/`win32_registry`
(desktop-target transitive deps), `webview_flutter_android` (federated-plugin transitive
dep even in this iOS build), `sqlite3`/`sqlparser`, `xxhash`, `spring_animation`,
`platform_detect`.

Corresponding native plugin `.framework` bundles found directly under
`extracted/Payload/XJOverSeas.app/Frameworks/` (the compiled iOS side of the above Dart
plugins — these are also cryptid-1 FairPlay binaries, per RECON.md, so only their names/
Info.plists are readable): `ble2301.framework`, `connectivity_plus.framework`,
`device_info_plus.framework`, `file_picker.framework`, `flutter_blue_plus.framework`,
`flutter_keyboard_visibility.framework`, `flutter_local_notifications.framework`,
`flutter_timezone.framework`, `heresdk.framework`, `image_gallery_saver.framework`,
`image_picker_ios.framework`, `libpag.framework`, `myvu_config_plugin.framework`,
`nordic_otas_plugin.framework`, `open_settings_plus.framework`, `package_info_plus.framework`,
`path_provider_foundation.framework`, `shared_preferences_foundation.framework`,
`sqflite.framework`, `status_bar_control.framework`, `url_launcher_ios.framework`,
`vibration.framework`, `volume_controller.framework`, `webview_flutter_wkwebview.framework`.
(`heresdk.framework` backs the HERE Maps host noted in RECON.md; `nordic_otas_plugin.framework`
+ `NordicDFU.framework` back BLE firmware-update flows; `myvu_config_plugin`/`myvu_share_plugin`
are the app's own first-party Dart platform-channel plugins, not third-party packages.)

IPA_FLUTTER_COMPLETE
