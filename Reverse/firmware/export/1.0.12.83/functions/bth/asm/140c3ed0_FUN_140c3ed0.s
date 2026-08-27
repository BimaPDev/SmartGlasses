; FUN_140c3ed0 @ 0x140c3ed0 size=18
  ldr r3,[0x140c3ee4]
  cmp r0,r3
  beq 0x140c3ee0
  movs r3,#0x0
  str r1,[r0,#0x0]
  str r3,[r0,#0x8]
  add r0,r1
  strb r3,[r0,#0xc]
  bx lr
