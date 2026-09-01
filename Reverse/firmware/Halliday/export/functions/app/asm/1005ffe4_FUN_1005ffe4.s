; FUN_1005ffe4 @ 0x1005ffe4 size=32
  push {r0,r1,r2,lr}
  movs r3,#0x6
  movs r2,#0x1
  movs r1,#0x0
  strd r3,r2,[sp,#0x0]
  movs r0,#0x44
  ldr r3,[0x10060004]
  bl 0x1011c114
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  add sp,#0xc
  pop.w pc
