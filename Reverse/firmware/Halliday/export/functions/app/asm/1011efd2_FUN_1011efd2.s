; FUN_1011efd2 @ 0x1011efd2 size=18
  push {r3,lr}
  ldr r3,[r0,#0x10]
  ldr r0,[r3,#0x14]
  ldrb r1,[r3,#0x18]
  ldr r3,[r0,#0x8]
  ldr r3,[r3,#0xc]
  blx r3
  movs r0,#0x0
  pop {r3,pc}
