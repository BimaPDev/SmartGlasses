; FUN_1409b088 @ 0x1409b088 size=36
  push {r4,lr}
  ldr r4,[0x1409b0ac]
  ldr r3,[r4,#0x0]
  cbz r3,0x1409b09a
  movs r2,#0xff
  ldr r3,[0x1409b0b0]
  movs r0,#0x0
  strb r2,[r3,#0x19]
  pop {r4,pc}
  ldr r0,[0x1409b0b4]
  bl 0x140e5138
  movs r2,#0xff
  ldr r3,[0x1409b0b0]
  str r0,[r4,#0x0]
  strb r2,[r3,#0x19]
  movs r0,#0x0
  pop {r4,pc}
