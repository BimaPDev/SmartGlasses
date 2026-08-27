; FUN_2c4f4b08 @ 0x2c4f4b08 size=62
  cbz r2,0x2c4f4b44
  subs r2,#0x1
  add.w r12,r1,#0xffffffff
  push {r4}
  add r1,r2
  ldr r4,[0x2c4f4b48]
  ldrb.w r3,[r12,#0x1]!
  eor.w r2,r3,r0
  cmp r1,r12
  and r2,r2,#0xf
  ldr.w r2,[r4,r2,lsl #0x2]
  eor.w r0,r2,r0, lsr #0x4
  eor.w r3,r0,r3, lsr #0x4
  and r3,r3,#0xf
  ldr.w r3,[r4,r3,lsl #0x2]
  eor.w r0,r3,r0, lsr #0x4
  bne 0x2c4f4b16
  pop.w r4
  bx lr
  bx lr
