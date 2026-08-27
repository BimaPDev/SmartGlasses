; FUN_2c490414 @ 0x2c490414 size=36
  push {r4,r5,lr}
  mov.w r3,#0x142
  sub sp,#0x1c
  mov r4,r1
  ldr r5,[0x2c490440]
  ldr r0,[0x2c490444]
  mov r1,r3
  str r4,[sp,#0x10]
  str r0,[sp,#0x0]
  movs r0,#0x4
  str r5,[sp,#0x4]
  strd r3,r2,[sp,#0x8]
  ldr r3,[0x2c490448]
  ldr r2,[0x2c49044c]
  bl 0x2c673d88
