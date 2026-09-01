; FUN_1011f06a @ 0x1011f06a size=36
  push {r4,lr}
  add.w r3,r0,#0x64
  add.w r2,r1,#0x24
  ldr.w r4,[r1],#0x4
  cmp r1,r2
  str.w r4,[r3],#0x4
  bne 0x1011f074
  ldrb.w r3,[r0,#0x88]
  orr r3,r3,#0x2
  strb.w r3,[r0,#0x88]
  pop {r4,pc}
