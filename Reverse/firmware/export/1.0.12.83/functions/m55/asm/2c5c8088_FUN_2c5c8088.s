; FUN_2c5c8088 @ 0x2c5c8088 size=44
  push {r4,r5,lr}
  sub sp,#0x14
  mov r5,r3
  mov r4,r0
  bl 0x2c5c685c
  bl 0x2c5c716c
  cbz r0,0x2c5c809e
  add sp,#0x14
  pop {r4,r5,pc}
  ldr r0,[0x2c5c80c8]
  movw r2,#0x277
  ldr r1,[0x2c5c80cc]
  str r0,[sp,#0x0]
  movs r0,#0x4
  ldr r3,[0x2c5c80d0]
  strd r5,r4,[sp,#0x4]
  bl 0x2c62c82c
