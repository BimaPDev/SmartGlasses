; FUN_2c5db774 @ 0x2c5db774 size=34
  push {r4,lr}
  sub sp,#0x8
  bl 0x2c621080
  mov r4,r0
  cbz r0,0x2c5db7b0
  ldr r0,[0x2c5db7b8]
  movw r2,#0x23a
  ldr r3,[0x2c5db7bc]
  ldr r1,[0x2c5db7c0]
  str r0,[sp,#0x0]
  movs r0,#0x4
  bl 0x2c62c82c
  add sp,#0x8
  pop {r4,pc}
