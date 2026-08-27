; FUN_2c52fb12 @ 0x2c52fb12 size=28
  push {r3,lr}
  mov.w r12,#0x12
  ldr r1,[r0,#0x0]
  ldr r2,[0x2c52fb30]
  strb.w r12,[r0,#0x4]
  ldr r3,[r1,#0x10]
  cmp r3,r2
  bne 0x2c52fb2a
  movs r0,#0x0
  pop {r3,pc}
  blx r3
  b 0x2c52fb26
