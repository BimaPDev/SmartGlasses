; FUN_2c490728 @ 0x2c490728 size=26
  push {r4,lr}
  mov r4,r0
  ldr r0,[r3,#0x4]
  bl 0x2c4e3898
  cbnz r0,0x2c490738
  movs r0,#0x0
  pop {r4,pc}
  movs r3,#0x0
  strd r3,r3,[r4,#0x8]
  str r3,[r4,#0x10]
  pop {r4,pc}
