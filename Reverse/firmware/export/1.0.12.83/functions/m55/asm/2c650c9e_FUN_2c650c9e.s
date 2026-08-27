; FUN_2c650c9e @ 0x2c650c9e size=34
  mov r3,r1
  mov r1,r2
  cmp r3,#0x1
  push {r4}
  mov r4,r0
  bne 0x2c650cb2
  strb r2,[r4,#0x0]
  pop.w r4
  bx lr
  cmp r3,#0x0
  beq 0x2c650cac
  mov r2,r3
  pop.w r4
  b.w 0x2c674268
