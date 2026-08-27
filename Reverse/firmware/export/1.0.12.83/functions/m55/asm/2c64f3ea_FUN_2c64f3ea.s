; FUN_2c64f3ea @ 0x2c64f3ea size=58
  push {r3,r4,r5,r6,r7,lr}
  ldr r3,[r1,#0x0]
  mvn r2,#0xe0000000
  mov r6,r1
  mov r7,r0
  ldr.w r5,[r3,#-0xc]
  adds r3,r5,#0x1
  cmp r3,r2
  ite cc
  lsl.cc r0,r3,#0x2
  mov.cs.w r0,#0xffffffff
  bl 0x2c64ca7e
  movs r3,#0x0
  mov r4,r0
  mov r1,r0
  mov r2,r5
  mov r0,r6
  bl 0x2c651448
  movs r3,#0x0
  mov r0,r5
  str r4,[r7,#0x0]
  str.w r3,[r4,r5,lsl #0x2]
  pop {r3,r4,r5,r6,r7,pc}
