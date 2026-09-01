; FUN_100e7ccc @ 0x100e7ccc size=38
  push {r4,lr}
  ldr r4,[0x100e7cf4]
  ldr r3,[r4,#0x0]
  cmp r3,r0
  bne 0x100e7cf0
  ldr r3,[r4,#0x60]
  cbz r3,0x100e7cec
  add.w r0,r4,#0x30
  bl 0x1013cb84
  movs r0,#0xa
  bl 0x1011dbc8
  movs r3,#0x0
  str r3,[r4,#0x60]
  movs r3,#0x0
  str r3,[r4,#0x0]
  pop {r4,pc}
