; FUN_2c4e6744 @ 0x2c4e6744 size=32
  cmp r0,#0x2
  push {r3,lr}
  bhi 0x2c4e6754
  mov.w r3,#0x2000
  movs r0,#0x0
  str r3,[r1,#0x4]
  pop {r3,pc}
  bl 0x2c6685e0
  movs r2,#0x9
  mov r3,r0
  mov.w r0,#0xffffffff
  str r2,[r3,#0x0]
  pop {r3,pc}
