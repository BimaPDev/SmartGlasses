; FUN_2c50e6ec @ 0x2c50e6ec size=28
  push {r4,lr}
  ldr r4,[r0,#0x0]
  ldr r0,[r4,#0x8]
  cbz r0,0x2c50e702
  ldr.w r1,[r4,#0x98]
  movs r3,#0x0
  ldrb r2,[r1,#0x9]
  ldrb r1,[r1,#0x18]
  bl 0x2c50e398
  movs r3,#0x0
  str r3,[r4,#0x8]
  pop {r4,pc}
