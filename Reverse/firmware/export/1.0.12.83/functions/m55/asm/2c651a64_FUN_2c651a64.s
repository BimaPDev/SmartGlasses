; FUN_2c651a64 @ 0x2c651a64 size=46
  push {r0,r1,r2,r4,r5,lr}
  mov r5,r0
  mov r4,r1
  cbz r1,0x2c651a8c
  mov r0,r1
  str r2,[sp,#0x4]
  bl 0x2c66ea0c
  ldr r2,[sp,#0x4]
  add.w r1,r4,r0, lsl #0x2
  mov.w r3,#0x0
  mov r0,r4
  bl 0x2c651a0c
  str r0,[r5,#0x0]
  mov r0,r5
  add sp,#0xc
  pop {r4,r5,pc}
  mvn r1,#0x3
  b 0x2c651a7a
