; FUN_2c49dcbe @ 0x2c49dcbe size=34
  push {r4,r5,r6,lr}
  ldr r3,[r3,#0x48]
  sub sp,#0x8
  cmp r3,#0x1
  bne 0x2c49ddc0
  mov r4,r1
  cmp r0,#0x2b
  bhi 0x2c49dd0c
  tbb [pc,r0]
  movs r5,#0x0
  mov r0,r5
  add sp,#0x8
  pop {r4,r5,r6,pc}
  mov.w r5,#0xffffffff
  b 0x2c49dd0e
