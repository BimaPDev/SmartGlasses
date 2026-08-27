; FUN_2c5a8314 @ 0x2c5a8314 size=22
  push {r4,lr}
  str r1,[r0,#0xc]
  mov r1,r3
  strb r3,[r0,#0x11]
  mov r4,r0
  strb r2,[r0,#0x10]
  bl 0x2c5a8198
  movs r3,#0x0
  str r3,[r4,#0x18]
  pop {r4,pc}
