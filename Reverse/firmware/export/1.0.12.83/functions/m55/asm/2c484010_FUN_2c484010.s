; FUN_2c484010 @ 0x2c484010 size=32
  push {r4,r5,r6,lr}
  ldr r2,[0x2c4840d0]
  sub sp,#0x10
  ldr r6,[0x2c4840d4]
  mov r4,r1
  mov r5,r0
  ldr r3,[0x2c4840d8]
  str r2,[sp,#0x0]
  movs r0,#0x4
  ldr r2,[0x2c4840dc]
  strd r6,r1,[sp,#0x4]
  movs r1,#0xb1
  ldr r6,[0x2c4840e0]
  bl 0x2c673d88
