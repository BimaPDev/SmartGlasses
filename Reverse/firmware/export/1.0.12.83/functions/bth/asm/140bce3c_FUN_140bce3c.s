; FUN_140bce3c @ 0x140bce3c size=26
  push {r4,lr}
  ldr r4,[r0,#0xc]
  sub sp,#0x10
  str r4,[sp,#0x8]
  ldr r4,[r0,#0x8]
  str r4,[sp,#0x4]
  ldr r4,[r0,#0x4]
  str r4,[sp,#0x0]
  ldrd r0,r4,[r0,#0x10]
  blx r4
  add sp,#0x10
  pop {r4,pc}
