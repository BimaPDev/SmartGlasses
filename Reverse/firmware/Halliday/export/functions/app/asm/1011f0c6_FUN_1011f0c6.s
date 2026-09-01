; FUN_1011f0c6 @ 0x1011f0c6 size=34
  push {r4,lr}
  ldr r4,[r0,#0x4]
  ldrb r0,[r4,#0xc]
  bl 0x1011a68e
  ldrb r3,[r4,#0xa]
  movs r0,#0x0
  lsls r3,r3,#0xe
  add.w r3,r3,#0x40000000
  add.w r3,r3,#0x88000
  ldr r2,[r3,#0x0]
  orr r2,r2,#0x20
  str r2,[r3,#0x0]
  pop {r4,pc}
