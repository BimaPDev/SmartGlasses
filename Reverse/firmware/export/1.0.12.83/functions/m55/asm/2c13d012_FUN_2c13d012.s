; FUN_2c13d012 @ 0x2c13d012 size=38
  movs r2,#0x0
  push {r4,lr}
  sub sp,#0x8
  ldrd r3,r4,[r2,#0x8]
  strd r3,r4,[sp,#0x0]
  movs r0,#0x3
  ldrd r2,r3,[r2,#0x0]
  ldr r1,[0x2c13d038]
  bl 0x2c13ad14
  ldr r0,[0x2c13d03c]
  add sp,#0x8
  pop.w {r4,lr}
  b.w 0x2c13ce24
