; FUN_2c4fcfc4 @ 0x2c4fcfc4 size=40
  push {r4,r5,lr}
  ldr r1,[0x2c4fd020]
  sub sp,#0x3c
  ldr r5,[0x2c4fd024]
  mov r4,r0
  ldr r3,[0x2c4fd028]
  movs r0,#0x4
  ldr r2,[0x2c4fd02c]
  str r4,[sp,#0x8]
  strd r1,r5,[sp,#0x0]
  ldr r5,[0x2c4fd030]
  mov.w r1,#0x1b6
  ldr r5,[r5,#0x0]
  str r5,[sp,#0x34]
  mov.w r5,#0x0
  bl 0x2c673d88
