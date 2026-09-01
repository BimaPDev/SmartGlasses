; FUN_1012ddd6 @ 0x1012ddd6 size=26
  push {r0,r1,r2,r3,r4,lr}
  ldr r4,[sp,#0x1c]
  ldr r1,[r0,#0x8]
  str r4,[sp,#0x8]
  movs r4,#0x0
  str r4,[sp,#0xc]
  ldr r4,[sp,#0x18]
  str r4,[sp,#0x0]
  ldr r1,[r1,#0x4]
  blx r1
  uxtb r0,r0
  add sp,#0x10
  pop {r4,pc}
