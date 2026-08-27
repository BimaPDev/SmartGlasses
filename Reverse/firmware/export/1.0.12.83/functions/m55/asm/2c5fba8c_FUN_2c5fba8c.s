; FUN_2c5fba8c @ 0x2c5fba8c size=24
  push {r3,r4,r5,lr}
  ldr r5,[r0,#0x0]
  ldr r4,[r1,#0x0]
  ldr r0,[r5,#0x4]
  ldr r1,[r4,#0x4]
  bl 0x2c66b624
  cbnz r0,0x2c5fbaa2
  ldr r0,[r5,#0x10]
  ldr r3,[r4,#0x10]
  subs r0,r0,r3
  pop {r3,r4,r5,pc}
