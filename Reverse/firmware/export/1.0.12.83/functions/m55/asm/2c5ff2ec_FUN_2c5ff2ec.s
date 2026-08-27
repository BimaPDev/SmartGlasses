; FUN_2c5ff2ec @ 0x2c5ff2ec size=40
  push {r4,lr}
  ldr r4,[0x2c5ff318]
  sub sp,#0x8
  ldr r0,[r4,#0x0]
  cbz r0,0x2c5ff302
  add sp,#0x8
  pop.w {r4,lr}
  b.w 0x2c602f64
  str r1,[sp,#0x4]
  bl 0x2c602d28
  ldr r1,[sp,#0x4]
  str r0,[r4,#0x0]
  add sp,#0x8
  pop.w {r4,lr}
  b.w 0x2c602f64
