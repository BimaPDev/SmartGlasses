; FUN_1011f890 @ 0x1011f890 size=24
  push {r0,r1,r2,lr}
  ldr r1,[sp,#0x10]
  ldr r3,[r0,#0x8]
  str r1,[sp,#0x0]
  movs r1,#0x0
  str r1,[sp,#0x4]
  ldr r1,[r3,#0x8]
  asrs r3,r2,#0x1f
  blx r1
  add sp,#0xc
  pop.w pc
