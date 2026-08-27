; FUN_2c5cffc8 @ 0x2c5cffc8 size=24
  push {r4,lr}
  ldr r4,[r0,#0xc]
  cbz r4,0x2c5cffde
  ldr r0,[r4,#0xc]
  cbz r0,0x2c5cffda
  bl 0x2c6043d8
  movs r3,#0x0
  str r3,[r4,#0xc]
  movs r3,#0x0
  str r3,[r4,#0x1c]
  pop {r4,pc}
