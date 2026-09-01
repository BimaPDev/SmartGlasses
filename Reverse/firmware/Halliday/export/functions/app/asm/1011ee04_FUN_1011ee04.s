; FUN_1011ee04 @ 0x1011ee04 size=20
  push {r0,r1,r4,lr}
  ldr r4,[sp,#0x10]
  ldr r1,[r0,#0x8]
  str r4,[sp,#0x0]
  movs r4,#0x0
  str r4,[sp,#0x4]
  ldr r1,[r1,#0x8]
  blx r1
  add sp,#0x8
  pop {r4,pc}
