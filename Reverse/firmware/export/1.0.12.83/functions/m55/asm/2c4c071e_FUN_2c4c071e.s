; FUN_2c4c071e @ 0x2c4c071e size=36
  push {r4,r5,lr}
  mov r4,r1
  sub sp,#0xc
  mov r5,r0
  ldr r1,[0x2c4c08cc]
  cmp r3,#0x16
  bhi 0x2c4c0748
  tbb [pc,r3]
  ldr r2,[0x2c4c08d0]
  movs r0,#0x4
  ldr r3,[0x2c4c08d4]
  strd r2,r1,[sp,#0x0]
  ldr r2,[0x2c4c08d8]
  movs r1,#0xed
  bl 0x2c673d88
