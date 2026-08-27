; FUN_2c50c79c @ 0x2c50c79c size=30
  push {r4,r5,lr}
  ldr r2,[0x2c50c7f8]
  sub sp,#0x1c
  mov r4,r1
  ldr r5,[0x2c50c7fc]
  ldr r3,[0x2c50c800]
  movs r1,#0xdc
  str r4,[sp,#0x8]
  strd r2,r5,[sp,#0x0]
  ldr r2,[0x2c50c804]
  mov r5,r0
  movs r0,#0x4
  bl 0x2c673d88
