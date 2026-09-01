; FUN_101385d0 @ 0x101385d0 size=34
  push {r4,lr}
  bl 0x10138392
  ldrb r3,[r0,#0x4]
  ldr r2,[r0,#0x0]
  ldrb r2,[r2,r3]
  cmp r2,#0x29
  bne 0x101385ec
  adds r3,#0x1
  strb r3,[r0,#0x4]
  bl 0x10138382
  movs r0,#0x0
  pop {r4,pc}
  mvn r0,#0x3c
  b 0x101385ea
