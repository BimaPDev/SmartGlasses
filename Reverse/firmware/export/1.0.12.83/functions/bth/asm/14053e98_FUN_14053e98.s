; FUN_14053e98 @ 0x14053e98 size=60
  cbz r0,0x14053eca
  subs r0,#0x1
  uxtb r3,r0
  adds r0,r1,#0x4
  add.w r0,r0,r3, lsl #0x2
  b 0x14053eb6
  ldrb r3,[r2,#0x10]
  lsls r3,r3,#0x1f
  bmi 0x14053ed0
  adds r1,#0x4
  cmp r1,r0
  add.w r2,r2,#0x12
  beq 0x14053ecc
  ldrh r3,[r1,#0x0]
  cmp r3,#0x0
  beq 0x14053ea6
  ldrb r3,[r2,#0x11]
  ldrb.w r12,[r1,#0x2]
  bics.w r3,r3,r12
  beq 0x14053eac
  movs r0,#0x85
  bx lr
  movs r0,#0x0
  bx lr
  movs r0,#0x83
  bx lr
