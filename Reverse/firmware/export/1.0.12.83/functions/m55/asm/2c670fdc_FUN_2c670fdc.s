; FUN_2c670fdc @ 0x2c670fdc size=70
  subs r1,#0x1
  add.w r3,r2,#0x14
  asrs r1,r1,#0x5
  push {r4,r5,r6,lr}
  adds r1,#0x1
  ldr r4,[r2,#0x10]
  subs r5,r0,#0x4
  add.w r1,r0,r1, lsl #0x2
  add.w r4,r3,r4, lsl #0x2
  cmp r3,r4
  bcc 0x2c671012
  subs r3,r4,r2
  adds r2,#0x11
  subs r3,#0x11
  bic r3,r3,#0x3
  cmp r2,r4
  it hi
  mov.hi r3,#0x0
  add r0,r3
  movs r3,#0x0
  cmp r0,r1
  bcc 0x2c67101c
  pop {r4,r5,r6,pc}
  ldr.w r6,[r3],#0x4
  str.w r6,[r5,#0x4]!
  b 0x2c670ff4
  str.w r3,[r0],#0x4
  b 0x2c67100c
