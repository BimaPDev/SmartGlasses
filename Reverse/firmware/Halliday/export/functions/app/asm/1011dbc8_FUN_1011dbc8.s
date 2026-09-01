; FUN_1011dbc8 @ 0x1011dbc8 size=22
  adds r3,r0,#0x1
  iteet ne
  bic.ne.w r0,r0,r0, asr #0x1f
  mov.eq.w r0,#0xffffffff
  mov.eq.w r1,#0xffffffff
  asr.ne r1,r0,#0x1f
  b.w 0x101153fc
