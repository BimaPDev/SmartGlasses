; FUN_10121ab6 @ 0x10121ab6 size=94
  push {r4,r5,r6,r7,lr}
  ldr r4,[r0,#0xc]
  movs r0,#0x0
  add.w r6,r4,#0x1da0
  adds r6,#0x16
  mov r5,r6
  mov r3,r0
  mov r2,r0
  addw r1,r3,#0x76c
  add.w r1,r4,r1, lsl #0x2
  ldrh r7,[r1,#0x6]
  ldrh.w r1,[r6,r2,lsl #0x2]
  cmp r7,r1
  it cc
  mov.cc r3,r2
  adds r2,#0x1
  cmp r2,#0x40
  bne 0x10121ac8
  addw r2,r3,#0x76c
  add.w r2,r4,r2, lsl #0x2
  ldrh r1,[r2,#0x6]
  cbz r1,0x10121b08
  ldr r2,[r2,#0x4]
  ldrh.w r7,[r5,#-0x2]
  ldrh r1,[r5,#0x0]
  addw r3,r3,#0x76d
  str.w r2,[r5,#-0x2]
  add.w r2,r4,r3, lsl #0x2
  strh.w r7,[r4,r3,lsl #0x2]
  strh r1,[r2,#0x2]
  adds r0,#0x1
  cmp r0,#0x40
  add.w r5,r5,#0x4
  bne 0x10121ac4
  pop {r4,r5,r6,r7,pc}
