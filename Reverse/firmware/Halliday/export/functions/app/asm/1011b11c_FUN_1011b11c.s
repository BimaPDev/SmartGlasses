; FUN_1011b11c @ 0x1011b11c size=20
  push {r3,lr}
  ldr r3,[r0,#0x4]
  ldr r3,[r3,#0x0]
  strb r1,[r3,#0x10]
  cbz r1,0x1011b12c
  ldr r0,[r3,#0x0]
  bl 0x1011b0a8
  movs r0,#0x0
  pop {r3,pc}
