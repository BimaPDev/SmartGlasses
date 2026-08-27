; FUN_2c4820d8 @ 0x2c4820d8 size=28
  push {r4,r5,lr}
  ldr r1,[0x2c4820fc]
  sub sp,#0x14
  mov r4,r0
  ldr r5,[0x2c482100]
  ldr r3,[0x2c482104]
  movs r0,#0x4
  ldr r2,[0x2c482108]
  str r4,[sp,#0x8]
  strd r1,r5,[sp,#0x0]
  movs r1,#0xa2
  bl 0x2c673d88
