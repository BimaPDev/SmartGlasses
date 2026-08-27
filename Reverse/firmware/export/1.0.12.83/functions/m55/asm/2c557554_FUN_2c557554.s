; FUN_2c557554 @ 0x2c557554 size=24
  cbz r0,0x2c557566
  adds r2,r1,#0x4
  ldr r1,[0x2c55756c]
  push {r3,lr}
  movs r3,#0x0
  bl 0x2c55700c
  movs r0,#0x0
  pop {r3,pc}
  mov.w r0,#0xffffffff
  bx lr
