; FUN_14053dc8 @ 0x14053dc8 size=28
  cmp r0,#0x3
  bhi 0x14053de0
  ldr r3,[0x14053de4]
  ldrb r3,[r3,r0]
  cmp r3,#0xff
  beq 0x14053de0
  ldr r2,[0x14053de8]
  add.w r3,r3,r3, lsl #0x2
  ldr.w r0,[r2,r3,lsl #0x2]
  bx lr
  movs r0,#0x0
  bx lr
