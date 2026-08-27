; FUN_14066098 @ 0x14066098 size=22
  cmp r0,#0xa
  bhi 0x140660aa
  ldr r3,[0x140660b0]
  add.w r0,r0,r0, lsl #0x1
  add.w r0,r3,r0, lsl #0x2
  ldrb r0,[r0,#0xa]
  bx lr
  movs r0,#0x0
  bx lr
