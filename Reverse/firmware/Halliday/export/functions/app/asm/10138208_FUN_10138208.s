; FUN_10138208 @ 0x10138208 size=48
  mov r3,r0
  push {lr}
  add.w r2,r0,#0x58
  ldaex r1,[r2]
  orr r12,r1,#0x40
  stlex lr,r12,[r2]
  cmp.w lr,#0x0
  bne 0x10138210
  lsls r2,r1,#0x19
  bmi 0x10138234
  ldr r3,[r3,#0x4]
  cbz r3,0x10138234
  ldr r3,[r3,#0x0]
  cbz r3,0x10138234
  pop.w lr
  bx r3
  pop.w pc
