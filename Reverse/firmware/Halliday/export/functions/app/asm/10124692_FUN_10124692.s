; FUN_10124692 @ 0x10124692 size=18
  ldr r3,[r0,#0x0]
  ldrb r3,[r3,#0x0]
  cmp r3,#0x2
  beq 0x1012469e
  cmp r3,#0x4
  bne 0x101246a2
  str.w r1,[r0,#0x80]
  bx lr
