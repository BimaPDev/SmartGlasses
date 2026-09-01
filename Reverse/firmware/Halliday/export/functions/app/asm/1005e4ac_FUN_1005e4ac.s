; FUN_1005e4ac @ 0x1005e4ac size=44
  push {r0,r1,r4,lr}
  movs r3,#0x32
  mov r4,r0
  mov.w r2,#0x196
  ldr r1,[0x1005e4d8]
  ldr r0,[0x1005e4dc]
  bl 0x10119dc2
  movs r2,#0x32
  movs r3,#0x0
  add.w r0,r4,#0x28
  strd r2,r3,[sp,#0x0]
  movs r2,#0x0
  movs r3,#0x0
  bl 0x10115a38
  movs r0,#0x0
  add sp,#0x8
  pop {r4,pc}
