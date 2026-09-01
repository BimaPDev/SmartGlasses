; FUN_10126ad8 @ 0x10126ad8 size=54
  push {r4,r5,r6,r7}
  movs r5,#0x0
  ldrh r6,[r0,#0x2a]
  ubfx r6,r6,#0x4,#0x6
  cmp r6,r5
  bhi 0x10126aec
  movs r0,#0x0
  pop {r4,r5,r6,r7}
  bx lr
  ldr r4,[r0,#0xc]
  add.w r4,r4,r5, lsl #0x3
  ldrb r7,[r4,#0x7]
  lsls r7,r7,#0x1f
  bpl 0x10126b0a
  ldr r7,[r4,#0x4]
  ubfx r7,r7,#0x0,#0x18
  cmp r7,r3
  bne 0x10126b0a
  ldr r0,[r4,#0x0]
  pop {r4,r5,r6,r7}
  b.w 0x1012b1e4
  adds r5,#0x1
  b 0x10126ae2
