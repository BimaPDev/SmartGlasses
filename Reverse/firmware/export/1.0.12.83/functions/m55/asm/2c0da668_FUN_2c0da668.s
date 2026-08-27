; FUN_2c0da668 @ 0x2c0da668 size=30
  push {r1,r5,r6,r7,lr}
  subs r7,#0x70
  cmp r3,#0x90
  subs r7,#0x70
  ldr r6,[sp,#0x3ac]
  subs r7,#0x6f
  lsrs r5,r6,#0x1f
  subs r7,#0x6f
  ldrb r6,[r5,#0x1a]
  subs r7,#0x6e
  cmn.w r9,sp, asr #0xd
  strb r6,[r6,r4]
  subs r7,#0x6d
  pop {r0,r1,r2,pc}
