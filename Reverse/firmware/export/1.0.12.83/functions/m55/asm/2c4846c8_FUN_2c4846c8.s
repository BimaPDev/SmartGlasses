; FUN_2c4846c8 @ 0x2c4846c8 size=22
  push {r3,r4,r5,lr}
  mov r4,r0
  add.w r5,r0,#0x10
  bl 0x2c66b19c
  strb.w r0,[r4],#0x1
  cmp r4,r5
  bne 0x2c4846d0
  pop {r3,r4,r5,pc}
