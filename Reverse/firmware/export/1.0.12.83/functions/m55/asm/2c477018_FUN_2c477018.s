; FUN_2c477018 @ 0x2c477018 size=32
  push {r3,lr}
  ldr r3,[0x2c477038]
  ldr r2,[r0,#0x0]
  cmp r2,r3
  bne 0x2c47702a
  pop.w {r3,lr}
  b.w 0x2c475708
  ldr r3,[0x2c47703c]
  movw r1,#0x155
  ldr r2,[0x2c477040]
  ldr r0,[0x2c477044]
  bl 0x2c668484
