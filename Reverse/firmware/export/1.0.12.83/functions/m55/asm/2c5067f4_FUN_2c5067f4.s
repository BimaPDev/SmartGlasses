; FUN_2c5067f4 @ 0x2c5067f4 size=36
  push {r3,r4,r5,lr}
  mov r4,r0
  ldr r3,[r2,#0x0]
  ldr r5,[0x2c506818]
  ldr r3,[r3,#0x48]
  strd r5,r1,[r0,#0x0]
  mov r0,r2
  str r2,[r4,#0x8]
  blx r3
  mov r3,r0
  mov r0,r4
  cmp r3,#0x2
  ite ls
  mov.ls r3,#0x0
  mov.hi r3,#0x1
  strb r3,[r4,#0xc]
  pop {r3,r4,r5,pc}
