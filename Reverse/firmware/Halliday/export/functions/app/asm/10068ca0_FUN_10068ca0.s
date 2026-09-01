; FUN_10068ca0 @ 0x10068ca0 size=44
  push {r4,lr}
  mov r4,r0
  cbnz r0,0x10068cc2
  push {r0,r1,r2,r3}
  movw r3,#0x1c1
  ldr r2,[0x10068ccc]
  ldr r1,[0x10068cd0]
  ldr r0,[0x10068cd4]
  bl 0x10119dc2
  pop {r0,r1,r2,r3}
  movw r1,#0x1c1
  ldr r0,[0x10068ccc]
  bl 0x1011a1f0
  mov r0,r4
  pop.w {r4,lr}
  b.w 0x10113e2c
