; FUN_2c4770c0 @ 0x2c4770c0 size=32
  push {r3,lr}
  ldr r3,[0x2c4770e0]
  ldr r2,[r0,#0x0]
  cmp r2,r3
  bne 0x2c4770d2
  pop.w {r3,lr}
  b.w 0x2c475708
  ldr r3,[0x2c4770e4]
  mov.w r1,#0x182
  ldr r2,[0x2c4770e8]
  ldr r0,[0x2c4770ec]
  bl 0x2c668484
