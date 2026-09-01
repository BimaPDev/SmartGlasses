; FUN_101217c0 @ 0x101217c0 size=26
  push {r4,lr}
  ldr r4,[r0,#0xc]
  ldr r3,[r4,#0x74]
  ldrb r2,[r3,#0x4]
  cbnz r2,0x101217d6
  ldrb r1,[r3,#0x1]
  bl 0x101215fc
  movs r2,#0x1
  ldr r3,[r4,#0x74]
  strb r2,[r3,#0x4]
  movs r0,#0x1
  pop {r4,pc}
