; FUN_2c640ca0 @ 0x2c640ca0 size=36
  ldr r3,[0x2c640cc4]
  ldrb r3,[r3,#0x0]
  cmp r3,#0x1
  beq 0x2c640caa
  bx lr
  ldr r3,[0x2c640cc8]
  ldr r3,[r3,#0x0]
  cmp r3,#0x0
  beq 0x2c640ca8
  cmp r0,#0x0
  mov.w r2,#0x0
  mov r0,r3
  ite ne
  mov.ne r1,#0xff
  mov.eq r1,#0x4c
  b.w 0x2c606d90
