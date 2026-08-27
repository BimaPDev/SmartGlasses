; FUN_2c650d4c @ 0x2c650d4c size=18
  ldr r3,[0x2c650d60]
  cmp r0,r3
  beq 0x2c650d5c
  movs r3,#0x0
  str r1,[r0,#0x0]
  str r3,[r0,#0x8]
  add r0,r1
  strb r3,[r0,#0xc]
  bx lr
