; FUN_100bdac8 @ 0x100bdac8 size=32
  ldr r0,[0x100bdae8]
  ldrb r3,[r0,#0x0]
  cbz r3,0x100bdad4
  ldrb r3,[r0,#0x8]
  cbnz r3,0x100bdae4
  movs r3,#0x1
  mov r2,r3
  orn r3,r3,#0x7f
  strb.w r3,[r0,r2,lsl #0x3]
  add.w r0,r0,r2, lsl #0x3
  bx lr
  movs r0,#0x0
  bx lr
