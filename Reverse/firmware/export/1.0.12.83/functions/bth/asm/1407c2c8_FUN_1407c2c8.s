; FUN_1407c2c8 @ 0x1407c2c8 size=40
  push {r4,r5,r6,lr}
  mov r4,r0
  mov r5,r1
  ldr r3,[0x1407c3a0]
  sub sp,#0x10
  ldr r3,[r3,#0x0]
  str r3,[sp,#0xc]
  mov.w r3,#0x0
  ldrb.w r3,[r4,#0x22]
  movs r0,#0x43
  str r3,[sp,#0x0]
  ldrb.w r3,[r4,#0x31]
  mov r2,r5
  ldr r1,[0x1407c3a4]
  mov r6,lr
  bl 0x1402a64c
