; FUN_10121a62 @ 0x10121a62 size=84
  push {r4,r5,r6,r7,lr}
  movs r3,#0x0
  movs r4,#0x3f
  ldr r1,[r0,#0xc]
  add.w r5,r1,#0x1da0
  add.w r6,r1,#0x1da0
  adds r5,#0x16
  adds r6,#0x14
  ldrh.w r7,[r6,r3,lsl #0x2]
  ldrh.w r0,[r5,r3,lsl #0x2]
  cmp r7,r2
  bne 0x10121a92
  cbz r0,0x10121ab2
  addw r3,r3,#0x76c
  add.w r3,r1,r3, lsl #0x2
  adds r0,#0x1
  strh r0,[r3,#0x6]
  pop {r4,r5,r6,r7,pc}
  cmp r0,#0x0
  it eq
  mov.eq r4,r3
  adds r3,#0x1
  cmp r3,#0x40
  bne 0x10121a76
  movw r3,#0x1db4
  add.w r1,r1,r4, lsl #0x2
  strh r2,[r1,r3]
  movw r3,#0x1db6
  movs r2,#0x1
  strh r2,[r1,r3]
  b 0x10121a90
  mov r4,r3
  b 0x10121a98
