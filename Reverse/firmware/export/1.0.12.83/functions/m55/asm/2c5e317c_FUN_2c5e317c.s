; FUN_2c5e317c @ 0x2c5e317c size=30
  push {r4,lr}
  cmp r0,#0x3
  sub sp,#0x8
  it eq
  mov.eq r4,#0x1
  ldrb.w r1,[sp,#0x10]
  it ne
  mov.ne r4,#0x0
  strd r1,r4,[sp,#0x0]
  bl 0x2c5e30a8
  add sp,#0x8
  pop {r4,pc}
