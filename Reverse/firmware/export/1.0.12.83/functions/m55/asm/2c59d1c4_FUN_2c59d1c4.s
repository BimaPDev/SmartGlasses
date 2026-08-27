; FUN_2c59d1c4 @ 0x2c59d1c4 size=76
  push {r4,r5,r6,lr}
  mov r5,r12
  ldrb.w r0,[r1,r12]
  lsl.w lr,r5,#0x1
  add.w r12,r12,#0x1
  lsrs r4,r0,#0x4
  and r0,r0,#0xf
  sxth.w r12,r12
  add.w r6,r4,#0x30
  adds r4,#0x57
  cmp r6,#0x39
  it hi
  strb.hi.w r4,[r2,r5,lsl #0x1]
  add.w r4,r0,#0x30
  it ls
  strb.ls.w r6,[r2,r5,lsl #0x1]
  adds r0,#0x57
  add.w r5,r2,lr
  cmp r4,#0x39
  it hi
  strb.hi r0,[r5,#0x1]
  mov lr,r5
  it ls
  strb.ls r4,[r5,#0x1]
  cmp r12,r3
  mov r5,r12
  blt 0x2c59d1c8
  pop {r4,r5,r6,pc}
