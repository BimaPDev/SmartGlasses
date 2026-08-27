; FUN_2c506688 @ 0x2c506688 size=40
  push {r4,r5,lr}
  mov r4,r0
  sub sp,#0xc
  mov r0,r1
  bl 0x2c602618
  sub.w r3,r0,#0xd2
  cmp r3,#0x11
  bhi 0x2c5066b2
  tbb [pc,r3]
  ldr r4,[0x2c50670c]
  movs r2,#0xdc
  ldr r3,[0x2c506710]
  movs r0,#0x4
  ldr r1,[0x2c506714]
  str r4,[sp,#0x0]
  bl 0x2c62c82c
