; FUN_101194cc @ 0x101194cc size=34
  push {r4,lr}
  mov r4,r1
  movs r1,#0x1
  bl 0x10119374
  mov r2,r0
  cbnz r0,0x101194e6
  ldr r3,[0x101194f0]
  mov.w r1,#0x140
  ldr r0,[0x101194f4]
  bl 0x10117c88
  movs r3,#0x1
  str r4,[r0,#0x14]
  str r3,[r0,#0x10]
  pop {r4,pc}
