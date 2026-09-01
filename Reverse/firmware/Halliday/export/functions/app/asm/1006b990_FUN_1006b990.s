; FUN_1006b990 @ 0x1006b990 size=34
  mov r2,r0
  ldr r0,[0x1006b9b4]
  ldr r3,[r0,#0x4]
  mov r1,r0
  cbz r3,0x1006b9a0
  ldr r3,[r0,#0x0]
  cmp r2,r3
  beq 0x1006b9b0
  ldr r0,[r1,#0xc]
  cbz r0,0x1006b9b0
  ldr r0,[r1,#0x8]
  ldr r3,[0x1006b9b8]
  cmp r2,r0
  ite eq
  mov.eq r0,r3
  mov.ne r0,#0x0
  bx lr
