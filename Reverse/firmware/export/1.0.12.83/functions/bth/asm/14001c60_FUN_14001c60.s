; FUN_14001c60 @ 0x14001c60 size=30
  ldr r2,[0x14001c80]
  ldr.w r2,[r2,r0,lsl #0x2]
  lsls r2,r2,#0x1f
  bpl 0x14001c72
  ldr r2,[0x14001c84]
  ldrb r1,[r2,r0]
  cbnz r1,0x14001c7a
  bx lr
  ldr r2,[0x14001c88]
  ldrb r1,[r2,r0]
  cmp r1,#0x0
  beq 0x14001c70
  b.w 0x140017d0
