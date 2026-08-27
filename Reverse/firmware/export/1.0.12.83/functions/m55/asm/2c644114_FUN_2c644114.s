; FUN_2c644114 @ 0x2c644114 size=32
  push {r3,r4,r5,lr}
  mov r4,r0
  mov r5,r1
  bl 0x2c646854
  cmp r4,r0
  bne 0x2c64412e
  mov r0,r5
  bl 0x2c646b44
  cmp r0,#0x0
  blt 0x2c64412e
  pop {r3,r4,r5,pc}
  mov.w r0,#0x80000000
  pop {r3,r4,r5,pc}
