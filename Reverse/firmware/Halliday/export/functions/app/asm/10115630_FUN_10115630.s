; FUN_10115630 @ 0x10115630 size=30
  push {r0,r1,r4,r6,r7,lr}
  ldrd r6,r7,[sp,#0x18]
  ldr r4,[sp,#0x20]
  strd r6,r7,[sp,#0x0]
  bl 0x10114f68
  cbz r4,0x1011564a
  ldr r3,[0x10115650]
  ldr r3,[r3,#0x8]
  ldr r3,[r3,#0x14]
  str r3,[r4,#0x0]
  add sp,#0x8
  pop {r4,r6,r7,pc}
