; FUN_10053b4c @ 0x10053b4c size=56
  ldr r3,[r0,#0x8]
  push {r4,lr}
  cmp.w r3,#0x8000
  ite cs
  mov.cs r3,#0x8
  mov.cc r3,#0x4
  add.w r1,r3,r1, lsl #0x3
  ite cs
  mov.cs r3,#0x7
  mov.cc r3,#0x3
  adds r4,r0,r1
  tst r4,r3
  beq 0x10053b80
  movs r2,#0x10
  ldr r1,[0x10053b84]
  ldr r0,[0x10053b88]
  bl 0x10119dc2
  eors r0,r0
  msr basepri,r0
  mov.w r0,#0x4
  svc 0x2
  mov r0,r4
  pop {r4,pc}
