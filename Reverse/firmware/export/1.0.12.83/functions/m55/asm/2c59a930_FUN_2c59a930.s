; FUN_2c59a930 @ 0x2c59a930 size=36
  push {r4,lr}
  ldr r4,[0x2c59a954]
  sub sp,#0x10
  ldr r2,[0x2c59a958]
  str r4,[sp,#0x4]
  ldr r4,[r0,#0x14]
  mov r1,r2
  ldr r3,[0x2c59a95c]
  str r4,[sp,#0xc]
  ldr r4,[r0,#0x10]
  ldr r0,[r0,#0x2c]
  str r4,[sp,#0x8]
  str r0,[sp,#0x0]
  ldr r0,[0x2c59a960]
  bl 0x2c643084
  add sp,#0x10
  pop {r4,pc}
