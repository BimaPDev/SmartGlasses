; FUN_1011acfe @ 0x1011acfe size=30
  push {r4,lr}
  ldrb r4,[r0,#0xc]
  ldrh r3,[r0,#0xa]
  add r2,r4
  add r1,r4
  udiv r0,r2,r3
  udiv r4,r1,r3
  mls r0,r3,r0,r2
  mls r1,r3,r4,r1
  subs r0,r0,r1
  pop {r4,pc}
