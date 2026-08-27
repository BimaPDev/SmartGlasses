; FUN_2c4b8d38 @ 0x2c4b8d38 size=34
  push {r4,r5,r6,lr}
  ldr r4,[0x2c4b8f00]
  sub sp,#0x18
  ldr r2,[0x2c4b8f04]
  mov r5,r1
  str r4,[sp,#0x0]
  movw r1,#0x131a
  ldr r4,[0x2c4b8f08]
  ldr r3,[0x2c4b8f0c]
  str r5,[sp,#0xc]
  strd r2,r0,[sp,#0x4]
  ldr r2,[0x2c4b8f10]
  movs r0,#0x4
  bl 0x2c673d88
