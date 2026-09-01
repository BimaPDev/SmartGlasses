; FUN_100dd5f4 @ 0x100dd5f4 size=34
  ldr r3,[0x100dd618]
  ldrb r2,[r3,#0x4]
  cmp r2,r0
  beq 0x100dd60e
  ldrb.w r2,[r3,#0x20]
  cmp r2,r0
  bne 0x100dd612
  movs r0,#0x1
  movs r2,#0x1c
  mla r0,r2,r0,r3
  bx lr
  movs r0,#0x0
  b 0x100dd606
  movs r0,#0x0
  bx lr
