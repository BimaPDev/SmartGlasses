# Decompile notes

- Input: `xapk/com.uniden.rtach.apk` extracted from `R_TACH_1.0.9_APKPure.xapk`
- Engine: jadx 1.5.6 `--deobf --show-bad-code`
- Output: `decompiled/sources/` (8876 Java files)
- jadx exit status 3 with 117 errors; usable app sources under `decompiled/sources/com/uniden/rtach/`
- Language/density split APKs were not decompiled (resources only)
