; FUN_10050194 @ 0x10050194 size=40
  push {r0,r1,r2,lr}
  ldr r3,[0x100501bc]
  mov r1,r0
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x100501bc]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x100501b0
  bl 0x1013cdc0
  ldr r0,[0x100501c0]
  add sp,#0xc
  pop.w lr
  b.w 0x100a0350
