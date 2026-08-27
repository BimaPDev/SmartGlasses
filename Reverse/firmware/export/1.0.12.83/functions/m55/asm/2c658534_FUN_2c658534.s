; FUN_2c658534 @ 0x2c658534 size=40
  push {r3,lr}
  mov r3,r1
  ldr r1,[r0,#0x20]
  adds r2,r3,#0x1
  beq 0x2c658548
  mov r0,r3
  pop.w {r3,lr}
  b.w 0x2c66ae2c
  mov r0,r1
  bl 0x2c668794
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  rsbs r0,r0
  pop {r3,pc}
  b.w 0x2c66fdd4
