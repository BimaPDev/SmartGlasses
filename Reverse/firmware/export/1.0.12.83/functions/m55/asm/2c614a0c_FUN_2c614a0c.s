; FUN_2c614a0c @ 0x2c614a0c size=46
  push {r4,lr}
  mov r4,r0
  movs r1,#0x3c
  bl 0x2c62c3b0
  mov.w r2,#0xff000000
  ldrb.w r3,[r4,#0x38]
  movs r0,#0xff
  mov.w r1,#0x100
  str r2,[r4,#0x2c]
  orr r3,r3,#0x1
  movs r2,#0x0
  strb.w r0,[r4,#0x31]
  strh r1,[r4,#0x2]
  strb r2,[r4,#0x8]
  strb.w r3,[r4,#0x38]
  pop {r4,pc}
