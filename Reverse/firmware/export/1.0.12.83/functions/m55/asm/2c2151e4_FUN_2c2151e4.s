; FUN_2c2151e4 @ 0x2c2151e4 size=20
  push {r1,r2,r3,r4,r5,r6,r7,lr}
  movs r0,r0
  sxth r1,r0
  movs r0,r0
  lsls r2,r6,#0x2
  cdp2 p0,0x8,cr0,cr13,cr5,0x6
  nop
  lsls r0,r4,#0x1
  b 0x2c215678
