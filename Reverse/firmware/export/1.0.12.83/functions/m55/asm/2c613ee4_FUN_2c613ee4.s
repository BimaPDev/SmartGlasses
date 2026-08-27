; FUN_2c613ee4 @ 0x2c613ee4 size=32
  adds r2,r0,#0x1
  mov r3,r0
  beq 0x2c613f00
  ldr r2,[0x2c613f04]
  movs r1,#0x0
  add.w r12,r2,r0, lsl #0x3
  ldr.w r0,[r2,r0,lsl #0x3]
  str.w r1,[r2,r3,lsl #0x3]
  str.w r1,[r12,#0x4]
  bx lr
  movs r0,#0x0
  bx lr
