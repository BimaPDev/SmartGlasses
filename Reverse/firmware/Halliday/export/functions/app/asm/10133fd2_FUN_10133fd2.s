; FUN_10133fd2 @ 0x10133fd2 size=30
  push {r4,lr}
  movs r4,#0x0
  str r4,[r1,#0x8]
  ldr r4,[r0,#0x58]
  add.w r3,r1,#0x8
  cbnz r4,0x10133fea
  strd r3,r3,[r0,#0x54]
  str r0,[r1,#0x0]
  str r2,[r1,#0xc]
  pop {r4,pc}
  str r3,[r4,#0x0]
  str r3,[r0,#0x58]
  b 0x10133fe4
