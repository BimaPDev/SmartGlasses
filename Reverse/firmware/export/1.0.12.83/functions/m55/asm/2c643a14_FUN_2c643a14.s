; FUN_2c643a14 @ 0x2c643a14 size=34
  push {r4,lr}
  sub sp,#0x10
  cbz r0,0x2c643a36
  ldr r0,[r0,#0x4]
  ldr r4,[0x2c643a3c]
  ldr r3,[0x2c643a40]
  ldr r2,[0x2c643a44]
  str r4,[sp,#0x0]
  strd r0,r1,[sp,#0x4]
  movw r1,#0x221
  movs r0,#0x4
  bl 0x2c673d88
  ldr r0,[0x2c643a48]
  b 0x2c643a1c
