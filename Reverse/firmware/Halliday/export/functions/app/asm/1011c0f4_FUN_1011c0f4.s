; FUN_1011c0f4 @ 0x1011c0f4 size=32
  push {r0,r1,r2,lr}
  ldrb.w r0,[sp,#0x14]
  str r0,[sp,#0x4]
  ldrh.w r0,[sp,#0x10]
  str r0,[sp,#0x0]
  movs r0,#0x44
  bl 0x10060e8c
  eor r0,r0,#0x1
  uxtb r0,r0
  add sp,#0xc
  pop.w pc
