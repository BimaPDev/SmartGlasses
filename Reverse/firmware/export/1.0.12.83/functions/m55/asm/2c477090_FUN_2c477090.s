; FUN_2c477090 @ 0x2c477090 size=32
  push {r3,lr}
  ldr r3,[0x2c4770b0]
  ldr r2,[r0,#0x0]
  cmp r2,r3
  bne 0x2c4770a2
  pop.w {r3,lr}
  b.w 0x2c4756d4
  ldr r3,[0x2c4770b4]
  movw r1,#0x17b
  ldr r2,[0x2c4770b8]
  ldr r0,[0x2c4770bc]
  bl 0x2c668484
