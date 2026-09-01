; FUN_1013caa0 @ 0x1013caa0 size=28
  ldr r3,[r0,#0xc]
  push {r4,lr}
  bic r2,r3,#0x8
  ubfx r4,r3,#0x3,#0x1
  lsls r3,r3,#0x1c
  str r2,[r0,#0xc]
  bpl 0x1013cab8
  adds r0,#0x10
  bl 0x1013cdcc
  mov r0,r4
  pop {r4,pc}
