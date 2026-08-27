; FUN_2c5bb7ae @ 0x2c5bb7ae size=28
  push {r3,lr}
  ldr r3,[0x2c5bb7cc]
  ldr r2,[r0,#0x4]
  ldr r3,[r3,#0x0]
  cmp r2,r3
  beq 0x2c5bb7bc
  pop {r3,pc}
  bl 0x2c5bd4d0
  ldr r0,[r0,#0x10]
  pop.w {r3,lr}
  b.w 0x2c5bb700
