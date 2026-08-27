; FUN_2c49666c @ 0x2c49666c size=44
  push {r4,lr}
  sub sp,#0x8
  mov r4,r0
  bl 0x2c490d3c
  cbnz r0,0x2c496684
  mov r0,r4
  add sp,#0x8
  pop.w {r4,lr}
  b.w 0x2c496438
  ldr r4,[0x2c49669c]
  movs r1,#0x9e
  ldr r0,[0x2c4966a0]
  ldr r3,[0x2c4966a4]
  ldr r2,[0x2c4966a8]
  strd r0,r4,[sp,#0x0]
  movs r0,#0x4
  bl 0x2c673d88
