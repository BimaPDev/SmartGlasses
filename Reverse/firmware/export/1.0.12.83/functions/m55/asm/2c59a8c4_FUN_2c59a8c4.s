; FUN_2c59a8c4 @ 0x2c59a8c4 size=36
  push {r4,lr}
  ldr r4,[0x2c59a8e8]
  sub sp,#0x10
  ldr r2,[0x2c59a8ec]
  str r4,[sp,#0x4]
  ldr r4,[r0,#0x8]
  mov r1,r2
  ldr r3,[0x2c59a8f0]
  str r4,[sp,#0xc]
  ldr r4,[r0,#0x4]
  ldr r0,[r0,#0xc]
  str r4,[sp,#0x8]
  str r0,[sp,#0x0]
  ldr r0,[0x2c59a8f4]
  bl 0x2c643084
  add sp,#0x10
  pop {r4,pc}
