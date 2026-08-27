; FUN_2c4ec7d0 @ 0x2c4ec7d0 size=26
  push {r3,lr}
  ldr r3,[0x2c4ec7ec]
  mov r12,r0
  mov r2,r1
  ldr r0,[0x2c4ec7f0]
  mov r1,r3
  strb.w r12,[r3,#0x0]
  str r2,[r3,#0x4]
  bl 0x2c4ec178
  movs r0,#0x1
  pop {r3,pc}
