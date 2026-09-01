; FUN_10077c0c @ 0x10077c0c size=18
  ldr r2,[0x10077c20]
  ldrb r3,[r2,#0x0]
  subs r3,#0x1
  uxtb r3,r3
  strb r3,[r2,#0x0]
  cbnz r3,0x10077c1c
  ldr r2,[0x10077c24]
  str r3,[r2,#0x0]
  bx lr
