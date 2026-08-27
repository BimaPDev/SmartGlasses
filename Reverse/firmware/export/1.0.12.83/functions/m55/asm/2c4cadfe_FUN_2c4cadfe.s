; FUN_2c4cadfe @ 0x2c4cadfe size=28
  push {r4,lr}
  sub sp,#0x8
  ldrsb.w r4,[r1,#0x2]
  ldrb r3,[r1,#0x3]
  ldrsb.w r2,[r1,#0x0]
  ldrb r1,[r1,#0x1]
  str r4,[sp,#0x0]
  bl 0x2c4cf21c
  movs r0,#0x0
  add sp,#0x8
  pop {r4,pc}
