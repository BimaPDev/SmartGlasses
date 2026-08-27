; FUN_2c61929c @ 0x2c61929c size=20
  push {r4,lr}
  mov r0,r1
  mov r4,r1
  bl 0x2c60272c
  movs r3,#0xff
  str r0,[r4,#0x24]
  strb.w r3,[r4,#0x28]
  pop {r4,pc}
