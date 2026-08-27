; FUN_2c53c180 @ 0x2c53c180 size=28
  push {r4,lr}
  mov r4,r0
  bl 0x2c53c110
  movs r2,#0x1
  movs r1,#0x4
  ldr r3,[r4,#0x0]
  mov r0,r4
  strb.w r2,[r4,#0x3c]
  ldr r3,[r3,#0x18]
  pop.w {r4,lr}
  bx r3
