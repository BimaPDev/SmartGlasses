; FUN_140e372c @ 0x140e372c size=34
  teq r0,#0x0
  itt eq
  mov.eq r1,#0x0
  bx.eq lr
  push {r4,r5,lr}
  mov.w r4,#0x400
  add.w r4,r4,#0x32
  ands r5,r0,#0x80000000
  it mi
  rsb.mi r0,r0
  mov.w r1,#0x0
  b 0x140e35cc
