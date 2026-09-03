# MYVU AR 1.1.28 IPA shared recon (measured)

Generated 2026-09-02T03:57:29Z. Source: Reverse/IPA/extracted/Payload/XJOverSeas.app

## FairPlay cryptid (otool -l, measured)
```
# main binary: extracted/Payload/XJOverSeas.app/XJOverSeas
          cmd LC_ENCRYPTION_INFO_64
      cmdsize 24
     cryptoff 32768
    cryptsize 36405248
      cryptid 1
          pad 0

# Flutter AOT: extracted/Payload/XJOverSeas.app/Frameworks/App.framework/App
          cmd LC_ENCRYPTION_INFO_64
      cmdsize 24
     cryptoff 16384
    cryptsize 17596416
      cryptid 1
          pad 0
```

## Frameworks
- 99 embedded `.framework` binaries; ALL measured cryptid=1 (FairPlay). See `recon/frameworks.csv`.
- App has 4937 files (`recon/file-inventory.txt`), 9 `.bundle`, 12 `.lproj`.

## FairPlay limitation (applies to every leaf)
The main binary `XJOverSeas`, the Flutter AOT `App.framework/App`, and all 99 embedded
frameworks are FairPlay-encrypted (`LC_ENCRYPTION_INFO_64` cryptid 1). Their `__TEXT`
pages cannot be disassembled or class-dumped from this App-Store IPA without a
decrypted dump from a jailbroken device. Only unencrypted regions (`__LINKEDIT`
symbol tables), plists, bundles, flutter_assets, .lproj, .nib, .html/.json remain
readable. No leaf may claim to have decrypted or dumped native code.

## Notable hosts (recon/urls-all.txt, recon/hosts-vendor.txt)
- `xj-platform-global.flyme.com` — Flyme/Meizu account + policy backend (many /fms/policy/ URLs)
- `*.hereapi.com` (aerial/satellite maptiles, traffic vector tiles) — HERE maps SDK
- `lbs.amap.com` — AMap privacy (China map alt)
- `gcaptcha4.geetest.com`, `static.geetest.com`, `monitor.geetest.com` — GTCaptcha4
- Vertex AI / Gemini-1.5-pro reference, `aispeech.com` — assistant/LLM
- `meizu.com` / `www.meizu.com/privacy-policy`

## Shared recon files
- `recon/frameworks.csv` — framework,cryptid,size
- `recon/file-inventory.txt` — every file path
- `recon/Info.plist.xml` — app Info.plist
- `recon/urls-all.txt` — 165 unique URLs
- `recon/hosts-vendor.txt` — vendor host lines

RECON_COMPLETE
