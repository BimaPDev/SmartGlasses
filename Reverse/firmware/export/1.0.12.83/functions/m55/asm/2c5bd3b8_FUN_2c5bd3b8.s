; FUN_2c5bd3b8 @ 0x2c5bd3b8 size=46
  push {r4,r5,lr}
  sub sp,#0x1c
  bl 0x2c5bc430
  mov r4,r0
  bl 0x2c5bc424
  mov r5,r0
  bl 0x2c5bc910
  ldr r3,[0x2c5bd424]
  ldr r1,[0x2c5bd428]
  movw r2,#0x1a3
  str r0,[sp,#0x10]
  movs r0,#0x4
  str r5,[sp,#0xc]
  str r4,[sp,#0x8]
  strd r1,r3,[sp,#0x0]
  ldr r1,[0x2c5bd42c]
  bl 0x2c62c82c
