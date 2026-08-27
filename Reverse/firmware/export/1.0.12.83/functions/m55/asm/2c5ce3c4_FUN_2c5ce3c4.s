; FUN_2c5ce3c4 @ 0x2c5ce3c4 size=36
  push {r4,lr}
  mov r0,r1
  sub sp,#0x8
  bl 0x2c621080
  cbz r0,0x2c5ce416
  mov r4,r0
  ldr r0,[0x2c5ce41c]
  ldr r3,[0x2c5ce420]
  movw r2,#0x145
  ldr r1,[0x2c5ce424]
  str r0,[sp,#0x0]
  movs r0,#0x4
  bl 0x2c62c82c
  add sp,#0x8
  pop {r4,pc}
