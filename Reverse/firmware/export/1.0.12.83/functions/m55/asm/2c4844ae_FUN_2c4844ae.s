; FUN_2c4844ae @ 0x2c4844ae size=22
  push {r3,r4,r5,lr}
  mov r4,r0
  adds r5,r0,r1
  bl 0x2c66b19c
  strb.w r0,[r4],#0x1
  cmp r4,r5
  bne 0x2c4844b4
  movs r0,#0x1
  pop {r3,r4,r5,pc}
