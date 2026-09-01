; FUN_10077be4 @ 0x10077be4 size=32
  ldr r2,[0x10077c04]
  ldr r3,[r2,#0x0]
  bic r3,r3,#0x3f
  cbnz r1,0x10077bfe
  orr r3,r3,#0x84
  str r3,[r2,#0x0]
  ldr r2,[0x10077c08]
  ldrb r3,[r2,#0x0]
  adds r3,#0x1
  strb r3,[r2,#0x0]
  bx lr
  orr r3,r3,#0x8c
  b 0x10077bf2
