; FUN_2c6120a0 @ 0x2c6120a0 size=26
  movs r1,#0xc
  push {r4,lr}
  mov r4,r0
  bl 0x2c62c3b0
  movs r1,#0xff
  mov.w r2,#0xff000000
  movs r3,#0x1
  strb r1,[r4,#0xa]
  str r2,[r4,#0x0]
  strh r3,[r4,#0x4]
  pop {r4,pc}
