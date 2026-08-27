; FUN_2c571de0 @ 0x2c571de0 size=22
  ldrd r2,r3,[r0,#0x10]
  str r1,[r0,#0x4]
  subs r3,r3,r2
  add.w r3,r1,r3, asr #0x2
  subs r3,#0x1
  sdiv r1,r3,r1
  str r1,[r0,#0x8]
  bx lr
