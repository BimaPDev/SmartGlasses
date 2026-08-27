; FUN_2c00b2e8 @ 0x2c00b2e8 size=36
  adds r3,#0x1
  ldr r2,[0x2c00b330]
  mov r0,r4
  bl 0x2c013dac
  ldr r3,[0x2c00b31c]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x44]
  eors r2,r3
  mov.w r3,#0x0
  bne 0x2c00b316
  mov r0,r4
  add sp,#0x4c
  pop.w {r4,r5,r6,r7,r8,r9,pc}
  bl 0x2c0084a8
