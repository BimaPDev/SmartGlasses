; FUN_10051ee4 @ 0x10051ee4 size=36
  push {r0,r1,r2,lr}
  ldr r3,[0x10051f08]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x10051f08]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x10051efe
  bl 0x1013cdc0
  add sp,#0xc
  pop.w lr
  b.w 0x10113e2c
