; FUN_2c4fd464 @ 0x2c4fd464 size=36
  push {r4,lr}
  ldr r0,[0x2c4fd520]
  sub sp,#0x28
  ldr r4,[0x2c4fd524]
  movw r1,#0x226
  ldr r3,[0x2c4fd528]
  ldr r2,[0x2c4fd52c]
  strd r0,r4,[sp,#0x0]
  ldr r4,[0x2c4fd530]
  movs r0,#0x4
  ldr r4,[r4,#0x0]
  str r4,[sp,#0x24]
  mov.w r4,#0x0
  bl 0x2c673d88
