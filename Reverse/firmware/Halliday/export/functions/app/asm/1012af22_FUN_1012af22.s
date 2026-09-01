; FUN_1012af22 @ 0x1012af22 size=66
  lsls r3,r0,#0x1e
  push {r4,lr}
  uxth r4,r1
  itt ne
  strh.ne r1,[r0],#0x2
  add.ne.w r2,r2,#0xffffffff
  add.w r3,r4,r4, lsl #0x10
  cmp r2,#0x10
  mov r1,r0
  add.w r0,r0,#0x20
  bhi 0x1012af4a
  add.w r2,r1,r2, lsl #0x1
  cmp r1,r2
  bne 0x1012af5e
  pop {r4,pc}
  strd r3,r3,[r0,#-0x20]
  strd r3,r3,[r0,#-0x18]
  strd r3,r3,[r0,#-0x10]
  strd r3,r3,[r0,#-0x8]
  subs r2,#0x10
  b 0x1012af36
  strh r4,[r1],#0x2
  b 0x1012af44
