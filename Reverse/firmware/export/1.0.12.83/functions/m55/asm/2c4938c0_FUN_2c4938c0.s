; FUN_2c4938c0 @ 0x2c4938c0 size=40
  push {r4,lr}
  ldr r1,[0x2c4938ec]
  sub sp,#0x10
  movs r0,#0x1
  ldr r4,[0x2c4938f0]
  bl 0x2c492880
  bl 0x2c4931b0
  ldr r1,[0x2c4938f4]
  ldr r3,[0x2c4938f8]
  ldr r2,[0x2c4938fc]
  str r4,[sp,#0x0]
  strd r1,r0,[sp,#0x4]
  mov.w r1,#0x2c4
  movs r0,#0x4
  bl 0x2c673d88
