; FUN_2c4b5e70 @ 0x2c4b5e70 size=54
  push {r4}
  ldr r4,[0x2c4b5ea8]
  movs r3,#0x0
  mov r2,r4
  ldrsb.w r1,[r2,#0x1]!
  add.w r12,r3,#0x1
  cmp r1,r0
  bgt 0x2c4b5e92
  mov r3,r12
  cmp r3,#0x7
  bne 0x2c4b5e78
  mov r0,r12
  pop.w r4
  bx lr
  ldrsb r2,[r4,r3]
  pop.w r4
  add r1,r2
  cmp.w r1,r0, lsl #0x1
  ite gt
  mov.gt r0,r3
  mov.le r0,r12
  bx lr
