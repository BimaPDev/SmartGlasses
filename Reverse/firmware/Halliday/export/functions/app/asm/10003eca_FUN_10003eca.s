; FUN_10003eca @ 0x10003eca size=98
  and.w r5,r12,r3, lsr #0x14
  teq.w r4,r12
  it eq
  teq.eq.w r5,r12
  beq.w 0x10003d52
  teq.w r4,r12
  bne 0x10003ef8
  orrs.w r4,r0,r1, lsl #0xc
  bne.w 0x10003d52
  teq.w r5,r12
  bne.w 0x10003d3c
  mov r0,r2
  mov r1,r3
  b 0x10003d52
  teq.w r5,r12
  bne 0x10003f0c
  orrs.w r5,r2,r3, lsl #0xc
  beq.w 0x10003d00
  mov r0,r2
  mov r1,r3
  b 0x10003d52
  orrs.w r6,r0,r1, lsl #0x1
  it ne
  orrs.ne.w r6,r2,r3, lsl #0x1
  bne.w 0x10003ca4
  orrs.w r4,r0,r1, lsl #0x1
  bne.w 0x10003d3c
  orrs.w r5,r2,r3, lsl #0x1
  bne.w 0x10003d00
  b 0x10003d52
