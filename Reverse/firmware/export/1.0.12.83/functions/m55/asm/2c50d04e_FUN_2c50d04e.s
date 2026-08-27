; FUN_2c50d04e @ 0x2c50d04e size=32
  push {r4,r5,lr}
  sub sp,#0x14
  mov r4,r0
  ldr r5,[0x2c50d080]
  bl 0x2c602410
  ldr r2,[0x2c50d084]
  movs r1,#0xa5
  ldr r3,[0x2c50d088]
  str r5,[sp,#0x0]
  strd r2,r0,[sp,#0x4]
  ldr r2,[0x2c50d08c]
  movs r0,#0x4
  bl 0x2c673d88
