; FUN_2c4c2c50 @ 0x2c4c2c50 size=36
  push {r4,r5,lr}
  ldr r3,[0x2c4c2cc8]
  sub sp,#0x1c
  mov r5,r1
  ldr r1,[0x2c4c2ccc]
  mov r4,r0
  ldr r2,[0x2c4c2cd0]
  str r1,[sp,#0x0]
  mov.w r1,#0x164
  strd r3,r0,[sp,#0x4]
  strd r5,lr,[sp,#0xc]
  ldr r3,[0x2c4c2cd4]
  movs r0,#0x4
  bl 0x2c673d88
