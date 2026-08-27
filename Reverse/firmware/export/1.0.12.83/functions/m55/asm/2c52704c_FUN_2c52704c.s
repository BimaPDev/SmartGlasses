; FUN_2c52704c @ 0x2c52704c size=34
  push {r4,r5,lr}
  mov r5,r2
  sub sp,#0xc
  ldr r4,[0x2c527070]
  mov r2,r1
  movs r3,#0x0
  mov r1,r0
  movs r0,#0x2
  strd r4,r5,[sp,#0x0]
  bl 0x2c5dc53c
  add sp,#0xc
  pop.w {r4,r5,lr}
  b.w 0x2c5dc5e0
