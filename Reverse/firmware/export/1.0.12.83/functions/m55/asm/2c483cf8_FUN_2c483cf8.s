; FUN_2c483cf8 @ 0x2c483cf8 size=30
  push {r4,r5,lr}
  ldr r2,[0x2c483d30]
  sub sp,#0x14
  mov r4,r1
  ldr r5,[0x2c483d34]
  ldr r3,[0x2c483d38]
  movs r1,#0x53
  str r4,[sp,#0x8]
  strd r2,r5,[sp,#0x0]
  ldr r2,[0x2c483d3c]
  mov r5,r0
  movs r0,#0x4
  bl 0x2c673d88
