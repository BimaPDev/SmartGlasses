; FUN_2c44cb32 @ 0x2c44cb32 size=22
  push {r0,r1,r2,r3,r4,r5,r6,r7,lr}
  adds r3,#0xa8
  pop {r3,r5,r7}
  subs r2,#0xdf
  str r2,[r0,#0x50]
  subs r7,r0,#0x4
  cdp2 p14,0xc,cr11,cr4,cr15,0x5
  cmp r12,lr
  ldr r1,[r7,#0x64]
  udf #0x17
