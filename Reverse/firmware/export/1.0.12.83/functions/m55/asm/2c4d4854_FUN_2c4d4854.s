; FUN_2c4d4854 @ 0x2c4d4854 size=32
  ldrb.w r3,[r0,#0x21]
  cmp r3,r1
  bls 0x2c4d4870
  adds r3,r0,r1
  ldrb.w r3,[r3,#0x22]
  cmp r3,r2
  bls 0x2c4d4870
  add r1,r2
  add.w r0,r0,r1, lsl #0x4
  ldr r0,[r0,#0xc]
  bx lr
  movs r0,#0x0
  bx lr
