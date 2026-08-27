; FUN_2c50e69c @ 0x2c50e69c size=28
  push {r4,lr}
  ldr r4,[r0,#0x0]
  ldr r0,[r4,#0x4]
  cbz r0,0x2c50e6b2
  ldr.w r1,[r4,#0x94]
  movs r3,#0x1
  ldrb r2,[r1,#0x9]
  ldrb r1,[r1,#0x18]
  bl 0x2c50e398
  movs r3,#0x0
  str r3,[r4,#0x4]
  pop {r4,pc}
