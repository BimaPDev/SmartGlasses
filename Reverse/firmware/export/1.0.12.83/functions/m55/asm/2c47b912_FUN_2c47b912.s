; FUN_2c47b912 @ 0x2c47b912 size=28
  push {r4,r5,r6,lr}
  ldr r5,[0x2c47b938]
  movs r4,#0x0
  ldr r3,[0x2c47b93c]
  ldr r0,[r5,#0x0]
  strb r4,[r3,#0x0]
  bl 0x2c644958
  mov r0,r4
  str r4,[r5,#0x0]
  pop.w {r4,r5,r6,lr}
  b.w 0x2c479a80
