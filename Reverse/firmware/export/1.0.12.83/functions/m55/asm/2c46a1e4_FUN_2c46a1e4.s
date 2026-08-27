; FUN_2c46a1e4 @ 0x2c46a1e4 size=40
  push {r0,r1,r2,r3}
  push {lr}
  sub sp,#0xc
  ldr r3,[0x2c46a208]
  add r1,sp,#0x10
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr.w r0,[r1],#0x4
  str r1,[sp,#0x0]
  bl 0x2c66ddf4
  movs r0,#0x1
  bl 0x2c6685ec
  nop
  subs r0,r5,#0x3
  movs r0,#0x0
