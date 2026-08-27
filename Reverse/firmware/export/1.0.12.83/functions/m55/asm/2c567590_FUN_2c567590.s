; FUN_2c567590 @ 0x2c567590 size=44
  push {r4,r5,r6,lr}
  sub sp,#0x10
  ldr r5,[r3,#0x4]
  ldr r3,[0x2c56766c]
  mov r4,r0
  mov.w r0,#0x400
  ldr r3,[r3,#0x0]
  str r3,[sp,#0xc]
  mov.w r3,#0x0
  bl 0x2c620fa4
  bl 0x2c5c55d8
  movs r1,#0x0
  bl 0x2c5c5a38
  cbnz r0,0x2c5675ba
  ldr r3,[0x2c567670]
  ldr r5,[r3,#0x4]
  ldr r6,[0x2c567674]
