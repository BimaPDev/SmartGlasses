; FUN_2c528aec @ 0x2c528aec size=34
  push {r4,r5,lr}
  ldr r5,[0x2c528b84]
  sub sp,#0x14
  mov r4,r1
  ldr r3,[0x2c528b88]
  str r5,[sp,#0x0]
  mov.w r2,#0x370
  ldrb r1,[r1,#0x4]
  mov r5,r0
  movs r0,#0x4
  str r1,[sp,#0x8]
  ldr r1,[r4,#0x0]
  str r1,[sp,#0x4]
  ldr r1,[0x2c528b8c]
  bl 0x2c62c82c
