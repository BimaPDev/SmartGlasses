# MYVU Companion App — Cloud API Map
Source: intl build **2.40.51** (`com.upuphone.star.launcher.intl`), decompiled with jadx 1.5.6.
Core config: `com/upuphone/xr/sapp/config/NetConfig.java`, `RequestNetConfigHelper.java`, `utils/HttpRequestUtil.java`.

## Architecture: config-gateway bootstrap
On startup the app reads the current env (SharedPreferences file `net_config`, key `env`; default = `intl_prod` for intl builds, `china_prod` otherwise) and GETs a service directory from the gateway. Live service hosts come from that response; a full hardcoded fallback (`NetConfig.e` / `defaultNetConfig`) ships in the APK.

| env | config gateway |
|---|---|
| china_prod | https://gw.myvu.cn/config/ |
| china_uat  | https://gw-uat.myvu.cn/config/ |
| intl_prod  | https://gw-global.myvu.cn/config/ |
| intl_uat   | https://gw-global-uat.myvu.cn/config/ |

Env is switchable at runtime via the debug panel (`SuperAppDebugActivity`, exported) or by writing SP `net_config/env`.

## Service hosts (from bundled fallback)
### china_prod
- nbs: https://xr-nbs.myvu.cn   | km: https://km.myvu.cn   | mixture(AI): https://mixture.myvu.cn
- survey: https://survey.myvu.cn | aiRecord: https://airecords.myvu.cn
- asr: wss://km.myvu.cn/auth/central-manager/ws | policy: https://policy.flyme.com
- ar-ota: https://xr-nbs.myvu.cn/ar-ota
- account-service: https://xr-nbs.myvu.cn/account-service
- auth: https://gw.myvu.cn/auth | apisix: https://xr-nbs.myvu.cn/auth | apisix-km: https://km.myvu.cn/auth
- xr-menu: https://xr-nbs.myvu.cn/xr-menu | xr-datatrack: https://xr-nbs.myvu.cn/xr-datatrack
- xr-weather: https://xr-nbs.myvu.cn/xr-weather | weather: https://xr-nbs.myvu.cn/weather
- feedback: https://gw.myvu.cn/feedback/client | cloud-adapter: https://xr-nbs.myvu.cn/cloud-adapter
- myvu-config: https://xr-nbs.myvu.cn/myvu-config | record: https://gw.myvu.cn/record | file: https://gw.myvu.cn/file
- appId: IKSoISndT | userKey: 082eae5f-5047-4b51-9f76-92d3afd7b6a5 | userSecret: 2292b911-7688-42cc-9712-3f9ee47c41c8
- ak: myvu-android | sk: 0716b566f23cd0e6

### intl_prod
- nbs: https://xr-nbs-global.myvu.cn | km: https://kmglobal.myvu.cn | mixture(AI): https://mixture-global.myvu.cn
- aiRecord: https://airecords-global.myvu.cn | survey: https://survey-global.myvu.cn
- ar-ota: https://xr-nbs-global.myvu.cn/ar-ota
- auth: https://gw-global.myvu.cn/auth | xr-menu: https://xr-nbs-global.myvu.cn/xr-menu
- appId: elS8JURA | userKey: a9fa9811-dfe2-461f-abeb-f80adbc4440f | userSecret: d09b870d-c466-490a-81d9-b83153840b15
- ak: myvu-android | sk: 05993e4fc09d8922

(UAT variants: china_uat ak=myvu-app sk=afc40ef9b01d8908 ; intl_uat appId=XNS9EoTs ak=myvu-app sk=8124aaeeabc2d872 — same host pattern with `-uat`.)

## Request signing (HttpRequestUtil)
Header-based. Every signed request carries:
- `appId`, `appSign`, `reqTime` (epoch ms) + context headers `X-brand`, `X-model`, `X-os-version`, `X-version-name`, `X-client-language`
- **appSign = MD5_hex( appId + signId + reqTime )**  (`SignServiceImpl.a(SignDTO)` -> `MD5Util`)

Credential pairs (intl / china), selected by device type; XGA010C = "air" -> AIR pair:
| pair | id (intl / china) | sign (intl / china) |
|---|---|---|
| GLASS_AIR  | 56793477284872811830 / 36162630959229884400 | e847cec8ac8a4a13a89fab4b4ae30a87 / 9304ab6481524502ad56e66eecc25a70 |
| GLASS_VIEW | 56794611280050711940 / 82694969009158162640 | 750b7749d97b49b192dd80e6be67944a / 77751e6be6cf4556b96071cf7a1b1891 |
| ACCOUNT    | 61028808626174682630 / 55801783128653156870 | 3de2878ec02949d9a9a598073a2b1757 / bfcd68c7c88a40f7b0ec4b4d387e3ec3 |

## Notable endpoints
### OTA / firmware  (base = ar-ota host)
- GET/POST `/client/v1/arupgrade/check`
- `/client/v1/arupgrade/checkV2`   <- glasses-firmware rollout decision
- `/client/v1/arupgrade/notify`
Handlers: `star/fota/phone/GlassUpdateApiManager`, `vu/ota/VuGlassUpdateHelper`, `glass/GlassUpdateHelper`.

### App self-update (super-app)
- `/client/v1/super-app/latest-version/v2`
- `/client/v1/super-app/upgrade-protocol/submit`
- `/client/v1/version-compatible/query`

### Account / auth
- `/api/v2/oauth/user/login/flyme/token` | `/oauth/token` | `/token/get` | `/auth/sys/time`
- Meizu UC (Retrofit): `/oauth/new/sdk/access_token_email`, `/oauth/new/unirest/sendNoLoginVcode`,
  i.in.meizu.com `.../getBasicUserInfo`, `.../signout`

### Policy / privacy / feedback / survey / AI
- `/internal/v1/policy` | `/internal/v1/operate/record`
- `/oversea/privacy/query-expire` | `/privacy/query-status-v2`
- `/survey/v3/exist` | `/report/activation`
- `/v1/queryPage` | `/v1/uploadFeedback`
- `/ai-records/client/v2/ai/feedback-ai-content`
- `/client/data-track/rule/query/v1`

## Debug facilities (exported, adb-launchable)
- `com.upuphone.xr.sapp.debug.SuperAppDebugActivity` — env switcher (china/intl prod/uat), log dump `/ulog/`, requestGlassLog, force-multi-device, native-lib tests
- `DebugLoginActivity` — token/RN/AI/tici test buttons
- Glasses "demo mode": `{"action":"system","data":{"action":"set_demo_mode","value":true}}` (get_demo_mode too)

## OTA note
`ar-ota` host + `/client/v1/arupgrade/checkV2` is the exact server the app queries to decide whether XGA010C firmware is offered. Consistent with the earlier finding that no rollout is being served, this check is where an update would surface if/when the server publishes one.
