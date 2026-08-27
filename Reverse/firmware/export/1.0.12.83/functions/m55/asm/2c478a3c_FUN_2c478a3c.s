; FUN_2c478a3c @ 0x2c478a3c size=28
  push {r4,lr}
  mov r4,r1
  bl 0x2c482fc8
  cmp r0,#0x1
  beq 0x2c478a4c
  movs r0,#0xff
  pop {r4,pc}
  ldr r3,[0x2c478a58]
  str r4,[r3,#0x0]
  bl 0x2c47d190
  movs r0,#0x0
  pop {r4,pc}
