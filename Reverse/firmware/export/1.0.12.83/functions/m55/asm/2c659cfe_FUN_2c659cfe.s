; FUN_2c659cfe @ 0x2c659cfe size=28
  push {r0,r1,r2,r4,r5,lr}
  ldr r5,[sp,#0x20]
  mov r0,r3
  mov r4,r2
  ldr r3,[r5,#0x0]
  strd r2,r3,[sp,#0x0]
  ldrd r2,r3,[sp,#0x18]
  bl 0x2c659c38
  str r4,[r5,#0x0]
  add sp,#0xc
  pop {r4,r5,pc}
