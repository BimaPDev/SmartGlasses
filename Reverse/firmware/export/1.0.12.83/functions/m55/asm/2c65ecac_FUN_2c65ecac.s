; FUN_2c65ecac @ 0x2c65ecac size=30
  push {r4,lr}
  ldr r4,[r0,#0x4]
  mov r3,r0
  cmp r4,r1
  bcs 0x2c65ecbe
  subs r1,r1,r4
  bl 0x2c65ec98
  pop {r4,pc}
  itttt hi
  ldr.hi r3,[r0,#0x0]
  mov.hi r2,#0x0
  str.hi r1,[r0,#0x4]
  strb.hi r2,[r3,r1]
  b 0x2c65ecbc
