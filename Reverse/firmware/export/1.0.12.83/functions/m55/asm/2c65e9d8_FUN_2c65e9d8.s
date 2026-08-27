; FUN_2c65e9d8 @ 0x2c65e9d8 size=34
  mov r3,r1
  mov r1,r2
  cmp r3,#0x1
  push {r4}
  mov r4,r0
  bne 0x2c65e9ec
  strb r2,[r4,#0x0]
  pop.w r4
  bx lr
  cmp r3,#0x0
  beq 0x2c65e9e6
  mov r2,r3
  pop.w r4
  b.w 0x2c674268
