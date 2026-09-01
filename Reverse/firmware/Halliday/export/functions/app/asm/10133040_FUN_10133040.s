; FUN_10133040 @ 0x10133040 size=36
  push {r0,r1,r2,lr}
  movs r1,#0x6
  mov r0,sp
  bl 0x100c9b88
  cbnz r0,0x1013305e
  ldrb.w r3,[sp,#0x5]
  mov r0,sp
  and r3,r3,#0x3f
  strb.w r3,[sp,#0x5]
  bl 0x100c68b0
  add sp,#0xc
  pop.w pc
