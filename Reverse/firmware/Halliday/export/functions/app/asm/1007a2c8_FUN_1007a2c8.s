; FUN_1007a2c8 @ 0x1007a2c8 size=28
  push {r4,lr}
  ldr r4,[0x1007a2e4]
  movs r2,#0x14
  movs r1,#0x0
  add.w r0,r4,#0x128
  bl 0x1011ea48
  movs r3,#0x0
  strh.w r3,[r4,#0x154]
  strb.w r3,[r4,#0x157]
  pop {r4,pc}
