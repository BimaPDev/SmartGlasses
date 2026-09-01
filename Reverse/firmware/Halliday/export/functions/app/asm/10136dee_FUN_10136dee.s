; FUN_10136dee @ 0x10136dee size=42
  movs r3,#0x0
  push {r0,r1,r2,lr}
  add.w r2,sp,#0x7
  add.w r1,sp,#0x6
  strb.w r3,[sp,#0x6]
  strb.w r3,[sp,#0x7]
  bl 0x10131d80
  ldrb.w r0,[sp,#0x6]
  ldrb.w r3,[sp,#0x7]
  add r0,r3
  uxtb r0,r0
  add sp,#0xc
  pop.w pc
