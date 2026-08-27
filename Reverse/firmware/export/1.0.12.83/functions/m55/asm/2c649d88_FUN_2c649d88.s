; FUN_2c649d88 @ 0x2c649d88 size=34
  push {lr}
  mov r2,r0
  sub sp,#0xc
  ldr r0,[0x2c649dac]
  str r2,[sp,#0x4]
  str r1,[sp,#0x0]
  bl 0x2c648600
  ldr r1,[0x2c649db0]
  ldr r0,[0x2c649db4]
  ldrd r3,r2,[sp,#0x0]
  add sp,#0xc
  pop.w lr
  b.w 0x2c648600
