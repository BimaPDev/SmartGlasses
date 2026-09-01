; FUN_1012a5c0 @ 0x1012a5c0 size=36
  push {r4,lr}
  mov r4,r1
  add.w r0,r1,#0x2c
  bl 0x1012a5b8
  add.w r0,r4,#0x44
  bl 0x1012a5b8
  add.w r0,r4,#0x5c
  bl 0x1012a5b8
  movs r3,#0x0
  strb.w r3,[r4,#0x74]
  pop {r4,pc}
