; FUN_2c5cdee0 @ 0x2c5cdee0 size=42
  push {r4,lr}
  ldr r4,[r0,#0xc]
  sub sp,#0x8
  cbz r4,0x2c5cdefa
  mov r0,r4
  bl 0x2c5cda48
  mov r0,r4
  add sp,#0x8
  pop.w {r4,lr}
  b.w 0x2c5cdde8
  ldr r4,[0x2c5cdf10]
  movs r2,#0x48
  ldr r3,[0x2c5cdf14]
  movs r0,#0x3
  ldr r1,[0x2c5cdf18]
  str r4,[sp,#0x0]
  bl 0x2c62c82c
