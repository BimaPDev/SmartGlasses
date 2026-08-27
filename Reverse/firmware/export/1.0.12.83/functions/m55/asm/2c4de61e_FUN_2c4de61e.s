; FUN_2c4de61e @ 0x2c4de61e size=34
  push {r4,r5,r6,r7,lr}
  asrs r6,r3,#0x1f
  ldrsb.w r7,[r1,#0x1]!
  cbz r7,0x2c4de63a
  mov r4,r7
  asrs r5,r7,#0x1f
  orrs.w r5,r4,sp, lsl #0x8
  adds r2,#0x8
  orrs r3,r4
  orrs r6,r5
  cmp r2,#0x40
  bne 0x2c4de622
  strd r3,r6,[r0,#0x8]
  pop {r4,r5,r6,r7,pc}
