; FUN_2c449efe @ 0x2c449efe size=36
  push {r0,r3,r7,lr}
  subs r2,#0x9e
  ldr r5,[sp,#0x100]
  str r2,[r1,#0x48]
  blt 0x2c449e46
  ldrb r2,[r1,#0x5]
  adds r7,#0xc2
  lsls r7,r6,#0x17
  strb r7,[r5,r5]
  ldr r1,[0x2c44a2b0]
  ldrsh r6,[r2,r2]
  pop {r1,r2,r3,r6,pc}
  asrs r3,r4,#0xa
  lsls r1,r7,#0x12
  str r2,[r3,#0x8]
  asrs r3,r2,#0x12
  b.w 0x2b5336d8
