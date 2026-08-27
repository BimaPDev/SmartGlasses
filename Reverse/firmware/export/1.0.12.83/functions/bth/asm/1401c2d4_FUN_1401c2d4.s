; FUN_1401c2d4 @ 0x1401c2d4 size=32
  ldr r6,[sp,#0x1d4]
  add r4,r3
  ldr r3,[sp,#0x1d8]
  mul r3,r5,r3
  mul r5,r6,r5
  add.w r3,r5,r3, asr #0xf
  add r3,r4
  str.w r3,[r10,#0x7e4]
  ldrsh.w r5,[r0,#0x16]
  ldrsh.w r6,[r0,#0x36]
