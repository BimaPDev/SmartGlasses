; FUN_14029378 @ 0x14029378 size=32
  push {r4}
  mov.w r0,#0x4000
  movs r4,#0x1
  ldr r3,[0x14029398]
  ldr r1,[0x1402939c]
  ldr r2,[r3,#0x28]
  bic r2,r2,#0x80
  str r2,[r3,#0x28]
  str r4,[r3,#0x2c]
  str.w r0,[r1,#0x184]
  pop.w r4
  bx lr
