; FUN_1011a09e @ 0x1011a09e size=30
  push {r4,r5,r6,lr}
  ldrd r5,r4,[r0,#0x0]
  cmp r4,r5
  bcs 0x1011a0b8
  ldr r6,[r0,#0x10]
  bl 0x1011a076
  udiv r0,r0,r6
  subs r0,#0x1
  mla r4,r6,r0,r4
  subs r0,r4,r5
  pop {r4,r5,r6,pc}
