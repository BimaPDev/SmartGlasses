; FUN_140545bc @ 0x140545bc size=34
  cmp r0,#0x1
  bhi 0x140545da
  ldr r3,[0x140545e0]
  ldr.w r0,[r3,r0,lsl #0x2]
  cbz r0,0x140545d8
  ldrb.w r3,[r0,#0x43]
  ands r3,r3,#0x10
  beq 0x140545d6
  adds r0,#0x63
  bx lr
  mov r0,r3
  bx lr
  movs r0,#0x0
  bx lr
