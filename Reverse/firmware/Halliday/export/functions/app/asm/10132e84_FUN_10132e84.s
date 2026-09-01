; FUN_10132e84 @ 0x10132e84 size=38
  mov r3,r1
  push {r4}
  and r4,r1,#0x1f
  movs r1,#0x1
  lsrs r3,r3,#0x5
  lsls r1,r4
  add.w r0,r0,r3, lsl #0x2
  cbz r2,0x10132ea0
  pop.w r4
  b.w 0x10132e3c
  mvns r1,r1
  pop.w r4
  b.w 0x10132e56
