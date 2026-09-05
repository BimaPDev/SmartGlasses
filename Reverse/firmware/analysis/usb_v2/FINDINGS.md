# Gates: does a USB mode exist on Star Air?

Why now: the prior USB hunt (analysis/en_usb_hunt.txt, analysis/usb_enable/) was done
under the OLD address model. Code VA is file+0x2C010000, not +0x2C000000, and data is
VA-0x3BFD7CB0 on 11.53 — so any xref-based negative from that work is unreliable.
Stakes: a USB mode would be a recovery path for the bricked unit and a non-OTA flash route.

OWNS: Reverse/firmware/analysis/usb_v2/**

- [x] G0: NEGATIVE CONTROL FIRST. The search method must FIND a subsystem known to exist
        (the JBD013 display driver and the BT stack). A method that cannot find a present
        subsystem proves nothing about an absent one. Three prior wrong calls in this audit
        came from absence-of-evidence, two of them from my own tooling.
  CWD: ../..
  CHECK: node Reverse/firmware/analysis/usb_v2/verify.mjs g0
  EXPECT: G0 ok

- [x] G1: enumerate every USB-related symbol/string in BOTH images (M55 + BTH) and classify
        each as device-stack, host-stack, charger/PMIC only, or build-host noise
  CWD: ../..
  CHECK: node Reverse/firmware/analysis/usb_v2/verify.mjs g1
  EXPECT: G1 ok

- [x] G2: decide whether a USB DEVICE stack is actually linked in, on the evidence — not
        merely whether the word "usb" appears
  CWD: ../..
  CHECK: node Reverse/firmware/analysis/usb_v2/verify.mjs g2
  EXPECT: G2 ok

- [x] G3: if a stack exists, identify the enable path (factory command, NV flag, key combo);
        if it does not, say so and state what the evidence rules out vs leaves open
  CWD: ../..
  CHECK: node Reverse/firmware/analysis/usb_v2/verify.mjs g3
  EXPECT: G3 ok

## Evidence (2026-09-04, exit 0)

G0 CONTROL passes: JBD=10, A2DP M55=37 / BTH=102, littlefs=14 distinct tokens.
G1 Only FOUR real USB tokens exist. Everything else is substring noise -- usButton,
   launcher_statUSBar_battery_* (statUSBar!), and cdc_* which is the AUDIO codec.
     "[CHG] vbus usb_enable:%d disable_reason:0x%x" @0x42290  -- charger subsystem
     "en_usb" @0x17101c   -- factory MMI command, ONE ref at 0x49106c
     "DRVUSB" @0x15db7c   -- entry in the BES trace-module NAME TABLE, beside
                             DRVANA/DRVCODEC/DRVBT/DRVFLS/DRVSEC. Not a driver.
     "DFU" @0x46b8d1      -- inside binary image data, noise.
G2 NO USB device stack in either image: 0 descriptors, 0 standard requests, 0 driver
   names, 0 class drivers. BT control = 4, so the probe works.
G3 The enable path is the factory MMI shell command `en_usb` ("enable usb", flags 0x101,
   handler file 0x51daf4). It parses one argument and sends a single byte -- 0xFE enable /
   0xFD disable -- through a vtable call at +0x58, returning RETURN:PASS / RETURN:FAIL.

## Verdict

There is an "enable usb" FACTORY COMMAND but NO USB device stack in the application
firmware. On this build the command most plausibly gates VBUS/charging, matching the
[CHG] string. That is consistent with the earlier hardware observation that the port
enumerates nothing.

## NOT ruled out (important)

BES USB download mode lives in the BOOTROM, which is not contained in either OTA image.
Absence from these files says nothing about a ROM-level mode entered by a pin strap,
key combo at power-on, or the dock connector. That remains the most promising recovery
route for the bricked unit and is UNTESTED.

ABANDON: G4 what the 0xFE/0xFD byte reaches. The vtable target was not resolved, so
what the receiving side does with it is unknown. HANDOFF REQUIRED.
