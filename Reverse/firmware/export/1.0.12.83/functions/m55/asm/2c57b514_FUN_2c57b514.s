; FUN_2c57b514 @ 0x2c57b514 size=44
  push {r4,r5,r6,r7,lr}
  sub sp,#0x5c
  ldr r3,[0x2c57b694]
  mov r1,r0
  add r0,sp,#0x10
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x54]
  mov.w r3,#0x0
  bl 0x2c5570cc
  ldrsb.w r4,[sp,#0x40]
  ldr r0,[0x2c57b698]
  movs r2,#0xb6
  ldr r3,[0x2c57b69c]
  ldr r1,[0x2c57b6a0]
  strd r0,r4,[sp,#0x0]
  movs r0,#0x4
  bl 0x2c62c82c
