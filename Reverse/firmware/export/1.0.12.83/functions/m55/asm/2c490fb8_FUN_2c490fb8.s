; FUN_2c490fb8 @ 0x2c490fb8 size=38
  push {r4,r5,r6,r7,lr}
  subs r6,r2,#0x0
  ldr r4,[0x2c491030]
  sub sp,#0x14
  ldr r1,[0x2c491034]
  ldr r3,[0x2c491038]
  it eq
  mov.eq r1,r4
  ldr r7,[0x2c49103c]
  mov r5,r0
  str r1,[sp,#0x8]
  movs r1,#0x7b
  ldr r2,[0x2c491040]
  strd r3,r0,[sp,#0x0]
  ldr r3,[0x2c491044]
  movs r0,#0x4
  bl 0x2c673d88
