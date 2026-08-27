; FUN_2c4893e6 @ 0x2c4893e6 size=30
  push {r4,r5,r6,r7,lr}
  mov r5,r0
  sub sp,#0xc
  cmp r3,#0x17
  bhi 0x2c489470
  tbb [pc,r3]
  ldr r0,[0x2c4894b0]
  movs r1,#0x78
  ldr r3,[0x2c4894a8]
  ldr r2,[0x2c4894ac]
  str r0,[sp,#0x0]
  movs r0,#0x4
  bl 0x2c673d88
