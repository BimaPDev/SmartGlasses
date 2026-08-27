; FUN_14069164 @ 0x14069164 size=38
  cmp r0,#0x1
  bls 0x1406916c
  movs r0,#0x0
  bx lr
  ldr r3,[0x1406918c]
  adds r0,#0x22
  ldr.w r0,[r3,r0,lsl #0x2]
  cmp r0,#0x0
  beq 0x1406916a
  ldrb.w r0,[r0,#0x54]
  ands r0,r0,#0x2
  beq 0x1406916a
  movs r3,#0x0
  movs r0,#0x1
  strb r3,[r1,#0x0]
  bx lr
