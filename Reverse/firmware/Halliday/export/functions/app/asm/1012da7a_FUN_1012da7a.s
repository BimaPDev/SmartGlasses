; FUN_1012da7a @ 0x1012da7a size=38
  push {r4,lr}
  movs r4,#0x3c
  mov.w r3,#0xe10
  udiv r2,r1,r4
  udiv r3,r1,r3
  mls r1,r4,r2,r1
  uxtb r3,r3
  strb r3,[r0,#0x2]
  rsb r3,r3,r3, lsl #0x4
  sub.w r3,r2,r3, lsl #0x2
  strb r3,[r0,#0x1]
  strb r1,[r0,#0x0]
  pop {r4,pc}
