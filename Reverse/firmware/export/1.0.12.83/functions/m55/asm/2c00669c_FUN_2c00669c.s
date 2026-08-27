; FUN_2c00669c @ 0x2c00669c size=18
  orrs r3,r2
  strb.w r3,[r1,lr]
  b 0x2c005ff4
  push {r0}
  ldr r0,[0x2c013d18]
  mov r12,r0
  pop {r0}
  bx r12
