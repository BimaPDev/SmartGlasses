; FUN_2c614f7a @ 0x2c614f7a size=24
  push {r4,lr}
  mov r4,r0
  bl 0x2c62c3b0
  movs r1,#0xff
  mov.w r2,#0xff000000
  movs r3,#0x1
  strb r1,[r4,#0x10]
  str r2,[r4,#0x0]
  strh r3,[r4,#0x4]
  pop {r4,pc}
