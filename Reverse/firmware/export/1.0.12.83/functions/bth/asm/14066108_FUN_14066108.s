; FUN_14066108 @ 0x14066108 size=34
  cmp r0,#0xa
  bhi 0x14066126
  ldr r3,[0x1406612c]
  add.w r2,r0,r0, lsl #0x1
  add.w r2,r3,r2, lsl #0x2
  ldrb r2,[r2,#0x9]
  cmp r2,#0xff
  beq 0x14066126
  add.w r0,r0,r0, lsl #0x1
  add.w r0,r3,r0, lsl #0x2
  bx lr
  movs r0,#0x0
  bx lr
