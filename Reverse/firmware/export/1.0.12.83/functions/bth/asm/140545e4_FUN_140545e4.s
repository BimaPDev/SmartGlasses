; FUN_140545e4 @ 0x140545e4 size=36
  cmp r0,#0x1
  bhi 0x14054604
  ldr r3,[0x14054608]
  ldr.w r3,[r3,r0,lsl #0x2]
  cbz r3,0x14054600
  ldrb.w r0,[r3,#0x43]
  ands r0,r0,#0x10
  beq 0x14054602
  ldrb.w r0,[r3,#0x56]
  bx lr
  mov r0,r3
  bx lr
  movs r0,#0x0
  bx lr
