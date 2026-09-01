; FUN_100a61b0 @ 0x100a61b0 size=40
  ldr r3,[0x100a61cc]
  ldrb r3,[r3,#0x2]
  lsls r2,r3,#0x1d
  bpl 0x100a61bc
  b.w 0x1012db98
  tst r3,#0x8
  ite ne
  mvn.ne r0,#0x4
  mov.eq r0,#0x0
  bx lr
  push {r3,lr}
  bl 0x100a623c
  pop.w {r3,lr}
  b.w 0x1012dbca
