#!/usr/bin/env python3
"""Replace the MYVU wordmark in every UI string. Same length, so pure data.

  python3 make_rebrand.py <in.bin> <out.bin> [--to BIMA] [--dry-run]

RISK CLASS: pure data, and the safest possible form of it. "MYVU" and "BIMA" are both
exactly 4 ASCII bytes, so nothing moves: no string grows, no pointer changes, no table
is re-indexed, the image length is identical and not one instruction is touched.

WHAT IS REPLACED, AND WHAT IS DELIBERATELY NOT

Only UPPERCASE `MYVU`. Checked on 1.0.11.53:

  * there are ZERO standalone "MYVU\\0" strings -- every occurrence sits inside a longer
    string, which means every one is display or log text, not a protocol token. That is
    the fact that makes a blind replace safe here, and it is worth re-checking on any
    other build before trusting this tool.
  * `Myvu` appears twice, both identifiers (`handleMyvuLoginStatus`, an mIsMyvuLogin
    log line).
  * `myvu` appears in ten identifiers and NV/config keys -- `app_startup_myvuapp`,
    `myvu_pp`, `launcher_myvu_not_install`, `phone_set_cb_myvu_version`. Those are
    plausibly matched as literal strings by the phone app or by persisted settings, so
    renaming them could break behaviour rather than branding.

So the rule is: rename what is SHOWN, leave what is MATCHED.

The device's `displayName` (what `get_air_glass_info` reports over BLE) is NOT in this
image at all -- there is no bare "MYVU" string to change -- so it presumably lives in
the NV/factory partition, which the OTA does not carry. Expect the phone app to keep
calling the glasses MYVU.

NOT COVERED: the BOOT logo. It is not in the OTA. `platform_tester.bin` holds exactly
one MYVU image, named `power_off`, and its only two call sites are
`LauncherProvider::shutDownWithAnim` and `lv_power_ui.c`'s `play_shutdown_animation`;
`best1600_watch_bth.bin` contains no images whatsoever. The boot splash is drawn by the
bootloader from a partition the OTA never touches. Use `make_wordmark.py` for the
power-off logo; the boot one needs physical flash access.
"""
import argparse
import re
import sys
from pathlib import Path

BUILD = b'Flyme XR 1.0.11.53.20241126_Air_intl_FR'
OLD = b'MYVU'


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('infile')
    ap.add_argument('outfile', nargs='?')
    ap.add_argument('--to', default='BIMA')
    ap.add_argument('--dry-run', action='store_true')
    a = ap.parse_args()

    new = a.to.encode()
    if len(new) != len(OLD):
        sys.exit(f'refusing: {a.to!r} is {len(new)} bytes, must be exactly {len(OLD)} — '
                 f'a different length would need every pointer into the string tables '
                 f'rebuilt, which is a different and far riskier patch')
    if not all(0x20 <= c < 0x7F for c in new):
        sys.exit(f'refusing: {a.to!r} must be printable ASCII')

    d = bytearray(Path(a.infile).read_bytes())
    if BUILD not in d:
        sys.exit('refusing: not 1.0.11.53_Air_intl_FR')

    hits = [m.start() for m in re.finditer(re.escape(OLD), d)]
    if not hits:
        sys.exit('refusing: no occurrences of MYVU — already rebranded, or wrong image')

    # SAFETY GATE: a standalone token could be a protocol value rather than a label.
    bare = []
    for o in hits:
        s = o
        while s > 0 and 0x20 <= d[s - 1] < 0x7F:
            s -= 1
        e = o
        while e < len(d) and 0x20 <= d[e] < 0x7F:
            e += 1
        if bytes(d[s:e]) == OLD and e < len(d) and d[e] == 0:
            bare.append(o)
    if bare:
        sys.exit(f'refusing: {len(bare)} standalone "MYVU" string(s) at '
                 f'{", ".join(hex(b) for b in bare[:5])} — a bare token may be a '
                 f'protocol value the phone app matches on, not a label. Inspect them '
                 f'before rebranding this build.')

    print(f'  occurrences   {len(hits)}  (all inside longer strings — display text)')
    print(f'  replacement   {OLD.decode()} -> {a.to}   '
          f'({len(OLD)} bytes -> {len(new)} bytes, nothing moves)')
    print(f'  untouched     lowercase `myvu` identifiers and NV keys, and `Myvu` '
          f'log symbols')
    samples = []
    for o in hits[:400]:
        s = o
        while s > 0 and 0x20 <= d[s - 1] < 0x7F:
            s -= 1
        e = o
        while e < len(d) and 0x20 <= d[e] < 0x7F:
            e += 1
        txt = bytes(d[s:e]).decode('utf-8', 'replace')
        if 12 < len(txt) < 70:
            samples.append(txt)
    print('\n  examples of what changes:')
    for t in samples[:6]:
        print(f'    {t}')
        print(f'      -> {t.replace("MYVU", a.to)}')

    if a.dry_run:
        print('\n  --dry-run: nothing written')
        return

    n = 0
    for o in hits:
        d[o:o + len(new)] = new
        n += 1

    out = a.outfile or a.infile.replace('.bin', '_rebrand.bin')
    Path(out).write_bytes(bytes(d))
    print(f'\n  wrote {out}  ({len(d):,} bytes, unchanged length, {n} strings altered, '
          f'0 instructions)')


if __name__ == '__main__':
    main()
