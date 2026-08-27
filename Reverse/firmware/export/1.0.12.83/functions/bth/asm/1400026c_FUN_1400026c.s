; FUN_1400026c @ 0x1400026c size=26
  mov.w r3,#0x4000
  push {r4,lr}
  mov.w r4,#0x40000000
  movs r0,#0x2
  str r3,[r4,#0x60]
  bl 0x14000770
  mov.w r3,#0x2000
  str r3,[r4,#0x60]
  pop {r4,pc}
