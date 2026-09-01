; FUN_10126e82 @ 0x10126e82 size=32
  push {r0,r1,r2,r5}
  movs r5,#0x0
  mov r3,r2
  mov r2,r5
  bfi r2,r5,#0x10,#0x10
  bfi r2,r1,#0x0,#0x10
  movs r1,#0x20
  strh.w r5,[sp,#0x0]
  add sp,#0xc
  pop.w r5
  b.w 0x10126ab0
