; FUN_2c4d58b8 @ 0x2c4d58b8 size=44
  push {r3,r4,r5,lr}
  movs r2,#0xd1
  mov r4,r0
  mov r5,r1
  bl 0x2c66960c
  cbz r0,0x2c4d58e2
  ldrb.w r2,[r4,#0xce]
  ldrb.w r3,[r5,#0xce]
  cmp r2,r3
  bne 0x2c4d58de
  mov r1,r5
  mov r0,r4
  pop.w {r3,r4,r5,lr}
  b.w 0x2c4d4938
  mov.w r0,#0xffffffff
  pop {r3,r4,r5,pc}
