; FUN_2c5a8000 @ 0x2c5a8000 size=40
  push {r4,r5,r6,r7,r8,lr}
  mov r4,r0
  sub sp,#0x98
  ldr r0,[0x2c5a80b4]
  movw r2,#0x245
  ldr r5,[0x2c5a80b8]
  ldr r3,[0x2c5a80bc]
  str r5,[sp,#0x0]
  ldr r0,[r0,#0x0]
  str r0,[sp,#0x94]
  mov.w r0,#0x0
  ldrb r0,[r4,#0x10]
  ldr r1,[0x2c5a80c0]
  str r0,[sp,#0x4]
  movs r0,#0x4
  bl 0x2c62c82c
