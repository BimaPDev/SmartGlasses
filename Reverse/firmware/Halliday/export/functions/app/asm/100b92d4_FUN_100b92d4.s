; FUN_100b92d4 @ 0x100b92d4 size=24
  ldr r3,[0x100b92ec]
  ldrd r1,r2,[r3,#0x8]
  subs r2,r2,r1
  str r2,[r0,#0x0]
  ldrd r0,r3,[r3,#0xc]
  subs r0,r0,r3
  clz r0,r0
  lsrs r0,r0,#0x5
  bx lr
