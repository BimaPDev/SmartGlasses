; FUN_2c43f3ea @ 0x2c43f3ea size=32
  movs r1,#0xdf
  vstmia r8,{s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14}
  add r0,sp,#0x2c0
  adds r1,r1,#0x4
  subs r4,#0x52
  strh r7,[r0,#0x20]
  ldc p12,cr1,[sp],{0x26}
  push {r1,r2,r3,r5,lr}
  adds r3,#0xd
  str r7,[r1,#0x38]
  bvc 0x2c43f31a
  ldr r1,[r4,r5]
  ldr r6,[0x2c43f4b0]
  asrs r2,r4,#0x1e
