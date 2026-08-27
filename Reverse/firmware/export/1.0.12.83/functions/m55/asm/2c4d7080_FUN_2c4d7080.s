; FUN_2c4d7080 @ 0x2c4d7080 size=36
  mov r3,r0
  ldr r0,[r0,#0x8]
  cbnz r0,0x2c4d70a0
  ldr r0,[r3,#0x0]
  cbz r0,0x2c4d70a0
  ldr r3,[r3,#0x4]
  cmp r3,r2
  bls 0x2c4d70a0
  add.w r3,r0,r2, lsl #0x3
  ldrb r3,[r3,#0x4]
  cmp r3,r1
  bls 0x2c4d70a0
  ldr.w r3,[r0,r2,lsl #0x3]
  ldrb r1,[r3,r1]
  mov r0,r1
  bx lr
