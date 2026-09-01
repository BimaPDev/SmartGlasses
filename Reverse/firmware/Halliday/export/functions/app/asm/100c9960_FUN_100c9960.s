; FUN_100c9960 @ 0x100c9960 size=36
  push {r3,lr}
  ldr r3,[0x100c9984]
  ldr r1,[r3,#0x0]
  cbnz r1,0x100c9972
  mov r0,r3
  movs r2,#0x14
  bl 0x1011ea48
  mov r3,r0
  ldr r2,[0x100c9988]
  ldr r0,[0x100c9984]
  str r2,[r3,#0x4]
  movs r2,#0x5
  strh r2,[r3,#0x8]
  pop.w {r3,lr}
  b.w 0x100c3fac
