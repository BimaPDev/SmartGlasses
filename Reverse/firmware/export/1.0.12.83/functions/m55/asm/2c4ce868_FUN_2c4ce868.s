; FUN_2c4ce868 @ 0x2c4ce868 size=34
  push {r4,lr}
  mov.w r2,#0x258
  movs r1,#0x0
  mov r4,r0
  bl 0x2c674268
  movs r3,#0x0
  str.w r3,[r4,#0x258]
  str.w r3,[r4,#0x25c]
  strb.w r3,[r4,#0x260]
  strb.w r3,[r4,#0x261]
  pop {r4,pc}
