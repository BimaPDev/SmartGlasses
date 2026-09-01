; FUN_1011f3b4 @ 0x1011f3b4 size=46
  ldr r3,[r0,#0x4]
  push {r4,lr}
  ldr r4,[r0,#0x10]
  ldr r0,[r3,#0x0]
  bl 0x10112e84
  str r0,[r4,#0x0]
  cbz r0,0x1011f3dc
  movs r0,#0x0
  ldrb r3,[r4,#0x8]
  bic r3,r3,#0x3
  strb r3,[r4,#0x8]
  ldrb.w r3,[r4,#0x810]
  bic r3,r3,#0x3
  strb.w r3,[r4,#0x810]
  pop {r4,pc}
  mvn r0,#0x15
  b 0x1011f3da
