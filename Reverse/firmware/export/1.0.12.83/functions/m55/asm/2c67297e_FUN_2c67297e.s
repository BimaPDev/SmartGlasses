; FUN_2c67297e @ 0x2c67297e size=24
  push {r4,r5,lr}
  mov.w r4,#0x400
  add.w r4,r4,#0x32
  ands r5,r0,#0x80000000
  it mi
  rsb.mi r0,r0
  mov.w r1,#0x0
  b 0x2c672814
