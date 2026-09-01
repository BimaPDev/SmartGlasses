; FUN_1013309a @ 0x1013309a size=64
  ldrh r2,[r0,#0x0]
  ldrh r3,[r0,#0x2]
  push {r4,lr}
  cmp r2,r3
  bhi 0x101330d6
  cmp r2,#0x5
  bls 0x101330d6
  cmp.w r3,#0xc80
  bhi 0x101330d6
  ldrh r4,[r0,#0x4]
  cmp.w r4,#0x1f4
  bcs 0x101330d6
  ldrh r1,[r0,#0x6]
  movw r0,#0xc76
  sub.w r2,r1,#0xa
  uxth r2,r2
  cmp r2,r0
  bhi 0x101330d6
  mla r3,r4,r3,r3
  cmp.w r3,r1, lsl #0x2
  ite cc
  mov.cc r0,#0x1
  mov.cs r0,#0x0
  pop {r4,pc}
  movs r0,#0x0
  b 0x101330d4
