; FUN_100596dc @ 0x100596dc size=28
  cbz r1,0x100596f6
  cmp r1,#0x0
  eor.w r2,r1,r1, asr #0x1f
  sub.w r2,r2,r1, asr #0x1f
  ite gt
  mov.gt r3,#0x43
  mov.le r3,#0x44
  ldr r1,[0x100596f8]
  ldr r0,[r0,#0x14]
  b.w 0x1011ae5e
  bx lr
