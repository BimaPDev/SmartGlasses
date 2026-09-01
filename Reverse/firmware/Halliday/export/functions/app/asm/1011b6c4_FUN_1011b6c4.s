; FUN_1011b6c4 @ 0x1011b6c4 size=24
  push {r0,r1,r2,r3,r4,lr}
  ldr r4,[sp,#0x1c]
  ldr r1,[r0,#0x8]
  str r4,[sp,#0x8]
  movs r4,#0x0
  str r4,[sp,#0xc]
  ldr r4,[sp,#0x18]
  str r4,[sp,#0x0]
  ldr r1,[r1,#0x0]
  blx r1
  add sp,#0x10
  pop {r4,pc}
