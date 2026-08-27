; FUN_2c2c4086 @ 0x2c2c4086 size=30
  push {r0,r2,r3,r4,r6,lr}
  lsls r4,r2,#0x1
  vst4.8 {d0,d1,d2,d3},[r7],r0
  cdp p14,0x0,cr15,cr1,cr15,0x7
  lsls r4,r5,#0x3
  stc2 p0,cr0,[r11,#0x0]
  movs r0,r0
  str r1,[sp,#0x30]
  movs r2,r2
  add r7,sp,#0x3c
  movs r0,r6
  udf #0x6
