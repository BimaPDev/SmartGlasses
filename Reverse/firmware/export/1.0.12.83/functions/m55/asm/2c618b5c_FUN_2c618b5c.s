; FUN_2c618b5c @ 0x2c618b5c size=42
  push {r4,lr}
  mov r4,r1
  movs r1,#0x18
  add.w r0,r4,#0x24
  bl 0x2c62c3b0
  movs r1,#0x18
  add.w r0,r4,#0x3c
  bl 0x2c62c3b0
  movs r1,#0x18
  add.w r0,r4,#0x54
  bl 0x2c62c3b0
  movs r3,#0x0
  strb.w r3,[r4,#0x6c]
  pop {r4,pc}
