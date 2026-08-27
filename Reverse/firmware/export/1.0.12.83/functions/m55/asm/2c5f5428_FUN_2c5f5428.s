; FUN_2c5f5428 @ 0x2c5f5428 size=36
  push {r4,r5,r6,lr}
  mov r4,r0
  ldr.w r5,[r0],#0x30
  bl 0x2c5f6a50
  add.w r0,r4,#0x44
  bl 0x2c5f6a50
  ldr r0,[r4,#0x4]
  bl 0x2c5fbc64
  ldr r3,[r5,#0x8]
  mov r0,r4
  pop.w {r4,r5,r6,lr}
  bx r3
