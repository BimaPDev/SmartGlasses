; FUN_2c4f9014 @ 0x2c4f9014 size=40
  push {r4,r5,lr}
  ldr r1,[0x2c4f90b4]
  sub sp,#0x2c
  mov r5,r0
  mov r4,r3
  ldr r0,[0x2c4f90b8]
  ldr r2,[0x2c4f90bc]
  ldr r3,[0x2c4f90c0]
  str r2,[sp,#0x0]
  ldr r2,[0x2c4f90c4]
  strd r1,r4,[sp,#0x4]
  movs r1,#0x25
  ldr r0,[r0,#0x0]
  str r0,[sp,#0x24]
  mov.w r0,#0x0
  movs r0,#0x4
  bl 0x2c673d88
