; FUN_1011dc0a @ 0x1011dc0a size=22
  adds r3,r1,#0x1
  iteet ne
  bic.ne.w r2,r1,r1, asr #0x1f
  mov.eq.w r2,#0xffffffff
  mov.eq.w r3,#0xffffffff
  asr.ne r3,r2,#0x1f
  b.w 0x1013cbaa
