; FUN_2c66efe0 @ 0x2c66efe0 size=40
  push {r4,lr}
  sdiv r4,r1,r2
  cmp r1,#0x0
  mls r3,r2,r4,r1
  blt 0x2c66effc
  cmp r3,#0x0
  bge 0x2c66eff6
  adds r4,#0x1
  subs r3,r3,r2
  strd r4,r3,[r0,#0x0]
  pop {r4,pc}
  cmp r3,#0x0
  itt gt
  add.gt.w r4,r4,#0xffffffff
  add.gt r3,r3,r2
  b 0x2c66eff6
