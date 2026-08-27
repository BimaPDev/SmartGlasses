; FUN_140e3bc2 @ 0x140e3bc2 size=98
  and.w r5,r12,r3, lsr #0x14
  teq.w r4,r12
  it eq
  teq.eq.w r5,r12
  beq.w 0x140e3a4a
  teq.w r4,r12
  bne 0x140e3bf0
  orrs.w r4,r0,r1, lsl #0xc
  bne.w 0x140e3a4a
  teq.w r5,r12
  bne.w 0x140e3a34
  mov r0,r2
  mov r1,r3
  b 0x140e3a4a
  teq.w r5,r12
  bne 0x140e3c04
  orrs.w r5,r2,r3, lsl #0xc
  beq.w 0x140e39f8
  mov r0,r2
  mov r1,r3
  b 0x140e3a4a
  orrs.w r6,r0,r1, lsl #0x1
  it ne
  orrs.ne.w r6,r2,r3, lsl #0x1
  bne.w 0x140e399c
  orrs.w r4,r0,r1, lsl #0x1
  bne.w 0x140e3a34
  orrs.w r5,r2,r3, lsl #0x1
  bne.w 0x140e39f8
  b 0x140e3a4a
