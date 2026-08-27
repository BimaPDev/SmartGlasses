; FUN_2c476fe8 @ 0x2c476fe8 size=32
  push {r3,lr}
  ldr r3,[0x2c477008]
  ldr r2,[r0,#0x0]
  cmp r2,r3
  bne 0x2c476ffa
  pop.w {r3,lr}
  b.w 0x2c4756d4
  ldr r3,[0x2c47700c]
  mov.w r1,#0x14e
  ldr r2,[0x2c477010]
  ldr r0,[0x2c477014]
  bl 0x2c668484
