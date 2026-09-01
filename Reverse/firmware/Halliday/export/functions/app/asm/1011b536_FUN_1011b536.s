; FUN_1011b536 @ 0x1011b536 size=42
  push {r0,r1,r2,lr}
  strd r2,r1,[sp,#0x0]
  bl 0x1005b8b8
  cbz r0,0x1011b556
  ldr r3,[r0,#0x18]
  cbz r3,0x1011b556
  ldr r3,[r3,#0x10]
  cbz r3,0x1011b556
  ldrd r2,r1,[sp,#0x0]
  add sp,#0xc
  pop.w lr
  bx r3
  mvn r0,#0x15
  add sp,#0xc
  pop.w pc
