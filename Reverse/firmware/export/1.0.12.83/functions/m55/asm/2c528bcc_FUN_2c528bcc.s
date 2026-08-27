; FUN_2c528bcc @ 0x2c528bcc size=28
  push {r4,r5,lr}
  ldr r5,[0x2c528c04]
  sub sp,#0xc
  mov r4,r0
  ldr r3,[0x2c528c08]
  str r5,[sp,#0x0]
  mov r5,r1
  ldrb r1,[r0,#0x0]
  movs r2,#0x4f
  movs r0,#0x4
  str r1,[sp,#0x4]
  ldr r1,[0x2c528c0c]
  bl 0x2c62c82c
