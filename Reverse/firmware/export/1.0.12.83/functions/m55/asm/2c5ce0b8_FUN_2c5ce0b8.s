; FUN_2c5ce0b8 @ 0x2c5ce0b8 size=30
  push {r4,lr}
  ldr r4,[r0,#0xc]
  sub sp,#0x8
  cbz r4,0x2c5ce0d8
  ldr r0,[0x2c5ce0dc]
  mov.w r2,#0x116
  ldr r3,[0x2c5ce0e0]
  str r0,[sp,#0x0]
  movs r0,#0x4
  ldr r1,[0x2c5ce0e4]
  bl 0x2c62c82c
  add sp,#0x8
  pop {r4,pc}
